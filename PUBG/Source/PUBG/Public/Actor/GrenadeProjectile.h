// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrenadeProjectile.generated.h"

class UBackpackItemDefinition;
class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class PUBG_API AGrenadeProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenadeProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
public:
	void InitGrenade(const FVector& Direction, float SpeedCmPerSec, UBackpackItemDefinition* InDefinition, float InFuseTime);
	
protected:
	UFUNCTION()
	void OnRep_GrenadeMesh();

private:
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<USphereComponent> CollisionComp;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UStaticMeshComponent> MeshComp;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;
	
	UPROPERTY(ReplicatedUsing = OnRep_GrenadeMesh)
	TObjectPtr<UStaticMesh> GrenadeMesh;
	
private:
	FTimerHandle FuseTimer;
};
