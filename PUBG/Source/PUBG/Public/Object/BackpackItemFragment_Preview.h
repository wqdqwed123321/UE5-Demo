// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Preview.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Preview : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<USkeletalMesh> PreviewMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FTransform PreviewTransform = FTransform::Identity;
};
