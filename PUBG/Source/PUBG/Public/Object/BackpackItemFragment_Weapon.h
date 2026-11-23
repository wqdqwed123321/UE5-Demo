// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "PUBGType.h"
#include "BackpackItemFragment_Weapon.generated.h"

class UBackpackItemDefinition;
class UNiagaraSystem;
class ABulletProjectile;
/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Weapon : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "基础伤害"))
	float BaseDamage; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "爆头倍率"))
	float HeadshotMultiplier; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "胸部倍率"))
	float ChestMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "衰减起点距离(厘米)"))
	float FalloffStartDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "衰减终点距离(厘米)"))
	float FalloffEndDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "最低伤害衰减系数"))
	float MinDamageMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "最大射线距离(厘米)"))
	float MaxRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "子弹初速(m/s)"))
	float MuzzleVelocity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "射速(发/分钟)"))
	float RoundsPerMinute;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "弹匣容量"))
	int32 MagazineSize = 30;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "换弹动画(有弹)"))
	TObjectPtr<UAnimMontage> ReloadMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "换弹动画(空仓)"))
	TObjectPtr<UAnimMontage> ReloadEmptyMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "使用弹药类型"))
	EAmmoType WeaponAmmoType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "武器类型"))
	EWeaponType WeaponType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "后坐力配置"))
	FRecoilSettings RecoilSettings;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "散布配置"))
	FSpreadSettings SpreadSettings;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "支持的开火模式"))
	TArray<EWeaponFireMode> SupportedFireModes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "支持的配件插槽"))
	TArray<EAttachmentSlot> SupportedAttachmentSlots;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "子弹蓝图类"))
	TSubclassOf<ABulletProjectile> BulletClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "枪口插槽名"))
	FName MuzzleSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "弹道重力倍率"))
	float BallisticGravityScale;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "开火音效"))
	TObjectPtr<USoundBase> FireSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "空枪音效"))
	TObjectPtr<USoundBase> EmptySound;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "切换射击模式动画"))
	TObjectPtr<UAnimMontage> SwitchFireModeMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "武器开火动画"))
	TObjectPtr<UAnimMontage> WeaponFireMontage;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "角色开火动画"))
	TObjectPtr<UAnimMontage> CharacterFireMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "枪口粒子特效"))
	TObjectPtr<UNiagaraSystem> MuzzleFlashFX;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "默认配件"))
	TMap<EAttachmentSlot, TSoftClassPtr<UBackpackItemDefinition>> DefaultAttachments;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "武器动画蓝图类"))
	TSubclassOf<UAnimInstance> WeaponAnimInstanceClass;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "弹壳抛出特效"))
	TObjectPtr<UNiagaraSystem> ShellEjectFX;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "抛壳插槽名"))
	FName ShellEjectSocketName = TEXT("OutBullet_Socket");

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "弹壳网格"))
	TObjectPtr<UStaticMesh> ShellEjectMesh;
};
