// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/CharacterAnimInstance.h"

#include "Character/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	
	PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (PlayerCharacter)
	{
		CharacterYaw = PlayerCharacter->GetActorRotation().Yaw;
	}
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (PlayerCharacter)
	{
		CharacterGait = PlayerCharacter->GetCharacterGait();
		CharacterAcceleration = PlayerCharacter->GetCharacterMovement()->GetCurrentAcceleration();
		CharacterVelocity = PlayerCharacter->GetVelocity();
		CharacterRotation = PlayerCharacter->GetActorRotation();
		bIsInAir = PlayerCharacter->GetCharacterMovement()->IsFalling();
		CharacterStance = PlayerCharacter->GetCharacterStance();
		ControllerRotator_Yaw = PlayerCharacter->GetControllerRotator_Yaw();
		ControllerRotator_Pitch = PlayerCharacter->GetControllerRotator_Pitch();
		HandIKAlpha = PlayerCharacter->ShouldEnableWeaponIK() ? 1.f : 0.f;
		CurrentLeanDirection = PlayerCharacter->GetCurrentLeanDirection();
	}
}

void UCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	bHasAccelerating = !CharacterAcceleration.IsNearlyZero();
	FVector DirectionSource = CharacterVelocity;
	if (!CharacterAcceleration.IsNearlyZero())
	{
		DirectionSource = CharacterAcceleration;
	}
	
	if (!DirectionSource.IsNearlyZero())
	{
		CharacterDirectionAngle = CalculateDirection(DirectionSource, CharacterRotation);
		float AbsAngle = FMath::Abs(CharacterDirectionAngle);
	
		if (AbsAngle < 50.f)
		{
			CharacterDirection = ECharacterDirection::Forward;
		}
		else if (AbsAngle > 130.f)
		{
			CharacterDirection = ECharacterDirection::Backward;
		}
		else if (CharacterDirectionAngle > 0.f)
		{
			CharacterDirection = ECharacterDirection::Right;
		}
		else
		{
			CharacterDirection = ECharacterDirection::Left;
		}
	}
	
	LastFrameCharacterYaw = CharacterYaw;
	CharacterYaw = CharacterRotation.Yaw;
	DeltaActorYaw = FMath::FindDeltaAngleDegrees(LastFrameCharacterYaw, CharacterYaw);
	CharacterLeanAngle = DeltaActorYaw / DeltaSeconds;
	if (CharacterDirection == ECharacterDirection::Backward)
	{
		CharacterLeanAngle *= -1.f;
	}
	CharacterLeanAngle = FMath::Clamp(CharacterLeanAngle, -90.f, 90.f);
	
	bIsCharacterStanceChanged = (LastFrameCharacterStance != CharacterStance);
	LastFrameCharacterStance = CharacterStance;

	CharacterAO_Yaw = FRotator::NormalizeAxis(ControllerRotator_Yaw - CharacterRotation.Yaw);
	CharacterAO_Pitch = FRotator::NormalizeAxis(ControllerRotator_Pitch - CharacterRotation.Pitch);

	if (bIsInAir)
	{
		if (bWasOnGround)
		{
			MaxFallingSpeed = 0.f;
			bWasOnGround = false;
		}
		
		if (CharacterVelocity.Z < 0.f)
		{
			float CurrentImpactSpeed = CharacterVelocity.Size();
		
			if (CurrentImpactSpeed > MaxFallingSpeed)
			{
				MaxFallingSpeed = CurrentImpactSpeed;
			}
		}
	}
	else
	{
		bWasOnGround = true;
	}
}
