// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "PUBGType.h"
#include "BackpackItemFragment_Ammo.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Ammo : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EAmmoType AmmoType;
};
