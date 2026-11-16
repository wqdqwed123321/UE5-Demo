// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_WhiteIcon.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_WhiteIcon : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UTexture2D> Icon;
};
