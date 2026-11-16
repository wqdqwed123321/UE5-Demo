// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Attachment.generated.h"

enum class EAttachmentSlot : uint8;
/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Attachment : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EAttachmentSlot TargetSlot;
};
