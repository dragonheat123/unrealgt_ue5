// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/GTDataGeneratorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef UNREALGT_GTDataGeneratorComponent_generated_h
#error "GTDataGeneratorComponent.generated.h already included, missing '#pragma once' in GTDataGeneratorComponent.h"
#endif
#define UNREALGT_GTDataGeneratorComponent_generated_h

#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_15_DELEGATE \
struct _Script_UnrealGT_eventGTDataReadySignature_Parms \
{ \
	TArray<uint8> Data; \
	FDateTime TimeStamp; \
}; \
static inline void FGTDataReadySignature_DelegateWrapper(const FMulticastScriptDelegate& GTDataReadySignature, TArray<uint8> const& Data, FDateTime const& TimeStamp) \
{ \
	_Script_UnrealGT_eventGTDataReadySignature_Parms Parms; \
	Parms.Data=Data; \
	Parms.TimeStamp=TimeStamp; \
	GTDataReadySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_SPARSE_DATA
#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_RPC_WRAPPERS
#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_ACCESSORS
#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGTDataGeneratorComponent(); \
	friend struct Z_Construct_UClass_UGTDataGeneratorComponent_Statics; \
public: \
	DECLARE_CLASS(UGTDataGeneratorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGT"), NO_API) \
	DECLARE_SERIALIZER(UGTDataGeneratorComponent)


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGTDataGeneratorComponent(); \
	friend struct Z_Construct_UClass_UGTDataGeneratorComponent_Statics; \
public: \
	DECLARE_CLASS(UGTDataGeneratorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGT"), NO_API) \
	DECLARE_SERIALIZER(UGTDataGeneratorComponent)


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGTDataGeneratorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGTDataGeneratorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTDataGeneratorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTDataGeneratorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTDataGeneratorComponent(UGTDataGeneratorComponent&&); \
	NO_API UGTDataGeneratorComponent(const UGTDataGeneratorComponent&); \
public: \
	NO_API virtual ~UGTDataGeneratorComponent();


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTDataGeneratorComponent(UGTDataGeneratorComponent&&); \
	NO_API UGTDataGeneratorComponent(const UGTDataGeneratorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTDataGeneratorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTDataGeneratorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGTDataGeneratorComponent) \
	NO_API virtual ~UGTDataGeneratorComponent();


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_17_PROLOG
#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_SPARSE_DATA \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_RPC_WRAPPERS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_ACCESSORS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_INCLASS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_SPARSE_DATA \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_ACCESSORS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGT_API UClass* StaticClass<class UGTDataGeneratorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_GTDataGeneratorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
