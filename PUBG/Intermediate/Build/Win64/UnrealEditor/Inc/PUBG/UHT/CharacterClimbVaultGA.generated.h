// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbility/CharacterClimbVaultGA.h"

#ifdef PUBG_CharacterClimbVaultGA_generated_h
#error "CharacterClimbVaultGA.generated.h already included, missing '#pragma once' in CharacterClimbVaultGA.h"
#endif
#define PUBG_CharacterClimbVaultGA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterClimbVaultGA ***************************************************
PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister();

#define FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterClimbVaultGA(); \
	friend struct Z_Construct_UClass_UCharacterClimbVaultGA_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterClimbVaultGA, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister) \
	DECLARE_SERIALIZER(UCharacterClimbVaultGA)


#define FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterClimbVaultGA(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterClimbVaultGA(UCharacterClimbVaultGA&&) = delete; \
	UCharacterClimbVaultGA(const UCharacterClimbVaultGA&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterClimbVaultGA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterClimbVaultGA); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterClimbVaultGA) \
	NO_API virtual ~UCharacterClimbVaultGA();


#define FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_12_PROLOG
#define FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_15_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterClimbVaultGA;

// ********** End Class UCharacterClimbVaultGA *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
