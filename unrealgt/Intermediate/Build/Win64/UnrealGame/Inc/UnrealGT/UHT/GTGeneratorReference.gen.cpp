// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/GTGeneratorReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTGeneratorReference() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GTGeneratorReference;
class UScriptStruct* FGTGeneratorReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GTGeneratorReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GTGeneratorReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGTGeneratorReference, Z_Construct_UPackage__Script_UnrealGT(), TEXT("GTGeneratorReference"));
	}
	return Z_Registration_Info_UScriptStruct_GTGeneratorReference.OuterSingleton;
}
template<> UNREALGT_API UScriptStruct* StaticStruct<FGTGeneratorReference>()
{
	return FGTGeneratorReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGTGeneratorReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GTGeneratorReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGTGeneratorReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_OtherActor_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Public/GTGeneratorReference.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTGeneratorReference, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_ComponentProperty_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "/** Name of component property to use */" },
		{ "ModuleRelativePath", "Public/GTGeneratorReference.h" },
		{ "ToolTip", "Name of component property to use" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_ComponentProperty = { "ComponentProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTGeneratorReference, ComponentProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_ComponentProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_ComponentProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewProp_ComponentProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		&NewStructOps,
		"GTGeneratorReference",
		sizeof(FGTGeneratorReference),
		alignof(FGTGeneratorReference),
		Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference()
	{
		if (!Z_Registration_Info_UScriptStruct_GTGeneratorReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GTGeneratorReference.InnerSingleton, Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GTGeneratorReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTGeneratorReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTGeneratorReference_h_Statics::ScriptStructInfo[] = {
		{ FGTGeneratorReference::StaticStruct, Z_Construct_UScriptStruct_FGTGeneratorReference_Statics::NewStructOps, TEXT("GTGeneratorReference"), &Z_Registration_Info_UScriptStruct_GTGeneratorReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGTGeneratorReference), 279572270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTGeneratorReference_h_2074216818(TEXT("/Script/UnrealGT"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTGeneratorReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTGeneratorReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
