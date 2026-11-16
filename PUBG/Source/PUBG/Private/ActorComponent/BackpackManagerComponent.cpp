// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/BackpackManagerComponent.h"

#include "Actor/PickupItem.h"
#include "Components/CapsuleComponent.h"
#include "Engine/ActorChannel.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Stackable.h"
#include "Object/BackpackItemInstance.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemFragment_Durability.h"
#include "Object/BackpackItemFragment_Weight.h"
#include "Object/BackpackItemFragment_Backpack.h"
#include "PUBGGameplayTag.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "PlayerState/GlobalPlayerState.h"

UBackpackManagerComponent::UBackpackManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	BackpackItems.OwnerComponent = this;
	WeaponSlots.OwnerComponent = this;
	EquipmentSlots.OwnerComponent = this;
	
	SetIsReplicatedByDefault(true);
}

void UBackpackManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	
	WeaponSlots.Entries.SetNum(5);
	WeaponSlots.MarkArrayDirty();
	
	EquipmentSlots.Entries.SetNum(static_cast<int32>(EEquipmentSlot::Mask) + 1);
	EquipmentSlots.MarkArrayDirty();

	if (UAbilitySystemComponent* ASC = GetASC())
	{
		if (ASC->GetNumericAttribute(UCharacterAttributeSet::GetMaxBackpackCapacityAttribute()) <= 0.f)
		{
			ASC->SetNumericAttributeBase(UCharacterAttributeSet::GetMaxBackpackCapacityAttribute(), 70.f);
		}
	}
}

void UBackpackManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(UBackpackManagerComponent, BackpackItems);
	DOREPLIFETIME(UBackpackManagerComponent, WeaponSlots);
	DOREPLIFETIME(UBackpackManagerComponent, EquipmentSlots);
}

bool UBackpackManagerComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	
	auto ReplicateArray = [&](const FBackpackArrayData& ArrayData)
	{
		for (const FBackpackSlotData& Slot : ArrayData.Entries)
		{
			UBackpackItemInstance* ItemInst = Slot.ItemInstance.Get();
			if (ItemInst && ItemInst->IsSupportedForNetworking())
			{
				bWroteSomething |= Channel->ReplicateSubobject(ItemInst, *Bunch, *RepFlags);
				
				for (const FItemAttachment& Attach : ItemInst->ItemAttachments)
				{
					UBackpackItemInstance* AttachInst = Attach.ItemInstance.Get();
					if (AttachInst && AttachInst->IsSupportedForNetworking())
					{
						bWroteSomething |= Channel->ReplicateSubobject(AttachInst, *Bunch, *RepFlags);
					}
				}
			}
		}
	};

	ReplicateArray(BackpackItems);
	ReplicateArray(WeaponSlots);
	ReplicateArray(EquipmentSlots);

	return bWroteSomething;
}

void UBackpackManagerComponent::OnFastArrayItemAdded(UBackpackItemInstance* Item)
{
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::OnFastArrayItemChanged(UBackpackItemInstance* Item)
{
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::OnFastArrayItemRemoved(UBackpackItemInstance* Item)
{
	OnInventoryChanged.Broadcast();
}

UAbilitySystemComponent* UBackpackManagerComponent::GetASC() const
{
	if (AGlobalPlayerState* PS = Cast<AGlobalPlayerState>(GetOwner()))
	{
		return PS->GetAbilitySystemComponent();
	}
	return nullptr;
}

float UBackpackManagerComponent::GetItemUnitWeight(UBackpackItemDefinition* ItemDef) const
{
	if (!ItemDef) return 0.f;
	
	UBackpackItemFragment_Weight* WeightFrag = Cast<UBackpackItemFragment_Weight>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Weight::StaticClass()));
	return WeightFrag->Weight;
}

float UBackpackManagerComponent::GetBackpackExtraCapacity(UBackpackItemDefinition* ItemDef) const
{
	if (!ItemDef) return 0.f;
	
	UBackpackItemFragment_Backpack* BackpackFrag = Cast<UBackpackItemFragment_Backpack>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Backpack::StaticClass()));
	return BackpackFrag->Capacity;
}

float UBackpackManagerComponent::GetCurrentWeight() const
{
	if (UAbilitySystemComponent* ASC = GetASC())
	{
		return ASC->GetNumericAttribute(UCharacterAttributeSet::GetBackpackCapacityAttribute());
	}
	return 0.f;
}

float UBackpackManagerComponent::GetMaxWeight() const
{
	if (UAbilitySystemComponent* ASC = GetASC())
	{
		float MaxVal = ASC->GetNumericAttribute(UCharacterAttributeSet::GetMaxBackpackCapacityAttribute());
		if (MaxVal > 0.f) return MaxVal;
	}
	return 70.f;
}

void UBackpackManagerComponent::ApplyBackpackCapacityGE(float InDeltaCapacity)
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC || !GE_BackpackCapacity_SetByCaller || InDeltaCapacity == 0.f) return;

	float CurrentCap = ASC->GetNumericAttribute(UCharacterAttributeSet::GetBackpackCapacityAttribute());
	float MaxCap = ASC->GetNumericAttribute(UCharacterAttributeSet::GetMaxBackpackCapacityAttribute());
	
	float TargetCap = CurrentCap + InDeltaCapacity;
	float SafeTargetCap = FMath::Clamp(TargetCap, 0.f, MaxCap);
	float SafeDelta = SafeTargetCap - CurrentCap;

	if (FMath::IsNearlyZero(SafeDelta)) return;

	FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
	ContextHandle.AddSourceObject(this);

	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(GE_BackpackCapacity_SetByCaller, 1.f, ContextHandle);
	if (SpecHandle.IsValid())
	{
		SpecHandle.Data->SetSetByCallerMagnitude(CapacitySetByCallerTag, SafeDelta);
		ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

void UBackpackManagerComponent::ApplyMaxBackpackCapacityGE(float DeltaCapacity)
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC || !GE_MaxBackpackCapacity_SetByCaller || DeltaCapacity == 0.f) return;

	FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
	ContextHandle.AddSourceObject(this);

	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(GE_MaxBackpackCapacity_SetByCaller, 1.f, ContextHandle);
	if (SpecHandle.IsValid())
	{
		SpecHandle.Data->SetSetByCallerMagnitude(MaxCapacitySetByCallerTag, DeltaCapacity);
		ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

int32 UBackpackManagerComponent::AddItemToBackpack(UBackpackItemDefinition* ItemDef, int32 Amount)
{
	if (!ItemDef || Amount <= 0) return 0;

	float UnitWeight = GetItemUnitWeight(ItemDef);
	if (UnitWeight <= 0.f) return 0;

	float RemainingCapacity = GetMaxWeight() - GetCurrentWeight();
	if (RemainingCapacity <= 0.f) return 0;

	int32 MaxCanAdd = FMath::FloorToInt(RemainingCapacity / UnitWeight);
	int32 ActualAddAmount = FMath::Min(Amount, MaxCanAdd);
	if (ActualAddAmount <= 0) return 0;

	int32 AmountToAdd = ActualAddAmount;
	int32 MaxStack = 1;
	UBackpackItemFragment_Stackable* StackFrag = Cast<UBackpackItemFragment_Stackable>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Stackable::StaticClass()));
	if (StackFrag) { MaxStack = StackFrag->MaxStackSize; }
	
	for (int32 i = 0; i < BackpackItems.Entries.Num(); ++i)
	{
		FBackpackSlotData& Entry = BackpackItems.Entries[i];
		if (Entry.ItemInstance && Entry.ItemInstance->Definition == ItemDef)
		{
			int32 Space = MaxStack - Entry.ItemInstance->Quantity;
			if (Space > 0)
			{
				int32 Add = FMath::Min(Space, AmountToAdd);
				Entry.ItemInstance->Quantity += Add;
				BackpackItems.MarkItemDirty(Entry);
				AmountToAdd -= Add;
				if (AmountToAdd <= 0) break;
			}
		}
	}
	
	while (AmountToAdd > 0)
	{
		int32 NewStack = FMath::Min(AmountToAdd, MaxStack);
		UBackpackItemInstance* NewItem = NewObject<UBackpackItemInstance>(this);
		NewItem->Definition = ItemDef;
		NewItem->Quantity = NewStack;

		FBackpackSlotData NewEntry;
		NewEntry.ItemInstance = NewItem;
		BackpackItems.Entries.Add(NewEntry);
		BackpackItems.MarkItemDirty(BackpackItems.Entries.Last());
		
		AmountToAdd -= NewStack;
	}

	ApplyBackpackCapacityGE(ActualAddAmount * UnitWeight);

	return ActualAddAmount;
}

void UBackpackManagerComponent::Server_EquipGroundWeaponToSlot_Implementation(APickupItem* GroundItem, int32 TargetSlotIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !GroundItem) return;
	if (!WeaponSlots.Entries.IsValidIndex(TargetSlotIndex) || !GroundItem->ItemDefinition) return;

	UBackpackItemDefinition* ItemDef = GroundItem->ItemDefinition.GetDefaultObject();
	if (!ItemDef) return;
	int32 Amount = GroundItem->Quantity;
	
	if (UBackpackItemInstance* OldItem = WeaponSlots.Entries[TargetSlotIndex].ItemInstance)
	{
		if (OldItem->Definition == ItemDef)
		{
			int32 Added = AddItemToBackpack(ItemDef, Amount);
			int32 Remain = Amount - Added;
			if (Remain > 0) GroundItem->Quantity = Remain;
			else GroundItem->Destroy();
			
			OnInventoryChanged.Broadcast();
			return;
		}
		
		if (TargetSlotIndex == 3 || TargetSlotIndex == 4)
		{
			int32 AddedToBag = AddItemToBackpack(OldItem->Definition, OldItem->Quantity);
			int32 RemainInSlot = OldItem->Quantity - AddedToBag;
			
			if (RemainInSlot > 0 && DropItemClass && GetWorld())
			{
				FVector SpawnLoc = GetOwner()->GetActorLocation();
				if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
				{
					if (APawn* P = PS->GetPawn()) 
					{
						SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
						SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
						SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
						SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
					}
				}
				FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
				APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
				if (DroppedActor)
				{
					DroppedActor->InitItemData(OldItem->Definition->GetClass(), RemainInSlot);
					DroppedActor->SavedAttachments = OldItem->ItemAttachments;
				}
			}
		}
		else
		{
			if (DropItemClass && GetWorld())
			{
				FVector SpawnLoc = GetOwner()->GetActorLocation();
				if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
				{
					if (APawn* P = PS->GetPawn()) 
					{
						SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
						SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
						SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
						SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
					}
				}
				FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
				APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
				if (DroppedActor)
				{
					DroppedActor->InitItemData(OldItem->Definition->GetClass(), OldItem->Quantity);
					DroppedActor->SavedAttachments = OldItem->ItemAttachments;
				}
			}
		}
	}
	
	WeaponSlots.Entries[TargetSlotIndex].ItemInstance = nullptr;
	WeaponSlots.MarkItemDirty(WeaponSlots.Entries[TargetSlotIndex]);
	
	if (TargetSlotIndex == 3 || TargetSlotIndex == 4)
	{
		UBackpackItemInstance* NewItem = NewObject<UBackpackItemInstance>(this);
		NewItem->Definition = ItemDef;
		NewItem->Quantity = 1;
		
		if (GroundItem->SavedAttachments.Num() > 0)
		{
			NewItem->ItemAttachments = GroundItem->SavedAttachments;
		}
		
		WeaponSlots.Entries[TargetSlotIndex].ItemInstance = NewItem;
		WeaponSlots.MarkItemDirty(WeaponSlots.Entries[TargetSlotIndex]);
		
		if (Amount > 1)
		{
			int32 AddedToBag = AddItemToBackpack(ItemDef, Amount - 1);
			int32 Remaining = Amount - 1 - AddedToBag;

			if (Remaining > 0)
			{
				GroundItem->Quantity = Remaining;
			}
			else
			{
				GroundItem->Destroy();
			}
		}
		else
		{
			GroundItem->Destroy();
		}
	}
	else
	{
		UBackpackItemInstance* NewItem = NewObject<UBackpackItemInstance>(this);
		NewItem->Definition = ItemDef;
		NewItem->Quantity = Amount;
		NewItem->ItemAttachments = GroundItem->SavedAttachments;
		NewItem->ItemAttributes = GroundItem->SavedAttributes;
		
		FItemAttribute* ExistingMode = NewItem->ItemAttributes.FindByPredicate([](const FItemAttribute& Attr)
		{
			return Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentFireMode;
		});
		
		if (!ExistingMode)
		{
			UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(
				UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
			
			if (WeaponFrag && WeaponFrag->SupportedFireModes.Num() > 0)
			{
				FItemAttribute FireModeAttr;
				FireModeAttr.Tag = PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentFireMode;
				FireModeAttr.Value = static_cast<float>(WeaponFrag->SupportedFireModes[0]);
				NewItem->ItemAttributes.Add(FireModeAttr);
			}
		}

		WeaponSlots.Entries[TargetSlotIndex].ItemInstance = NewItem;
		WeaponSlots.MarkItemDirty(WeaponSlots.Entries[TargetSlotIndex]);
		GroundItem->Destroy();
	}
	
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_EquipGroundEquipmentToSlot_Implementation(APickupItem* GroundItem, EEquipmentSlot TargetSlot)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !GroundItem) return;
	if (TargetSlot == EEquipmentSlot::None) return;
	
	int32 TargetIndex = static_cast<int32>(TargetSlot);
	if (!EquipmentSlots.Entries.IsValidIndex(TargetIndex) || !GroundItem->ItemDefinition) return;

	UBackpackItemDefinition* ItemDef = GroundItem->ItemDefinition.GetDefaultObject();
	int32 Amount = GroundItem->Quantity;
	
	if (TargetSlot == EEquipmentSlot::Backpack || TargetSlot == EEquipmentSlot::Vest)
	{
		float OldExtraCap = 0.f;
		if (UBackpackItemInstance* OldEquip = EquipmentSlots.Entries[TargetIndex].ItemInstance)
		{
			OldExtraCap = GetBackpackExtraCapacity(OldEquip->Definition);
		}
		float NewExtraCap = GetBackpackExtraCapacity(ItemDef);
		
		if (NewExtraCap < OldExtraCap && GetCurrentWeight() > (GetMaxWeight() - OldExtraCap + NewExtraCap))
		{
			return;
		}

		ApplyMaxBackpackCapacityGE(NewExtraCap - OldExtraCap);
	}
	
	if (UBackpackItemInstance* OldEquip = EquipmentSlots.Entries[TargetIndex].ItemInstance)
	{
		if (DropItemClass && GetWorld())
		{
			FVector SpawnLoc = GetOwner()->GetActorLocation();
			if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
			{
				if (APawn* P = PS->GetPawn()) 
				{
					SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
					SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
					SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
					SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
				}
			}
			
			FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
			APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
			if (DroppedActor)
			{
				DroppedActor->InitItemData(OldEquip->Definition->GetClass(), OldEquip->Quantity);
			}
		}
	}
	
	EquipmentSlots.Entries[TargetIndex].ItemInstance = nullptr;
	EquipmentSlots.MarkItemDirty(EquipmentSlots.Entries[TargetIndex]);
	
	GroundItem->Destroy();
	
	UBackpackItemInstance* NewItem = NewObject<UBackpackItemInstance>(this);
	NewItem->Definition = ItemDef;
	NewItem->Quantity = Amount;
	NewItem->ItemAttributes = GroundItem->SavedAttributes;

	UBackpackItemFragment_Durability* DurabilityFrag = Cast<UBackpackItemFragment_Durability>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Durability::StaticClass()));
	
	bool bHasDurability = NewItem->ItemAttributes.ContainsByPredicate([](const FItemAttribute& Attr) {
		return Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_HelmetDurability || Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_VestDurability;
	});

	if (!bHasDurability)
	{
		if (TargetSlot == EEquipmentSlot::Helmet)
		{
			FItemAttribute Attr;
			Attr.Tag = PUBGGameplayTag::PUBG_BackpackItemInstance_HelmetDurability;
			Attr.Value = DurabilityFrag->MaxDurability;
			NewItem->ItemAttributes.Add(Attr);
		}
		else if (TargetSlot == EEquipmentSlot::Vest)
		{
			FItemAttribute Attr;
			Attr.Tag = PUBGGameplayTag::PUBG_BackpackItemInstance_VestDurability;
			Attr.Value = DurabilityFrag->MaxDurability;
			NewItem->ItemAttributes.Add(Attr);
		}
	}

	EquipmentSlots.Entries[TargetIndex].ItemInstance = NewItem;
	EquipmentSlots.MarkItemDirty(EquipmentSlots.Entries[TargetIndex]);

	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_DropWeaponSlot_Implementation(int32 SlotIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !WeaponSlots.Entries.IsValidIndex(SlotIndex)) return;

	UBackpackItemInstance* ItemToDrop = WeaponSlots.Entries[SlotIndex].ItemInstance;
	if (!ItemToDrop || !ItemToDrop->Definition) return;

	WeaponSlots.Entries[SlotIndex].ItemInstance = nullptr;
	WeaponSlots.MarkItemDirty(WeaponSlots.Entries[SlotIndex]);
	
	if (DropItemClass && GetWorld())
	{
		FVector SpawnLoc = GetOwner()->GetActorLocation();
		if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
		{
			if (APawn* P = PS->GetPawn()) 
			{
				SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
				SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
				SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
				SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
			}
		}
		
		FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
		APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
		if (DroppedActor)
		{
			DroppedActor->InitItemData(ItemToDrop->Definition->GetClass(), ItemToDrop->Quantity);
			DroppedActor->SavedAttachments = ItemToDrop->ItemAttachments; 
			DroppedActor->SavedAttributes = ItemToDrop->ItemAttributes;   
		}
	}

	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_DropEquipmentSlot_Implementation(EEquipmentSlot TargetSlot)
{
	if (TargetSlot == EEquipmentSlot::None) return;
	
	int32 TargetIndex = static_cast<int32>(TargetSlot);
	if (!GetOwner() || !GetOwner()->HasAuthority() || !EquipmentSlots.Entries.IsValidIndex(TargetIndex)) return;

	UBackpackItemInstance* ItemToDrop = EquipmentSlots.Entries[TargetIndex].ItemInstance;
	if (!ItemToDrop || !ItemToDrop->Definition) return;
	
	if (TargetSlot == EEquipmentSlot::Backpack || TargetSlot == EEquipmentSlot::Vest)
	{
		float ExtraCap = GetBackpackExtraCapacity(ItemToDrop->Definition);
		float PredictedMax = GetMaxWeight() - ExtraCap;
		
		if (GetCurrentWeight() > PredictedMax)
		{
			return;
		}

		ApplyMaxBackpackCapacityGE(-ExtraCap);
	}
	
	EquipmentSlots.Entries[TargetIndex].ItemInstance = nullptr;
	EquipmentSlots.MarkItemDirty(EquipmentSlots.Entries[TargetIndex]);
	
	if (DropItemClass && GetWorld())
	{
		FVector SpawnLoc = GetOwner()->GetActorLocation();
		if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
		{
			if (APawn* P = PS->GetPawn())
			{
				SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
				SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
				SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
				SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
			}
		}
		
		FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
		APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
		if (DroppedActor)
		{
			DroppedActor->InitItemData(ItemToDrop->Definition->GetClass(), ItemToDrop->Quantity);
			DroppedActor->SavedAttributes = ItemToDrop->ItemAttributes;
		}
	}

	OnInventoryChanged.Broadcast();
}

UBackpackItemInstance* UBackpackManagerComponent::GetWeaponSlotItem(int32 SlotIndex) const
{
	if (WeaponSlots.Entries.IsValidIndex(SlotIndex))
	{
		return WeaponSlots.Entries[SlotIndex].ItemInstance;
	}
	return nullptr;
}

UBackpackItemInstance* UBackpackManagerComponent::GetEquipmentItem(EEquipmentSlot SlotType) const
{
	int32 Index = static_cast<int32>(SlotType);
	if (EquipmentSlots.Entries.IsValidIndex(Index))
	{
		return EquipmentSlots.Entries[Index].ItemInstance;
	}
	return nullptr;
}

void UBackpackManagerComponent::Server_DropItem_Implementation(UBackpackItemInstance* ItemInstance)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !ItemInstance) return;

	UBackpackItemDefinition* ItemDef = ItemInstance->Definition;
	if (!ItemDef) return;

	int32 AmountToDrop = ItemInstance->Quantity;
	
	int32 FoundIndex = INDEX_NONE;
	for (int32 i = 0; i < BackpackItems.Entries.Num(); ++i)
	{
		if (BackpackItems.Entries[i].ItemInstance == ItemInstance)
		{
			FoundIndex = i;
			break;
		}
	}
	
	if (FoundIndex == INDEX_NONE) return;
	
	BackpackItems.Entries.RemoveAt(FoundIndex);
	BackpackItems.MarkArrayDirty();
	
	float UnitWeight = GetItemUnitWeight(ItemDef);
	ApplyBackpackCapacityGE(-(AmountToDrop * UnitWeight));
	
	if (!DropItemClass || !GetWorld()) return;
	
	APawn* OwnerPawn = nullptr;
	if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
	{
		OwnerPawn = PS->GetPawn();
	}
	else if (APawn* P = Cast<APawn>(GetOwner()))
	{
		OwnerPawn = P;
	}
	if (!OwnerPawn) return;
	
	FVector SpawnLoc = OwnerPawn->GetActorLocation();
	
	if (ACharacter* OwnerChar = Cast<ACharacter>(OwnerPawn))
	{
		SpawnLoc.Z -= OwnerChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	}
	
	SpawnLoc.Z += 10.f; 
	SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
	SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Owner = OwnerPawn;

	APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, FRotator(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f)), SpawnParams);
	if (DroppedActor)
	{
		DroppedActor->InitItemData(ItemDef->GetClass(), AmountToDrop);
	}
	
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_PickupItem_Implementation(APickupItem* ItemToPickup)
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	if (!ItemToPickup || !IsValid(ItemToPickup) || !ItemToPickup->ItemDefinition) return;

	UBackpackItemDefinition* ItemDef = ItemToPickup->ItemDefinition.GetDefaultObject();
	if (!ItemDef) return;
	
	if (ItemDef->ItemType == EItemType::Weapon || ItemDef->ItemType == EItemType::Equipment)
	{
		return;
	}

	int32 Amount = ItemToPickup->Quantity;
	int32 ActualAdded = AddItemToBackpack(ItemDef, Amount);
	
	int32 Remaining = Amount - ActualAdded;
	if (Remaining > 0)
	{
		ItemToPickup->Quantity = Remaining;
	}
	else
	{
		ItemToPickup->Destroy();
	}

	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_SwapWeaponSlots_Implementation(int32 IndexA, int32 IndexB)
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	if (IndexA == IndexB) return;
	
	if ((IndexA != 0 && IndexA != 1) || (IndexB != 0 && IndexB != 1)) return;

	if (!WeaponSlots.Entries.IsValidIndex(IndexA) || !WeaponSlots.Entries.IsValidIndex(IndexB)) return;

	Swap(WeaponSlots.Entries[IndexA].ItemInstance, WeaponSlots.Entries[IndexB].ItemInstance);
	WeaponSlots.MarkItemDirty(WeaponSlots.Entries[IndexA]);
	WeaponSlots.MarkItemDirty(WeaponSlots.Entries[IndexB]);
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_EquipBackpackItemToWeaponSlot_Implementation(UBackpackItemInstance* ItemInstance, int32 TargetSlotIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !ItemInstance) return;
	if (!ItemInstance->Definition) return;
	if (!WeaponSlots.Entries.IsValidIndex(TargetSlotIndex)) return;
	
	if (TargetSlotIndex != 3 && TargetSlotIndex != 4) return;
	
	const EItemType Type = ItemInstance->Definition->ItemType;
	if (TargetSlotIndex == 3 && Type != EItemType::MeleeWeapon) return;
	if (TargetSlotIndex == 4 && Type != EItemType::Throwable) return;

	int32 FoundIndex = INDEX_NONE;
	for (int32 i = 0; i < BackpackItems.Entries.Num(); ++i)
	{
		if (BackpackItems.Entries[i].ItemInstance == ItemInstance)
		{
			FoundIndex = i;
			break;
		}
	}
	if (FoundIndex == INDEX_NONE) return;

	UBackpackItemDefinition* NewItemDef = ItemInstance->Definition;
	int32 NewTotalQty = ItemInstance->Quantity;
	UBackpackItemInstance* OldItem = WeaponSlots.Entries[TargetSlotIndex].ItemInstance;
	
	if (OldItem && OldItem->Definition == NewItemDef) return;
	
	float ItemUnitWeight = GetItemUnitWeight(NewItemDef);
	if (OldItem && OldItem->Definition)
	{
		float OldItemWeight = GetItemUnitWeight(OldItem->Definition) * OldItem->Quantity;
		float PredictedWeight = GetCurrentWeight() - ItemUnitWeight + OldItemWeight;
		
		if (PredictedWeight > GetMaxWeight())
		{
			return;
		}
	}

	BackpackItems.Entries.RemoveAt(FoundIndex);
	BackpackItems.MarkArrayDirty();
	ApplyBackpackCapacityGE(-(ItemUnitWeight * NewTotalQty));
	
	if (OldItem && OldItem->Definition)
	{
		int32 Added = AddItemToBackpack(OldItem->Definition, OldItem->Quantity);
		int32 Remain = OldItem->Quantity - Added;
		if (Remain > 0 && DropItemClass && GetWorld())
		{
			FVector SpawnLoc = GetOwner()->GetActorLocation();
			if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
			{
				if (APawn* P = PS->GetPawn()) 
				{
					SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
					SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
				}
			}
			APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, FRotator::ZeroRotator);
			if (DroppedActor) DroppedActor->InitItemData(OldItem->Definition->GetClass(), Remain);
		}
	}
	
	if (NewTotalQty > 1)
	{
		int32 RemainQty = NewTotalQty - 1;
		int32 Added = AddItemToBackpack(NewItemDef, RemainQty);
		int32 Remain = RemainQty - Added;
		if (Remain > 0 && DropItemClass && GetWorld())
		{
			FVector SpawnLoc = GetOwner()->GetActorLocation();
			if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
			{
				if (APawn* P = PS->GetPawn()) 
				{
					SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
					SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
				}
			}
			APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, FRotator::ZeroRotator);
			if (DroppedActor) DroppedActor->InitItemData(NewItemDef->GetClass(), Remain);
		}
	}
	
	UBackpackItemInstance* SlotItem = NewObject<UBackpackItemInstance>(this);
	SlotItem->Definition = NewItemDef;
	SlotItem->Quantity = 1;
	
	WeaponSlots.Entries[TargetSlotIndex].ItemInstance = SlotItem;
	WeaponSlots.MarkItemDirty(WeaponSlots.Entries[TargetSlotIndex]);

	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_UnequipWeaponSlotToBackpack_Implementation(int32 SlotIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	if (!WeaponSlots.Entries.IsValidIndex(SlotIndex)) return;
	
	if (SlotIndex != 3 && SlotIndex != 4) return;

	UBackpackItemInstance* ItemToUnequip = WeaponSlots.Entries[SlotIndex].ItemInstance;
	if (!ItemToUnequip || !ItemToUnequip->Definition) return;

	int32 OriginalAmount = ItemToUnequip->Quantity;
	int32 AddedAmount = AddItemToBackpack(ItemToUnequip->Definition, OriginalAmount);
	
	if (AddedAmount <= 0)
	{
		return;
	}
	
	if (AddedAmount == OriginalAmount)
	{
		WeaponSlots.Entries[SlotIndex].ItemInstance = nullptr;
		WeaponSlots.MarkItemDirty(WeaponSlots.Entries[SlotIndex]);
	}
	else
	{
		ItemToUnequip->Quantity = OriginalAmount - AddedAmount;
		WeaponSlots.MarkItemDirty(WeaponSlots.Entries[SlotIndex]);
	}

	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_EquipAttachmentToWeapon_Implementation(UBackpackItemInstance* BagAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !BagAttachment || !WeaponInstance) return;
	
	int32 FoundIndex = INDEX_NONE;
	for (int32 i = 0; i < BackpackItems.Entries.Num(); ++i)
	{
		if (BackpackItems.Entries[i].ItemInstance == BagAttachment)
		{
			FoundIndex = i;
			break;
		}
	}
	if (FoundIndex == INDEX_NONE) return;

	BackpackItems.Entries.RemoveAt(FoundIndex);
	BackpackItems.MarkArrayDirty();
	
	float UnitWeight = GetItemUnitWeight(BagAttachment->Definition);
	ApplyBackpackCapacityGE(-(BagAttachment->Quantity * UnitWeight));
	
	for (int32 i = WeaponInstance->ItemAttachments.Num() - 1; i >= 0; --i)
	{
		if (WeaponInstance->ItemAttachments[i].Slot == TargetSlot)
		{
			if (UBackpackItemInstance* OldAttachment = WeaponInstance->ItemAttachments[i].ItemInstance)
			{
				AddItemToBackpack(OldAttachment->Definition, OldAttachment->Quantity);
			}
			WeaponInstance->ItemAttachments.RemoveAt(i);
		}
	}

	FItemAttachment NewAttachment;
	NewAttachment.Slot = TargetSlot;
	NewAttachment.ItemInstance = BagAttachment;
	WeaponInstance->ItemAttachments.Add(NewAttachment);
	
	for (int32 i = 0; i < WeaponSlots.Entries.Num(); ++i)
	{
		if (WeaponSlots.Entries[i].ItemInstance == WeaponInstance)
		{
			WeaponSlots.MarkItemDirty(WeaponSlots.Entries[i]);
			break;
		}
	}

	OnWeaponAttachmentsChanged.Broadcast();
	OnInventoryChanged.Broadcast(); 
}

void UBackpackManagerComponent::Server_EquipGroundAttachmentToWeapon_Implementation(APickupItem* GroundAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !GroundAttachment || !WeaponInstance) return;

	UBackpackItemDefinition* ItemDef = GroundAttachment->ItemDefinition.GetDefaultObject();
	if (!ItemDef) return;
	
	UBackpackItemInstance* NewAttachment = NewObject<UBackpackItemInstance>(this);
	NewAttachment->Definition = ItemDef;
	NewAttachment->Quantity = 1;
	
	AddReplicatedSubObject(NewAttachment);
	
	for (int32 i = WeaponInstance->ItemAttachments.Num() - 1; i >= 0; --i)
	{
		if (WeaponInstance->ItemAttachments[i].Slot == TargetSlot)
		{
			if (UBackpackItemInstance* OldAttachment = WeaponInstance->ItemAttachments[i].ItemInstance)
			{
				AddItemToBackpack(OldAttachment->Definition, OldAttachment->Quantity);
			}
			WeaponInstance->ItemAttachments.RemoveAt(i);
		}
	}

	FItemAttachment NewAttachmentData;
	NewAttachmentData.Slot = TargetSlot;
	NewAttachmentData.ItemInstance = NewAttachment;
	WeaponInstance->ItemAttachments.Add(NewAttachmentData);
	
	GroundAttachment->Destroy();
	
	for (int32 i = 0; i < WeaponSlots.Entries.Num(); ++i)
	{
		if (WeaponSlots.Entries[i].ItemInstance == WeaponInstance)
		{
			WeaponSlots.MarkItemDirty(WeaponSlots.Entries[i]);
			break;
		}
	}

	OnWeaponAttachmentsChanged.Broadcast();
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_UnequipAttachmentToBackpack_Implementation(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !WeaponInstance) return;

	int32 FoundIndex = INDEX_NONE;
	for (int32 i = 0; i < WeaponInstance->ItemAttachments.Num(); ++i)
	{
		if (WeaponInstance->ItemAttachments[i].Slot == TargetSlot)
		{
			FoundIndex = i;
			break;
		}
	}
	if (FoundIndex == INDEX_NONE) return;

	UBackpackItemInstance* Attachment = WeaponInstance->ItemAttachments[FoundIndex].ItemInstance;
	if (!Attachment) return;
	
	int32 OriginalAmount = Attachment->Quantity;
	int32 AddedAmount = AddItemToBackpack(Attachment->Definition, OriginalAmount);

	if (AddedAmount <= 0) return;

	if (AddedAmount == OriginalAmount)
	{
		WeaponInstance->ItemAttachments.RemoveAt(FoundIndex);
	}
	else
	{
		Attachment->Quantity = OriginalAmount - AddedAmount;
	}
	
	for (int32 i = 0; i < WeaponSlots.Entries.Num(); ++i)
	{
		if (WeaponSlots.Entries[i].ItemInstance == WeaponInstance)
		{
			WeaponSlots.MarkItemDirty(WeaponSlots.Entries[i]);
			break;
		}
	}

	OnWeaponAttachmentsChanged.Broadcast();
	OnInventoryChanged.Broadcast();
}

void UBackpackManagerComponent::Server_DropAttachment_Implementation(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !WeaponInstance) return;

	int32 FoundIndex = INDEX_NONE;
	for (int32 i = 0; i < WeaponInstance->ItemAttachments.Num(); ++i)
	{
		if (WeaponInstance->ItemAttachments[i].Slot == TargetSlot)
		{
			FoundIndex = i;
			break;
		}
	}
	if (FoundIndex == INDEX_NONE) return;

	UBackpackItemInstance* Attachment = WeaponInstance->ItemAttachments[FoundIndex].ItemInstance;
	if (!Attachment) return;
	
	WeaponInstance->ItemAttachments.RemoveAt(FoundIndex);
	
	if (DropItemClass && GetWorld())
	{
		FVector SpawnLoc = GetOwner()->GetActorLocation();
		if (APlayerState* PS = Cast<APlayerState>(GetOwner()))
		{
			if (APawn* P = PS->GetPawn())
			{
				SpawnLoc = P->GetActorLocation() + P->GetActorForwardVector() * 100.f;
				SpawnLoc.Z -= P->GetSimpleCollisionHalfHeight();
				SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
				SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
			}
		}
		FRotator RandomRot(FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f), FMath::RandRange(0.f, 360.f));
		APickupItem* DroppedActor = GetWorld()->SpawnActor<APickupItem>(DropItemClass, SpawnLoc, RandomRot);
		if (DroppedActor)
		{
			DroppedActor->InitItemData(Attachment->Definition->GetClass(), Attachment->Quantity);
		}
	}
	
	for (int32 i = 0; i < WeaponSlots.Entries.Num(); ++i)
	{
		if (WeaponSlots.Entries[i].ItemInstance == WeaponInstance)
		{
			WeaponSlots.MarkItemDirty(WeaponSlots.Entries[i]);
			break;
		}
	}

	OnWeaponAttachmentsChanged.Broadcast();
	OnInventoryChanged.Broadcast();
}

bool UBackpackManagerComponent::AddItemToNearbyPickupItems(APickupItem* PickupItemActor)
{
	if (!PickupItemActor) return false;
	
	if (!NearbyPickupItems.Contains(PickupItemActor))
	{
		NearbyPickupItems.Add(PickupItemActor);
		OnEnterPickupRange.Broadcast(PickupItemActor);
		
		return true;
	}
	return false;
}

void UBackpackManagerComponent::RemoveItemFromNearbyPickupItems(APickupItem* PickupItemActor)
{
	if (!PickupItemActor) return;
	
	if (NearbyPickupItems.Remove(PickupItemActor) > 0)
	{
		OnLeavePickupRange.Broadcast(PickupItemActor);
	}
}

void UBackpackManagerComponent::ConsumeBackpackItem(UBackpackItemInstance* ItemInstance, int32 AmountToConsume)
{
	if (!ItemInstance || AmountToConsume <= 0) return;

	for (int32 i = 0; i < BackpackItems.Entries.Num(); ++i)
	{
		if (BackpackItems.Entries[i].ItemInstance == ItemInstance)
		{
			ItemInstance->Quantity -= AmountToConsume;

			if (ItemInstance->Quantity <= 0)
			{
				BackpackItems.Entries.RemoveAt(i);
				BackpackItems.MarkArrayDirty();
			}
			else
			{
				BackpackItems.MarkItemDirty(BackpackItems.Entries[i]);
			}
			break;
		}
	}
}

TArray<UBackpackItemInstance*> UBackpackManagerComponent::GetBackpackItems() const
{
	TArray<UBackpackItemInstance*> Result;
	for (const FBackpackSlotData& Entry : BackpackItems.Entries)
	{
		if (Entry.ItemInstance) Result.Add(Entry.ItemInstance);
	}
	return Result;
}

void UBackpackManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
