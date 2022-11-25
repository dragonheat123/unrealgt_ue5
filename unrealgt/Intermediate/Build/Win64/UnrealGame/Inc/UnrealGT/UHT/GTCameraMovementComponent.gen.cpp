// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Misc/GTCameraMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTCameraMovementComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTCameraMovementComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTCameraMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTCameraMovementComponent::StaticRegisterNativesUGTCameraMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTCameraMovementComponent);
	UClass* Z_Construct_UClass_UGTCameraMovementComponent_NoRegister()
	{
		return UGTCameraMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTCameraMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowMainView_MetaData[];
#endif
		static void NewProp_bFollowMainView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowMainView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowActor_MetaData[];
#endif
		static void NewProp_bFollowActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowRail_MetaData[];
#endif
		static void NewProp_bFollowRail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowRail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationToRail_MetaData[];
#endif
		static void NewProp_bLockOrientationToRail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationToRail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowRail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowRail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RailSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RailSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOwnerAtEnd_MetaData[];
#endif
		static void NewProp_bDestroyOwnerAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOwnerAtEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTCameraMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Misc/GTCameraMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowActor && !bFollowRail" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView_SetBit(void* Obj)
	{
		((UGTCameraMovementComponent*)Obj)->bFollowMainView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView = { "bFollowMainView", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTCameraMovementComponent), &Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowRail" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor_SetBit(void* Obj)
	{
		((UGTCameraMovementComponent*)Obj)->bFollowActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor = { "bFollowActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTCameraMovementComponent), &Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowActor_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowRail" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowActor = { "FollowActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTCameraMovementComponent, FollowActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowActor" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail_SetBit(void* Obj)
	{
		((UGTCameraMovementComponent*)Obj)->bFollowRail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail = { "bFollowRail", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTCameraMovementComponent), &Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowActor" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail_SetBit(void* Obj)
	{
		((UGTCameraMovementComponent*)Obj)->bLockOrientationToRail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail = { "bLockOrientationToRail", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTCameraMovementComponent), &Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowRail_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "// TODO readd AllowedClasses = \"ACameraRig_Rail\"\n" },
		{ "EditCondition", "!bFollowMainView && !bFollowActor" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
		{ "ToolTip", "TODO readd AllowedClasses = \"ACameraRig_Rail\"" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowRail = { "FollowRail", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTCameraMovementComponent, FollowRail), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowRail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_RailSpeed_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowActor" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_RailSpeed = { "RailSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTCameraMovementComponent, RailSpeed), METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_RailSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_RailSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "!bFollowMainView && !bFollowActor" },
		{ "ModuleRelativePath", "Public/Misc/GTCameraMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd_SetBit(void* Obj)
	{
		((UGTCameraMovementComponent*)Obj)->bDestroyOwnerAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd = { "bDestroyOwnerAtEnd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTCameraMovementComponent), &Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTCameraMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowMainView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bFollowRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bLockOrientationToRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_FollowRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_RailSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTCameraMovementComponent_Statics::NewProp_bDestroyOwnerAtEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTCameraMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTCameraMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTCameraMovementComponent_Statics::ClassParams = {
		&UGTCameraMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTCameraMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTCameraMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTCameraMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTCameraMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UGTCameraMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTCameraMovementComponent.OuterSingleton, Z_Construct_UClass_UGTCameraMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTCameraMovementComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTCameraMovementComponent>()
	{
		return UGTCameraMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTCameraMovementComponent);
	UGTCameraMovementComponent::~UGTCameraMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTCameraMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTCameraMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTCameraMovementComponent, UGTCameraMovementComponent::StaticClass, TEXT("UGTCameraMovementComponent"), &Z_Registration_Info_UClass_UGTCameraMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTCameraMovementComponent), 1425561527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTCameraMovementComponent_h_1980709099(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTCameraMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTCameraMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
