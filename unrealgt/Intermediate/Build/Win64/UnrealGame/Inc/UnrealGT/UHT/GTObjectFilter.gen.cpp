// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/GTObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTObjectFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTObjectFilter();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GTObjectFilter;
class UScriptStruct* FGTObjectFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GTObjectFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GTObjectFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGTObjectFilter, Z_Construct_UPackage__Script_UnrealGT(), TEXT("GTObjectFilter"));
	}
	return Z_Registration_Info_UScriptStruct_GTObjectFilter.OuterSingleton;
}
template<> UNREALGT_API UScriptStruct* StaticStruct<FGTObjectFilter>()
{
	return FGTObjectFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGTObjectFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WildcardMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WildcardMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGTObjectFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_WildcardMeshName_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_WildcardMeshName = { "WildcardMeshName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, WildcardMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_WildcardMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_WildcardMeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/* Will match for components that have the provided class or Actors that have\n   * at least one component with the provided class.*/" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
		{ "ToolTip", "Will match for components that have the provided class or Actors that have\n  * at least one component with the provided class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorTag_MetaData[] = {
		{ "Category", "Tag" },
		{ "Comment", "/* This will Match Actors that have the provided Tag or components if their\n   * Owner has the provided Tag */" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
		{ "ToolTip", "This will Match Actors that have the provided Tag or components if their\n  * Owner has the provided Tag" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorTag = { "ActorTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, ActorTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentTag_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, ComponentTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorInstance_MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "/* This will only match with if the tested actor is the same as the provided\n   * instance.*/" },
		{ "ModuleRelativePath", "Public/GTObjectFilter.h" },
		{ "ToolTip", "This will only match with if the tested actor is the same as the provided\n  * instance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorInstance = { "ActorInstance", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTObjectFilter, ActorInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGTObjectFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_WildcardMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ComponentTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewProp_ActorInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGTObjectFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		&NewStructOps,
		"GTObjectFilter",
		sizeof(FGTObjectFilter),
		alignof(FGTObjectFilter),
		Z_Construct_UScriptStruct_FGTObjectFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTObjectFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGTObjectFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_GTObjectFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GTObjectFilter.InnerSingleton, Z_Construct_UScriptStruct_FGTObjectFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GTObjectFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTObjectFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTObjectFilter_h_Statics::ScriptStructInfo[] = {
		{ FGTObjectFilter::StaticStruct, Z_Construct_UScriptStruct_FGTObjectFilter_Statics::NewStructOps, TEXT("GTObjectFilter"), &Z_Registration_Info_UScriptStruct_GTObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGTObjectFilter), 1028323104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTObjectFilter_h_1866608291(TEXT("/Script/UnrealGT"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTObjectFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTObjectFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
