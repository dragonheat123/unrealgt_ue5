// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Misc/GTRandomObjectPlacer.h"
#include "UnrealGT/Public/GTObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTRandomObjectPlacer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_AGTRandomObjectPlacer();
	UNREALGT_API UClass* Z_Construct_UClass_AGTRandomObjectPlacer_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTObjectFilter();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo;
class UScriptStruct* FGTRandomObjectSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo, Z_Construct_UPackage__Script_UnrealGT(), TEXT("GTRandomObjectSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.OuterSingleton;
}
template<> UNREALGT_API UScriptStruct* StaticStruct<FGTRandomObjectSpawnInfo>()
{
	return FGTRandomObjectSpawnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAlignToGround_MetaData[];
#endif
		static void NewProp_bShouldAlignToGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAlignToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomYaw_MetaData[];
#endif
		static void NewProp_bRandomYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomYaw;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RandomMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaterialSlotID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomMaterialSlotID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGTRandomObjectSpawnInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTRandomObjectSpawnInfo, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTRandomObjectSpawnInfo, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Radius" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTRandomObjectSpawnInfo, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround_MetaData[] = {
		{ "Category", "bShouldAlignToGround" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround_SetBit(void* Obj)
	{
		((FGTRandomObjectSpawnInfo*)Obj)->bShouldAlignToGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround = { "bShouldAlignToGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGTRandomObjectSpawnInfo), &Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw_MetaData[] = {
		{ "Category", "bRandomYaw" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw_SetBit(void* Obj)
	{
		((FGTRandomObjectSpawnInfo*)Obj)->bRandomYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw = { "bRandomYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGTRandomObjectSpawnInfo), &Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials_Inner = { "RandomMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials_MetaData[] = {
		{ "Category", "RandomMaterials" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials = { "RandomMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTRandomObjectSpawnInfo, RandomMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterialSlotID_MetaData[] = {
		{ "Category", "RandomMaterialSlotID" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterialSlotID = { "RandomMaterialSlotID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGTRandomObjectSpawnInfo, RandomMaterialSlotID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterialSlotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterialSlotID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bShouldAlignToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_bRandomYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewProp_RandomMaterialSlotID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
		nullptr,
		&NewStructOps,
		"GTRandomObjectSpawnInfo",
		sizeof(FGTRandomObjectSpawnInfo),
		alignof(FGTRandomObjectSpawnInfo),
		Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo.InnerSingleton;
	}
	void AGTRandomObjectPlacer::StaticRegisterNativesAGTRandomObjectPlacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTRandomObjectPlacer);
	UClass* Z_Construct_UClass_AGTRandomObjectPlacer_NoRegister()
	{
		return AGTRandomObjectPlacer::StaticClass();
	}
	struct Z_Construct_UClass_AGTRandomObjectPlacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorTriesBeforePointRejection_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GeneratorTriesBeforePointRejection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHeightDifference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHeightDifference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectSpawnInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawnInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectSpawnInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceMeshActors_MetaData[];
#endif
		static void NewProp_bPlaceMeshActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceMeshActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInstancedStaticMesh_MetaData[];
#endif
		static void NewProp_bUseInstancedStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInstancedStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlaceOnLandscape_MetaData[];
#endif
		static void NewProp_bAllowPlaceOnLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlaceOnLandscape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowPlacementOnActorsThatMatchFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowPlacementOnActorsThatMatchFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowPlacementOnActorsThatMatchFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Points_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsedPoints_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsedPoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedPoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UsedPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewBoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTRandomObjectPlacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/GTRandomObjectPlacer.h" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "GeneratorSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, BoundingBox), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GeneratorTriesBeforePointRejection_MetaData[] = {
		{ "Category", "GeneratorSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GeneratorTriesBeforePointRejection = { "GeneratorTriesBeforePointRejection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, GeneratorTriesBeforePointRejection), METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GeneratorTriesBeforePointRejection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GeneratorTriesBeforePointRejection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MaximumHeightDifference_MetaData[] = {
		{ "Category", "GeneratorSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MaximumHeightDifference = { "MaximumHeightDifference", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, MaximumHeightDifference), METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MaximumHeightDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MaximumHeightDifference_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos_Inner = { "ObjectSpawnInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo, METADATA_PARAMS(nullptr, 0) }; // 1215855829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos = { "ObjectSpawnInfos", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, ObjectSpawnInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos_MetaData)) }; // 1215855829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors_MetaData[] = {
		{ "Category", "PlacementSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors_SetBit(void* Obj)
	{
		((AGTRandomObjectPlacer*)Obj)->bPlaceMeshActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors = { "bPlaceMeshActors", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGTRandomObjectPlacer), &Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh_MetaData[] = {
		{ "Category", "PlacementSettings" },
		{ "EditCondition", "!bPlaceMeshActors" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh_SetBit(void* Obj)
	{
		((AGTRandomObjectPlacer*)Obj)->bUseInstancedStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh = { "bUseInstancedStaticMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGTRandomObjectPlacer), &Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape_MetaData[] = {
		{ "Category", "PlacementSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	void Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape_SetBit(void* Obj)
	{
		((AGTRandomObjectPlacer*)Obj)->bAllowPlaceOnLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape = { "bAllowPlaceOnLandscape", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGTRandomObjectPlacer), &Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter_Inner = { "AllowPlacementOnActorsThatMatchFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGTObjectFilter, METADATA_PARAMS(nullptr, 0) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter_MetaData[] = {
		{ "Category", "PlacementSettings" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter = { "AllowPlacementOnActorsThatMatchFilter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, AllowPlacementOnActorsThatMatchFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter_MetaData)) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridCellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, GridCellSize), METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridSize_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_ValueProp = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_Key_KeyProp = { "Points_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, Points), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_ValueProp = { "UsedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_Key_KeyProp = { "UsedPoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints = { "UsedPoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, UsedPoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors_Inner = { "MeshActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors = { "MeshActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, MeshActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_PreviewBoxComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/GTRandomObjectPlacer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_PreviewBoxComponent = { "PreviewBoxComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGTRandomObjectPlacer, PreviewBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_PreviewBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_PreviewBoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGTRandomObjectPlacer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GeneratorTriesBeforePointRejection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MaximumHeightDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_ObjectSpawnInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bPlaceMeshActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bUseInstancedStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_bAllowPlaceOnLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_AllowPlacementOnActorsThatMatchFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_UsedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_MeshActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTRandomObjectPlacer_Statics::NewProp_PreviewBoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTRandomObjectPlacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTRandomObjectPlacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTRandomObjectPlacer_Statics::ClassParams = {
		&AGTRandomObjectPlacer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGTRandomObjectPlacer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTRandomObjectPlacer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTRandomObjectPlacer()
	{
		if (!Z_Registration_Info_UClass_AGTRandomObjectPlacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTRandomObjectPlacer.OuterSingleton, Z_Construct_UClass_AGTRandomObjectPlacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTRandomObjectPlacer.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<AGTRandomObjectPlacer>()
	{
		return AGTRandomObjectPlacer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTRandomObjectPlacer);
	AGTRandomObjectPlacer::~AGTRandomObjectPlacer() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ScriptStructInfo[] = {
		{ FGTRandomObjectSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FGTRandomObjectSpawnInfo_Statics::NewStructOps, TEXT("GTRandomObjectSpawnInfo"), &Z_Registration_Info_UScriptStruct_GTRandomObjectSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGTRandomObjectSpawnInfo), 1215855829U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTRandomObjectPlacer, AGTRandomObjectPlacer::StaticClass, TEXT("AGTRandomObjectPlacer"), &Z_Registration_Info_UClass_AGTRandomObjectPlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTRandomObjectPlacer), 3138310598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_2088540506(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Misc_GTRandomObjectPlacer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
