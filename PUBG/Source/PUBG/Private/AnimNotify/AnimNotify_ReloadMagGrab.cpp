// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AnimNotify_ReloadMagGrab.h"

#include "Character/PlayerCharacter.h"

void UAnimNotify_ReloadMagGrab::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	
	if (APlayerCharacter* Character = Cast<APlayerCharacter>(MeshComp->GetOwner()))
	{
		Character->AnimNotify_ReloadMagGrab();
	}
}
