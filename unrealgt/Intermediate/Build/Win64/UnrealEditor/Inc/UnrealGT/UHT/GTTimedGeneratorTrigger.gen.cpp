// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Triggers/GTTimedGeneratorTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTTimedGeneratorTrigger() {}
// Cross Module References
	UNREALGT_API UClass* Z_Construct_UClass_UGTGeneratorTrigger();
	UNREALGT_API UClass* Z_Construct_UClass_UGTTimedGeneratorTrigger();
	UNREALGT_API UClass* Z_Construct_UClass_UGTTimedGeneratorTrigger_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTTimedGeneratorTrigger::StaticRegisterNativesUGTTimedGeneratorTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTTimedGeneratorTrigger);
	UClass* Z_Construct_UClass_UGTTimedGeneratorTrigger_NoRegister()
	{
		return UGTTimedGeneratorTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerEveryFrame_MetaData[];
#endif
		static void NewProp_bTriggerEveryFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerEveryFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTGeneratorTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Triggers/GTTimedGeneratorTrigger.h" },
		{ "ModuleRelativePath", "Public/Triggers/GTTimedGeneratorTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame_MetaData[] = {
		{ "Category", "TriggerSettings" },
		{ "ModuleRelativePath", "Public/Triggers/GTTimedGeneratorTrigger.h" },
	};
#endif
	void Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame_SetBit(void* Obj)
	{
		((UGTTimedGeneratorTrigger*)Obj)->bTriggerEveryFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame = { "bTriggerEveryFrame", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTTimedGeneratorTrigger), &Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "TriggerSettings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bTriggerEveryFrame" },
		{ "ModuleRelativePath", "Public/Triggers/GTTimedGeneratorTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTTimedGeneratorTrigger, FrameRate), METADATA_PARAMS(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_bTriggerEveryFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::NewProp_FrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTTimedGeneratorTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::ClassParams = {
		&UGTTimedGeneratorTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTTimedGeneratorTrigger()
	{
		if (!Z_Registration_Info_UClass_UGTTimedGeneratorTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTTimedGeneratorTrigger.OuterSingleton, Z_Construct_UClass_UGTTimedGeneratorTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTTimedGeneratorTrigger.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTTimedGeneratorTrigger>()
	{
		return UGTTimedGeneratorTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTTimedGeneratorTrigger);
	UGTTimedGeneratorTrigger::~UGTTimedGeneratorTrigger() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTTimedGeneratorTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTTimedGeneratorTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTTimedGeneratorTrigger, UGTTimedGeneratorTrigger::StaticClass, TEXT("UGTTimedGeneratorTrigger"), &Z_Registration_Info_UClass_UGTTimedGeneratorTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTTimedGeneratorTrigger), 2611602871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTTimedGeneratorTrigger_h_2463270519(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTTimedGeneratorTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Triggers_GTTimedGeneratorTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
