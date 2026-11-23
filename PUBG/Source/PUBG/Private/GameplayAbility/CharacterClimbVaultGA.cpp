// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbility/CharacterClimbVaultGA.h"

#include "MotionWarpingComponent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Character/PlayerCharacter.h"
#include "Components/CapsuleComponent.h"

UCharacterClimbVaultGA::UCharacterClimbVaultGA()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

bool UCharacterClimbVaultGA::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)) return false;

	const APlayerCharacter* Char = Cast<APlayerCharacter>(ActorInfo ? ActorInfo->AvatarActor.Get() : nullptr);
	if (!Char) return false;
	
	FVector Top, Target;
	TObjectPtr<UAnimMontage> Montage;
	return DetectClimbTarget(Char, Top, Target, Montage);
}

void UCharacterClimbVaultGA::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	APlayerCharacter* Char = Cast<APlayerCharacter>(GetAvatarActorFromActorInfo());
	if (!Char) { EndAbility(Handle, ActorInfo, ActivationInfo, true, true); return; }
	
	FVector Top, Target;
	TObjectPtr<UAnimMontage> Montage;
	if (!DetectClimbTarget(Char, Top, Target, Montage) || !CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	if (!Montage) { EndAbility(Handle, ActorInfo, ActivationInfo, true, false); return; }

	if (HasAuthority(&ActivationInfo))
	{
		Char->ClimbTopTarget = Top;
		Char->ClimbWarpTarget = Target;
		Char->ForceNetUpdate();
	}

	if (UMotionWarpingComponent* MW = Char->FindComponentByClass<UMotionWarpingComponent>())
	{
		MW->AddOrUpdateWarpTargetFromLocation(TEXT("ClimbTop"), Top);
		MW->AddOrUpdateWarpTargetFromLocation(WarpTargetName, Target);
	}

	Char->BeginClimbState();
	
	UAbilityTask_PlayMontageAndWait* Task = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, Montage, 1.f, NAME_None, true);
	Task->OnCompleted.AddDynamic(this, &UCharacterClimbVaultGA::OnMontageFinished);
	Task->OnInterrupted.AddDynamic(this, &UCharacterClimbVaultGA::OnMontageFinished);
	Task->OnCancelled.AddDynamic(this, &UCharacterClimbVaultGA::OnMontageFinished);
	Task->ReadyForActivation();
}

void UCharacterClimbVaultGA::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	if (APlayerCharacter* Char = Cast<APlayerCharacter>(GetAvatarActorFromActorInfo()))
	{
		Char->EndClimbState();
	}
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UCharacterClimbVaultGA::OnMontageFinished()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

UAnimMontage* UCharacterClimbVaultGA::SelectTierMontage(float Height, UAnimMontage* Montage60, UAnimMontage* Montage120,
	UAnimMontage* Montage200) const
{
	if (Height < 120.f) return Montage60;
	if (Height < 200.f) return Montage120;
	return Montage200;
}

bool UCharacterClimbVaultGA::DetectClimbTarget(const APlayerCharacter* Char, FVector& OutTop, FVector& OutTarget, TObjectPtr<UAnimMontage>& OutMontage) const
{
	if (!Char || Char->bIsClimbing) return false;

	const UCapsuleComponent* Capsule = Char->GetCapsuleComponent();
	const float HalfHeight = Capsule->GetScaledCapsuleHalfHeight();
	const float Radius = Capsule->GetScaledCapsuleRadius();
	const FVector Forward = Char->GetActorForwardVector();
	const FVector Feet = Char->GetActorLocation() - FVector(0.f, 0.f, HalfHeight);

	FCollisionQueryParams Params(SCENE_QUERY_STAT(Climb), false, Char);

	FHitResult WallHit;
	const float SweepRadius = Radius - 2.f;
	const float SweepHalf = HalfHeight - 20.f;
	if (!Char->GetWorld()->SweepSingleByChannel(WallHit, Char->GetActorLocation(), Char->GetActorLocation() + Forward * ClimbForwardDistance,
		FQuat::Identity, ECC_Visibility, FCollisionShape::MakeCapsule(SweepRadius, SweepHalf), Params))
		return false;
	if (FMath::Abs(WallHit.ImpactNormal.Z) > 0.2f) return false;

	FHitResult TopHit;
	bool bTopFound = false;
	const float ProbeOffsets[] = { 5.f, 15.f, 25.f, 35.f };
	for (const float Offset : ProbeOffsets)
	{
		FHitResult Hit;
		const FVector ProbeBase = WallHit.ImpactPoint + Forward * Offset;
		if (!Char->GetWorld()->LineTraceSingleByChannel(Hit,
			ProbeBase + FVector(0.f, 0.f, MaxHeight + 50.f),
			ProbeBase - FVector(0.f, 0.f, 50.f), ECC_Visibility, Params))
			continue;
		if (Hit.ImpactNormal.Z < 0.7f) continue;

		const float H = Hit.ImpactPoint.Z - Feet.Z;
		if (H < MinHeight || H > MaxHeight) continue;

		if (!bTopFound || Hit.ImpactPoint.Z > TopHit.ImpactPoint.Z)
		{
			TopHit = Hit;
			bTopFound = true;
		}
	}
	if (!bTopFound) return false;

	const float Height = TopHit.ImpactPoint.Z - Feet.Z;

	float TopDepth = 999.f;
	const float MaxProbeDepth = Radius * 2.f + 40.f;
	for (float D = 10.f; D <= MaxProbeDepth; D += 10.f)
	{
		FHitResult Hit;
		const FVector P = TopHit.ImpactPoint + Forward * D + FVector(0.f, 0.f, 10.f);
		if (!Char->GetWorld()->LineTraceSingleByChannel(Hit, P, P - FVector(0.f, 0.f, 20.f), ECC_Visibility, Params))
		{
			TopDepth = D;
			break;
		}
	}
	if (TopDepth < Radius * 2.f + 10.f) return false;

	OutMontage = SelectTierMontage(Height, ClimbMontage60, ClimbMontage120, ClimbMontage200);
	if (!OutMontage) return false;

	const FVector LandPoint = TopHit.ImpactPoint + Forward * (Radius + 5.f);
	OutTop = WallHit.ImpactPoint + Forward * (SweepRadius + 5.f);
	OutTop.Z = TopHit.ImpactPoint.Z;

	const FVector EndLoc = LandPoint + FVector(0.f, 0.f, HalfHeight + 2.f);
	FHitResult SweepHit;
	if (Char->GetWorld()->SweepSingleByChannel(SweepHit, EndLoc, EndLoc, FQuat::Identity, ECC_Visibility,
		FCollisionShape::MakeCapsule(SweepRadius, HalfHeight - 5.f), Params))
		return false;

	OutTarget = EndLoc - FVector(0.f, 0.f, HalfHeight + 2.f);
	return true;
}