# Gameplay Tag 계층 설계서
---

## 1. 개요 및 설계 철학

### 1.1 Gameplay Tag란

Gameplay Tag는 GAS에서 스킬·상태·조건을 식별하는 계층형 레이블 시스템이다.
문자열(`Skill.Attack.Melee.AoE`)로 표현되며, 점(.)으로 계층을 구분한다.

코드 없이 태그만으로 다음을 처리할 수 있다.
- 스킬 간 상호작용
- 쿨타임 관리
- 상태이상 탐지

### 1.2 설계 원칙

**원칙 1 — 계층은 3단계를 기본으로 한다**
`[최상위].[분류].[세부]` 구조를 유지한다.
예: `Skill.Attack.Melee`

**원칙 2 — 새 스킬 추가 시 태그 규칙**
- 기존 계층에 맞는 태그 재사용을 우선한다
- 새 분류가 필요하면 기획자와 프로그래머가 합의 후 추가한다
- 임의로 태그를 만들지 않는다

**원칙 3 — 태그 이름은 영어, 파스칼케이스를 사용한다**
`Status.Burning` (O) / `status.burning` (X) / `Status.불타는중` (X)

---

## 2. 전체 태그 트리

### 2.1 Skill 태그 — 스킬 분류 및 식별
```
Skill
├── Attack                          (공격 스킬 전체)
│   ├── Melee                       (근접 공격)
│   │   ├── SingleTarget            (단일 타겟 근접)
│   │   └── AoE                     (범위 근접)
│   └── Ranged                      (원거리 공격)
│       ├── Projectile              (투사체)
│       └── Chain                   (연쇄)
├── Buff                            (버프 스킬 전체)
│   ├── Self                        (자신 대상)
│   │   └── Shield                  (방어막/회피)
│   └── Ally                        (아군 대상)
│       └── AttackUp                (공격력 증가)
└── Debuff                          (디버프 스킬 전체)
└── Enemy                       (적 대상)
├── Slow                    (이동속도 감소)
└── Stun                    (기절)
```

**각 태그의 설계 의도**

| 태그 | 설계 의도 | 사용 예 |
|------|---------|---------|
| Skill.Attack.Melee.SingleTarget | 단일 적에게 즉시 데미지 | 화염 강타 |
| Skill.Attack.Melee.AoE | 범위 내 모든 적에게 데미지 | 대지 강타, 연쇄 번개 |
| Skill.Attack.Ranged.Projectile | 직선 경로 투사체 발사 | 관통 화살 |
| Skill.Attack.Ranged.Chain | 여러 적에게 순차 타격 | 연쇄 번개 변형 |
| Skill.Buff.Self.Shield | 자신에게 방어막 또는 회피 부여 | 철벽 방어, 회피 기동 |
| Skill.Buff.Ally.AttackUp | 아군 공격력 증가 | 전투 함성 |
| Skill.Debuff.Enemy.Slow | 적 이동속도 감소 | 향후 확장 |
| Skill.Debuff.Enemy.Stun | 적 행동 불가 | 연쇄 번개 (확률 발동) |

---

### 2.2 Status 태그 — 상태이상 식별
```
Status
├── Burning                         (화상 — 지속 데미지)
├── Frozen                          (빙결 — 이동속도 감소)
├── Stunned                         (기절 — 행동 불가)
└── Bleeding                        (출혈 — 지속 데미지 + 회복 방해)
```

**상태이상 작동 원리**

상태이상은 GameplayEffect가 캐릭터의 ASC에 태그를 부여하는 방식으로 작동한다.
화염 강타 발동
→ Status.Burning 태그 부여 (확률 60%, 지속 4초)
→ 4초 후 태그 자동 제거
→ "작열의 일격" 스킬이 Status.Burning 태그 감지 → 추가 데미지 발동

| 태그 | 지속시간 기본값 | 스택 가능 여부 | 시너지 연결 |
|------|--------------|-------------|-----------|
| Status.Burning | 4초 | 불가 (갱신) | 작열의 일격 |
| Status.Frozen | 3초 | 불가 (갱신) | 빙화 충격 (향후) |
| Status.Stunned | 2초 | 불가 | 없음 |
| Status.Bleeding | 5초 | 최대 3스택 | 향후 확장 |

---

### 2.3 Cooldown 태그 — 쿨타임 관리
```
Cooldown
├── Skill
│   ├── Q                           (Q키 스킬 쿨타임)
│   ├── E                           (E키 스킬 쿨타임)
│   ├── R                           (R키 스킬 쿨타임)
│   ├── F                           (F키 스킬 쿨타임)
│   ├── Z                           (Z키 스킬 쿨타임)
│   ├── X                           (X키 스킬 쿨타임)
│   ├── C                           (C키 스킬 쿨타임)
│   └── V                           (V키 스킬 쿨타임)
└── Duration                        (SetByCaller용 — DA에서 수치 주입)
```

**쿨타임 작동 원리**
스킬 발동
→ GE_CooldownBase 적용
→ Cooldown.Skill.Q 태그 ASC에 부여
→ CooldownDuration(초) 경과 후 태그 자동 제거
→ 태그 없으면 재발동 가능

---

### 2.4 Data 태그 — SetByCaller 수치 전달
```
Data
├── Damage                          (데미지 수치 전달용)
└── Healing                         (회복/쉴드 수치 전달용)
```

이 태그는 GameplayEffect에 수치를 동적으로 주입할 때만 사용한다.
DA의 BaseDamage 값 → SetByCaller(Data.Damage) → GE_DamageBase에 전달.

---

## 3. 확장 규칙

### 3.1 새 스킬 타입 추가 시

기존 계층에 없는 타입이 필요하면 아래 절차를 따른다.

1. 기획자가 설계 의도 작성
2. 기존 태그로 대체 가능한지 검토
3. 불가능하면 프로그래머와 합의 후 태그 추가
4. 이 문서 업데이트

### 3.2 절대 하지 말아야 할 것

- 동일 의미의 태그 중복 생성 (`Skill.Attack.Single`과 `Skill.Attack.SingleTarget` 동시 사용)
- 한국어 태그 사용

---

## 4. 현재 등록된 전체 태그 목록

| 태그 | 카테고리 | 등록일 |
|------|---------|-------|
| Skill.Attack.Melee.SingleTarget | 스킬 | 2026-05 |
| Skill.Attack.Melee.AoE | 스킬 | 2026-05 |
| Skill.Attack.Ranged.Projectile | 스킬 | 2026-05 |
| Skill.Attack.Ranged.Chain | 스킬 | 2026-05 |
| Skill.Buff.Self.Shield | 스킬 | 2026-05 |
| Skill.Buff.Ally.AttackUp | 스킬 | 2026-05 |
| Skill.Debuff.Enemy.Slow | 스킬 | 2026-05 |
| Skill.Debuff.Enemy.Stun | 스킬 | 2026-05 |
| Status.Burning | 상태이상 | 2026-05 |
| Status.Frozen | 상태이상 | 2026-05 |
| Status.Stunned | 상태이상 | 2026-05 |
| Status.Bleeding | 상태이상 | 2026-05 |
| Cooldown.Skill.Q | 쿨타임 | 2026-05 |
| Cooldown.Skill.E | 쿨타임 | 2026-05 |
| Cooldown.Skill.R | 쿨타임 | 2026-05 |
| Cooldown.Skill.F | 쿨타임 | 2026-05 |
| Cooldown.Skill.Z | 쿨타임 | 2026-05 |
| Cooldown.Skill.X | 쿨타임 | 2026-05 |
| Cooldown.Skill.C | 쿨타임 | 2026-05 |
| Cooldown.Skill.V | 쿨타임 | 2026-05 |
| Cooldown.Duration | SetByCaller | 2026-05 |
| Data.Damage | SetByCaller | 2026-05 |
| Data.Healing | SetByCaller | 2026-05 |