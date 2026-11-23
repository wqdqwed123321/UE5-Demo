// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGFastArray.h"
#include "PUBGType.h"
#include "Components/ActorComponent.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "BackpackManagerComponent.generated.h"

class UBackpackItemDefinition;
class UBackpackItemInstance;
class APickupItem;
class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterPickupRange, APickupItem*, PickupItemActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeavePickupRange, APickupItem*, PickupItemActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponAttachmentsChanged);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PUBG_API UBackpackManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBackpackManagerComponent();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	
protected:
	UBackpackItemInstance* CreateWeaponInstance(UBackpackItemDefinition* ItemDef, int32 Quantity);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
public:
	void OnFastArrayItemAdded(UBackpackItemInstance* Item);
	void OnFastArrayItemChanged(UBackpackItemInstance* Item);
	void OnFastArrayItemRemoved(UBackpackItemInstance* Item);
	
public:
	UFUNCTION(Server, Reliable)
	void Server_PickupItem(APickupItem* ItemToPickup);
	
	UFUNCTION(Server, Reliable)
	void Server_DropItem(UBackpackItemInstance* ItemInstance);
	
	UFUNCTION(Server, Reliable)
	void Server_EquipGroundWeaponToSlot(APickupItem* GroundItem, int32 TargetSlotIndex);
	
	UFUNCTION(Server, Reliable)
	void Server_EquipGroundEquipmentToSlot(APickupItem* GroundItem, EEquipmentSlot TargetSlot);
	
	UFUNCTION(Server, Reliable)
	void Server_DropWeaponSlot(int32 SlotIndex);
	
	UFUNCTION(Server, Reliable)
	void Server_DropEquipmentSlot(EEquipmentSlot TargetSlot);
	
	UFUNCTION(Server, Reliable)
	void Server_SwapWeaponSlots(int32 IndexA, int32 IndexB);
	
	UFUNCTION(Server, Reliable)
	void Server_EquipBackpackItemToWeaponSlot(UBackpackItemInstance* ItemInstance, int32 TargetSlotIndex);
	
	UFUNCTION(Server, Reliable)
	void Server_UnequipWeaponSlotToBackpack(int32 SlotIndex);
	
	UFUNCTION(Server, Reliable)
	void Server_EquipAttachmentToWeapon(UBackpackItemInstance* BagAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot);

	UFUNCTION(Server, Reliable)
	void Server_EquipGroundAttachmentToWeapon(APickupItem* GroundAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot);

	UFUNCTION(Server, Reliable)
	void Server_UnequipAttachmentToBackpack(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot);

	UFUNCTION(Server, Reliable)
	void Server_DropAttachment(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot);
	
	UFUNCTION(Server, Reliable)
	void Server_QuickPickupItem(APickupItem* ItemToPickup);
	
public:
	bool AddItemToNearbyPickupItems(APickupItem* PickupItemActor);
	TArray<APickupItem*> GetNearbyPickupItems() const { return NearbyPickupItems; }
	TArray<UBackpackItemInstance*> GetBackpackItems() const;
	UBackpackItemInstance* GetWeaponSlotItem(int32 SlotIndex) const;
	UBackpackItemInstance* GetEquipmentItem(EEquipmentSlot SlotType) const;
	float GetCurrentWeight() const;
	float GetMaxWeight() const;
	int32 AddItemToBackpack(UBackpackItemDefinition* ItemDef, int32 Amount);
	void RemoveItemFromNearbyPickupItems(APickupItem* PickupItemActor);
	void ConsumeBackpackItem(UBackpackItemInstance* ItemInstance, int32 AmountToConsume);
	bool ConsumeWeaponSlotItem(int32 SlotIndex, int32 Amount);
	bool CanAutoEquipAttachment(UBackpackItemDefinition* AttachDef) const;
	
protected:
	UAbilitySystemComponent* GetASC() const;
	void ApplyBackpackCapacityGE(float InDeltaCapacity);
	void ApplyMaxBackpackCapacityGE(float DeltaCapacity);
	float GetItemUnitWeight(UBackpackItemDefinition* ItemDef) const;
	float GetBackpackExtraCapacity(UBackpackItemDefinition* ItemDef) const;
	EEquipmentSlot GetEquipmentSlotForItem(UBackpackItemDefinition* ItemDef) const;
	int32 FindEmptyWeaponSlotForItem(UBackpackItemDefinition* ItemDef) const;
	bool TryAutoEquipGroundAttachment(APickupItem* GroundAttachment);
	void AddGroundItemToBackpack(APickupItem* GroundItem);

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> GE_BackpackCapacity_SetByCaller;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag CapacitySetByCallerTag;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> GE_MaxBackpackCapacity_SetByCaller;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag MaxCapacitySetByCallerTag;

public:
	UPROPERTY(BlueprintAssignable)
	FOnEnterPickupRange OnEnterPickupRange;

	UPROPERTY(BlueprintAssignable)
	FOnLeavePickupRange OnLeavePickupRange;

	UPROPERTY(BlueprintAssignable)
	FOnInventoryChanged OnInventoryChanged;

	UPROPERTY(BlueprintAssignable)
	FOnWeaponAttachmentsChanged OnWeaponAttachmentsChanged;
	
public:
	UPROPERTY()
	TArray<TObjectPtr<APickupItem>> NearbyPickupItems;
	
	UPROPERTY(Replicated)
	FBackpackArrayData BackpackItems;
	
	UPROPERTY(Replicated)
	FBackpackArrayData WeaponSlots;
	
	UPROPERTY(Replicated)
	FBackpackArrayData EquipmentSlots;
	
private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APickupItem> DropItemClass;
};