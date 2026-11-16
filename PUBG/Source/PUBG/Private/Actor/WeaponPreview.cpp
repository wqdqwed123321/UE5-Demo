// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/WeaponPreview.h"

#include "Components/SceneCaptureComponent2D.h"
#include "Components/StaticMeshComponent.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Attachment.h"
#include "Object/BackpackItemInstance.h"

AWeaponPreview::AWeaponPreview()
{
	PrimaryActorTick.bCanEverTick = false;

	RootSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComp"));
	RootComponent = RootSceneComp;
	
	WeaponMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComp"));
	WeaponMeshComp->SetupAttachment(RootComponent);
	WeaponMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	SceneCaptureComp = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComp"));
	SceneCaptureComp->SetupAttachment(RootComponent);
	SceneCaptureComp->SetRelativeLocation(FVector(-150.f, 0.f, 0.f));
	SceneCaptureComp->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	SceneCaptureComp->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;
	SceneCaptureComp->bCaptureEveryFrame = false;
	SceneCaptureComp->bCaptureOnMovement = false;
}

void AWeaponPreview::BeginPlay()
{
	Super::BeginPlay();

	if (SceneCaptureComp)
	{
		SceneCaptureComp->ShowOnlyActors.Add(this);
	}
}

void AWeaponPreview::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponPreview::SetPreviewMesh(USkeletalMesh* NewMesh, const FTransform& InTransform)
{
	if (WeaponMeshComp && NewMesh)
	{
		WeaponMeshComp->SetSkeletalMesh(NewMesh);
		WeaponMeshComp->SetRelativeTransform(InTransform);
	}
}

void AWeaponPreview::SetRenderTarget(UTextureRenderTarget2D* NewTarget)
{
	if (SceneCaptureComp && NewTarget)
	{
		SceneCaptureComp->TextureTarget = NewTarget;
	}
}

void AWeaponPreview::SetPreviewMaterial(UMaterialInterface* NewMaterial)
{
	if (WeaponMeshComp && NewMaterial)
	{
		WeaponMeshComp->SetMaterial(0, NewMaterial);
	}
}

void AWeaponPreview::RefreshPreview()
{
	if (SceneCaptureComp)
	{
		SceneCaptureComp->CaptureScene();
	}
}

void AWeaponPreview::UpdateWeaponAttachments(const TArray<FItemAttachment>& Attachments)
{
	if (!WeaponMeshComp) return;

	for (UStaticMeshComponent* OldMesh : AttachmentMeshComponents)
	{
		if (IsValid(OldMesh))
		{
			if (SceneCaptureComp)
			{
				SceneCaptureComp->ShowOnlyComponents.Remove(OldMesh);
			}
			OldMesh->DestroyComponent();
		}
	}
	AttachmentMeshComponents.Empty();

	TSet<EAttachmentSlot> ProcessedSlots;
	for (const FItemAttachment& Attach : Attachments)
	{
		if (Attach.ItemInstance && Attach.ItemInstance->Definition)
		{
			if (ProcessedSlots.Contains(Attach.Slot)) continue;
			ProcessedSlots.Add(Attach.Slot);

			UBackpackItemDefinition* AttachDef = Attach.ItemInstance->Definition;
			UStaticMesh* AttachMesh = AttachDef->WorldMesh; 

			UBackpackItemFragment_Attachment* AttachFrag = Cast<UBackpackItemFragment_Attachment>(
				UBackpackItemDefinition::FindBackpackItemFragmentByClass(AttachDef->GetClass(), UBackpackItemFragment_Attachment::StaticClass())
			);

			if (AttachMesh && AttachFrag)
			{
				FName TargetSocket = NAME_None;
				switch (AttachFrag->TargetSlot)
				{
				case EAttachmentSlot::Scope:     TargetSocket = TEXT("Scope_Socket"); break;
				case EAttachmentSlot::Muzzle:    TargetSocket = TEXT("Muzzle_Socket"); break;
				case EAttachmentSlot::Grip:      TargetSocket = TEXT("Grip_Socket"); break;
				case EAttachmentSlot::Magazine:  TargetSocket = TEXT("Gun_Mag_Socket"); break;
				case EAttachmentSlot::Stock:     TargetSocket = TEXT("Gun_Stock_Socket"); break;
				default: break;
				}

				if (TargetSocket != NAME_None && WeaponMeshComp->DoesSocketExist(TargetSocket))
				{
					UStaticMeshComponent* NewComp = NewObject<UStaticMeshComponent>(this);
					NewComp->RegisterComponent();
					NewComp->SetStaticMesh(AttachMesh);
					NewComp->AttachToComponent(WeaponMeshComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TargetSocket);
					NewComp->SetRelativeLocationAndRotation(FVector::ZeroVector, FRotator::ZeroRotator);
					NewComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
					NewComp->SetVisibility(true);
					
					AttachmentMeshComponents.Add(NewComp);

					if (SceneCaptureComp)
					{
						SceneCaptureComp->ShowOnlyComponents.Add(NewComp);
					}
				}
			}
		}
	}
}

