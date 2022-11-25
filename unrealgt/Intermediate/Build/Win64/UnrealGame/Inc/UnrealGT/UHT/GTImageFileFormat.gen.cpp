// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/GTImageFileFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTImageFileFormat() {}
// Cross Module References
	UNREALGT_API UEnum* Z_Construct_UEnum_UnrealGT_EGTImageFileFormat();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGTImageFileFormat;
	static UEnum* EGTImageFileFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGTImageFileFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGTImageFileFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealGT_EGTImageFileFormat, Z_Construct_UPackage__Script_UnrealGT(), TEXT("EGTImageFileFormat"));
		}
		return Z_Registration_Info_UEnum_EGTImageFileFormat.OuterSingleton;
	}
	template<> UNREALGT_API UEnum* StaticEnum<EGTImageFileFormat>()
	{
		return EGTImageFileFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enumerators[] = {
		{ "EGTImageFileFormat::PNG", (int64)EGTImageFileFormat::PNG },
		{ "EGTImageFileFormat::BMP", (int64)EGTImageFileFormat::BMP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMP.Name", "EGTImageFileFormat::BMP" },
		{ "ModuleRelativePath", "Public/GTImageFileFormat.h" },
		{ "PNG.Name", "EGTImageFileFormat::PNG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		"EGTImageFileFormat",
		"EGTImageFileFormat",
		Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealGT_EGTImageFileFormat()
	{
		if (!Z_Registration_Info_UEnum_EGTImageFileFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGTImageFileFormat.InnerSingleton, Z_Construct_UEnum_UnrealGT_EGTImageFileFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGTImageFileFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h_Statics::EnumInfo[] = {
		{ EGTImageFileFormat_StaticEnum, TEXT("EGTImageFileFormat"), &Z_Registration_Info_UEnum_EGTImageFileFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4165377388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h_1218425677(TEXT("/Script/UnrealGT"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
