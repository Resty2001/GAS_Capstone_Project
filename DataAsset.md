# DataAsset 스키마 문서
---

## 1. 개요

### 1.1 DataAsset이란

DataAsset은 스킬 하나의 모든 데이터를 담는 파일이다.
기획자가 이 파일 하나를 만들면 코드 수정 없이 새 스킬이 게임에 추가된다.
기획자가 하는 일:
DA 파일 생성 → 수치 입력 → 저장
(코드 수정 없음 / 프로그래머 호출 없음)
시스템이 하는 일:
DA 읽기 → GameplayAbility에 데이터 전달 → GameplayEffect 적용

### 1.2 파일 위치 및 명명 규칙

**저장 경로:** `Content/DataAssets/`

**파일명 규칙:** `DA_Skill_[스킬명]`
- 올바른 예: `DA_Skill_FireStrike`, `DA_Skill_IronShield`
- 잘못된 예: `fireStrike_DA`, `스킬_화염강타`

**GA 파일명 규칙:** `GA_[스킬명]`
- 올바른 예: `GA_FireStrike`, `GA_IronShield`

### 1.3 새 스킬 추가 절차

DA 파일 Duplicate
파일명 변경: DA_Skill_[새스킬명]
파일 열기 → 수치 수정 (아래 스키마 참고)
Save
GA_파일 Duplicate → GA_[새스킬명]
GA 파일 열기 → Skill Data 항목에 새 DA 파일 선택
Compile → Save
BP_ThirdPersonCharacter의 Default Abilities에 GA 추가
이벤트 그래프에서 키 입력 연결

---

## 2. 전체 파라미터 스키마

### 카테고리 1 — 스킬 기본 정보

| 파라미터명 | 타입 | 필수 여부 | 설명 | 입력 예시 |
|----------|------|---------|------|---------|
| SkillName | FText | 필수 | 스킬 이름. UI 및 로그에 표시됨 | 화염 강타 |
| SkillDescription | FText | 권장 | 스킬 설명. 향후 툴팁에 활용 | 강력한 화염 공격으로 적을 태운다 |
| SkillTag | FGameplayTag | 필수 | 스킬 분류 태그. Tag 계층 설계서 참고 | Skill.Attack.Melee.SingleTarget |

**SkillTag 선택 기준:**

| 스킬 유형 | 사용할 태그 |
|---------|----------|
| 단일 타겟 근접 공격 | Skill.Attack.Melee.SingleTarget |
| 범위 근접 공격 | Skill.Attack.Melee.AoE |
| 직선 원거리 공격 | Skill.Attack.Ranged.Projectile |
| 연쇄 공격 | Skill.Attack.Ranged.Chain |
| 자신 방어·회복 | Skill.Buff.Self.Shield |
| 공격력 증가 버프 | Skill.Buff.Ally.AttackUp |

---

### 카테고리 2 — 수치 (기획자가 가장 많이 수정하는 영역)

| 파라미터명 | 타입 | 필수 여부 | 설명 | 범위 | 입력 예시 |
|----------|------|---------|------|-----|---------|
| BaseDamage | float | 필수 | 스킬 기본 데미지 또는 회복량. 방어 스킬은 회복량으로 활용 | 0 ~ 500 | 120.0 |
| DamageCoefficient | float | 필수 | AttackPower에 곱해지는 배율. 캐릭터 스탯 성장과 연동됨 | 0.0 ~ 5.0 | 1.5 |
| CooldownDuration | float | 필수 | 스킬 재사용 대기 시간 (초 단위) | 0.5 ~ 60.0 | 8.0 |
| ManaCost | float | 필수 | 스킬 발동 시 소모되는 마나 | 0 ~ 100 | 30.0 |

**수치 설정 가이드:**
DPS 계산: BaseDamage ÷ CooldownDuration
B급 스킬 목표 DPS: 8 ~ 10
A급 스킬 목표 DPS: 10 ~ 12
S급 스킬 목표 DPS: 12 이상
ManaCost 설정 기준:
자주 쓰는 스킬 (쿨타임 5초 이하): 10 ~ 20
핵심 딜 스킬 (쿨타임 6~10초): 25 ~ 40
강력한 스킬 (쿨타임 10초 이상): 40 ~ 60

---

### 카테고리 3 — 타겟팅

| 파라미터명 | 타입 | 필수 여부 | 설명 | 선택지 |
|----------|------|---------|------|------|
| TargetType | ESkillTargetType | 필수 | 타겟팅 방식 | Single / AoE / Line / Chain |
| Range | float | 필수 | 스킬 유효 사거리 (cm 단위) | 100 ~ 1500 |
| AoERadius | float | AoE 시 필수 | 범위 공격 반경. TargetType이 AoE일 때만 유효 | 100 ~ 500 |

**TargetType별 동작 방식:**

| TargetType | 동작 | 권장 Range | AoERadius 필요 여부 |
|-----------|------|----------|-----------------|
| Single | 가장 가까운 적 1명에게 적용 | 200~400cm | 불필요 |
| AoE | 중심점 기준 반경 내 모든 적에게 적용 | 300~600cm | 필수 |
| Line | 직선 경로상 모든 적에게 적용 | 600~1000cm | 불필요 |
| Chain | 최초 타겟에서 가까운 순서로 연쇄 적용 | 400~700cm | 불필요 |

**Range 설정 가이드:**
근접 스킬:  200 ~ 400cm  (플레이어 몸에서 뻗는 팔 길이 수준)
중거리 스킬: 400 ~ 600cm  (약간의 거리에서 발동)
원거리 스킬: 600 ~ 1000cm (화면 절반 이상의 거리)
전장 관통:  800 ~ 1500cm (전체 씬을 가로지름)

---

### 카테고리 4 — 상태이상

| 파라미터명 | 타입 | 필수 여부 | 설명 | 범위 |
|----------|------|---------|------|-----|
| StatusEffectTag | FGameplayTag | 선택 | 부여할 상태이상 태그. 비워두면 상태이상 없음 | Status.* 태그 참고 |
| StatusEffectChance | float | StatusEffectTag 설정 시 필수 | 상태이상 발동 확률 (0.0 = 0%, 1.0 = 100%) | 0.0 ~ 1.0 |
| StatusEffectDuration | float | StatusEffectTag 설정 시 필수 | 상태이상 지속 시간 (초) | 1.0 ~ 10.0 |

**StatusEffectTag 선택지:**

| 태그 | 효과 | 권장 발동 확률 | 권장 지속시간 |
|------|------|------------|------------|
| Status.Burning | 화상 (지속 데미지) | 40~70% | 3~5초 |
| Status.Frozen | 빙결 (이동속도 감소) | 30~50% | 2~4초 |
| Status.Stunned | 기절 (행동 불가) | 20~35% | 1~3초 |
| Status.Bleeding | 출혈 (지속 데미지 + 회복 방해) | 40~60% | 4~6초 |

**발동 확률 설정 가이드:**
CC 강도별 발동 확률 기준:
약한 상태이상 (Burning, Bleeding): 40~70%
중간 상태이상 (Frozen):            30~50%
강한 상태이상 (Stunned):           20~35%

---

### 카테고리 5 — 시너지 조건

| 파라미터명 | 타입 | 필수 여부 | 설명 |
|----------|------|---------|------|
| RequiredStatusTag | FGameplayTag | 선택 | 이 태그를 보유한 적에게 BonusDamageRatio 추가 데미지 발동 |
| BonusDamageRatio | float | RequiredStatusTag 설정 시 필수 | 추가 데미지 비율 (0.5 = 기본 데미지의 50% 추가) |

**시너지 설계 예시:**
화염 강타 (DA_Skill_FireStrike)
→ StatusEffectTag: Status.Burning 부여 (60% 확률)
작열의 일격 (DA_Skill_BlazeStrike, 추가 예정)
→ RequiredStatusTag: Status.Burning
→ BonusDamageRatio: 0.5
결과:
화염 강타로 Status.Burning 부여 성공
→ 작열의 일격 사용 시 BaseDamage × 1.5 적용

**BonusDamageRatio 설정 가이드:**
약한 시너지: 0.2 ~ 0.3  (20~30% 추가, 시너지가 보조적 역할)
중간 시너지: 0.4 ~ 0.6  (40~60% 추가, 시너지가 핵심 전략)
강한 시너지: 0.7 ~ 1.0  (70~100% 추가, 콤보 완성 시 압도적 효율)

---

### 카테고리 6 — GameplayEffect 연결

| 파라미터명 | 타입 | 필수 여부 | 설명 | 현재 사용 가능한 값 |
|----------|------|---------|------|-----------------|
| MainEffect | TSubclassOf\<UGameplayEffect\> | 필수 | 스킬 발동 시 적용될 메인 Effect | GE_DamageBase / GE_ShieldBase / GE_AttackBuffBase |
| CooldownEffect | TSubclassOf\<UGameplayEffect\> | 필수 | 쿨타임 관리 Effect | GE_CooldownBase |
| CooldownTag | FGameplayTag | 필수 | 쿨타임 식별 태그. 키별로 다르게 설정 | Cooldown.Skill.Q ~ Cooldown.Skill.V |

**MainEffect 선택 기준:**

| 스킬 목적 | 사용할 MainEffect |
|---------|----------------|
| 적에게 데미지 | GE_DamageBase |
| 자신 HP 회복 또는 쉴드 | GE_ShieldBase |
| AttackPower 증가 버프 | GE_AttackBuffBase |

**CooldownTag 선택 기준:**

| 키 슬롯 | CooldownTag |
|-------|------------|
| Q키 | Cooldown.Skill.Q |
| E키 | Cooldown.Skill.E |
| R키 | Cooldown.Skill.R |
| F키 | Cooldown.Skill.F |
| Z키 | Cooldown.Skill.Z |
| X키 | Cooldown.Skill.X |
| C키 | Cooldown.Skill.C |
| V키 | Cooldown.Skill.V |

**주의:** 서로 다른 스킬에 같은 CooldownTag를 쓰면 한 스킬 사용 시 다른 스킬도 쿨타임에 걸린다.
키 슬롯별로 반드시 다른 CooldownTag를 사용해야 한다.

---

## 3. 전체 파라미터 구조
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

## 4. 현재 제작된 DA 파일 목록

| 파일명 | 스킬명 | 등급 | 타입 | 키 |
|-------|-------|-----|------|---|
| DA_Skill_FireStrike | 화염 강타 | S | Single | Q |
| DA_Skill_AoESlam | 대지 강타 | S | AoE | E |
| DA_Skill_PiercingArrow | 관통 화살 | S | Line | R |
| DA_Skill_ChainLightning | 연쇄 번개 | A | Chain | F |
| DA_Skill_IronShield | 철벽 방어 | — | Single (회복) | Z |
| DA_Skill_BattleCry | 전투 함성 | — | Single (버프) | X |
| DA_Skill_Evasion | 회피 기동 | — | Single (회복) | C |
| DA_Skill_Regeneration | 재생의 기운 | — | Single (회복) | V |

---

## 5. 자주 하는 실수 & 해결법

| 실수 | 증상 | 해결법 |
|------|------|-------|
| MainEffect를 비워둠 | 스킬 발동해도 아무 효과 없음 | DA에서 MainEffect 항목에 GE 파일 선택 |
| CooldownTag 중복 설정 | A 스킬 쓰면 B 스킬도 쿨타임 걸림 | 각 스킬에 다른 Cooldown.Skill.* 태그 사용 |
| AoERadius 미설정 | AoE 스킬인데 1명만 맞음 | TargetType: AoE 설정 후 AoERadius 값 입력 |
| BaseDamage 음수 입력 | HP가 오히려 깎임 | BaseDamage는 양수. 음수 변환은 코드에서 처리 |
| CooldownDuration 0 입력 | 쿨타임 없는 무한 발동 | 최소 0.5 이상 설정 |
| SkillTag 없음 | 분류 불가, 시너지 연동 안 됨 | Tag 계층 설계서 참고해서 적절한 태그 선택 |