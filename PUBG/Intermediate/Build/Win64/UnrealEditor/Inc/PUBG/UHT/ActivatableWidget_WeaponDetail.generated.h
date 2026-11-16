// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidget/ActivatableWidget_WeaponDetail.h"

#ifdef PUBG_ActivatableWidget_WeaponDetail_generated_h
#error "ActivatableWidget_WeaponDetail.generated.h already included, missing '#pragma once' in ActivatableWidget_WeaponDetail.h"
#endif
#define PUBG_ActivatableWidget_WeaponDetail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActivatableWidget_WeaponDetail ******************************************
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInventoryChangedHandler);


PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister();

#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatableWidget_WeaponDetail(); \
	friend struct Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister(); \
public: \
	DECLARE_CLASS2(UActivatableWidget_WeaponDetail, UBaseCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister) \
	DECLARE_SERIALIZER(UActivatableWidget_WeaponDetail)


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatableWidget_WeaponDetail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActivatableWidget_WeaponDetail(UActivatableWidget_WeaponDetail&&) = delete; \
	UActivatableWidget_WeaponDetail(const UActivatableWidget_WeaponDetail&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidget_WeaponDetail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidget_WeaponDetail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatableWidget_WeaponDetail) \
	NO_API virtual ~UActivatableWidget_WeaponDetail();


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_20_PROLOG
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActivatableWidget_WeaponDetail;

// ********** End Class UActivatableWidget_WeaponDetail ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
