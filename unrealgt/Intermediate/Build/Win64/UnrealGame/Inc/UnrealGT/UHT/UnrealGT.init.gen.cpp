// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGT_init() {}
	UNREALGT_API UFunction* Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealGT;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealGT()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealGT.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGT_GTDataReadySignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealGT",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7D75AAFB,
				0x0D1A32A4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealGT.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealGT.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealGT(Z_Construct_UPackage__Script_UnrealGT, TEXT("/Script/UnrealGT"), Z_Registration_Info_UPackage__Script_UnrealGT, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D75AAFB, 0x0D1A32A4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
