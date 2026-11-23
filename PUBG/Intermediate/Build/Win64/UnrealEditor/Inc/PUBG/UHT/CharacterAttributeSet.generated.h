// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSet/CharacterAttributeSet.h"

#ifdef PUBG_CharacterAttributeSet_generated_h
#error "CharacterAttributeSet.generated.h already included, missing '#pragma once' in CharacterAttributeSet.h"
#endif
#define PUBG_CharacterAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UCharacterAttributeSet ***************************************************
#define FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_DownedMaxHealth); \
	DECLARE_FUNCTION(execOnRep_DownedHealth); \
	DECLARE_FUNCTION(execOnRep_MaxBackpackCapacity); \
	DECLARE_FUNCTION(execOnRep_BackpackCapacity); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();

#define FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAttributeSet(); \
	friend struct Z_Construct_UClass_UCharacterAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UCharacterAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UCharacterAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		BackpackCapacity, \
		MaxBackpackCapacity, \
		DownedHealth, \
		DownedMaxHealth, \
		NETFIELD_REP_END=DownedMaxHealth	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UCharacterAttributeSet) \
public:


#define FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterAttributeSet(UCharacterAttributeSet&&) = delete; \
	UCharacterAttributeSet(const UCharacterAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAttributeSet) \
	NO_API virtual ~UCharacterAttributeSet();


#define FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_13_PROLOG
#define FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterAttributeSet;

// ********** End Class UCharacterAttributeSet *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
