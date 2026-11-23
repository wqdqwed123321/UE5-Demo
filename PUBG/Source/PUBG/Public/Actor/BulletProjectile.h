// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletProjectile.generated.h"

class UGameplayEffect;
class UNiagaraSystem;
class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class PUBG_API ABulletProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	ABulletProjectile();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	void InitBullet(const FVector& InDirection, float InSpeedMS, float InGravityScale, const FVector& InStartLocation, float InBaseDamage, float InFalloffStart, float InFalloffEnd, float InMinMultiplier, float InHeadshotMultiplier, float InChestMultiplier, AController* InInstigatorController);
	
protected:
	UFUNCTION()
	void HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	float CalcDamage(float DistanceCm, FName BoneName) const;
	
public:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UNiagaraSystem> DefaultImpactFX;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> DamageEffectClass;
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EPhysicalSurface>, TObjectPtr<UNiagaraSystem>> ImpactFXMap;
	
private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USphereComponent> CollisionComp;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;
	
private:
	FVector StartLocation;
	float BaseDamage;
	float FalloffStart;
	float FalloffEnd;
	float MinMultiplier;
	float HeadshotMultiplier;
	float ChestMultiplier;
	TWeakObjectPtr<AController> InstigatorController;
};