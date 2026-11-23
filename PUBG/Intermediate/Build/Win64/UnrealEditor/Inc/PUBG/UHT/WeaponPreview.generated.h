// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/WeaponPreview.h"

#ifdef PUBG_WeaponPreview_generated_h
#error "WeaponPreview.generated.h already included, missing '#pragma once' in WeaponPreview.h"
#endif
#define PUBG_WeaponPreview_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWeaponPreview ***********************************************************
PUBG_API UClass* Z_Construct_UClass_AWeaponPreview_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPreview(); \
	friend struct Z_Construct_UClass_AWeaponPreview_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_AWeaponPreview_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponPreview, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_AWeaponPreview_NoRegister) \
	DECLARE_SERIALIZER(AWeaponPreview)


#define FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponPreview(AWeaponPreview&&) = delete; \
	AWeaponPreview(const AWeaponPreview&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPreview); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPreview) \
	NO_API virtual ~AWeaponPreview();


#define FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_14_PROLOG
#define FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_17_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponPreview;

// ********** End Class AWeaponPreview *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
