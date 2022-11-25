// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTDepthImageGeneratorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDepthImageGeneratorComponent() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTDepthImageGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDepthImageGeneratorComponent_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTDepthImageGeneratorComponent::StaticRegisterNativesUGTDepthImageGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTDepthImageGeneratorComponent);
	UClass* Z_Construct_UClass_UGTDepthImageGeneratorComponent_NoRegister()
	{
		return UGTDepthImageGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePerspectiveDepth_MetaData[];
#endif
		static void NewProp_bUsePerspectiveDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePerspectiveDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTImageGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Generates depth images. Uses planar depth as default setting, perspective depth can be enabled\n * via bUsePerspectiveDepth.<br> The depth is encoded in millimeters (mm) in the RGB channels of the\n * image. This means the depth value is a 24bit with a maximum value of 16.777216 km. (TODO add\n * nanometer option). The RGB values can be converted to mm using the following formula:\n * `R + G * 256 + B * 256 * 256`.\n * <br>\n * See https://github.com/unrealgt/unrealgt/blob/master/Examples/PythonDepthConvert/main.py for an\n * example.\n * <br>\n * **Note:** Anti-Aliasing is disabled for depth generators by default!\n */" },
		{ "HideCategories", "Lens ColorGrading Film MobileTonemapper RenderingFeatures PostProcessVolume SceneCapture PlanarReflection Collision Object Physics SceneComponent Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Image/GTDepthImageGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTDepthImageGeneratorComponent.h" },
		{ "ToolTip", "Generates depth images. Uses planar depth as default setting, perspective depth can be enabled\nvia bUsePerspectiveDepth.<br> The depth is encoded in millimeters (mm) in the RGB channels of the\nimage. This means the depth value is a 24bit with a maximum value of 16.777216 km. (TODO add\nnanometer option). The RGB values can be converted to mm using the following formula:\n`R + G * 256 + B * 256 * 256`.\n<br>\nSee https://github.com/unrealgt/unrealgt/blob/master/Examples/PythonDepthConvert/main.py for an\nexample.\n<br>\n**Note:** Anti-Aliasing is disabled for depth generators by default!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth_MetaData[] = {
		{ "Category", "Depth" },
		{ "Comment", "/** Use perspective depth instead of planar depth. */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTDepthImageGeneratorComponent.h" },
		{ "ToolTip", "Use perspective depth instead of planar depth." },
	};
#endif
	void Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth_SetBit(void* Obj)
	{
		((UGTDepthImageGeneratorComponent*)Obj)->bUsePerspectiveDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth = { "bUsePerspectiveDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTDepthImageGeneratorComponent), &Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_MaxZ_MetaData[] = {
		{ "Category", "Depth" },
		{ "Comment", "/** Maximum depth(distance) to record. */" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTDepthImageGeneratorComponent.h" },
		{ "ToolTip", "Maximum depth(distance) to record." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTDepthImageGeneratorComponent, MaxZ), METADATA_PARAMS(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_MaxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_MaxZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_bUsePerspectiveDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::NewProp_MaxZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTDepthImageGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::ClassParams = {
		&UGTDepthImageGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTDepthImageGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTDepthImageGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTDepthImageGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTDepthImageGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTDepthImageGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTDepthImageGeneratorComponent>()
	{
		return UGTDepthImageGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTDepthImageGeneratorComponent);
	UGTDepthImageGeneratorComponent::~UGTDepthImageGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTDepthImageGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTDepthImageGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTDepthImageGeneratorComponent, UGTDepthImageGeneratorComponent::StaticClass, TEXT("UGTDepthImageGeneratorComponent"), &Z_Registration_Info_UClass_UGTDepthImageGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTDepthImageGeneratorComponent), 3284850985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTDepthImageGeneratorComponent_h_888641428(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTDepthImageGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTDepthImageGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
