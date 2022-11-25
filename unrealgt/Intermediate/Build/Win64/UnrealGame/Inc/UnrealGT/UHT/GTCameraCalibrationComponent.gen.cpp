// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTCameraCalibrationComponent.h"
#include "UnrealGT/Public/GTGeneratorReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTCameraCalibrationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTCameraCalibrationComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTCameraCalibrationComponent_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTCameraCalibrationComponent::StaticRegisterNativesUGTCameraCalibrationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTCameraCalibrationComponent);
	UClass* Z_Construct_UClass_UGTCameraCalibrationComponent_NoRegister()
	{
		return UGTCameraCalibrationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTCameraCalibrationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOneReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOneReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTwoReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTwoReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Can bes used to get calibration parameters from image generators.\n * Set CameraOneReference to retrieve data for one camera.\n * Set CameraOneReference and CameraTwoReference to generate stereo calibration parameters.\n */" },
		{ "IncludePath", "Generators/Image/GTCameraCalibrationComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTCameraCalibrationComponent.h" },
		{ "ToolTip", "Can bes used to get calibration parameters from image generators.\nSet CameraOneReference to retrieve data for one camera.\nSet CameraOneReference and CameraTwoReference to generate stereo calibration parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraOneReference_MetaData[] = {
		{ "Category", "Cameras" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTCameraCalibrationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraOneReference = { "CameraOneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTCameraCalibrationComponent, CameraOneReference), Z_Construct_UScriptStruct_FGTGeneratorReference, METADATA_PARAMS(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraOneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraOneReference_MetaData)) }; // 279572270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraTwoReference_MetaData[] = {
		{ "Category", "Cameras" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTCameraCalibrationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraTwoReference = { "CameraTwoReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTCameraCalibrationComponent, CameraTwoReference), Z_Construct_UScriptStruct_FGTGeneratorReference, METADATA_PARAMS(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraTwoReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraTwoReference_MetaData)) }; // 279572270
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraOneReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::NewProp_CameraTwoReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTCameraCalibrationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::ClassParams = {
		&UGTCameraCalibrationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTCameraCalibrationComponent()
	{
		if (!Z_Registration_Info_UClass_UGTCameraCalibrationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTCameraCalibrationComponent.OuterSingleton, Z_Construct_UClass_UGTCameraCalibrationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTCameraCalibrationComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTCameraCalibrationComponent>()
	{
		return UGTCameraCalibrationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTCameraCalibrationComponent);
	UGTCameraCalibrationComponent::~UGTCameraCalibrationComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTCameraCalibrationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTCameraCalibrationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTCameraCalibrationComponent, UGTCameraCalibrationComponent::StaticClass, TEXT("UGTCameraCalibrationComponent"), &Z_Registration_Info_UClass_UGTCameraCalibrationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTCameraCalibrationComponent), 2121778566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTCameraCalibrationComponent_h_554976170(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTCameraCalibrationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTCameraCalibrationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
