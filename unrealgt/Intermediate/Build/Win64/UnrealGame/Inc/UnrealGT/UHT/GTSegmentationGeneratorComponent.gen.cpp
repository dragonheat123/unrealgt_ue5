// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGT/Public/Generators/Image/GTSegmentationGeneratorComponent.h"
#include "UnrealGT/Public/GTObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTSegmentationGeneratorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UNREALGT_API UClass* Z_Construct_UClass_UGTImageGeneratorBase();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSegmentationGeneratorComponent();
	UNREALGT_API UClass* Z_Construct_UClass_UGTSegmentationGeneratorComponent_NoRegister();
	UNREALGT_API UScriptStruct* Z_Construct_UScriptStruct_FGTObjectFilter();
	UPackage* Z_Construct_UPackage__Script_UnrealGT();
// End Cross Module References
	DEFINE_FUNCTION(UGTSegmentationGeneratorComponent::execRegisterForSegmentation)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterForSegmentation(Z_Param_PrimitiveComponent);
		P_NATIVE_END;
	}
	void UGTSegmentationGeneratorComponent::StaticRegisterNativesUGTSegmentationGeneratorComponent()
	{
		UClass* Class = UGTSegmentationGeneratorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterForSegmentation", &UGTSegmentationGeneratorComponent::execRegisterForSegmentation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics
	{
		struct GTSegmentationGeneratorComponent_eventRegisterForSegmentation_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GTSegmentationGeneratorComponent_eventRegisterForSegmentation_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::NewProp_PrimitiveComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealGTSegmentation" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTSegmentationGeneratorComponent, nullptr, "RegisterForSegmentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::GTSegmentationGeneratorComponent_eventRegisterForSegmentation_Parms), Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTSegmentationGeneratorComponent);
	UClass* Z_Construct_UClass_UGTSegmentationGeneratorComponent_NoRegister()
	{
		return UGTSegmentationGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToColor_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToColor_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToColor_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentToColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldApplyCloseMorph_MetaData[];
#endif
		static void NewProp_bShouldApplyCloseMorph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldApplyCloseMorph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorEachComponentDifferent_MetaData[];
#endif
		static void NewProp_bColorEachComponentDifferent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorEachComponentDifferent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFilterForColorEachComponentDifferent_MetaData[];
#endif
		static void NewProp_bUseFilterForColorEachComponentDifferent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFilterForColorEachComponentDifferent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorEachComponentDifferentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorEachComponentDifferentFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTImageGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTSegmentationGeneratorComponent_RegisterForSegmentation, "RegisterForSegmentation" }, // 1390556449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Can generate segmentation for an image. You can assign components color by adding a filter color\n * pair to the ComponentToColor map.\n * <br><br>\n * Will emit a JSON file containing the configured color mappings\n * called \"segmentation_info\" in `Saved/UnrealGT/{SessionName}/{Time}/{SegmentationGeneratorName}`\n * <br><br>\n * **Requires \"Enabled with stencil\" project setting in `Engine > Rendering > Postprocessing >\n * Custom-Depth Stencil Pass` to be set**\n * <br><br>\n * **Note:** Anti-Aliasing is disabled for segmentation generators by default!\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Generators/Image/GTSegmentationGeneratorComponent.h" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
		{ "ToolTip", "Can generate segmentation for an image. You can assign components color by adding a filter color\npair to the ComponentToColor map.\n<br><br>\nWill emit a JSON file containing the configured color mappings\ncalled \"segmentation_info\" in `Saved/UnrealGT/{SessionName}/{Time}/{SegmentationGeneratorName}`\n<br><br>\n**Requires \"Enabled with stencil\" project setting in `Engine > Rendering > Postprocessing >\nCustom-Depth Stencil Pass` to be set**\n<br><br>\n**Note:** Anti-Aliasing is disabled for segmentation generators by default!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_ValueProp = { "ComponentToColor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_Key_KeyProp = { "ComponentToColor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGTObjectFilter, METADATA_PARAMS(nullptr, 0) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_MetaData[] = {
		{ "Category", "Segmentation" },
		{ "Comment", "/**\n     * Assigns a segmentation color to the component/mesh if it matches the corresponding filter.\n     */" },
		{ "DisplayName", "Component to color Map (limted to 255 colors)" },
		{ "EditCondition", "!bColorEachComponentDifferent" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
		{ "ToolTip", "Assigns a segmentation color to the component/mesh if it matches the corresponding filter." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor = { "ComponentToColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTSegmentationGeneratorComponent, ComponentToColor), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_MetaData)) }; // 1028323104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData[] = {
		{ "Category", "Segmentation" },
		{ "Comment", "/**\n     * This can improve segmentation quality for partially translucent meshes (e.g. Fences,\n     * Foliage...)\n     */" },
		{ "DisplayName", "Apply Closing (Dilation & Erosion)" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
		{ "ToolTip", "This can improve segmentation quality for partially translucent meshes (e.g. Fences,\nFoliage...)" },
	};
#endif
	void Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_SetBit(void* Obj)
	{
		((UGTSegmentationGeneratorComponent*)Obj)->bShouldApplyCloseMorph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph = { "bShouldApplyCloseMorph", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTSegmentationGeneratorComponent), &Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent_MetaData[] = {
		{ "Category", "Segmentation" },
		{ "DisplayName", "Use random color for every mesh (limited to 255 colors)" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent_SetBit(void* Obj)
	{
		((UGTSegmentationGeneratorComponent*)Obj)->bColorEachComponentDifferent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent = { "bColorEachComponentDifferent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTSegmentationGeneratorComponent), &Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent_MetaData[] = {
		{ "Category", "Segmentation" },
		{ "DisplayName", "Apply random color only to components that match filter" },
		{ "EditCondition", "bColorEachComponentDifferent" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent_SetBit(void* Obj)
	{
		((UGTSegmentationGeneratorComponent*)Obj)->bUseFilterForColorEachComponentDifferent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent = { "bUseFilterForColorEachComponentDifferent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGTSegmentationGeneratorComponent), &Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ColorEachComponentDifferentFilter_MetaData[] = {
		{ "Category", "Segmentation" },
		{ "DisplayName", "Component filter for random colors" },
		{ "EditCondition", "bColorEachComponentDifferent && bUseFilterForColorEachComponentDifferent" },
		{ "ModuleRelativePath", "Public/Generators/Image/GTSegmentationGeneratorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ColorEachComponentDifferentFilter = { "ColorEachComponentDifferentFilter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGTSegmentationGeneratorComponent, ColorEachComponentDifferentFilter), Z_Construct_UScriptStruct_FGTObjectFilter, METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ColorEachComponentDifferentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ColorEachComponentDifferentFilter_MetaData)) }; // 1028323104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ComponentToColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bShouldApplyCloseMorph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bColorEachComponentDifferent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_bUseFilterForColorEachComponentDifferent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::NewProp_ColorEachComponentDifferentFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTSegmentationGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::ClassParams = {
		&UGTSegmentationGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTSegmentationGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UGTSegmentationGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTSegmentationGeneratorComponent.OuterSingleton, Z_Construct_UClass_UGTSegmentationGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTSegmentationGeneratorComponent.OuterSingleton;
	}
	template<> UNREALGT_API UClass* StaticClass<UGTSegmentationGeneratorComponent>()
	{
		return UGTSegmentationGeneratorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTSegmentationGeneratorComponent);
	UGTSegmentationGeneratorComponent::~UGTSegmentationGeneratorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTSegmentationGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTSegmentationGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTSegmentationGeneratorComponent, UGTSegmentationGeneratorComponent::StaticClass, TEXT("UGTSegmentationGeneratorComponent"), &Z_Registration_Info_UClass_UGTSegmentationGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTSegmentationGeneratorComponent), 2009294753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTSegmentationGeneratorComponent_h_577276644(TEXT("/Script/UnrealGT"),
		Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTSegmentationGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_Generators_Image_GTSegmentationGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
