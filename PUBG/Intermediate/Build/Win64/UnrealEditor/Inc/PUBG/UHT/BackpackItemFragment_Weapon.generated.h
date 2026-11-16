// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/BackpackItemFragment_Weapon.h"

#ifdef PUBG_BackpackItemFragment_Weapon_generated_h
#error "BackpackItemFragment_Weapon.generated.h already included, missing '#pragma once' in BackpackItemFragment_Weapon.h"
#endif
#define PUBG_BackpackItemFragment_Weapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBackpackItemFragment_Weapon *********************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackpackItemFragment_Weapon(); \
	friend struct Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackpackItemFragment_Weapon, UBackpackItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister) \
	DECLARE_SERIALIZER(UBackpackItemFragment_Weapon)


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackpackItemFragment_Weapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackpackItemFragment_Weapon(UBackpackItemFragment_Weapon&&) = delete; \
	UBackpackItemFragment_Weapon(const UBackpackItemFragment_Weapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackpackItemFragment_Weapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackpackItemFragment_Weapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackpackItemFragment_Weapon) \
	NO_API virtual ~UBackpackItemFragment_Weapon();


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_15_PROLOG
#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_18_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackpackItemFragment_Weapon;

// ********** End Class UBackpackItemFragment_Weapon ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
