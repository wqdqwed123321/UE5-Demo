// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AnimNotify_FootstepSound.h"

#include "Kismet/GameplayStatics.h"

void UAnimNotify_FootstepSound::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                       const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	
	if (!MeshComp || !MeshComp->GetWorld()) return;
	AActor* Owner = MeshComp->GetOwner();
	if (!Owner) return;
	
	const FVector Start = MeshComp->GetComponentLocation();
	const FVector End = Start - FVector(0.f, 0.f, 200.f);

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Owner);
	Params.bReturnPhysicalMaterial = true;

	EPhysicalSurface SurfaceType = SurfaceType_Default;
	if (MeshComp->GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
	{
		SurfaceType = UGameplayStatics::GetSurfaceType(Hit);
	}
	
	USoundBase* SoundToPlay = DefaultFootstepSound;
	if (const TObjectPtr<USoundBase>* Found = FootstepSoundMap.Find(SurfaceType))
	{
		if (*Found) SoundToPlay = *Found;
	}

	if (SoundToPlay)
	{
		UGameplayStatics::PlaySoundAtLocation(MeshComp->GetWorld(), SoundToPlay, Owner->GetActorLocation());
	}
}
