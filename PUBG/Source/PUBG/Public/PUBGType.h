#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PUBGType.generated.h"

class UBackpackItemInstance;

UENUM(BlueprintType)
enum class ECharacterDirection : uint8
{
	Forward     UMETA(DisplayName = "向前"),
	Backward    UMETA(DisplayName = "向后"),
	Left        UMETA(DisplayName = "向左"),
	Right       UMETA(DisplayName = "向右")
};

UENUM(BlueprintType)
enum class ECharacterStance : uint8
{
	Stand        UMETA(DisplayName = "站立"),
	Crouch       UMETA(DisplayName = "下蹲")
};

UENUM(BlueprintType)
enum class ECharacterGait : uint8
{
	Walk         UMETA(DisplayName = "静步"),
	Jog          UMETA(DisplayName = "慢跑"),
	Sprint       UMETA(DisplayName = "冲刺")
};

UENUM(BlueprintType)
enum class ECharacterHeldSlot : uint8
{
	Unarmed     UMETA(DisplayName = "空手"),
	Primary1    UMETA(DisplayName = "主武器1"),
	Primary2    UMETA(DisplayName = "主武器2"),
	Secondary   UMETA(DisplayName = "副武器"),
	Melee       UMETA(DisplayName = "近战武器"),
	Throwable   UMETA(DisplayName = "投掷物")
};

UENUM(BlueprintType)
enum class EAsyncPushWidgetState : uint8
{
	OnCreatedBeforePush    UMETA(DisplayName = "创建后，推入前"),
	AfterPush              UMETA(DisplayName = "推入后")
};

UENUM(BlueprintType)
enum class EBackpackDragSource : uint8
{
	Ground      UMETA(DisplayName = "地面/附近"),
	Backpack    UMETA(DisplayName = "玩家背包"),
	Equipment   UMETA(DisplayName = "装备/武器槽")
};

UENUM(BlueprintType)
enum class EItemType : uint8
{
	None        UMETA(DisplayName = "无"),
	Weapon      UMETA(DisplayName = "枪械"),
	MeleeWeapon UMETA(DisplayName = "近战武器"),
	Ammo        UMETA(DisplayName = "弹药"),
	Healing     UMETA(DisplayName = "治疗品"),
	Energy      UMETA(DisplayName = "能量饮料"),
	Attachment  UMETA(DisplayName = "配件"),
	Equipment   UMETA(DisplayName = "装备"),
	Throwable   UMETA(DisplayName = "投掷物")
};

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8
{
	None        UMETA(DisplayName = "无"),
	Helmet      UMETA(DisplayName = "头盔"),
	Vest        UMETA(DisplayName = "防弹衣"),
	Backpack    UMETA(DisplayName = "背包"),
	Head        UMETA(DisplayName = "头部"),
	Top         UMETA(DisplayName = "上衣"),
	Jacket      UMETA(DisplayName = "外套"),
	Legs        UMETA(DisplayName = "腿部"),
	Shoes       UMETA(DisplayName = "鞋子"),
	Hands       UMETA(DisplayName = "手部"),
	Glasses     UMETA(DisplayName = "眼镜"),
	Mask        UMETA(DisplayName = "面罩")
};

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Rifle           UMETA(DisplayName = "突击步枪"),
	MarksmanRifle   UMETA(DisplayName = "射手步枪"),
	Sniper          UMETA(DisplayName = "狙击枪"),
	Smg             UMETA(DisplayName = "冲锋枪"),
	Shotgun         UMETA(DisplayName = "霰弹枪"),
	Pistol          UMETA(DisplayName = "手枪")
};

UENUM(BlueprintType)
enum class EBackpackListMode : uint8
{
	Inventory UMETA(DisplayName = "背包列表"),
	Nearby    UMETA(DisplayName = "附近物品列表")
};

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	Ammo_556    UMETA(DisplayName = "5.56毫米"),
	Ammo_762    UMETA(DisplayName = "7.62毫米"),
	Ammo_5mm    UMETA(DisplayName = "5毫米"),
	Ammo_9mm    UMETA(DisplayName = "9毫米"),
	Ammo_12G    UMETA(DisplayName = "12号口径")
};

UENUM(BlueprintType)
enum class EWeaponFireMode : uint8
{
	SemiAuto    UMETA(DisplayName = "单发"),
	FullAuto    UMETA(DisplayName = "全自动"),
	Burst       UMETA(DisplayName = "三连发")
};

UENUM(BlueprintType)
enum class EAttachmentSlot : uint8
{
	Scope           UMETA(DisplayName = "主瞄具"),
	CantedSight     UMETA(DisplayName = "侧面瞄具"),
	Muzzle          UMETA(DisplayName = "枪口"),
	Grip            UMETA(DisplayName = "握把"),
	Magazine        UMETA(DisplayName = "弹匣"),
	Stock           UMETA(DisplayName = "枪托")
};

USTRUCT(BlueprintType)
struct FItemAttribute
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;
};

USTRUCT(BlueprintType)
struct FItemAttachment
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentSlot Slot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBackpackItemInstance> ItemInstance;
};

USTRUCT(BlueprintType)
struct FRecoilSettings
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "垂直后坐力"))
	float VerticalRecoil;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "水平后坐力随机"))
	float HorizontalRecoil;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "后坐力恢复速度"))
	float RecoilRecoverySpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "后坐力恢复延迟(秒)"))
	float RecoilRecoveryDelay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "蹲下后坐力倍率"))
	float CrouchMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "开镜后坐力倍率"))
	float ADSRecoilMultiplier;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "垂直抬升上限(度)", ClampMin = "0.0"))
	float MaxVerticalRecoil = 10.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "每发衰减系数", ClampMin = "0.0", ClampMax = "0.5"))
	float PerShotDecay = 0.08f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "衰减下限", ClampMin = "0.0", ClampMax = "1.0"))
	float MinDecay = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "连发重置窗口(秒)", ClampMin = "0.0"))
	float RecoilResetWindow = 0.35f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "后坐力回正比例", ClampMin = "0.0", ClampMax = "1.0"))
	float RecoveryRatio = 0.6f;
};

USTRUCT(BlueprintType)
struct FSpreadSettings
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "基础散射角度"))
	float BaseSpreadAngle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "移动散射倍数"))
	float MoveMultiplier;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "静步散射倍数"))
	float WalkMultiplier;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "冲刺散射倍数"))
	float SprintMultiplier; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "蹲下散射倍数"))
	float CrouchMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "空中散射倍数"))
	float AirMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "连射累积角度"))
	float SpreadPerShot;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "最大散布角度"))
	float MaxSpreadAngle;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "散布恢复延迟(秒)"))
	float SpreadRecoveryDelay;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "散布恢复速度"))
	float SpreadRecoverySpeed;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "开镜散布倍率"))
	float ADSSpreadMultiplier;
};

USTRUCT(BlueprintType)
struct FCharacterDirectionAnimations
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> ForwardAnimInstance;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> BackwardAnimInstance;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> LeftAnimInstance;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> RightAnimInstance;
};

USTRUCT(BlueprintType)
struct FCharacterTurnAngleAnimations
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> TurnRight90;
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> TurnLeft90;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> TurnRight180;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UAnimSequence> TurnLeft180;
};

USTRUCT(BlueprintType)
struct FCharacterGaitSettings : public FTableRowBase
{
	GENERATED_BODY()
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxWalkSpeed;
};

USTRUCT(BlueprintType)
struct FTPPCameraSettings : public FTableRowBase
{
	GENERATED_BODY()
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TargetArmLength;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector SocketOffset;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FOV = 90.f;
};