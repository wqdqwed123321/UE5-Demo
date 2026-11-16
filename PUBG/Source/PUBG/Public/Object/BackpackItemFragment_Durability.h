// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Durability.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Durability : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxDurability = 100.f;
};
