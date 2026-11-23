// Fill out your copyright notice in the Description page of Project Settings.

#include "Actor/BulletProjectile.h"

#include "PUBGGameplayTag.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Character/PlayerCharacter.h"

ABulletProjectile::ABulletProjectile()
{
 	PrimaryActorTick.bCanEverTick = false;
	
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComp->InitSphereRadius(3.f); 
	CollisionComp->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionComp->SetCollisionResponseToAllChannels(ECR_Block);
	CollisionComp->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	CollisionComp->SetGenerateOverlapEvents(false);
	CollisionComp->OnComponentHit.AddDynamic(this, &ABulletProjectile::HandleHit);
	RootComponent = CollisionComp;
	
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->SetUpdatedComponent(CollisionComp);
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->bSweepCollision = true;
	ProjectileMovement->ProjectileGravityScale = 1.f; 
	ProjectileMovement->InitialSpeed = 0.f;
	
	bReplicates = true;
	InitialLifeSpan = 10.f;
}

void ABulletProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetOwner())
	{
		CollisionComp->IgnoreActorWhenMoving(GetOwner(), true);
	}
	
	SetReplicateMovement(false);
}

void ABulletProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABulletProjectile::InitBullet(const FVector& InDirection, float InSpeedMS, float InGravityScale,
	const FVector& InStartLocation, float InBaseDamage, float InFalloffStart, float InFalloffEnd, float InMinMultiplier,
	float InHeadshotMultiplier, float InChestMultiplier, AController* InInstigatorController)
{
	StartLocation = InStartLocation;
	BaseDamage = InBaseDamage;
	FalloffStart = InFalloffStart;
	FalloffEnd = InFalloffEnd;
	MinMultiplier = InMinMultiplier;
	HeadshotMultiplier = InHeadshotMultiplier;
	ChestMultiplier = InChestMultiplier;
	InstigatorController = InInstigatorController;
	
	const float SpeedCm = InSpeedMS * 100.f;
	
	ProjectileMovement->ProjectileGravityScale = InGravityScale;
	ProjectileMovement->InitialSpeed = SpeedCm;
	ProjectileMovement->MaxSpeed = SpeedCm;
	ProjectileMovement->Velocity = InDirection.GetSafeNormal() * SpeedCm;
	ProjectileMovement->Activate(true);
}

void ABulletProjectile::HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (!HasAuthority()) return;
	
	APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(GetInstigator());
	if (PlayerChar)
	{
		const EPhysicalSurface SurfaceType = UGameplayStatics::GetSurfaceType(Hit);
		UNiagaraSystem* ImpactFX = DefaultImpactFX;
		if (const TObjectPtr<UNiagaraSystem>* FoundFX = ImpactFXMap.Find(SurfaceType))
		{
			if (*FoundFX) ImpactFX = *FoundFX;
		}
		PlayerChar->Multicast_PlayImpactFX(Hit.ImpactPoint, Hit.ImpactNormal, ImpactFX);
	}
	
	if (IsValid(OtherActor) && OtherActor != GetOwner() && OtherActor->IsA(APawn::StaticClass()))
	{
		const float DistanceCm = FVector::Dist(StartLocation, Hit.ImpactPoint);
		const float Damage = CalcDamage(DistanceCm, Hit.BoneName);
		
		if (IAbilitySystemInterface* TargetASI = Cast<IAbilitySystemInterface>(OtherActor))
		{
			UAbilitySystemComponent* TargetASC = TargetASI->GetAbilitySystemComponent();
			UAbilitySystemComponent* SourceASC = nullptr;
			
			if (InstigatorController.IsValid())
			{
				if (IAbilitySystemInterface* SourceASI = Cast<IAbilitySystemInterface>(InstigatorController->GetPawn()))
				{
					SourceASC = SourceASI->GetAbilitySystemComponent();
				}
			}

			if (TargetASC && DamageEffectClass && SourceASC)
			{
				FGameplayEffectContextHandle ContextHandle = SourceASC->MakeEffectContext();
				ContextHandle.AddInstigator(InstigatorController.Get()->GetPawn(), this);
				ContextHandle.AddHitResult(Hit); 
				
				FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(DamageEffectClass, 1.f, ContextHandle);
				if (SpecHandle.IsValid())
				{
					SpecHandle.Data->SetSetByCallerMagnitude(PUBGGameplayTag::PUBG_GE_Damage, -Damage); 
					
					SourceASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
				}
			}
		}
		
		if (APlayerCharacter* VictimChar = Cast<APlayerCharacter>(OtherActor))
		{
			FVector SourceLoc = Hit.ImpactPoint;
			if (InstigatorController.IsValid() && InstigatorController->GetPawn())
			{
				SourceLoc = InstigatorController->GetPawn()->GetActorLocation();
			}
			VictimChar->Multicast_PlayHitReaction(SourceLoc);
		}
	}
	
	SetLifeSpan(0.5f);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ProjectileMovement->StopMovementImmediately();
	SetActorHiddenInGame(true);
}

float ABulletProjectile::CalcDamage(float DistanceCm, FName BoneName) const
{
	float Damage = BaseDamage;
	
	if (FalloffEnd > FalloffStart && DistanceCm > FalloffStart)
	{
		const float Alpha = FMath::Clamp((DistanceCm - FalloffStart) / (FalloffEnd - FalloffStart), 0.f, 1.f);
		Damage = BaseDamage * FMath::Lerp(1.f, MinMultiplier, Alpha);
	}

	float Part = 1.f;
	if (BoneName == FName("head")) Part = HeadshotMultiplier;
	else if (BoneName == FName("neck_01")) Part = HeadshotMultiplier * 0.75f;
	else if (BoneName == FName("spine_03")) Part = ChestMultiplier;
	else if (BoneName == FName("upperarm_l") || BoneName == FName("upperarm_r") || BoneName == FName("thigh_l") || BoneName == FName("thigh_r")) Part = 0.54f;
	else if (BoneName == FName("lowerarm_l") || BoneName == FName("lowerarm_r") || BoneName == FName("calf_l") || BoneName == FName("calf_r")) Part = 0.45f;
	else if (BoneName == FName("hand_l") || BoneName == FName("hand_r")) Part = 0.27f;

	return Damage * Part;
}