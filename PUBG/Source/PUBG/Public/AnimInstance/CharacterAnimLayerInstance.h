// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimLayerInstance.generated.h"

class UCharacterAnimInstance;
/**
 * 
 */
UCLASS()
class PUBG_API UCharacterAnimLayerInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeBeginPlay() override;
	
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	ECharacterGait CharacterGait;
	
	UPROPERTY(BlueprintReadOnly)
	ECharacterStance CharacterStance;
	
	UPROPERTY(BlueprintReadOnly)
	ECharacterDirection CharacterDirection;
	
	UPROPERTY(BlueprintReadOnly)
	FVector CharacterVelocity;
	
	UPROPERTY(BlueprintReadOnly)
	float CharacterDirectionAngle;
	
	UPROPERTY(BlueprintReadOnly)
	float CharacterLeanAngle;
	
	UPROPERTY(BlueprintReadOnly)
	float CharacterAO_Yaw;
	
	UPROPERTY(BlueprintReadOnly)
	float CharacterAO_Pitch;
	
	UPROPERTY(BlueprintReadOnly)
	bool bIsCharacterStanceChanged;
	
	UPROPERTY(BlueprintReadOnly)
	float CurrentLeanDirection;
	
private:
	UPROPERTY()
	TObjectPtr<UCharacterAnimInstance> CharacterAnimInstance;
};
