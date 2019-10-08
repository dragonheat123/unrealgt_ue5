// Fill out your copyright notice in the Description page of Project Settings.

#include "GTSceneCaptureComponent2D.h"

#include <Components/PrimitiveComponent.h>
#include <Engine/Engine.h>
#include <Engine/TextureRenderTarget2D.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <UObjectIterator.h>
#include "GTImageGeneratorBase.h"

UGTSceneCaptureComponent2D::UGTSceneCaptureComponent2D()
    : Super()
    , bColorAsFloat(false)
    , bUseDisplayGamma(false)
    , TargetGamma(0.f)
    , Resolution(512, 512)
    , SRGB(false)
    , CompressionSettings(TextureCompressionSettings::TC_Default)
{
#if WITH_EDITORONLY_DATA
    bVisualizeComponent = false;
#endif
    bCaptureEveryFrame = false;
    CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
    // TODO does this have an heavy impact on perforamnce?
    bAlwaysPersistRenderingState = true;
    bCaptureOnMovement = false;

    SegmentationPostProcessMaterial =
        LoadObject<UMaterial>(nullptr, TEXT("/UnrealGT/PP_Segmentation.PP_Segmentation"), nullptr, LOAD_None, nullptr);

    SegmentationPostProcessMaterialClose =
        LoadObject<UMaterialInstance>(nullptr, TEXT("/UnrealGT/PP_Segmentation_Close.PP_Segmentation_Close"), nullptr, LOAD_None, nullptr);

    DepthPlannerPostProcessMaterial =
        LoadObject<UMaterial>(nullptr, TEXT("/UnrealGT/PP_DepthPlanar.PP_DepthPlanar"), nullptr, LOAD_None, nullptr);

    DepthPerspectivePostProcessMaterial =
        LoadObject<UMaterial>(nullptr, TEXT("/UnrealGT/PP_DepthPerspective.PP_DepthPerspective"), nullptr, LOAD_None, nullptr);

    WorldNormalMaterial =
            LoadObject<UMaterial>(nullptr, TEXT("/UnrealGT/PP_WorldNormal.PP_WorldNormal"), nullptr, LOAD_None, nullptr);
}

bool UGTSceneCaptureComponent2D::GetPerspectiveMatrix(FMatrix& OutMatrix) const {
    FIntPoint CaptureSize;
    if (TextureTarget)
    {
        CaptureSize = FIntPoint(TextureTarget->GetSurfaceWidth(), TextureTarget->GetSurfaceHeight());
    }
    else
    {
        CaptureSize = Resolution;
    }
    const float FOV = FOVAngle * (float)PI / 360.0f;

    float XAxisMultiplier;
    float YAxisMultiplier;

    if (CaptureSize.X > CaptureSize.Y)
    {
        // if the viewport is wider than it is tall
        XAxisMultiplier = 1.0f;
        YAxisMultiplier = CaptureSize.X / (float)CaptureSize.Y;
    }
    else
    {
        // if the viewport is taller than it is wide
        XAxisMultiplier = CaptureSize.Y / (float)CaptureSize.X;
        YAxisMultiplier = 1.0f;
    }
    OutMatrix = FPerspectiveMatrix(FOV, FOV, XAxisMultiplier, YAxisMultiplier, GNearClippingPlane, GNearClippingPlane);;
    return true;
}

bool UGTSceneCaptureComponent2D::ProjectToPixelLocation(const FVector& Location, FVector2D& OutPixelLocation) const
{
    FIntPoint CaptureSize;
    if (TextureTarget)
    {
        CaptureSize = FIntPoint(TextureTarget->GetSurfaceWidth(), TextureTarget->GetSurfaceHeight());
    }
    else
    {
        CaptureSize = Resolution;
    }

    const FTransform& Transform = GetComponentToWorld();
    FMatrix ViewMatrix = Transform.ToInverseMatrixWithScale();
    FVector ViewLocation = Transform.GetTranslation();

    // swap axis st. x=z,y=x,z=y (unreal coordinate space) so that z is up
    ViewMatrix = ViewMatrix * FMatrix(FPlane(0, 0, 1, 0), FPlane(1, 0, 0, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));

    const float FOV = FOVAngle * (float)PI / 360.0f;

    float XAxisMultiplier;
    float YAxisMultiplier;

    if (CaptureSize.X > CaptureSize.Y)
    {
        // if the viewport is wider than it is tall
        XAxisMultiplier = 1.0f;
        YAxisMultiplier = CaptureSize.X / (float)CaptureSize.Y;
    }
    else
    {
        // if the viewport is taller than it is wide
        XAxisMultiplier = CaptureSize.Y / (float)CaptureSize.X;
        YAxisMultiplier = 1.0f;
    }

    FMatrix ProjectionMatrix =
        FReversedZPerspectiveMatrix(FOV, FOV, XAxisMultiplier, YAxisMultiplier, GNearClippingPlane, GNearClippingPlane);

    FMatrix ViewProjectionMatrix = ViewMatrix * ProjectionMatrix;

    FVector4 ScreenPoint = ViewProjectionMatrix.TransformFVector4(FVector4(Location, 1));

    if (ScreenPoint.W > 0.0f)
    {
        float InvW = 1.0f / ScreenPoint.W;
        float Y = (GProjectionSignY > 0.0f) ? ScreenPoint.Y : 1.0f - ScreenPoint.Y;
        FIntRect ViewRect = FIntRect(0, 0, CaptureSize.X, CaptureSize.Y);
        OutPixelLocation = FVector2D(
            FMath::Clamp(ViewRect.Min.X + (0.5f + ScreenPoint.X * 0.5f * InvW) * ViewRect.Width(), 0.f, (float)ViewRect.Width() - 1),
            FMath::Clamp(ViewRect.Min.Y + (0.5f - Y * 0.5f * InvW) * ViewRect.Height(), 0.f, (float)ViewRect.Height() - 1));

        return true;
    }
    return false;
}

FVector2D UGTSceneCaptureComponent2D::NormalizePixelLocation(const FVector2D& PixelLocation) const
{
    FIntPoint CaptureSize(TextureTarget->GetSurfaceWidth(), TextureTarget->GetSurfaceHeight());

    return FVector2D(FMath::Clamp(PixelLocation.X / CaptureSize.X, 0.f, 1.f), FMath::Clamp(PixelLocation.Y / CaptureSize.Y, 0.f, 1.f));
}

void UGTSceneCaptureComponent2D::CaptureImage(FGTImage& OutImage)
{
    UpdateTextureTarget();

    CaptureScene();

    int Width = TextureTarget->SizeX;

    int Height = TextureTarget->SizeY;

    OutImage.SetSize(Width, Height);

    FTextureRenderTargetResource* RenderTargetResource = TextureTarget->GameThread_GetRenderTargetResource();

    FReadSurfaceDataFlags ReadSurfaceDataFlags(RCM_UNorm);
    ReadSurfaceDataFlags.SetLinearToGamma(true);

    if (bColorAsFloat)
    {
        TArray<FFloat16Color> FloatPixels;
        FloatPixels.Reserve(Width * Height);
        RenderTargetResource->ReadFloat16Pixels(FloatPixels);
        FGTImage::FromFloat16RChannel(FloatPixels, Width, Height, OutImage);
    }
    else
    {
        RenderTargetResource->ReadPixels(OutImage.Pixels, ReadSurfaceDataFlags);
    }
}

UTexture2D* UGTSceneCaptureComponent2D::TextureFromImage(const FGTImage& Image, bool bIsLookupTable)
{
#if PLATFORM_LITTLE_ENDIAN
    UTexture2D* OutTexture = UTexture2D::CreateTransient(Image.Width, Image.Height, EPixelFormat::PF_B8G8R8A8);
#else
    OutTexture = UTexture2D::CreateTransient(Image.Width, Image.Height, EPixelFormat::PF_R8G8B8A8);
#endif

    OutTexture->SRGB = false;

#if WITH_EDITORONLY_DATA
    OutTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif

    if (bIsLookupTable)
    {
        OutTexture->LODGroup = TextureGroup::TEXTUREGROUP_ColorLookupTable;
    }

    FTexture2DMipMap& Mip = OutTexture->PlatformData->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(Data, Image.Pixels.GetData(), Image.Width * Image.Height * sizeof(uint8) * 4);
    Mip.BulkData.Unlock();
    OutTexture->UpdateResource();

    return OutTexture;
}

void UGTSceneCaptureComponent2D::SetupSegmentationPostProccess(const TMap<FGTObjectFilter, FColor>& ComponentFilterToColor,
                                                               bool bColorEachComponentDifferent,
                                                               bool bShouldApplyCloseMorph)
{
    int ArraySize = 256;
    ColorArray.Empty(ArraySize);
    ColorArray.Reserve(ArraySize);
    // First item is black
    ColorArray.Push(FColor(0, 0, 0, 255));

    TMap<FGTObjectFilter, int> ComponentFilterToColorID;
    TMap<AActor*, int> ActorToColorID;

    int ColorID = 1;

    for (TObjectIterator<UPrimitiveComponent> Itr; Itr; ++Itr)
    {
        UPrimitiveComponent* PrimitiveComponent = *Itr;
        // TODO break once we hit stencil limit; (255)
        if (PrimitiveComponent->GetWorld() == GetWorld())
        {
            if (bColorEachComponentDifferent && ColorID == 255)
            {
                ColorID = 1;
            }

            for (const auto& FilterColorPair : ComponentFilterToColor)
            {
                if (FilterColorPair.Key.MatchesComponent(PrimitiveComponent))
                {
                    int ComponentColorID;
                    if (bColorEachComponentDifferent)
                    {
                        // TODO readd  to make all components of actor same color
                        // and add option
                        //if (PrimitiveComponent->GetOwner() && ActorToColorID.Contains(PrimitiveComponent->GetOwner()))
                        //{
                        //    ComponentColorID = ActorToColorID[PrimitiveComponent->GetOwner()];
                        //}
                        //else
                        //{
                        ComponentColorID = ColorID;
                        ActorToColorID.Add(PrimitiveComponent->GetOwner(), ComponentColorID);
                        ColorArray.Push(
                            FLinearColor((float)ComponentColorID / (float)255 * 360.f, 0.99f, 0.99f).HSVToLinearRGB().ToFColor(false));
                        ColorID++;
                        //}
                    }
                    else if (ComponentFilterToColorID.Contains(FilterColorPair.Key))
                    {
                        ComponentColorID = ComponentFilterToColorID[FilterColorPair.Key];
                    }
                    else
                    {
                        ComponentColorID = ColorID;
                        ComponentFilterToColorID.Add(FilterColorPair.Key, ComponentColorID);
                        ColorArray.Push(FilterColorPair.Value);
                        ColorID++;
                    }
                    PrimitiveComponent->SetRenderCustomDepth(true);
                    PrimitiveComponent->SetCustomDepthStencilValue(ComponentColorID);
                    // TODO right now we choose the first filter that matches tmap order is random so their should probably be a way to
                    // prioritize
                    break;
                }
                else
                {
                    PrimitiveComponent->SetRenderCustomDepth(true);
                    PrimitiveComponent->SetCustomDepthStencilValue(0);
                }
            }
        }
    }

    for (int I = ColorID; I < ArraySize; I++)
    {
        ColorArray.Add(FColor::Black);
    }

    int TextureSize = ArraySize * 3;
    TArray<FColor> TextureColors;
    TextureColors.Reserve(TextureSize);
    for (FColor Color : ColorArray)
    {
        TextureColors.Push(Color);
        TextureColors.Push(Color);
        TextureColors.Push(Color);
    }

    FGTImage ColorMapImage(TextureSize, 1);
    ColorMapImage.Pixels = TextureColors;
    ColorMap = TextureFromImage(ColorMapImage, true);

    if (bShouldApplyCloseMorph)
    {
        SegmentationPostProcessMaterialInstance = UMaterialInstanceDynamic::Create(SegmentationPostProcessMaterialClose, nullptr);
    }
    else
    {
        SegmentationPostProcessMaterialInstance = UMaterialInstanceDynamic::Create(SegmentationPostProcessMaterial, nullptr);
    }

    SegmentationPostProcessMaterialInstance->SetTextureParameterValue(FName(TEXT("ColorMap")), ColorMap);
    SegmentationPostProcessMaterialInstance->SetScalarParameterValue(FName(TEXT("MapSize")), TextureSize);
    SegmentationPostProcessMaterialInstance->SetScalarParameterValue(FName(TEXT("PixelsPerColor")), 3.f);

    // TODO clear other blendables?
    AddOrUpdateBlendable(SegmentationPostProcessMaterialInstance, 1.f);
}

void UGTSceneCaptureComponent2D::SetupSegmentationPostProccess(const TArray<FGTObjectFilter>& ComponentFilters,                  
                                                               bool bShouldApplyCloseMorph)
{
    TMap<FGTObjectFilter, FColor> ComponentFilterToColor;
    ComponentFilterToColor.Reserve(ComponentFilters.Num());

    for (const FGTObjectFilter& ComponentFilter : ComponentFilters)
    {
        ComponentFilterToColor.Add(ComponentFilter, FColor::Black);
    }

    SetupSegmentationPostProccess(ComponentFilterToColor, true, bShouldApplyCloseMorph);
}

TArray<FColor> UGTSceneCaptureComponent2D::GetSegmentColorsUsedForActor(AActor* Actor)
{
    TArray<FColor> OutArray;
    TInlineComponentArray<UPrimitiveComponent*> PrimComponents;
    Actor->GetComponents(PrimComponents);
    for (UPrimitiveComponent* PrimComponent : PrimComponents)
    {
        if (PrimComponent->bRenderCustomDepth && PrimComponent->CustomDepthStencilValue != 0)
        {
            OutArray.Push(ColorArray[PrimComponent->CustomDepthStencilValue]);
        }
    }
    return OutArray;
}

void UGTSceneCaptureComponent2D::SetupDepthPostProccess(float MaxZ, bool bShouldUsePerspectiveDepth)
{
    if (bShouldUsePerspectiveDepth)
    {
        DepthPerspectivePostProcessMaterialInstance = UMaterialInstanceDynamic::Create(DepthPerspectivePostProcessMaterial, nullptr);
        DepthPerspectivePostProcessMaterialInstance->SetScalarParameterValue(FName(TEXT("MaxZ")), MaxZ);

        AddOrUpdateBlendable(DepthPerspectivePostProcessMaterialInstance, 1.f);
    }
    else
    {
        DepthPlannerPostProcessMaterialInstance = UMaterialInstanceDynamic::Create(DepthPlannerPostProcessMaterial , nullptr);
        DepthPlannerPostProcessMaterialInstance->SetScalarParameterValue(FName(TEXT("MaxZ")), MaxZ);

        AddOrUpdateBlendable(DepthPlannerPostProcessMaterialInstance, 1.f);
    }
}

void UGTSceneCaptureComponent2D::SetupWorldNormalPostProccess()
{
    AddOrUpdateBlendable(WorldNormalMaterial, 1.f);
}

void UGTSceneCaptureComponent2D::SetResolution(const FIntPoint& NewResolution)
{
    Resolution = NewResolution;
}

void UGTSceneCaptureComponent2D::UpdateTextureTarget()
{
    if (!TextureTarget)
    {
        return;
    }

    bool bUpdateResource = false;

    if (SRGB != TextureTarget->SRGB)
    {
        TextureTarget->SRGB = SRGB;
        bUpdateResource = true;
    }

    if (CompressionSettings != TextureTarget->CompressionSettings)
    {
        TextureTarget->CompressionSettings = CompressionSettings;
        bUpdateResource = true;
    }

    if (Resolution.X != TextureTarget->SizeX || Resolution.Y != TextureTarget->SizeY)
    {
        TextureTarget->SizeX = Resolution.X;
        TextureTarget->SizeY = Resolution.Y;
        bUpdateResource = true;
    }

    if (bColorAsFloat && TextureTarget->RenderTargetFormat != ETextureRenderTargetFormat::RTF_RGBA16f)
    {
        TextureTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA16f;
        TextureTarget->OverrideFormat = GetPixelFormatFromRenderTargetFormat(ETextureRenderTargetFormat::RTF_RGBA8);
        bUpdateResource = true;
    }

    if (!bColorAsFloat && TextureTarget->RenderTargetFormat != ETextureRenderTargetFormat::RTF_RGBA8)
    {
        TextureTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
        TextureTarget->OverrideFormat = GetPixelFormatFromRenderTargetFormat(ETextureRenderTargetFormat::RTF_RGBA8);
        bUpdateResource = true;
    }

    if (bUseDisplayGamma && TextureTarget->TargetGamma != GEngine->GetDisplayGamma())
    {
        TextureTarget->TargetGamma = GEngine->GetDisplayGamma();
        bUpdateResource = true;
    }
    else if (!bUseDisplayGamma && TextureTarget->TargetGamma != TargetGamma)
    {
        TextureTarget->TargetGamma = TargetGamma;
        bUpdateResource = true;
    }

    if (bUpdateResource)
    {
        TextureTarget->UpdateResource();
    }
}

void UGTSceneCaptureComponent2D::BeginPlay()
{
    Super::BeginPlay();

    TextureTarget = TextureTarget = NewObject<UTextureRenderTarget2D>();
    TextureTarget->bAutoGenerateMips = false;
    TextureTarget->CompressionSettings = CompressionSettings;
    TextureTarget->SRGB = SRGB;
    TextureTarget->AddressX = TextureAddress::TA_Clamp;
    TextureTarget->AddressY = TextureAddress::TA_Clamp;

    if (bColorAsFloat)
    {
        // TODO since we only use this for depth maybe just RTF_R16f to increase performance?
        TextureTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA16f;
    }
    else
    {
        TextureTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
    }

    if (bUseDisplayGamma)
    {
        TextureTarget->TargetGamma = GEngine->GetDisplayGamma();
    }
    else
    {
        TextureTarget->TargetGamma = TargetGamma;
    }

    TextureTarget->InitCustomFormat(
        Resolution.X, Resolution.Y, GetPixelFormatFromRenderTargetFormat(TextureTarget->RenderTargetFormat), true);
}