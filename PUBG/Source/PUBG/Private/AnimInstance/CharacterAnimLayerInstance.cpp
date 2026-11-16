// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/CharacterAnimLayerInstance.h"

#include "AnimInstance/CharacterAnimInstance.h"

void UCharacterAnimLayerInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	
	CharacterAnimInstance = Cast<UCharacterAnimInstance>(GetOwningComponent()->GetAnimInstance());
}

void UCharacterAnimLayerInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (CharacterAnimInstance)
	{
		CharacterGait = CharacterAnimInstance->GetCharacterGait();
		CharacterStance = CharacterAnimInstance->GetCharacterStance();
		CharacterDirection = CharacterAnimInstance->GetCharacterDirection();
		CharacterDirectionAngle = CharacterAnimInstance->GetCharacterDirectionAngle();
		CharacterVelocity = CharacterAnimInstance->GetCharacterVelocity();
		CharacterLeanAngle = CharacterAnimInstance->GetCharacterLeanAngle();
		CharacterAO_Yaw = CharacterAnimInstance->GetCharacterAO_Yaw();
		CharacterAO_Pitch = CharacterAnimInstance->GetCharacterAO_Pitch();
		bIsCharacterStanceChanged = CharacterAnimInstance->GetIsCharacterStanceChanged();
		CurrentLeanDirection = CharacterAnimInstance->GetCurrentLeanDirection();
	}
}
