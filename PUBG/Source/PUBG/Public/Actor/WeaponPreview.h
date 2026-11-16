#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponPreview.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class USceneCaptureComponent2D;
struct FItemAttachment;

UCLASS()
class PUBG_API AWeaponPreview : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeaponPreview();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	void SetPreviewMesh(USkeletalMesh* NewMesh, const FTransform& InTransform);
	void SetRenderTarget(UTextureRenderTarget2D* NewTarget);
	void SetPreviewMaterial(UMaterialInterface* NewMaterial);
	void RefreshPreview(); 
	void UpdateWeaponAttachments(const TArray<FItemAttachment>& Attachments);
	
private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> RootSceneComp;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> WeaponMeshComp;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneCaptureComponent2D> SceneCaptureComp;

	UPROPERTY()
	TArray<TObjectPtr<UStaticMeshComponent>> AttachmentMeshComponents;
};