// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Streamers/GTDataStreamerComponent.h"
#include "UnrealGT/Public/GTGeneratorReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDataStreamerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataStreamerComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataStreamerComponent_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	DEFINE_FUNCTION(UGTDataStreamerComponent::execOnDataReady)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDataReady(Z_Param_Out_Data,Z_Param_Out_TimeStamp);
		P_NATIVE_END;
	}
	void UGTDataStreamerComponent::StaticRegisterNativesUGTDataStreamerComponent()
	{
		UClass* Class = UGTDataStreamerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDataReady", &UGTDataStreamerComponent::execOnDataReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics
	{
		struct GTDataStreamerComponent_eventOnDataReady_Parms
		{
			TArray<uint8> Data;
			FDateTime TimeStamp;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GTDataStreamerComponent_eventOnDataReady_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GTDataStreamerComponent_eventOnDataReady_Parms, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Streamers/GTDataStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDataStreamerComponent, nullptr, "OnDataReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::GTDataStreamerComponent_eventOnDataReady_Parms), Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTDataStreamerComponent);
	UClass* Z_Construct_UClass_UGTDataStreamerComponent_NoRegister()
	{
		return UGTDataStreamerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTDataStreamerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTDataStreamerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTDataStreamerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTDataStreamerComponent_OnDataReady, "OnDataReady" }, // 1154345254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDataStreamerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Streamers/GTDataStreamerComponent.h" },
		{ "ModuleRelativePath", "Public/Streamers/GTDataStreamerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDataStreamerComponent_Statics::NewProp_GeneratorReference_MetaData[] = {
		{ "Category", "GeneratorReference" },
		{ "ModuleRelativePath", "Public/Streamers/GTDataStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTDataStreamerComponent_Statics::NewProp_GeneratorReference = { "GeneratorReference", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTDataStreamerComponent, GeneratorReference), Z_Construct_UScriptStruct_FGTGeneratorReference, METADATA_PARAMS(Z_Construct_UClass_UGTDataStreamerComponent_Statics::NewProp_GeneratorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDataStreamerComponent_Statics::NewProp_GeneratorReference_MetaData)) }; // 279572270
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTDataStreamerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDataStreamerComponent_Statics::NewProp_GeneratorReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTDataStreamerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTDataStreamerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTDataStreamerComponent_Statics::ClassParams = {
		&UGTDataStreamerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTDataStreamerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTDataStreamerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTDataStreamerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDataStreamerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTDataStreamerComponent()
	{
		if (!Z_Registration_Info_UClass_UGTDataStreamerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTDataStreamerComponent.OuterSingleton, Z_Construct_UClass_UGTDataStreamerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTDataStreamerComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTDataStreamerComponent>()
	{
		return UGTDataStreamerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTDataStreamerComponent);
	UGTDataStreamerComponent::~UGTDataStreamerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTDataStreamerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTDataStreamerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTDataStreamerComponent, UGTDataStreamerComponent::StaticClass, TEXT("UGTDataStreamerComponent"), &Z_Registration_Info_UClass_UGTDataStreamerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTDataStreamerComponent), 134295694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTDataStreamerComponent_h_2996606952(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTDataStreamerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Streamers_GTDataStreamerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
