// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Text/GTActorInfoGeneratorComponent.h"
#include "UnrealGT/Public/GTGeneratorReference.h"
#include "UnrealGT/Public/GTObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTActorInfoGeneratorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UNREALGT_API UClass* Z_Construct_UClass_UGTActorInfoGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTActorInfoGeneratorComponent_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_UGTDataGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSceneCaptureComponent2D_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTGeneratorReference();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTObjectFilter();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	void UGTActorInfoGeneratorComponent::StaticRegisterNativesUGTActorInfoGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTActorInfoGeneratorComponent);
	UClass* Z_Construct_UClass_UGTActorInfoGeneratorComponent_NoRegister()
	{
		return UGTActorInfoGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackActorsThatMatchFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackActorsThatMatchFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackActorsThatMatchFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTrackOnScreenActors_MetaData[];
#endif
		static void NewProp_bOnlyTrackOnScreenActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrackOnScreenActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireMinimumVisibleBoundingBox_MetaData[];
#endif
		static void NewProp_bRequireMinimumVisibleBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireMinimumVisibleBoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimalRequiredBoundingBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimalRequiredBoundingBoxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToCamera_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccurateBoundingBoxes_MetaData[];
#endif
		static void NewProp_bAccurateBoundingBoxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccurateBoundingBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldApplyCloseMorph_MetaData[];
#endif
		static void NewProp_bShouldApplyCloseMorph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldApplyCloseMorph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedImageGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedImageGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatActorString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatActorString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Footer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Footer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatVector2DString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatVector2DString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatVector3DString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatVector3DString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatRotatorString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatRotatorString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format2DBoxString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Format2DBoxString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format3DBoxString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Format3DBoxString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceStrings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceStrings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceStrings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReplaceStrings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentationSceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SegmentationSceneCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTDataGeneratorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Generates information about actors in a scene (e.g. MeshName, BoundingBoxes, ActorName).\n * The Output format can be customize via formatting strings.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ToolTip", "Generates information about actors in a scene (e.g. MeshName, BoundingBoxes, ActorName).\nThe Output format can be customize via formatting strings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter_Inner = { "TrackActorsThatMatchFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGTObjectFilter, METADATA_PARAMS(nullptr, 0) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter_MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter = { "TrackActorsThatMatchFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, TrackActorsThatMatchFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter_MetaData)) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors_MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "Comment", "/**\n     * Requires LinkedImageGenerator to be set.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ToolTip", "Requires LinkedImageGenerator to be set." },
	};
#endif
	void Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors_SetBit(void* Obj)
	{
		((UGTActorInfoGeneratorComponent*)Obj)->bOnlyTrackOnScreenActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors = { "bOnlyTrackOnScreenActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTActorInfoGeneratorComponent), &Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox_MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "EditCondition", "bOnlyTrackOnScreenActors" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox_SetBit(void* Obj)
	{
		((UGTActorInfoGeneratorComponent*)Obj)->bRequireMinimumVisibleBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox = { "bRequireMinimumVisibleBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTActorInfoGeneratorComponent), &Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MinimalRequiredBoundingBoxSize_MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "EditCondition", "bRequireMinimumVisibleBoundingBox" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MinimalRequiredBoundingBoxSize = { "MinimalRequiredBoundingBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, MinimalRequiredBoundingBoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MinimalRequiredBoundingBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MinimalRequiredBoundingBoxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MaxDistanceToCamera_MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MaxDistanceToCamera = { "MaxDistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, MaxDistanceToCamera), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MaxDistanceToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MaxDistanceToCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes_MetaData[] = {
		{ "Category", "Output Format" },
		{ "Comment", "/**\n     * Drastically Increase the accuracy of the bounding boxes, but requires an additional render\n     * pass. The additional render pass creates a segmentation map for the tracked actors and uses\n     * that map to refine the bounding boxes.\n     *\n     * **Therefore Requires \"Enabled with stencil\" in `Engine > Rendering > Postprocessing >\n     * Custom-Depth Stencil Pass` to be set**\n     *\n     * The additional render pass doubles the cost of creating the bounding boxes.\n     * The Larger the resolution of the LinkedGenerator the larger the performance hit.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ToolTip", "Drastically Increase the accuracy of the bounding boxes, but requires an additional render\npass. The additional render pass creates a segmentation map for the tracked actors and uses\nthat map to refine the bounding boxes.\n\n**Therefore Requires \"Enabled with stencil\" in `Engine > Rendering > Postprocessing >\nCustom-Depth Stencil Pass` to be set**\n\nThe additional render pass doubles the cost of creating the bounding boxes.\nThe Larger the resolution of the LinkedGenerator the larger the performance hit." },
	};
#endif
	void Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes_SetBit(void* Obj)
	{
		((UGTActorInfoGeneratorComponent*)Obj)->bAccurateBoundingBoxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes = { "bAccurateBoundingBoxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTActorInfoGeneratorComponent), &Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData[] = {
		{ "Category", "Output Format" },
		{ "Comment", "/** Apply Close for Bounding Box Segmentation */" },
		{ "DisplayName", "Apply Closing (Dilation & Erosion) for Bounding Box calculation" },
		{ "EditCondtion", "bAccurateBoundingBoxes" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ToolTip", "Apply Close for Bounding Box Segmentation" },
	};
#endif
	void Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_SetBit(void* Obj)
	{
		((UGTActorInfoGeneratorComponent*)Obj)->bShouldApplyCloseMorph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph = { "bShouldApplyCloseMorph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTActorInfoGeneratorComponent), &Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_LinkedImageGenerator_MetaData[] = {
		{ "Category", "Output Format" },
		{ "Comment", "/**\n     * Link an image generator to this component.\n     * The linked Generator is used to determine when an\n     * actor is \"on screen\" and should be tracked.\n     * Setting this is also required for generating 2D\n     * bounding boxes.\n     */" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "ToolTip", "Link an image generator to this component.\nThe linked Generator is used to determine when an\nactor is \"on screen\" and should be tracked.\nSetting this is also required for generating 2D\nbounding boxes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_LinkedImageGenerator = { "LinkedImageGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, LinkedImageGenerator), Z_Construct_UScriptStruct_FGTGeneratorReference, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_LinkedImageGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_LinkedImageGenerator_MetaData)) }; // 279572270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Header_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, Header), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatActorString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatActorString = { "FormatActorString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, FormatActorString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatActorString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatActorString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Separator_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, Separator), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Separator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Separator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Footer_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Footer = { "Footer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, Footer), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Footer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Footer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector2DString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector2DString = { "FormatVector2DString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, FormatVector2DString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector2DString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector2DString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector3DString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector3DString = { "FormatVector3DString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, FormatVector3DString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector3DString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector3DString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatRotatorString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatRotatorString = { "FormatRotatorString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, FormatRotatorString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatRotatorString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatRotatorString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format2DBoxString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format2DBoxString = { "Format2DBoxString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, Format2DBoxString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format2DBoxString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format2DBoxString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format3DBoxString_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format3DBoxString = { "Format3DBoxString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, Format3DBoxString), METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format3DBoxString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format3DBoxString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_ValueProp = { "ReplaceStrings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_Key_KeyProp = { "ReplaceStrings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_MetaData[] = {
		{ "Category", "Output Format" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings = { "ReplaceStrings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, ReplaceStrings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_SegmentationSceneCapture_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Generators/Text/GTActorInfoGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_SegmentationSceneCapture = { "SegmentationSceneCapture", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTActorInfoGeneratorComponent, SegmentationSceneCapture), Z_Construct_UClass_UGTSceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_SegmentationSceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_SegmentationSceneCapture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_TrackActorsThatMatchFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bOnlyTrackOnScreenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bRequireMinimumVisibleBoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MinimalRequiredBoundingBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_MaxDistanceToCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bAccurateBoundingBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_LinkedImageGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatActorString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Footer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector2DString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatVector3DString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_FormatRotatorString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format2DBoxString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_Format3DBoxString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_ReplaceStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::NewProp_SegmentationSceneCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTActorInfoGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::ClassParams = {
		&UGTActorInfoGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTActorInfoGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTActorInfoGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTActorInfoGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTActorInfoGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTActorInfoGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTActorInfoGeneratorComponent>()
	{
		return UGTActorInfoGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTActorInfoGeneratorComponent);
	UGTActorInfoGeneratorComponent::~UGTActorInfoGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Text_GTActorInfoGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Text_GTActorInfoGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTActorInfoGeneratorComponent, UGTActorInfoGeneratorComponent::StaticClass, TEXT("UGTActorInfoGeneratorComponent"), &Z_Registration_Info_UClass_UGTActorInfoGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTActorInfoGeneratorComponent), 2943355510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Text_GTActorInfoGeneratorComponent_h_1593366321(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Text_GTActorInfoGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Text_GTActorInfoGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
