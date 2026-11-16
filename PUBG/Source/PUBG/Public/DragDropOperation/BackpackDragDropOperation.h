// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "Blueprint/DragDropOperation.h"
#include "BackpackDragDropOperation.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackDragDropOperation : public UDragDropOperation
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> SourceWeapon;
	
public:
	int32 SourceWeaponSlotIndex = -1;
	EBackpackDragSource DragSource;
	EEquipmentSlot SourceEquipmentSlot = EEquipmentSlot::None;
	EAttachmentSlot SourceAttachmentSlot;
};
