// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"

class APlayerCharacter;

UCLASS()
class PUBG_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
public:
	ECharacterGait GetCharacterGait() const { return CharacterGait; }
	ECharacterStance GetCharacterStance() const { return CharacterStance; }
	ECharacterDirection GetCharacterDirection() const { return CharacterDirection; }
	FVector GetCharacterVelocity() const { return CharacterVelocity; }
	float GetCharacterDirectionAngle() const { return CharacterDirectionAngle; }
	float GetCharacterLeanAngle() const { return CharacterLeanAngle; }
	float GetCharacterAO_Yaw() const { return CharacterAO_Yaw; }
	float GetCharacterAO_Pitch() const { return CharacterAO_Pitch; }
	float GetTurnYawCurveDeltaValue() const { return TurnYawCurveDeltaValue; }
	bool GetIsCharacterStanceChanged() const { return bIsCharacterStanceChanged; }
	float GetCurrentLeanDirection() const { return CurrentLeanDirection; }
	
protected:	
	UPROPERTY(BlueprintReadOnly)
	bool bHasAccelerating;
	
	UPROPERTY(BlueprintReadOnly)
	bool bIsInAir;
	
	UPROPERTY(BlueprintReadOnly)
	float MaxFallingSpeed;
	
	UPROPERTY(BlueprintReadOnly)
	FVector CharacterVelocity;
	
	UPROPERTY(BlueprintReadOnly)
	ECharacterDirection CharacterDirection = ECharacterDirection::Forward;
	
	UPROPERTY(BlueprintReadWrite)
	float TurnYawCurveDeltaValue;
	
	UPROPERTY(BlueprintReadOnly)
	float HandIKAlpha = 0.f;
	
private: 
	UPROPERTY()
	TObjectPtr<APlayerCharacter> PlayerCharacter;
	
private:
	ECharacterGait CharacterGait;
	ECharacterStance CharacterStance;
	ECharacterStance LastFrameCharacterStance;
	FVector CharacterAcceleration;
	FRotator CharacterRotation;
	float CharacterDirectionAngle;
	float CharacterYaw;
	float LastFrameCharacterYaw;
	float DeltaActorYaw;
	float CharacterLeanAngle;
	float ControllerRotator_Yaw;
	float ControllerRotator_Pitch;
	float CharacterAO_Yaw;
	float CharacterAO_Pitch;
	float CurrentLeanDirection;
	bool bIsCharacterStanceChanged;
	bool bWasOnGround = true;
};
