// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/PickupItem.h"

#include "Net/UnrealNetwork.h"
#include "Object/BackpackItemDefinition.h"

// Sets default values
APickupItem::APickupItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMesh->SetCollisionObjectType(ECC_WorldDynamic);
	StaticMesh->SetCollisionResponseToAllChannels(ECR_Block);
	StaticMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	StaticMesh->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap); 
	StaticMesh->SetGenerateOverlapEvents(true);
	StaticMesh->SetIsReplicated(true);
	RootComponent = StaticMesh;
	
	bReplicates = true;
}

// Called when the game starts or when spawned
void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
	if (HasAuthority())
	{
		OnRep_ItemDefinition();
		
		if (StaticMesh)
		{
			StaticMesh->SetSimulatePhysics(true);
		}
	}
}

// Called every frame
void APickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupItem::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(APickupItem, Quantity);
	DOREPLIFETIME(APickupItem, ItemDefinition);
	DOREPLIFETIME(APickupItem, SavedAttachments);
	DOREPLIFETIME(APickupItem, SavedAttributes);
}

void APickupItem::OnRep_ItemDefinition()
{
	if (ItemDefinition && StaticMesh)
	{
		UBackpackItemDefinition* Def = ItemDefinition.GetDefaultObject();
		if (Def && Def->WorldMesh && StaticMesh)
		{
			StaticMesh->SetStaticMesh(nullptr);
			StaticMesh->SetStaticMesh(Def->WorldMesh);
		}
	}
}

void APickupItem::InitItemData(TSubclassOf<UBackpackItemDefinition> InDefinition, int32 InQuantity)
{
	ItemDefinition = InDefinition;
	Quantity = InQuantity;

	if (ItemDefinition && StaticMesh)
	{
		UBackpackItemDefinition* Def = ItemDefinition.GetDefaultObject();
		if (Def && Def->WorldMesh)
		{
			StaticMesh->SetStaticMesh(Def->WorldMesh);
		}
	}
}
