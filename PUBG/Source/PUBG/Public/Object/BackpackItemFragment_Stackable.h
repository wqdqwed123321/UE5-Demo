// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Stackable.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Stackable : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 MaxStackSize;
};
