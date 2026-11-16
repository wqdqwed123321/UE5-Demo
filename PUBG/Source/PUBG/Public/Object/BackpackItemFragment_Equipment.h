// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Equipment.generated.h"

enum class EEquipmentSlot : uint8;
/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Equipment : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EEquipmentSlot EquipSlotType;
};
