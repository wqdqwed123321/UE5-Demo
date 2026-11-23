// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/GrenadeProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Object/BackpackItemDefinition.h"

// Sets default values
AGrenadeProjectile::AGrenadeProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	CollisionComp->InitSphereRadius(5.f);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	RootComponent = CollisionComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(CollisionComp);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->SetUpdatedComponent(CollisionComp);
	ProjectileMovement->bShouldBounce = true;
	ProjectileMovement->Bounciness = 0.4f;
	ProjectileMovement->ProjectileGravityScale = 1.f;
	
	bReplicates = true;
}

// Called when the game starts or when spawned
void AGrenadeProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	SetReplicateMovement(true);
}

// Called every frame
void AGrenadeProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenadeProjectile::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AGrenadeProjectile, GrenadeMesh);
}

void AGrenadeProjectile::InitGrenade(const FVector& Direction, float SpeedCmPerSec,
	UBackpackItemDefinition* InDefinition, float InFuseTime)
{
	if (InDefinition && InDefinition->WorldMesh)
	{
		GrenadeMesh = InDefinition->WorldMesh;
		MeshComp->SetStaticMesh(GrenadeMesh);
	}
	
	if (APawn* InstigatorPawn = GetInstigator())
	{
		CollisionComp->IgnoreActorWhenMoving(InstigatorPawn, true);
	}

	ProjectileMovement->Velocity = Direction.GetSafeNormal() * SpeedCmPerSec;
	ProjectileMovement->Activate(true);

	if (HasAuthority())
	{
		FTimerDelegate Del;
		Del.BindLambda([this]() { Destroy(); });
		GetWorldTimerManager().SetTimer(FuseTimer, Del, InFuseTime, false);
	}
}

void AGrenadeProjectile::OnRep_GrenadeMesh()
{
	if (GrenadeMesh) MeshComp->SetStaticMesh(GrenadeMesh);
}

