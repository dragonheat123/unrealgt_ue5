// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Triggers/GTGeneratorTrigger.h"
#include "UnrealGT/Public/GTGeneratorReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTGeneratorTrigger() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTGeneratorTrigger();
	UNREALGT_API UClass* Z_Construct_UClass_UGTGeneratorTrigger_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	DEFINE_FUNCTION(UGTGeneratorTrigger::execTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trigger();
		P_NATIVE_END;
	}
	void UGTGeneratorTrigger::StaticRegisterNativesUGTGeneratorTrigger()
	{
		UClass* Class = UGTGeneratorTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Trigger", &UGTGeneratorTrigger::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/Triggers/GTGeneratorTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTGeneratorTrigger, nullptr, "Trigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTGeneratorTrigger_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTGeneratorTrigger_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTGeneratorTrigger);
	UClass* Z_Construct_UClass_UGTGeneratorTrigger_NoRegister()
	{
		return UGTGeneratorTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UGTGeneratorTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataGenerators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataGenerators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataGenerators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTGeneratorTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTGeneratorTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTGeneratorTrigger_Trigger, "Trigger" }, // 4212282823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTGeneratorTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Triggers/GTGeneratorTrigger.h" },
		{ "ModuleRelativePath", "Public/Triggers/GTGeneratorTrigger.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators_Inner = { "DataGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGTGeneratorReference, METADATA_PARAMS(nullptr, 0) }; // 279572270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators_MetaData[] = {
		{ "Category", "TriggerSettings" },
		{ "EditCondition", "!bTriggerAllGeneratorComponents" },
		{ "ModuleRelativePath", "Public/Triggers/GTGeneratorTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators = { "DataGenerators", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTGeneratorTrigger, DataGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators_MetaData)) }; // 279572270
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTGeneratorTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTGeneratorTrigger_Statics::NewProp_DataGenerators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTGeneratorTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTGeneratorTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTGeneratorTrigger_Statics::ClassParams = {
		&UGTGeneratorTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTGeneratorTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTGeneratorTrigger_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTGeneratorTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTGeneratorTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTGeneratorTrigger()
	{
		if (!Z_Registration_Info_UClass_UGTGeneratorTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTGeneratorTrigger.OuterSingleton, Z_Construct_UClass_UGTGeneratorTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTGeneratorTrigger.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTGeneratorTrigger>()
	{
		return UGTGeneratorTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTGeneratorTrigger);
	UGTGeneratorTrigger::~UGTGeneratorTrigger() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTGeneratorTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTGeneratorTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTGeneratorTrigger, UGTGeneratorTrigger::StaticClass, TEXT("UGTGeneratorTrigger"), &Z_Registration_Info_UClass_UGTGeneratorTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTGeneratorTrigger), 3806558039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTGeneratorTrigger_h_766571352(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTGeneratorTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTGeneratorTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
