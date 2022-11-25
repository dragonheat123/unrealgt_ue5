// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GTImageFileFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGT_GTImageFileFormat_generated_h
#error "GTImageFileFormat.generated.h already included, missing '#pragma once' in GTImageFileFormat.h"
#endif
#define UNREALGT_GTImageFileFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jiahen_Documents_unrealgt_plugin_HostProject_Plugins_UnrealGT_Source_UnrealGT_Public_GTImageFileFormat_h


#define FOREACH_ENUM_EGTIMAGEFILEFORMAT(op) \
	op(EGTImageFileFormat::PNG) \
	op(EGTImageFileFormat::BMP) 

enum class EGTImageFileFormat : uint8;
template<> struct TIsUEnumClass<EGTImageFileFormat> { enum { Value = true }; };
template<> UNREALGT_API UEnum* StaticEnum<EGTImageFileFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
