# 기획자 주도형 데이터 기반 스킬 제작 시스템

**UE5 GAS / State Tree Technical Design Framework**

> 프로그래머가 C++ 베이스를 한 번 구축하면, 기획자가 Data Asset 파일 하나만으로 새 스킬을 추가하는 Low-code 스킬 확장 아키텍처

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.7-black?logo=unrealengine)](https://www.unrealengine.com/)
[![C++](https://img.shields.io/badge/C++-17-blue?logo=cplusplus)](https://isocpp.org/)
[![GAS](https://img.shields.io/badge/Gameplay%20Ability%20System-GAS-purple)](https://docs.unrealengine.com/5.0/en-US/gameplay-ability-system-for-unreal-engine/)
[![State Tree](https://img.shields.io/badge/State%20Tree-UE5-teal)](https://docs.unrealengine.com/5.0/en-US/state-tree-in-unreal-engine/)

---

## 프로젝트 개요

서울대학교 정보문화학 전공 캡스톤 프로젝트입니다.

이 프로젝트는 **게임을 만드는 것**이 목적이 아니라, **기획자가 코드 없이 스킬을 만들 수 있는 구조를 이헤하고 설계하는 것**이 목적입니다.

### 핵심 질문

> "스킬 하나를 추가하는 데 기획자 혼자 15분이면 충분한 구조를 만들 수 있는가?"

### 이 프로젝트가 해결하는 문제

현재 대부분의 게임 개발팀에서 스킬 하나를 추가하는 과정은 이렇습니다.

```
기획자 → 기획서 작성 → 프로그래머 대기 → 코드 작성 → 검토 → 수정 → 반영
(빠르면 하루, 길면 며칠)
```

이 프로젝트가 구현하는 구조는 이렇습니다.

```
기획자 → Data Asset 파일 복사 → 수치 입력 → 저장 → 즉시 게임에 반영
(15분, 코드 수정 없음)
```

---

## 프로젝트 목표

| 목표 | 설명 |
|------|------|
| **테크니컬 디자인 역량 증명** | GAS를 기획자 관점에서 설계·활용하는 역량 포트폴리오화 |
| **협업 효율 설계** | 프로그래머 없이 스킬을 확장하는 Low-code 파이프라인 구축 |
| **기획 사고 문서화** | Tag 계층·DataAsset 스키마·밸런스 기획서 등 실행 가능한 스펙 문서 완성 |
| **엔진 리터러시** | GAS·State Tree·DataAsset·GameplayTag 기획자 수준 습득 |

---

## 시스템 아키텍처

### 데이터 흐름

```
[기획자가 편집하는 영역]          [프로그래머가 한 번 구축한 영역]

GASSkillDataAsset (DA 파일)
  ├─ SkillName: "화염 강타"
  ├─ BaseDamage: 120.0          →  GASGameplayAbilityBase (C++)
  ├─ CooldownDuration: 8.0            │  ActivateAbility()
  ├─ SkillTag: Skill.Attack...        │  SetSetByCallerMagnitude()
  ├─ StatusEffectTag: Status.Burning  │  DynamicGrantedTags (쿨타임 주입)
  ├─ MainEffect: GE_DamageBase   →  GameplayEffect (블루프린트)
  └─ CooldownEffect: GE_CooldownBase  │  SetByCaller → 실제 수치 반영
                                      ↓
                              GASAttributeSet (C++)
                                HP / MaxHP / Mana / AttackPower
```

### 핵심 설계 원칙

**SetByCaller 방식의 수치 전달**
GameplayEffect에 수치를 하드코딩하지 않고, DataAsset의 BaseDamage를 런타임에 동적으로 주입합니다. GE 파일 하나(`GE_DamageBase`)로 모든 공격 스킬의 데미지를 처리합니다.

**동적 쿨타임 태그 주입**
`GE_CooldownBase`의 Granted Tags를 비우고, 코드에서 `DynamicGrantedTags`로 DA의 `CooldownTag`를 런타임에 주입합니다. GE 파일 하나로 모든 스킬의 쿨타임을 독립적으로 관리합니다.

---

## 프로젝트 구조

```
GASSkillSystem/
├── Source/GASSkillSystem/
│   ├── GASSkillSystemCharacter.h/.cpp   # GAS가 통합된 기본 캐릭터 클래스
│   ├── GASAttributeSet.h/.cpp           # HP·MaxHP·Mana·AttackPower
│   ├── GASGameplayAbilityBase.h/.cpp    # 모든 스킬의 부모 클래스
│   └── GASSkillDataAsset.h/.cpp         # 스킬 데이터 정의 클래스
│
└── Content/
    ├── Skills/
    │   ├── DataAssets/                  # DA_Skill_* 파일들 (기획자 작업 영역)
    │   │   ├── DA_Skill_FireStrike
    │   │   ├── DA_Skill_AoESlam
    │   │   ├── DA_Skill_PiercingArrow
    │   │   ├── DA_Skill_ChainLightning
    │   │   ├── DA_Skill_IronShield
    │   │   ├── DA_Skill_BattleCry
    │   │   ├── DA_Skill_Evasion
    │   │   └── DA_Skill_Regeneration
    │   ├── Abilities/                   # GA_* 블루프린트들
    │   └── Effects/                    # GE_DamageBase, GE_CooldownBase 등
    │
    └── ThirdPerson/
        └── Blueprints/
            └── BP_ThirdPersonCharacter  # GAS 컴포넌트 장착된 플레이어
```

---

## 기술 스택

| 구분 | 기술 |
|------|------|
| 엔진 | Unreal Engine 5.7 |
| 언어 | C++ / Blueprint |
| 핵심 시스템 | Gameplay Ability System (GAS) |
| AI | State Tree (진행 중) |
| 입력 | Enhanced Input System |
| UI | UMG Widget Blueprint |

---

## Gameplay Tag 계층

```
Skill
├── Attack
│   ├── Melee.SingleTarget    
│   ├── Melee.AoE             
│   └── Ranged.Projectile    
├── Buff
│   ├── Self.Shield         
│   └── Ally.AttackUp       
└── Debuff
    └── Enemy.Stun         

Status
├── Burning                
├── Frozen                   
├── Stunned                  
└── Bleeding           

Cooldown.Skill.Q ~ V      

Data
├── Damage                 
└── Healing               
```

---

## DataAsset 구조

```
UGASSkillDataAsset
│
├── [스킬 기본 정보]
│   ├── SkillName          : FText        (필수)
│   ├── SkillDescription   : FText        (권장)
│   └── SkillTag           : FGameplayTag (필수)
│
├── [수치]
│   ├── BaseDamage         : float        (필수) 0 ~ 500
│   ├── DamageCoefficient  : float        (필수) 0.0 ~ 5.0
│   ├── CooldownDuration   : float        (필수) 0.5 ~ 60.0
│   └── ManaCost           : float        (필수) 0 ~ 100
│
├── [타겟팅]
│   ├── TargetType         : Enum         (필수) Single/AoE/Line/Chain
│   ├── Range              : float        (필수) 100 ~ 1500
│   └── AoERadius          : float        (AoE시 필수) 100 ~ 500
│
├── [상태이상]
│   ├── StatusEffectTag    : FGameplayTag (선택)
│   ├── StatusEffectChance : float        (태그 설정시 필수) 0.0 ~ 1.0
│   └── StatusEffectDuration: float       (태그 설정시 필수) 1.0 ~ 10.0
│
├── [시너지 조건]
│   ├── RequiredStatusTag  : FGameplayTag (선택)
│   └── BonusDamageRatio   : float        (태그 설정시 필수) 0.0 ~ 1.0
│
└── [GameplayEffect 연결]
├── MainEffect         : TSubclassOf  (필수)
├── CooldownEffect     : TSubclassOf  (필수)
└── CooldownTag        : FGameplayTag (필수)
```

---

## 새 스킬 추가하는 법

```
1. Content/DataAssets/ 에서 기존 DA 파일 우클릭 → Duplicate
2. 파일명 변경: DA_Skill_[새스킬명]
3. 파일 열기 → 수치 입력
   - SkillName: 스킬 이름
   - BaseDamage: 데미지 수치
   - CooldownDuration: 쿨타임 (초)
   - SkillTag: Tag 계층에서 선택
   - MainEffect: GE_DamageBase (공격) 또는 GE_ShieldBase (방어)
   - CooldownEffect: GE_CooldownBase
   - CooldownTag: Cooldown.Skill.[키]
4. Save
5. Content/Skills/Abilities/ 에서 GA 파일 Duplicate → Skill Data에 새 DA 연결
6. BP_ThirdPersonCharacter → Default Abilities에 GA 추가
7. 이벤트 그래프에서 키 입력 연결
```

---

## 구현 현황

| 항목 | 상태 | 비고 |
|------|------|------|
| AttributeSet (4종) | ✅ 완료 | HP·MaxHP·Mana·AttackPower |
| AbilitySystemComponent 통합 | ✅ 완료 | BP_ThirdPersonCharacter |
| GASGameplayAbilityBase | ✅ 완료 | SetByCaller + 동적 쿨타임 |
| GASSkillDataAsset 클래스 | ✅ 완료 | 6개 카테고리 파라미터 |
| GE_DamageBase / ShieldBase | ✅ 완료 | SetByCaller 방식 |
| GE_CooldownBase | ✅ 완료 | DynamicGrantedTags 방식 |
| Gameplay Tag 23종 등록 | ✅ 완료 | |
| 스킬 DataAsset 8종 | ✅ 완료 | 공격 4 + 방어·버프 4 |
| HP 실시간 UI (WBP_HUD) | ✅ 완료 | |
| 스킬 16종 완성 | 🔄 진행 중 | 8종 추가 예정 |
| State Tree NPC 3종 | 🔄 진행 중 | 설계 완료, 구현 중 |
| 전투 데모 빌드 | 📅 예정 | 진행 전 |

---

## 관련 문서

모든 기획 문서는 Github에서 확인할 수 있습니다.

| 문서 | 내용 |
|------|------|
| Gameplay Tag 계층 설계서 | 전체 태그 트리 + 각 분기 설계 의도 + 확장 규칙 |
| DataAsset 스키마 문서 | 기획자 편집 파라미터 전체 명세 + 입력 가이드 |
| 스킬 밸런스 기획서 | 8종 스킬 수치·설계 근거·시너지 관계도 |
| State Tree 구조도 설계 문서 | NPC 3종 행동 패턴 조건 분기 논리 |
| 학습 과정 (Notion) | 일별 진행 내용·트러블슈팅·코드 변경 이력 |

**Notion:** https://www.notion.so/Capstone-Project-343316ff687c803ab1f2dda37f0e6509