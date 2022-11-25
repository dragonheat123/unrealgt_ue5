// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Streamers/GTSimpleTCPStreamer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTSimpleTCPStreamer() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSimpleTCPStreamer();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSimpleTCPStreamer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTSimpleTCPStreamer::StaticRegisterNativesUGTSimpleTCPStreamer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTSimpleTCPStreamer);
	UClass* Z_Construct_UClass_UGTSimpleTCPStreamer_NoRegister()
	{
		return UGTSimpleTCPStreamer::StaticClass();
	}
	struct Z_Construct_UClass_UGTSimpleTCPStreamer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTDataStreamerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Example: https://github.com/unrealgt/unrealgt/tree/master/Examples/PythonTCPClient\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent" },
		{ "IncludePath", "Streamers/GTSimpleTCPStreamer.h" },
		{ "ModuleRelativePath", "Public/Streamers/GTSimpleTCPStreamer.h" },
		{ "ToolTip", "Example: https://github.com/unrealgt/unrealgt/tree/master/Examples/PythonTCPClient" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "IPAddress" },
		{ "ModuleRelativePath", "Public/Streamers/GTSimpleTCPStreamer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTSimpleTCPStreamer, IPAddress), METADATA_PARAMS(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Port" },
		{ "ModuleRelativePath", "Public/Streamers/GTSimpleTCPStreamer.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTSimpleTCPStreamer, Port), METADATA_PARAMS(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::NewProp_Port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTSimpleTCPStreamer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::ClassParams = {
		&UGTSimpleTCPStreamer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTSimpleTCPStreamer()
	{
		if (!Z_Registration_Info_UClass_UGTSimpleTCPStreamer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTSimpleTCPStreamer.OuterSingleton, Z_Construct_UClass_UGTSimpleTCPStreamer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTSimpleTCPStreamer.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTSimpleTCPStreamer>()
	{
		return UGTSimpleTCPStreamer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTSimpleTCPStreamer);
	UGTSimpleTCPStreamer::~UGTSimpleTCPStreamer() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTSimpleTCPStreamer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTSimpleTCPStreamer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTSimpleTCPStreamer, UGTSimpleTCPStreamer::StaticClass, TEXT("UGTSimpleTCPStreamer"), &Z_Registration_Info_UClass_UGTSimpleTCPStreamer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTSimpleTCPStreamer), 1016252067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTSimpleTCPStreamer_h_2683512641(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTSimpleTCPStreamer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTSimpleTCPStreamer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
