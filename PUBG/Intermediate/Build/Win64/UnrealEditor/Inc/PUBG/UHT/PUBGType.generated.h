// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PUBGType.h"

#ifdef PUBG_PUBGType_generated_h
#error "PUBGType.generated.h already included, missing '#pragma once' in PUBGType.h"
#endif
#define PUBG_PUBGType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemAttribute ****************************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAttribute_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FItemAttribute;
// ********** End ScriptStruct FItemAttribute ******************************************************

// ********** Begin ScriptStruct FItemAttachment ***************************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAttachment_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FItemAttachment;
// ********** End ScriptStruct FItemAttachment *****************************************************

// ********** Begin ScriptStruct FRecoilSettings ***************************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecoilSettings_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FRecoilSettings;
// ********** End ScriptStruct FRecoilSettings *****************************************************

// ********** Begin ScriptStruct FSpreadSettings ***************************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpreadSettings_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FSpreadSettings;
// ********** End ScriptStruct FSpreadSettings *****************************************************

// ********** Begin ScriptStruct FCharacterDirectionAnimations *************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FCharacterDirectionAnimations;
// ********** End ScriptStruct FCharacterDirectionAnimations ***************************************

// ********** Begin ScriptStruct FCharacterTurnAngleAnimations *************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct();


struct FCharacterTurnAngleAnimations;
// ********** End ScriptStruct FCharacterTurnAngleAnimations ***************************************

// ********** Begin ScriptStruct FCharacterGaitSettings ********************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCharacterGaitSettings;
// ********** End ScriptStruct FCharacterGaitSettings **********************************************

// ********** Begin ScriptStruct FTPPCameraSettings ************************************************
#define FID_PUBG_Source_PUBG_Public_PUBGType_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTPPCameraSettings_Statics; \
	PUBG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTPPCameraSettings;
// ********** End ScriptStruct FTPPCameraSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_PUBGType_h

// ********** Begin Enum ECharacterDirection *******************************************************
#define FOREACH_ENUM_ECHARACTERDIRECTION(op) \
	op(ECharacterDirection::Forward) \
	op(ECharacterDirection::Backward) \
	op(ECharacterDirection::Left) \
	op(ECharacterDirection::Right) 

enum class ECharacterDirection : uint8;
template<> struct TIsUEnumClass<ECharacterDirection> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<ECharacterDirection>();
// ********** End Enum ECharacterDirection *********************************************************

// ********** Begin Enum ECharacterStance **********************************************************
#define FOREACH_ENUM_ECHARACTERSTANCE(op) \
	op(ECharacterStance::Stand) \
	op(ECharacterStance::Crouch) 

enum class ECharacterStance : uint8;
template<> struct TIsUEnumClass<ECharacterStance> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<ECharacterStance>();
// ********** End Enum ECharacterStance ************************************************************

// ********** Begin Enum ECharacterGait ************************************************************
#define FOREACH_ENUM_ECHARACTERGAIT(op) \
	op(ECharacterGait::Walk) \
	op(ECharacterGait::Jog) \
	op(ECharacterGait::Sprint) 

enum class ECharacterGait : uint8;
template<> struct TIsUEnumClass<ECharacterGait> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<ECharacterGait>();
// ********** End Enum ECharacterGait **************************************************************

// ********** Begin Enum ECharacterHeldSlot ********************************************************
#define FOREACH_ENUM_ECHARACTERHELDSLOT(op) \
	op(ECharacterHeldSlot::Unarmed) \
	op(ECharacterHeldSlot::Primary1) \
	op(ECharacterHeldSlot::Primary2) \
	op(ECharacterHeldSlot::Secondary) \
	op(ECharacterHeldSlot::Melee) \
	op(ECharacterHeldSlot::Throwable) 

enum class ECharacterHeldSlot : uint8;
template<> struct TIsUEnumClass<ECharacterHeldSlot> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<ECharacterHeldSlot>();
// ********** End Enum ECharacterHeldSlot **********************************************************

// ********** Begin Enum EAsyncPushWidgetState *****************************************************
#define FOREACH_ENUM_EASYNCPUSHWIDGETSTATE(op) \
	op(EAsyncPushWidgetState::OnCreatedBeforePush) \
	op(EAsyncPushWidgetState::AfterPush) 

enum class EAsyncPushWidgetState : uint8;
template<> struct TIsUEnumClass<EAsyncPushWidgetState> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EAsyncPushWidgetState>();
// ********** End Enum EAsyncPushWidgetState *******************************************************

// ********** Begin Enum EBackpackDragSource *******************************************************
#define FOREACH_ENUM_EBACKPACKDRAGSOURCE(op) \
	op(EBackpackDragSource::Ground) \
	op(EBackpackDragSource::Backpack) \
	op(EBackpackDragSource::Equipment) 

enum class EBackpackDragSource : uint8;
template<> struct TIsUEnumClass<EBackpackDragSource> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EBackpackDragSource>();
// ********** End Enum EBackpackDragSource *********************************************************

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::None) \
	op(EItemType::Weapon) \
	op(EItemType::MeleeWeapon) \
	op(EItemType::Ammo) \
	op(EItemType::Healing) \
	op(EItemType::Energy) \
	op(EItemType::Attachment) \
	op(EItemType::Equipment) \
	op(EItemType::Throwable) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

// ********** Begin Enum EEquipmentSlot ************************************************************
#define FOREACH_ENUM_EEQUIPMENTSLOT(op) \
	op(EEquipmentSlot::None) \
	op(EEquipmentSlot::Helmet) \
	op(EEquipmentSlot::Vest) \
	op(EEquipmentSlot::Backpack) \
	op(EEquipmentSlot::Head) \
	op(EEquipmentSlot::Top) \
	op(EEquipmentSlot::Jacket) \
	op(EEquipmentSlot::Legs) \
	op(EEquipmentSlot::Shoes) \
	op(EEquipmentSlot::Hands) \
	op(EEquipmentSlot::Glasses) \
	op(EEquipmentSlot::Mask) 

enum class EEquipmentSlot : uint8;
template<> struct TIsUEnumClass<EEquipmentSlot> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EEquipmentSlot>();
// ********** End Enum EEquipmentSlot **************************************************************

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Rifle) \
	op(EWeaponType::MarksmanRifle) \
	op(EWeaponType::Sniper) \
	op(EWeaponType::Smg) \
	op(EWeaponType::Shotgun) \
	op(EWeaponType::Pistol) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Enum EBackpackListMode *********************************************************
#define FOREACH_ENUM_EBACKPACKLISTMODE(op) \
	op(EBackpackListMode::Inventory) \
	op(EBackpackListMode::Nearby) 

enum class EBackpackListMode : uint8;
template<> struct TIsUEnumClass<EBackpackListMode> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EBackpackListMode>();
// ********** End Enum EBackpackListMode ***********************************************************

// ********** Begin Enum EAmmoType *****************************************************************
#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::Ammo_556) \
	op(EAmmoType::Ammo_762) \
	op(EAmmoType::Ammo_5mm) \
	op(EAmmoType::Ammo_9mm) \
	op(EAmmoType::Ammo_12G) 

enum class EAmmoType : uint8;
template<> struct TIsUEnumClass<EAmmoType> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EAmmoType>();
// ********** End Enum EAmmoType *******************************************************************

// ********** Begin Enum EWeaponFireMode ***********************************************************
#define FOREACH_ENUM_EWEAPONFIREMODE(op) \
	op(EWeaponFireMode::SemiAuto) \
	op(EWeaponFireMode::FullAuto) \
	op(EWeaponFireMode::Burst) 

enum class EWeaponFireMode : uint8;
template<> struct TIsUEnumClass<EWeaponFireMode> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EWeaponFireMode>();
// ********** End Enum EWeaponFireMode *************************************************************

// ********** Begin Enum EAttachmentSlot ***********************************************************
#define FOREACH_ENUM_EATTACHMENTSLOT(op) \
	op(EAttachmentSlot::Scope) \
	op(EAttachmentSlot::CantedSight) \
	op(EAttachmentSlot::Muzzle) \
	op(EAttachmentSlot::Grip) \
	op(EAttachmentSlot::Magazine) \
	op(EAttachmentSlot::Stock) 

enum class EAttachmentSlot : uint8;
template<> struct TIsUEnumClass<EAttachmentSlot> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EAttachmentSlot>();
// ********** End Enum EAttachmentSlot *************************************************************

// ********** Begin Enum EThrowMode ****************************************************************
#define FOREACH_ENUM_ETHROWMODE(op) \
	op(EThrowMode::Overhand) \
	op(EThrowMode::Underhand) 

enum class EThrowMode : uint8;
template<> struct TIsUEnumClass<EThrowMode> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EThrowMode>();
// ********** End Enum EThrowMode ******************************************************************

// ********** Begin Enum ECharacterLifeState *******************************************************
#define FOREACH_ENUM_ECHARACTERLIFESTATE(op) \
	op(ECharacterLifeState::Alive) \
	op(ECharacterLifeState::Downed) \
	op(ECharacterLifeState::Dead) 

enum class ECharacterLifeState : uint8;
template<> struct TIsUEnumClass<ECharacterLifeState> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<ECharacterLifeState>();
// ********** End Enum ECharacterLifeState *********************************************************

// ********** Begin Enum EKillFeedType *************************************************************
#define FOREACH_ENUM_EKILLFEEDTYPE(op) \
	op(EKillFeedType::Knock) \
	op(EKillFeedType::Eliminate) 

enum class EKillFeedType : uint8;
template<> struct TIsUEnumClass<EKillFeedType> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EKillFeedType>();
// ********** End Enum EKillFeedType ***************************************************************

// ********** Begin Enum EKillMessageRole **********************************************************
#define FOREACH_ENUM_EKILLMESSAGEROLE(op) \
	op(EKillMessageRole::Killer) \
	op(EKillMessageRole::Victim) \
	op(EKillMessageRole::Teammate) 

enum class EKillMessageRole : uint8;
template<> struct TIsUEnumClass<EKillMessageRole> { enum { Value = true }; };
template<> PUBG_API UEnum* StaticEnum<EKillMessageRole>();
// ********** End Enum EKillMessageRole ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
