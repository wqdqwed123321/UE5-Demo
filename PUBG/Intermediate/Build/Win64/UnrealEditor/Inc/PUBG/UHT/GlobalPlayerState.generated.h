// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/GlobalPlayerState.h"

#ifdef PUBG_GlobalPlayerState_generated_h
#error "GlobalPlayerState.generated.h already included, missing '#pragma once' in GlobalPlayerState.h"
#endif
#define PUBG_GlobalPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGlobalPlayerState *******************************************************
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState_NoRegister();

#define FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobalPlayerState(); \
	friend struct Z_Construct_UClass_AGlobalPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AGlobalPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_AGlobalPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AGlobalPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AGlobalPlayerState*>(this); }


#define FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGlobalPlayerState(AGlobalPlayerState&&) = delete; \
	AGlobalPlayerState(const AGlobalPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobalPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobalPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlobalPlayerState) \
	NO_API virtual ~AGlobalPlayerState();


#define FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_17_PROLOG
#define FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_20_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGlobalPlayerState;

// ********** End Class AGlobalPlayerState *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
