// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/BackpackItemInstance.h"

#include "Net/UnrealNetwork.h"

void UBackpackItemInstance::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(UBackpackItemInstance, Definition);
	DOREPLIFETIME(UBackpackItemInstance, Quantity);
	DOREPLIFETIME(UBackpackItemInstance, ItemAttributes);
	DOREPLIFETIME(UBackpackItemInstance, ItemAttachments);
}

float UBackpackItemInstance::GetItemAttribute(FGameplayTag AttributeTag) const
{
	for (const FItemAttribute& Attribute : ItemAttributes)
	{
		if (Attribute.Tag == AttributeTag)
		{
			return Attribute.Value;
		}
	}
	return 0.f;
}

void UBackpackItemInstance::SetAttribute(FGameplayTag AttributeTag, float Value)
{
	for (FItemAttribute& Attribute : ItemAttributes)
	{
		if (Attribute.Tag == AttributeTag)
		{
			Attribute.Value = Value;
			return;
		}
	}
		
	ItemAttributes.Add(FItemAttribute(AttributeTag, Value));
}

UBackpackItemInstance* UBackpackItemInstance::GetItemAttachment(EAttachmentSlot Slot) const
{
	for (const FItemAttachment& Attach : ItemAttachments)
	{
		if (Attach.Slot == Slot)
		{
			return Attach.ItemInstance;
		}
	}
	return nullptr;
}

void UBackpackItemInstance::SetItemAttachment(EAttachmentSlot Slot, UBackpackItemInstance* InAttachment)
{
	if (!InAttachment)
	{
		for (int32 i = 0; i < ItemAttachments.Num(); ++i)
		{
			if (ItemAttachments[i].Slot == Slot)
			{
				ItemAttachments.RemoveAt(i);
				return;
			}
		}
		return;
	}

	for (FItemAttachment& Attach : ItemAttachments)
	{
		if (Attach.Slot == Slot)
		{
			Attach.ItemInstance = InAttachment; 
			return;
		}
	}
	
	FItemAttachment NewEntry;
	NewEntry.Slot = Slot;
	NewEntry.ItemInstance = InAttachment;
	ItemAttachments.Add(NewEntry);
}
