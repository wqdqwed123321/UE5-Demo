// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupItem.generated.h"

struct FItemAttribute;
struct FItemAttachment;
class USphereComponent;
class UBackpackItemDefinition;

UCLASS()
class PUBG_API APickupItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
public:
	UFUNCTION()
	void OnRep_ItemDefinition();
	
	void InitItemData(TSubclassOf<UBackpackItemDefinition> InDefinition, int32 InQuantity);
	
private:
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UStaticMeshComponent> StaticMesh;

public:
	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_ItemDefinition)
	TSubclassOf<UBackpackItemDefinition> ItemDefinition;
	
	UPROPERTY(EditAnywhere, Replicated)
	int32 Quantity = 1;
	
	UPROPERTY(Replicated)
	TArray<FItemAttachment> SavedAttachments;
	
	UPROPERTY(Replicated)
	TArray<FItemAttribute> SavedAttributes; 
};
