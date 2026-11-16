// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "BackpackItemDefinition.generated.h"

class UBackpackItemFragment;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class PUBG_API UBackpackItemDefinition : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DeterminesOutputType = "ItemFragmentClass"))
	static UBackpackItemFragment* FindBackpackItemFragmentByClass(TSubclassOf<UBackpackItemDefinition> ItemDefinitionClass, TSubclassOf<UBackpackItemFragment> ItemFragmentClass);
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ItemName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ItemDescription;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UTexture2D> Icon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UStaticMesh> WorldMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EItemType ItemType = EItemType::None;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced)
	TArray<TObjectPtr<UBackpackItemFragment>> Fragments;
};
