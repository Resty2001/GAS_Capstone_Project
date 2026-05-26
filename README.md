# UE5 GAS 기반 스킬 시스템

Unreal Engine 5의 Gameplay Ability System을 활용해 런타임에 스킬 수치와 태그를 동적으로 주입하는 확장 가능한 스킬 아키텍처를 C++로 구현한 프로젝트.

## 개요

기존 게임 개발에서 스킬 하나를 추가하려면 기획자가 프로그래머에게 의뢰하고 코드를 수정해야 한다. 이 프로젝트는 DataAsset 파일 하나를 복사해 수치를 입력하는 것만으로 새 스킬이 추가되는 구조를 설계하는 것을 목표로 한다. 핵심은 GE(GameplayEffect) 파일을 늘리지 않고 SetByCaller 패턴과 DynamicGrantedTags로 수치와 태그를 런타임에 주입하는 구조이다.

## 기술 스택

- **Unreal Engine 5.7** — Gameplay Ability System, Enhanced Input, UMG
- **C++** / Blueprint
- **Visual Studio 2022**

## 시스템 구조

```
UGASSkillDataAsset
  ├── BaseDamage, CooldownDuration      ← 수치
  ├── SkillTag, CooldownTag             ← FGameplayTag 식별자
  └── MainEffect, CooldownEffect        ← TSubclassOf<UGameplayEffect>
          │
          ▼
UGASGameplayAbilityBase::ActivateAbility()
  ├── SetSetByCallerMagnitude("Data.Damage", -BaseDamage)
  ├── SetSetByCallerMagnitude("Data.Healing", BaseDamage)
  └── DynamicGrantedTags.AppendTags(CooldownTag)
          │
          ▼
UGameplayEffect (GE 파일 1개로 모든 스킬 처리)
          │
          ▼
UGASAttributeSet — HP / MaxHP / Mana / AttackPower
```

## 프로젝트 구조

```
GASSkillSystem/
├── Source/GASSkillSystem/
│   ├── GASSkillSystemCharacter.h/.cpp   # IAbilitySystemInterface 구현체
│   ├── GASAttributeSet.h/.cpp           # 속성 정의 + 리플리케이션
│   ├── GASGameplayAbilityBase.h/.cpp    # SetByCaller + DynamicGrantedTags
│   └── GASSkillDataAsset.h/.cpp         # 스킬 데이터 정의
│
└── Content/Skills/
    ├── DataAssets/    # DA_Skill_* (스킬 데이터 파일)
    ├── Abilities/     # GA_* 블루프린트
    └── Effects/       # GE_DamageBase, GE_CooldownBase, GE_ShieldBase
```

## 관련 문서

상세 구현 과정, 트러블슈팅, 기획 문서는 Notion에서 확인할 수 있습니다.

**Notion:** https://www.notion.so/Capstone-Project-343316ff687c803ab1f2dda37f0e6509