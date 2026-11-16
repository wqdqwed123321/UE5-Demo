// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/BackpackManagerComponent.h"

#ifdef PUBG_BackpackManagerComponent_generated_h
#error "BackpackManagerComponent.generated.h already included, missing '#pragma once' in BackpackManagerComponent.h"
#endif
#define PUBG_BackpackManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APickupItem;
class UBackpackItemInstance;
enum class EAttachmentSlot : uint8;
enum class EEquipmentSlot : uint8;

// ********** Begin Delegate FOnEnterPickupRange ***************************************************
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_18_DELEGATE \
PUBG_API void FOnEnterPickupRange_DelegateWrapper(const FMulticastScriptDelegate& OnEnterPickupRange, APickupItem* PickupItemActor);


// ********** End Delegate FOnEnterPickupRange *****************************************************

// ********** Begin Delegate FOnLeavePickupRange ***************************************************
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_19_DELEGATE \
PUBG_API void FOnLeavePickupRange_DelegateWrapper(const FMulticastScriptDelegate& OnLeavePickupRange, APickupItem* PickupItemActor);


// ********** End Delegate FOnLeavePickupRange *****************************************************

// ********** Begin Delegate FOnInventoryChanged ***************************************************
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_20_DELEGATE \
PUBG_API void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged);


// ********** End Delegate FOnInventoryChanged *****************************************************

// ********** Begin Delegate FOnWeaponAttachmentsChanged *******************************************
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_21_DELEGATE \
PUBG_API void FOnWeaponAttachmentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttachmentsChanged);


// ********** End Delegate FOnWeaponAttachmentsChanged *********************************************

// ********** Begin Class UBackpackManagerComponent ************************************************
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_DropAttachment_Implementation(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot); \
	virtual void Server_UnequipAttachmentToBackpack_Implementation(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot); \
	virtual void Server_EquipGroundAttachmentToWeapon_Implementation(APickupItem* GroundAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot); \
	virtual void Server_EquipAttachmentToWeapon_Implementation(UBackpackItemInstance* BagAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot); \
	virtual void Server_UnequipWeaponSlotToBackpack_Implementation(int32 SlotIndex); \
	virtual void Server_EquipBackpackItemToWeaponSlot_Implementation(UBackpackItemInstance* ItemInstance, int32 TargetSlotIndex); \
	virtual void Server_SwapWeaponSlots_Implementation(int32 IndexA, int32 IndexB); \
	virtual void Server_DropEquipmentSlot_Implementation(EEquipmentSlot TargetSlot); \
	virtual void Server_DropWeaponSlot_Implementation(int32 SlotIndex); \
	virtual void Server_EquipGroundEquipmentToSlot_Implementation(APickupItem* GroundItem, EEquipmentSlot TargetSlot); \
	virtual void Server_EquipGroundWeaponToSlot_Implementation(APickupItem* GroundItem, int32 TargetSlotIndex); \
	virtual void Server_DropItem_Implementation(UBackpackItemInstance* ItemInstance); \
	virtual void Server_PickupItem_Implementation(APickupItem* ItemToPickup); \
	DECLARE_FUNCTION(execServer_DropAttachment); \
	DECLARE_FUNCTION(execServer_UnequipAttachmentToBackpack); \
	DECLARE_FUNCTION(execServer_EquipGroundAttachmentToWeapon); \
	DECLARE_FUNCTION(execServer_EquipAttachmentToWeapon); \
	DECLARE_FUNCTION(execServer_UnequipWeaponSlotToBackpack); \
	DECLARE_FUNCTION(execServer_EquipBackpackItemToWeaponSlot); \
	DECLARE_FUNCTION(execServer_SwapWeaponSlots); \
	DECLARE_FUNCTION(execServer_DropEquipmentSlot); \
	DECLARE_FUNCTION(execServer_DropWeaponSlot); \
	DECLARE_FUNCTION(execServer_EquipGroundEquipmentToSlot); \
	DECLARE_FUNCTION(execServer_EquipGroundWeaponToSlot); \
	DECLARE_FUNCTION(execServer_DropItem); \
	DECLARE_FUNCTION(execServer_PickupItem);


#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_CALLBACK_WRAPPERS
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();

#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackpackManagerComponent(); \
	friend struct Z_Construct_UClass_UBackpackManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackpackManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UBackpackManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UBackpackManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BackpackItems=NETFIELD_REP_START, \
		WeaponSlots, \
		EquipmentSlots, \
		NETFIELD_REP_END=EquipmentSlots	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackpackManagerComponent(UBackpackManagerComponent&&) = delete; \
	UBackpackManagerComponent(const UBackpackManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackpackManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackpackManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBackpackManagerComponent) \
	NO_API virtual ~UBackpackManagerComponent();


#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_23_PROLOG
#define FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_CALLBACK_WRAPPERS \
	FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackpackManagerComponent;

// ********** End Class UBackpackManagerComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
