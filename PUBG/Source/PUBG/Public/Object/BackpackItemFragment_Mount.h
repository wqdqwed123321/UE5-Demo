// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Mount.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Mount : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<USkeletalMesh> EquipmentMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName AttachSocketName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName HeldSocketName;
};
