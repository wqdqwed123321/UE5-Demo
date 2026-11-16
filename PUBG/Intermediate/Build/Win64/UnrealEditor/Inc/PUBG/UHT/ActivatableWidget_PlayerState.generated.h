// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidget/ActivatableWidget_PlayerState.h"

#ifdef PUBG_ActivatableWidget_PlayerState_generated_h
#error "ActivatableWidget_PlayerState.generated.h already included, missing '#pragma once' in ActivatableWidget_PlayerState.h"
#endif
#define PUBG_ActivatableWidget_PlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActivatableWidget_PlayerState *******************************************
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHealCancelled); \
	DECLARE_FUNCTION(execHandleHealCompleted); \
	DECLARE_FUNCTION(execHandleHealStarted); \
	DECLARE_FUNCTION(execOnInventoryChanged);


PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_PlayerState_NoRegister();

#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatableWidget_PlayerState(); \
	friend struct Z_Construct_UClass_UActivatableWidget_PlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_PlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(UActivatableWidget_PlayerState, UBaseCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UActivatableWidget_PlayerState_NoRegister) \
	DECLARE_SERIALIZER(UActivatableWidget_PlayerState)


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatableWidget_PlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActivatableWidget_PlayerState(UActivatableWidget_PlayerState&&) = delete; \
	UActivatableWidget_PlayerState(const UActivatableWidget_PlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidget_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidget_PlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatableWidget_PlayerState) \
	NO_API virtual ~UActivatableWidget_PlayerState();


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_19_PROLOG
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActivatableWidget_PlayerState;

// ********** End Class UActivatableWidget_PlayerState *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
