// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"

#ifdef PUBG_CharacterAbilitySystemComponent_generated_h
#error "CharacterAbilitySystemComponent.generated.h already included, missing '#pragma once' in CharacterAbilitySystemComponent.h"
#endif
#define PUBG_CharacterAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnHealStartedDelegate ************************************************
#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_9_DELEGATE \
PUBG_API void FOnHealStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealStartedDelegate, float UseTime, float HealAmount, float MaxHealthPercentage);


// ********** End Delegate FOnHealStartedDelegate **************************************************

// ********** Begin Delegate FOnHealCompletedDelegate **********************************************
#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_10_DELEGATE \
PUBG_API void FOnHealCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealCompletedDelegate);


// ********** End Delegate FOnHealCompletedDelegate ************************************************

// ********** Begin Delegate FOnHealCancelledDelegate **********************************************
#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_11_DELEGATE \
PUBG_API void FOnHealCancelledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealCancelledDelegate);


// ********** End Delegate FOnHealCancelledDelegate ************************************************

// ********** Begin Class UCharacterAbilitySystemComponent *****************************************
#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnHealFinished_Implementation(bool bSuccess); \
	virtual void Client_OnHealStarted_Implementation(float InUseTime, float InHealAmount, float InMaxHealthPercentage); \
	DECLARE_FUNCTION(execClient_OnHealFinished); \
	DECLARE_FUNCTION(execClient_OnHealStarted);


#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_CALLBACK_WRAPPERS
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();

#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterAbilitySystemComponent)


#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterAbilitySystemComponent(UCharacterAbilitySystemComponent&&) = delete; \
	UCharacterAbilitySystemComponent(const UCharacterAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAbilitySystemComponent) \
	NO_API virtual ~UCharacterAbilitySystemComponent();


#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_16_PROLOG
#define FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_CALLBACK_WRAPPERS \
	FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterAbilitySystemComponent;

// ********** End Class UCharacterAbilitySystemComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
