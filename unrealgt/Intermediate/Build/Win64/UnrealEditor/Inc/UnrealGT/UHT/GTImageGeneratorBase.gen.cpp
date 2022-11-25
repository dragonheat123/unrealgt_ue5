// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTImageGeneratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTImageGeneratorBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSceneCaptureComponent2D_NoRegister();
	UNREALGT_API UEnum* Z_Construct_UEnum_UnrealGT_EGTImageFileFormat();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTImageGeneratorBase::StaticRegisterNativesUGTImageGeneratorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTImageGeneratorBase);
	UClass* Z_Construct_UClass_UGTImageGeneratorBase_NoRegister()
	{
		return UGTImageGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UGTImageGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomResolution_MetaData[];
#endif
		static void NewProp_bRandomResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAntiAliasing_MetaData[];
#endif
		static void NewProp_bAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMotionBlur_MetaData[];
#endif
		static void NewProp_bMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[];
#endif
		static void NewProp_bWriteAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraStaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTImageGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTDataGeneratorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Image/GTImageGeneratorBase.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_SceneCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_SceneCaptureComponent = { "SceneCaptureComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, SceneCaptureComponent), Z_Construct_UClass_UGTSceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_SceneCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_SceneCaptureComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * The format the image will have, currently only .bmp and .png are supported.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "The format the image will have, currently only .bmp and .png are supported." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat = { "ImageFormat", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, ImageFormat), Z_Construct_UEnum_UnrealGT_EGTImageFileFormat, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat_MetaData)) }; // 4165377388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * The resolution the generated images will have.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "The resolution the generated images will have." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * If enabled will choose a random resolution between Resolution and ResolutionMax for each\n     * captured image. This is useful for generating Training data.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "If enabled will choose a random resolution between Resolution and ResolutionMax for each\ncaptured image. This is useful for generating Training data." },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution_SetBit(void* Obj)
	{
		((UGTImageGeneratorBase*)Obj)->bRandomResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution = { "bRandomResolution", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorBase), &Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ResolutionMax_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * The maximum Resolution to use if bRandomResolution is enabled.\n     */" },
		{ "EditCondition", "bRandomResolution" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "The maximum Resolution to use if bRandomResolution is enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ResolutionMax = { "ResolutionMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, ResolutionMax), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ResolutionMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ResolutionMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "DisplayName", "Field of View" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, FOVAngle), METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_FOVAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * Perform anti aliasing when an image is rendered.\n     * Highly recommended for basic images, but might cause issues if used with segmentation or\n     * depth generators.\n     *\n     * Temporal Anti-Aliasing might cause \"jittering\" if the generator is not moving.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "Perform anti aliasing when an image is rendered.\nHighly recommended for basic images, but might cause issues if used with segmentation or\ndepth generators.\n\nTemporal Anti-Aliasing might cause \"jittering\" if the generator is not moving." },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing_SetBit(void* Obj)
	{
		((UGTImageGeneratorBase*)Obj)->bAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing = { "bAntiAliasing", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorBase), &Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * Toggle motion blur\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
		{ "ToolTip", "Toggle motion blur" },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur_SetBit(void* Obj)
	{
		((UGTImageGeneratorBase*)Obj)->bMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur = { "bMotionBlur", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorBase), &Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
	{
		((UGTImageGeneratorBase*)Obj)->bWriteAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorBase), &Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_CameraStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_CameraStaticMeshComponent = { "CameraStaticMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorBase, CameraStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_CameraStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_CameraStaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTImageGeneratorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_SceneCaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bRandomResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_ResolutionMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_FOVAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_bWriteAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorBase_Statics::NewProp_CameraStaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTImageGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTImageGeneratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTImageGeneratorBase_Statics::ClassParams = {
		&UGTImageGeneratorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTImageGeneratorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTImageGeneratorBase()
	{
		if (!Z_Registration_Info_UClass_UGTImageGeneratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTImageGeneratorBase.OuterSingleton, Z_Construct_UClass_UGTImageGeneratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTImageGeneratorBase.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTImageGeneratorBase>()
	{
		return UGTImageGeneratorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTImageGeneratorBase);
	UGTImageGeneratorBase::~UGTImageGeneratorBase() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTImageGeneratorBase, UGTImageGeneratorBase::StaticClass, TEXT("UGTImageGeneratorBase"), &Z_Registration_Info_UClass_UGTImageGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTImageGeneratorBase), 3772390346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorBase_h_1529531074(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
