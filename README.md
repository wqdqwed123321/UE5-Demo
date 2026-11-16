# UE5-Demo

**类 PUBG 第一人称射击 Demo，UE5.6 C++ 独立开发，含 GAS 战斗系统、背包数据与实例分离架构、CommonUI 界面与网络同步**

---

## 项目概述

这是一个独立开发的类 PUBG 第一人称射击 Demo，基于 UE5.6 C++ 实现。项目对标 PUBG 核心体验，聚焦战斗手感、背包系统与游戏内 UI，采用数据与实例分离的工程化架构设计，当前在编辑器 PIE 多窗口模式下基本跑通 2–4 人角色与背包的多端同步逻辑。

---

## 核心技术栈

- **GAS（Gameplay Ability System）**：战斗系统核心
- **背包数据与实例分离架构**：UObject 默认子对象 + Fragment 组合
- **FastArray 增量同步**：背包数据网络同步
- **CommonUI + WidgetStack**：游戏内界面系统
- **EnhancedInput**：输入映射与按键换绑方案
- **网络同步**：Replicated 属性 + RPC + FastArray

---

## 已实现功能

### 1. 背包系统（数据与实例分离架构）

**设计理念：**
- **UBackpackItemDefinition**：静态配置数据（名称、描述、图标、类型），UObject 默认子对象，所有玩家共享，不参与网络复制
- **UBackpackItemInstance**：运行时实例数据（数量、属性、附件），通过 Replicated 网络同步
- **UBackpackItemFragment**：碎片组合扩展，支持武器、弹药、护甲、药品、负重等子结构

**核心特性：**
- 数据与实例分离：静态配置不复制，实例数据增量同步
- Fragment 组合扩展：新增道具类型只需配置 Fragment，无需修改核心逻辑
- FastArray 增量同步：只同步变化的背包条目
- 背包容量管理：通过 GameplayEffect 修改最大容量
- 武器槽位系统：主武器1、主武器2、副武器、近战、投掷
- 装备槽位系统：头盔、护甲、背包等
- 附件系统：武器配件（瞄准镜、消音器、弹匣等）
- 拖拽交互：背包 UI DragDrop 操作

### 2. GAS 战斗系统

- **AttributeSet**：血量（Health、MaxHealth）、背包容量（BackpackCapacity、MaxBackpackCapacity）
- **GameplayEffect**：修改属性数值
- **GameplayTag**：状态标记（如"State.Dead"、"Weapon.Rifle"）
- 客户端预测 + 服务器校验回滚

### 3. 武器系统

- **多武器槽位**：主武器1、主武器2、副武器、近战、投掷
- **开火模式**：全自动、半自动、点射（Burst）
- **换弹系统**：换弹动画 Montage，服务器端校验
- **武器切换**：切换动画、武器槽位管理
- **后坐力系统**：连续开火后坐力扩散，准星扩散动画
- **开火效果**：枪口火焰、弹道痕迹、命中特效（NetMulticast 广播）

### 4. 动画系统

- **八方向移动**：CharacterGait（走、跑、蹲）
- **姿态切换**：站立、蹲、趴
- **动画层接口（ALI）**：武器动画层分离（徒手、步枪、手枪、近战、投掷）
- **QE 侧身探身**：按 Q/E 身体左右倾斜，掩体后探头射击
- **武器 IK 实时绑定**：手臂动态对齐武器握把插槽，持枪时自然握枪
- **武器动画同步**：切换武器动画、换弹动画
- **RootYawOffset**：旋转补偿

### 5. UI 系统（CommonUI）

- **WidgetStack**：界面层级管理
- **背包 UI**：物品列表、拖拽、装备栏
- **准星系统**：准星扩散动画、中心点
- **罗盘系统**：方位指示
- **装备栏**：角色装备展示
- **输入模式锁止**：背包打开时锁定角色移动，鼠标可控制 UI

### 6. 网络同步

- **Replicated 属性**：角色状态、背包数据
- **RPC**：Server RPC（客户端调用服务器执行）、NetMulticast（服务器广播所有客户端）
- **FastArray 增量同步**：背包条目增量同步
- **PIE 多窗口验证**：2–4 人多端同步逻辑验证

### 7. 输入系统（EnhancedInput）

- 多键映射与上下文绑定
- 按键换绑方案设计（DataAsset 驱动映射表）
- 输入模式自动切换

### 8. 拾取系统

- Sphere 碰撞检测
- APickupItem 拾取物 Actor
- 委托事件广播（进入/离开拾取范围）
- 服务器端权威拾取逻辑

---

## 项目结构

```
PUBG/
├── Source/PUBG/
│   ├── Public/
│   │   ├── Object/                    # 背包数据与实例
│   │   │   ├── BackpackItemDefinition.h    # 静态配置（UObject 默认子对象）
│   │   │   ├── BackpackItemInstance.h      # 运行时实例（网络同步）
│   │   │   ├── BackpackItemFragment.h      # Fragment 基类
│   │   │   ├── BackpackItemFragment_Weapon.h    # 武器碎片
│   │   │   ├── BackpackItemFragment_Ammo.h     # 弹药碎片
│   │   │   ├── BackpackItemFragment_Durability.h # 耐久碎片
│   │   │   ├── BackpackItemFragment_Heal.h       # 药品碎片
│   │   │   ├── BackpackItemFragment_Weight.h    # 负重碎片
│   │   │   └── ...                              # 其他碎片
│   │   ├── AttributeSystem/
│   │   │   └── CharacterAttributeSet.h   # GAS 属性集
│   │   ├── ActorComponent/
│   │   │   └── BackpackManagerComponent.h # 背包管理组件
│   │   ├── Character/
│   │   │   └── PlayerCharacter.h          # 角色主类
│   │   ├── AnimInstance/
│   │   │   ├── CharacterAnimInstance.h    # 动画实例
│   │   │   └── CharacterAnimLayerInstance.h # 动画层接口
│   │   ├── CommonActivatableWidget/      # UI 组件
│   │   ├── GameplayAbility/               # GAS 技能
│   │   └── ...
│   └── PUBG.Build.cs
├── Content/                     # 资产目录（不公开）
└── Config/                      # 配置文件
```

---

## 技术亮点

1. **数据与实例分离架构**：静态配置（UObject 默认子对象）与运行时实例分离，新增道具只需配置 Fragment，无需修改核心逻辑
2. **FastArray 增量同步**：背包条目只同步变化部分，网络效率高
3. **动画层接口（ALI）**：武器动画层分离，支持多武器槽位
4. **CommonUI + WidgetStack**：界面层级管理，输入模式自动切换
5. **EnhancedInput 输入系统**：多键映射，按键换绑方案设计

---

## 当前进展

- 已完成角色移动、射击等核心战斗循环
- 背包数据与实例分离架构落地
- PIE 多窗口下同步逻辑基本跑通（2–4 人）
- 具备引擎侧问题排查能力，独立定位并修复同步错位、动画抽动等问题

---

## 后续规划

- **游戏性玩法扩展**：
  - 攀爬/翻越系统（射线检测墙面、翻越障碍物）
  - 投掷物抛物线预测（手雷、烟雾弹）
  - 载具系统（驾驶、乘坐）
  - 天气与环境系统（雾、雨、昼夜循环）
  - 音效系统（枪声、脚步、环境音）
- **系统优化**：
  - 网络同步性能优化（减少同步数据量）
  - 背包 UI 交互优化（拖拽手感、排序）
  - 动画系统优化（ blending 过渡、IK 贴合）
- **联机与部署**：
  - 匹配流程完善
  - 专用服务器部署
  - 10 人同局联机演示

---

**项目仅用于学习目的，不包含 PUBG 原始资产。**
