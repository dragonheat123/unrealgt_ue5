// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTImageGeneratorComponent.h"
#include "Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTImageGeneratorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTImageGeneratorComponent::StaticRegisterNativesUGTImageGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTImageGeneratorComponent);
	UClass* Z_Construct_UClass_UGTImageGeneratorComponent_NoRegister()
	{
		return UGTImageGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTImageGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDisplayGamma_MetaData[];
#endif
		static void NewProp_bUseDisplayGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDisplayGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomGamma_MetaData[];
#endif
		static void NewProp_bUseRandomGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGammaMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGammaMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[];
#endif
		static void NewProp_bEnableClipPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTImageGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTImageGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * A virtual camera that enerates RGB images.\n * A lot of camera specific paramters like exposure, ISO, shutterspeed, bloom, fov (focal-length) can be configured.\n * These parameters can be found in the [Image](#Image), [PostProcessVolume](#PostProcessVolume) and [Projection](#Projection) Categories.<br>\n * For maximum compatibility the generated images are encoded in a standardized format currently BMP and PNG are supported.<br>\n * It is also possible to randomize resolution and gamma, which can bes useful for traning data, more ranomizable properties will be added in the future.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Image/GTImageGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "A virtual camera that enerates RGB images.\nA lot of camera specific paramters like exposure, ISO, shutterspeed, bloom, fov (focal-length) can be configured.\nThese parameters can be found in the [Image](#Image), [PostProcessVolume](#PostProcessVolume) and [Projection](#Projection) Categories.<br>\nFor maximum compatibility the generated images are encoded in a standardized format currently BMP and PNG are supported.<br>\nIt is also possible to randomize resolution and gamma, which can bes useful for traning data, more ranomizable properties will be added in the future." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * Use the display gamma for generated images usually around 2.4\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Use the display gamma for generated images usually around 2.4" },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma_SetBit(void* Obj)
	{
		((UGTImageGeneratorComponent*)Obj)->bUseDisplayGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma = { "bUseDisplayGamma", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorComponent), &Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGamma_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * Specify a custom gama value for images.\n     */" },
		{ "EditCondition", "!bUseDisplayGamma" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Specify a custom gama value for images." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGamma = { "TargetGamma", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, TargetGamma), METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * If enabled will choose a random gamma between TargetGamma and TargetGammaMax for each captured image.\n     * This is useful for generating Training data.\n     */" },
		{ "EditCondition", "!bUseDisplayGamma" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "If enabled will choose a random gamma between TargetGamma and TargetGammaMax for each captured image.\nThis is useful for generating Training data." },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma_SetBit(void* Obj)
	{
		((UGTImageGeneratorComponent*)Obj)->bUseRandomGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma = { "bUseRandomGamma", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorComponent), &Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGammaMax_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/**\n     * The maximum gamma to use if bRandomResolution is enabled.\n     */" },
		{ "EditCondition", "bUseRandomGamma" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "The maximum gamma to use if bRandomResolution is enabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGammaMax = { "TargetGammaMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, TargetGammaMax), METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGammaMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGammaMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Camera projection type. */" },
		{ "DisplayName", "Projection Type" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Camera projection type." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, ProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ProjectionType_MetaData)) }; // 2603946863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Post-process settings to use [FPostProcessSettings](https://docs.unrealengine.com/en-US/API/Runtime/Engine/Engine/FPostProcessSettings/index.html)*/" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post-process settings to use [FPostProcessSettings](https://docs.unrealengine.com/en-US/API/Runtime/Engine/Engine/FPostProcessSettings/index.html)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_PostProcessSettings_MetaData)) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/**\n     * Enables a clip plane while rendering the scene capture which is useful for portals.\n     * The global clip plane must be enabled in the renderer project settings for this to work.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
	};
#endif
	void Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane_SetBit(void* Obj)
	{
		((UGTImageGeneratorComponent*)Obj)->bEnableClipPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane = { "bEnableClipPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTImageGeneratorComponent), &Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneBase_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Base position for the clip plane, can be any position on the plane. */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneBase = { "ClipPlaneBase", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneNormal_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Normal for the plane. */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageGeneratorComponent.h" },
		{ "ToolTip", "Normal for the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneNormal = { "ClipPlaneNormal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTImageGeneratorComponent, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTImageGeneratorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseDisplayGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bUseRandomGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_TargetGammaMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_bEnableClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTImageGeneratorComponent_Statics::NewProp_ClipPlaneNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTImageGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTImageGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTImageGeneratorComponent_Statics::ClassParams = {
		&UGTImageGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTImageGeneratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTImageGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTImageGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTImageGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTImageGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTImageGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTImageGeneratorComponent>()
	{
		return UGTImageGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTImageGeneratorComponent);
	UGTImageGeneratorComponent::~UGTImageGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTImageGeneratorComponent, UGTImageGeneratorComponent::StaticClass, TEXT("UGTImageGeneratorComponent"), &Z_Registration_Info_UClass_UGTImageGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTImageGeneratorComponent), 3107300822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorComponent_h_1999839152(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
