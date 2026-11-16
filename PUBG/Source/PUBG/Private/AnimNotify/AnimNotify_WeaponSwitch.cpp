// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AnimNotify_WeaponSwitch.h"

#include "Character/PlayerCharacter.h"

void UAnimNotify_WeaponSwitch::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                      const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	
	if (MeshComp)
	{
		if (APlayerCharacter* Character = Cast<APlayerCharacter>(MeshComp->GetOwner()))
		{
			if (Character->GetAttachToHandWhenNotifyFires())
			{
				Character->AnimNotify_AttachWeaponToHand();
			}
			else
			{
				Character->AnimNotify_AttachWeaponToBack();
			}
		}
	}
}
