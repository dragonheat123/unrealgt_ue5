// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTImageNormalGeneratorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTImageNormalGeneratorComponent() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageNormalGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageNormalGeneratorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTImageNormalGeneratorComponent::StaticRegisterNativesUGTImageNormalGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTImageNormalGeneratorComponent);
	UClass* Z_Construct_UClass_UGTImageNormalGeneratorComponent_NoRegister()
	{
		return UGTImageNormalGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTImageGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Renders the surface normals of the objects in the scene. The normals are encoded in the RGB channels.\n * They can be converted from RGB to world space coordinates using: `RGB -> Normal: 2 * C/255 C - 1`\n * <br>\n * **Note:** Anti-Aliasing is disabled for normal generators by default!\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Image/GTImageNormalGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTImageNormalGeneratorComponent.h" },
		{ "ToolTip", "Renders the surface normals of the objects in the scene. The normals are encoded in the RGB channels.\nThey can be converted from RGB to world space coordinates using: `RGB -> Normal: 2 * C/255 C - 1`\n<br>\n**Note:** Anti-Aliasing is disabled for normal generators by default!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTImageNormalGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::ClassParams = {
		&UGTImageNormalGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTImageNormalGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTImageNormalGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTImageNormalGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTImageNormalGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTImageNormalGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTImageNormalGeneratorComponent>()
	{
		return UGTImageNormalGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTImageNormalGeneratorComponent);
	UGTImageNormalGeneratorComponent::~UGTImageNormalGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageNormalGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageNormalGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTImageNormalGeneratorComponent, UGTImageNormalGeneratorComponent::StaticClass, TEXT("UGTImageNormalGeneratorComponent"), &Z_Registration_Info_UClass_UGTImageNormalGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTImageNormalGeneratorComponent), 449887674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageNormalGeneratorComponent_h_3409845490(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageNormalGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTImageNormalGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
