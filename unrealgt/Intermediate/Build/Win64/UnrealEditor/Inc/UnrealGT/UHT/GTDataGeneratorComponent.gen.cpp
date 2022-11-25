// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/GTDataGeneratorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDataGeneratorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataGeneratorComponent_NoRegister();
	UNREALGT_API UFunction* Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics
	{
		struct _Script_UnrealGT_eventGTDataReadySignature_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UnrealGT_eventGTDataReadySignature_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UnrealGT_eventGTDataReadySignature_Parms, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/GTDataGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGT, nullptr, "GTDataReadySignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::_Script_UnrealGT_eventGTDataReadySignature_Parms), Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGTDataGeneratorComponent::StaticRegisterNativesUGTDataGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTDataGeneratorComponent);
	UClass* Z_Construct_UClass_UGTDataGeneratorComponent_NoRegister()
	{
		return UGTDataGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTDataGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTDataGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDataGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/GTDataGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/GTDataGeneratorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTDataGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTDataGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTDataGeneratorComponent_Statics::ClassParams = {
		&UGTDataGeneratorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGTDataGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDataGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTDataGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTDataGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTDataGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTDataGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTDataGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTDataGeneratorComponent>()
	{
		return UGTDataGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTDataGeneratorComponent);
	UGTDataGeneratorComponent::~UGTDataGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTDataGeneratorComponent, UGTDataGeneratorComponent::StaticClass, TEXT("UGTDataGeneratorComponent"), &Z_Registration_Info_UClass_UGTDataGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTDataGeneratorComponent), 3359082837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_56690836(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
