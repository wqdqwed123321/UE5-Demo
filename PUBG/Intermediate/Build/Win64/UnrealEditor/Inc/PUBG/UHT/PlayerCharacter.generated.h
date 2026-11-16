// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PlayerCharacter.h"

#ifdef PUBG_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PUBG_PlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAnimMontage;
class UNiagaraSystem;
class UPrimitiveComponent;
enum class ECharacterGait : uint8;
enum class ECharacterHeldSlot : uint8;
enum class ECharacterStance : uint8;
struct FHitResult;
struct FVector_NetQuantize;

// ********** Begin Delegate FOnWeaponSlotChanged **************************************************
#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_24_DELEGATE \
PUBG_API void FOnWeaponSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponSlotChanged);


// ********** End Delegate FOnWeaponSlotChanged ****************************************************

// ********** Begin Class APlayerCharacter *********************************************************
#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlaySwitchFireModeMontage_Implementation(UAnimMontage* MontageToPlay); \
	virtual void Multicast_PlayReloadMontage_Implementation(UAnimMontage* MontageToPlay); \
	virtual void Multicast_FireEffect_Implementation(FVector_NetQuantize const& MuzzleLocation); \
	virtual void Server_SetLeanDirection_Implementation(float NewLeanDirection); \
	virtual void Server_ToggleFireMode_Implementation(); \
	virtual void Server_StartReload_Implementation(UAnimMontage* MontageToPlay); \
	virtual void Server_Fire_Implementation(FVector_NetQuantize const& MuzzleLocation, FVector_NetQuantize const& AimPoint); \
	virtual void Server_FinishReload_Implementation(); \
	virtual void Server_SetCharacterHeldSlot_Implementation(ECharacterHeldSlot NewSlot); \
	virtual void Server_SetActorYaw_Implementation(float NewYaw); \
	virtual void Server_SetControllerRotator_Implementation(float NewYaw, float NewPitch); \
	virtual void Server_SetCharacterStance_Implementation(ECharacterStance NewCharacterStance); \
	virtual void Server_SetCharacterGait_Implementation(ECharacterGait NewCharacterGait); \
	virtual void Multicast_PlaySwitchWeaponMontage_Implementation(UAnimMontage* MontageToPlay, float PlayRate); \
	virtual void Multicast_PlayImpactFX_Implementation(FVector ImpactPoint, FVector ImpactNormal, UNiagaraSystem* ImpactFX); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap); \
	DECLARE_FUNCTION(execMulticast_PlaySwitchFireModeMontage); \
	DECLARE_FUNCTION(execMulticast_PlayReloadMontage); \
	DECLARE_FUNCTION(execMulticast_FireEffect); \
	DECLARE_FUNCTION(execServer_SetLeanDirection); \
	DECLARE_FUNCTION(execServer_ToggleFireMode); \
	DECLARE_FUNCTION(execServer_StartReload); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execServer_FinishReload); \
	DECLARE_FUNCTION(execServer_SetCharacterHeldSlot); \
	DECLARE_FUNCTION(execServer_SetActorYaw); \
	DECLARE_FUNCTION(execServer_SetControllerRotator); \
	DECLARE_FUNCTION(execServer_SetCharacterStance); \
	DECLARE_FUNCTION(execServer_SetCharacterGait); \
	DECLARE_FUNCTION(execOnSwitchWeaponMontageBlendOut); \
	DECLARE_FUNCTION(execOnSwitchWeaponMontageEnded); \
	DECLARE_FUNCTION(execOnSwitchFireModeMontageEnded); \
	DECLARE_FUNCTION(execOnReloadMontageEnded); \
	DECLARE_FUNCTION(execOnRep_CharacterHeldSlot); \
	DECLARE_FUNCTION(execOnWeaponAttachmentsChangedHandler); \
	DECLARE_FUNCTION(execOnInventoryChangedHandler); \
	DECLARE_FUNCTION(execOnRep_CharacterStance); \
	DECLARE_FUNCTION(execOnRep_CharacterGait); \
	DECLARE_FUNCTION(execAnimNotify_AttachWeaponToBack); \
	DECLARE_FUNCTION(execAnimNotify_AttachWeaponToHand); \
	DECLARE_FUNCTION(execMulticast_PlaySwitchWeaponMontage); \
	DECLARE_FUNCTION(execMulticast_PlayImpactFX); \
	DECLARE_FUNCTION(execShouldEnableWeaponIK); \
	DECLARE_FUNCTION(execShouldShowCrosshairCenter); \
	DECLARE_FUNCTION(execShouldShowCrosshairBars); \
	DECLARE_FUNCTION(execGetCrosshairSpreadDegrees); \
	DECLARE_FUNCTION(execClient_InitASC); \
	DECLARE_FUNCTION(execServer_InitASC);


#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_CALLBACK_WRAPPERS
PUBG_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_APlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterGait=NETFIELD_REP_START, \
		CharacterStance, \
		CharacterHeldSlot, \
		ControllerRotator_Yaw, \
		ControllerRotator_Pitch, \
		CurrentLeanDirection, \
		NETFIELD_REP_END=CurrentLeanDirection	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&) = delete; \
	APlayerCharacter(const APlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_26_PROLOG
#define FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_CALLBACK_WRAPPERS \
	FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCharacter;

// ********** End Class APlayerCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
