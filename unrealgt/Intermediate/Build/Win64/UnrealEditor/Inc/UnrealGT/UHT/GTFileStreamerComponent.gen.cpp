// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Streamers/GTFileStreamerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTFileStreamerComponent() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTFileStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTFileStreamerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTFileStreamerComponent::StaticRegisterNativesUGTFileStreamerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTFileStreamerComponent);
	UClass* Z_Construct_UClass_UGTFileStreamerComponent_NoRegister()
	{
		return UGTFileStreamerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTFileStreamerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTFileStreamerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTDataStreamerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTFileStreamerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent" },
		{ "IncludePath", "Streamers/GTFileStreamerComponent.h" },
		{ "ModuleRelativePath", "Public/Streamers/GTFileStreamerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTFileStreamerComponent_Statics::NewProp_FileNameFormat_MetaData[] = {
		{ "Category", "FileNameFormat" },
		{ "ModuleRelativePath", "Public/Streamers/GTFileStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTFileStreamerComponent_Statics::NewProp_FileNameFormat = { "FileNameFormat", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTFileStreamerComponent, FileNameFormat), METADATA_PARAMS(Z_Construct_UClass_UGTFileStreamerComponent_Statics::NewProp_FileNameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTFileStreamerComponent_Statics::NewProp_FileNameFormat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTFileStreamerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTFileStreamerComponent_Statics::NewProp_FileNameFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTFileStreamerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTFileStreamerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTFileStreamerComponent_Statics::ClassParams = {
		&UGTFileStreamerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTFileStreamerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTFileStreamerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTFileStreamerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTFileStreamerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTFileStreamerComponent()
	{
		if (!Z_Registration_Info_UClass_UGTFileStreamerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTFileStreamerComponent.OuterSingleton, Z_Construct_UClass_UGTFileStreamerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTFileStreamerComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTFileStreamerComponent>()
	{
		return UGTFileStreamerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTFileStreamerComponent);
	UGTFileStreamerComponent::~UGTFileStreamerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTFileStreamerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTFileStreamerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTFileStreamerComponent, UGTFileStreamerComponent::StaticClass, TEXT("UGTFileStreamerComponent"), &Z_Registration_Info_UClass_UGTFileStreamerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTFileStreamerComponent), 653114572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTFileStreamerComponent_h_3034615650(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTFileStreamerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTFileStreamerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
