// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/BackpackItemFragment.h"

#ifdef PUBG_BackpackItemFragment_generated_h
#error "BackpackItemFragment.generated.h already included, missing '#pragma once' in BackpackItemFragment.h"
#endif
#define PUBG_BackpackItemFragment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBackpackItemFragment ****************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackpackItemFragment(); \
	friend struct Z_Construct_UClass_UBackpackItemFragment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackpackItemFragment, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UBackpackItemFragment_NoRegister) \
	DECLARE_SERIALIZER(UBackpackItemFragment)


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackpackItemFragment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackpackItemFragment(UBackpackItemFragment&&) = delete; \
	UBackpackItemFragment(const UBackpackItemFragment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackpackItemFragment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackpackItemFragment); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackpackItemFragment) \
	NO_API virtual ~UBackpackItemFragment();


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_11_PROLOG
#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_14_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackpackItemFragment;

// ********** End Class UBackpackItemFragment ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
