// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "PUBGType.h"
#include "ActivatableWidget_KillMessage.generated.h"

class UTextBlock;
class UCommonUserWidget_KillMessageLine;
class UVerticalBox;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_KillMessage : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;
	
public:
	void InitMessage(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, int32 KillCount, EKillMessageRole Role);

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UVerticalBox> Box_MessageLines;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_KillCount;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCommonUserWidget_KillMessageLine> LineClass;

	UPROPERTY(EditAnywhere)
	int32 MaxLines = 5;

	UPROPERTY(EditAnywhere)
	float LineLifetime = 5.f;

private:
	FTimerHandle CountHideTimer;
	
	int32 LastKillCount = 0;
};
