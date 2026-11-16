// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "BackpackItemInstance.generated.h"

class UBackpackItemDefinition;
/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemInstance : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool IsSupportedForNetworking() const override { return true; }
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetItemAttribute(FGameplayTag AttributeTag) const;
	
	UFUNCTION(BlueprintCallable)
	void SetAttribute(FGameplayTag AttributeTag, float Value);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UBackpackItemInstance* GetItemAttachment(EAttachmentSlot Slot) const;
	
	UFUNCTION(BlueprintCallable)
	void SetItemAttachment(EAttachmentSlot Slot, UBackpackItemInstance* InAttachment);
	
public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 Quantity = 1;
	
	UPROPERTY(Replicated, BlueprintReadOnly)
	TObjectPtr<UBackpackItemDefinition> Definition;
	
	UPROPERTY(Replicated, BlueprintReadOnly)
	TArray<FItemAttribute> ItemAttributes;
	
	UPROPERTY(Replicated, BlueprintReadOnly)
	TArray<FItemAttachment> ItemAttachments;
};
