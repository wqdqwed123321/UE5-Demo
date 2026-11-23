// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_FootstepSound.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UAnimNotify_FootstepSound : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	
private:
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EPhysicalSurface>, TObjectPtr<USoundBase>> FootstepSoundMap;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USoundBase> DefaultFootstepSound;
};
