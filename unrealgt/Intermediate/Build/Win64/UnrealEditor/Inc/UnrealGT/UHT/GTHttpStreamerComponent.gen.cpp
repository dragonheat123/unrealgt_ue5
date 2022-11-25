// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Streamers/GTHttpStreamerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTHttpStreamerComponent() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTHttpStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTHttpStreamerComponent_NoRegister();
	UNREALGT_API UEnum* Z_Construct_UEnum_UnrealGT_EGTHttpContentType();
	UNREALGT_API UEnum* Z_Construct_UEnum_UnrealGT_EGTHttpMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGTHttpMethod;
	static UEnum* EGTHttpMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGTHttpMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGTHttpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealGT_EGTHttpMethod, Z_Construct_UPackage__Script_UnrealGT(), TEXT("EGTHttpMethod"));
		}
		return Z_Registration_Info_UEnum_EGTHttpMethod.OuterSingleton;
	}
	template<> UNREALGT_API UEnum* StaticEnum<EGTHttpMethod>()
	{
		return EGTHttpMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enumerators[] = {
		{ "EGTHttpMethod::Post", (int64)EGTHttpMethod::Post },
		{ "EGTHttpMethod::Put", (int64)EGTHttpMethod::Put },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
		{ "Post.Name", "EGTHttpMethod::Post" },
		{ "Put.Name", "EGTHttpMethod::Put" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		"EGTHttpMethod",
		"EGTHttpMethod",
		Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealGT_EGTHttpMethod()
	{
		if (!Z_Registration_Info_UEnum_EGTHttpMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGTHttpMethod.InnerSingleton, Z_Construct_UEnum_UnrealGT_EGTHttpMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGTHttpMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGTHttpContentType;
	static UEnum* EGTHttpContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGTHttpContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGTHttpContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealGT_EGTHttpContentType, Z_Construct_UPackage__Script_UnrealGT(), TEXT("EGTHttpContentType"));
		}
		return Z_Registration_Info_UEnum_EGTHttpContentType.OuterSingleton;
	}
	template<> UNREALGT_API UEnum* StaticEnum<EGTHttpContentType>()
	{
		return EGTHttpContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enumerators[] = {
		{ "EGTHttpContentType::Json", (int64)EGTHttpContentType::Json },
		{ "EGTHttpContentType::PNG", (int64)EGTHttpContentType::PNG },
		{ "EGTHttpContentType::BMP", (int64)EGTHttpContentType::BMP },
		{ "EGTHttpContentType::TextPlain", (int64)EGTHttpContentType::TextPlain },
		{ "EGTHttpContentType::OctetStream", (int64)EGTHttpContentType::OctetStream },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMP.Name", "EGTHttpContentType::BMP" },
		{ "Json.Name", "EGTHttpContentType::Json" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
		{ "OctetStream.Name", "EGTHttpContentType::OctetStream" },
		{ "PNG.Name", "EGTHttpContentType::PNG" },
		{ "TextPlain.Name", "EGTHttpContentType::TextPlain" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		"EGTHttpContentType",
		"EGTHttpContentType",
		Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealGT_EGTHttpContentType()
	{
		if (!Z_Registration_Info_UEnum_EGTHttpContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGTHttpContentType.InnerSingleton, Z_Construct_UEnum_UnrealGT_EGTHttpContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGTHttpContentType.InnerSingleton;
	}
	void UGTHttpStreamerComponent::StaticRegisterNativesUGTHttpStreamerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTHttpStreamerComponent);
	UClass* Z_Construct_UClass_UGTHttpStreamerComponent_NoRegister()
	{
		return UGTHttpStreamerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTHttpStreamerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUrl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTHttpStreamerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTDataStreamerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTHttpStreamerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Example: https://github.com/unrealgt/unrealgt/tree/master/Examples/PythonHTTPClient\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent" },
		{ "IncludePath", "Streamers/GTHttpStreamerComponent.h" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
		{ "ToolTip", "Example: https://github.com/unrealgt/unrealgt/tree/master/Examples/PythonHTTPClient" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_TargetUrl_MetaData[] = {
		{ "Category", "Http" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_TargetUrl = { "TargetUrl", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTHttpStreamerComponent, TargetUrl), METADATA_PARAMS(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_TargetUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_TargetUrl_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Http" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTHttpStreamerComponent, Method), Z_Construct_UEnum_UnrealGT_EGTHttpMethod, METADATA_PARAMS(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method_MetaData)) }; // 957344134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType_MetaData[] = {
		{ "Category", "Http" },
		{ "ModuleRelativePath", "Public/Streamers/GTHttpStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTHttpStreamerComponent, ContentType), Z_Construct_UEnum_UnrealGT_EGTHttpContentType, METADATA_PARAMS(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType_MetaData)) }; // 1403987798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTHttpStreamerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_TargetUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTHttpStreamerComponent_Statics::NewProp_ContentType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTHttpStreamerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTHttpStreamerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTHttpStreamerComponent_Statics::ClassParams = {
		&UGTHttpStreamerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTHttpStreamerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTHttpStreamerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTHttpStreamerComponent()
	{
		if (!Z_Registration_Info_UClass_UGTHttpStreamerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTHttpStreamerComponent.OuterSingleton, Z_Construct_UClass_UGTHttpStreamerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTHttpStreamerComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTHttpStreamerComponent>()
	{
		return UGTHttpStreamerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTHttpStreamerComponent);
	UGTHttpStreamerComponent::~UGTHttpStreamerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::EnumInfo[] = {
		{ EGTHttpMethod_StaticEnum, TEXT("EGTHttpMethod"), &Z_Registration_Info_UEnum_EGTHttpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 957344134U) },
		{ EGTHttpContentType_StaticEnum, TEXT("EGTHttpContentType"), &Z_Registration_Info_UEnum_EGTHttpContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1403987798U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTHttpStreamerComponent, UGTHttpStreamerComponent::StaticClass, TEXT("UGTHttpStreamerComponent"), &Z_Registration_Info_UClass_UGTHttpStreamerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTHttpStreamerComponent), 3713186833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_3900744601(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTHttpStreamerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
