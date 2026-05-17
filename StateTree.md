# State Tree 구조도 설계 문서
---

## 1. 개요

### 1.1 State Tree란

State Tree는 UE5에서 NPC의 행동 로직을 기획자가 시각적으로 설계하는 도구다.
조건과 상태를 노드로 연결해 복잡한 AI 행동 패턴을 코드 없이 표현한다.

기존 Behavior Tree 대비 장점:
- 조건 분기가 계층적으로 명확하게 보임
- 상태 전이 조건을 데이터로 관리 가능
- 기획자가 직접 행동 패턴을 수정할 수 있음

### 1.2 본 프로젝트에서의 역할

NPC 3종(공격형 · 방어형 · 마법형)의 행동 패턴을 State Tree로 설계한다.
각 NPC는 플레이어와의 거리, 자신의 HP, 스킬 쿨타임 상태에 따라 행동을 전환한다.

---

## 2. 공통 설계 원칙

### 2.1 상태 분류

모든 NPC는 아래 4개 최상위 상태를 공유한다.

| 상태 | 진입 조건 | 우선순위 |
|------|---------|---------|
| Dead | HP <= 0 | 최고 |
| Staggered | Status.Stunned 태그 보유 | 높음 |
| Combat | 플레이어 감지 범위 내 | 중간 |
| Idle | 위 조건 모두 불충족 | 낮음 |

### 2.2 HP 구간 정의

| 구간 | HP 범위 | 의미 |
|------|---------|-----|
| Healthy | 60% 초과 | 정상 전투 |
| Wounded | 30% ~ 60% | 신중한 전투 |
| Critical | 30% 미만 | 생존 우선 |

### 2.3 거리 구간 정의

| 구간 | 거리 | 의미 |
|------|------|-----|
| Melee Range | 0 ~ 200cm | 근접 |
| Mid Range | 200 ~ 500cm | 중거리 |
| Far Range | 500cm 초과 | 원거리 |

---

## 3. NPC 1 — 공격형

### 3.1 캐릭터 설계 의도

공격을 최우선으로 하는 근접 전투 NPC.
HP가 낮아도 물러서지 않고 돌진한다.
플레이어를 압박하는 역할로 초반 전투 긴장감을 담당한다.

### 3.2 State Tree 구조
```
Root
├── [Dead] HP <= 0
│     └── Action: Death Animation → Destroy
│
├── [Staggered] HasTag(Status.Stunned)
│     └── Action: Stagger Animation (2초 대기)
│
├── [Combat] 플레이어 감지 범위 내 (800cm)
│   │
│   ├── [Healthy] HP > 60%
│   │   ├── [MeleeRange] 거리 <= 200cm
│   │   │     └── Action: BasicAttack (즉시)
│   │   │           → 쿨타임 완료 시: PowerAttack
│   │   └── [NotMelee] 거리 > 200cm
│   │         └── Action: Charge (돌진) → MeleeRange 진입
│   │
│   ├── [Wounded] HP 30~60%
│   │   ├── [MeleeRange] 거리 <= 200cm
│   │   │     └── Action: BasicAttack
│   │   │           → 쿨타임 완료 시: PowerAttack (우선도 상승)
│   │   └── [NotMelee] 거리 > 200cm
│   │         └── Action: Charge (돌진)
│   │
│   └── [Critical] HP < 30%
│         └── Action: Berserk (공격력 +30%, 이동속도 +20%)
│               → BasicAttack 쿨타임 50% 감소
│
└── [Idle] 순찰
└── Action: Patrol (웨이포인트 순환)
```

### 3.3 행동 상세

| 행동 | 발동 조건 | 데미지 | 쿨타임 |
|------|---------|-------|-------|
| BasicAttack | MeleeRange 진입 즉시 | ATK × 1.0 | 1.5초 |
| PowerAttack | BasicAttack 3회 후 | ATK × 2.0 | 8초 |
| Charge | 거리 > 200cm | ATK × 0.5 | 5초 |
| Berserk | HP < 30% (1회만) | 버프 | 없음 |

### 3.4 설계 의도

> Critical 구간의 Berserk는 "죽기 직전에 더 위험해지는" 패턴으로
> 플레이어에게 긴장감을 주는 동시에 처치 타이밍 판단을 요구한다.
> HP가 30% 아래로 내려가면 플레이어는 빠르게 마무리하거나
> 방어 스킬로 버텨야 하는 상황이 만들어진다.

---

## 4. NPC 2 — 방어형 (Defensive)

### 4.1 캐릭터 설계 의도

생존을 우선하는 탱커형 NPC.
HP가 낮으면 물러서면서 쉴드를 치고 회복을 기다린다.
플레이어의 스킬 낭비를 유도하고 전투를 장기화한다.

### 4.2 State Tree 구조
```
Root
├── [Dead] HP <= 0
│     └── Action: Death Animation → Destroy
│
├── [Staggered] HasTag(Status.Stunned)
│     └── Action: Stagger Animation
│
├── [Combat] 플레이어 감지 범위 내 (600cm)
│   │
│   ├── [Healthy] HP > 60%
│   │   ├── [HasShield] 쉴드 보유 중
│   │   │     └── Action: BasicAttack (공격 우선)
│   │   └── [NoShield] 쉴드 없음
│   │         └── Action: ShieldUp → BasicAttack
│   │
│   ├── [Wounded] HP 30~60%
│   │   └── Action: ShieldUp (쿨타임마다 우선 발동)
│   │         → [쉴드 보유] BasicAttack
│   │         → [쉴드 없음] Retreat (거리 벌리기)
│   │
│   └── [Critical] HP < 30%
│         ├── Action: Retreat (Far Range까지 이동)
│         └── [Far Range 도달] ShieldUp → 대기
│               → 쉴드 2회 후: 반격 BasicAttack
│
└── [Idle] 제자리 대기 (순찰 없음)
```

### 4.3 행동 상세

| 행동 | 발동 조건 | 효과 | 쿨타임 |
|------|---------|-----|-------|
| BasicAttack | 쉴드 보유 시 | ATK × 0.8 | 2초 |
| ShieldUp | 쉴드 없을 때 우선 | DEF × 2.0 쉴드 생성 | 10초 |
| Retreat | Wounded/Critical | 거리 500cm 이상 유지 | 없음 |

### 4.4 설계 의도 

> 쉴드 → 공격 → 쉴드 소진 → 후퇴 → 쉴드 재충전의 사이클이 핵심이다.
> 플레이어가 쉴드를 먼저 깨야 효과적인 딜이 들어가는 구조로,
> 공격 스킬의 AoE나 관통 효과가 유용한 상황을 만들어낸다.

---

## 5. NPC 3 — 마법형 (Mage)

### 5.1 캐릭터 설계 의도

원거리 마법 공격에 특화된 NPC.
항상 플레이어와 거리를 유지하려 하며 상태이상 부여에 집중한다.
근접 거리에서는 극도로 취약해 도주한다.

### 5.2 State Tree 구조
```
Root
├── [Dead] HP <= 0
│     └── Action: Death Animation → Destroy
│
├── [Staggered] HasTag(Status.Stunned)
│     └── Action: Stagger Animation
│
├── [Combat] 플레이어 감지 범위 내 (1000cm)
│   │
│   ├── [TooClose] 거리 <= 200cm (최우선 탈출)
│   │     └── Action: TeleportBack (400cm 후방 순간이동)
│   │           → 쿨타임 중: SprintRetreat
│   │
│   ├── [Healthy] HP > 60%
│   │   ├── [MidRange] 거리 200~500cm
│   │   │     └── Action: FrostBolt (빙결 투사체) 우선
│   │   │           → 쿨타임 중: FireBolt (기본 공격)
│   │   └── [FarRange] 거리 > 500cm
│   │         └── Action: MeteorStrike (범위 마법)
│   │               → 쿨타임 중: FireBolt
│   │
│   ├── [Wounded] HP 30~60%
│   │   └── Action: KeepDistance (500cm 유지)
│   │         → [Mid/Far Range] FireBolt 연속 사용
│   │         → [쿨타임 완료] FrostBolt (이동속도 감소 우선)
│   │
│   └── [Critical] HP < 30%
│         └── Action: BlinkRetreat (최대 거리 유지)
│               → [Far Range] ManaShield (자기 보호막)
│               → 회복 불가 시 FireBolt로 지속 원거리 딜
│
└── [Idle] 제자리 부유 (순찰 없음)
```

### 5.3 행동 상세

| 행동 | 발동 조건 | 효과 | 쿨타임 |
|------|---------|-----|-------|
| FireBolt | 기본 원거리 공격 | ATK × 0.9 | 1초 |
| FrostBolt | MidRange | ATK × 0.7 + Status.Frozen (40%) | 6초 |
| MeteorStrike | FarRange + Healthy | ATK × 1.8 AoE | 15초 |
| TeleportBack | 거리 <= 200cm | 400cm 순간이동 | 12초 |
| ManaShield | Critical + Far | 쉴드 생성 | 20초 |

### 5.4 설계 의도

> TooClose 상태를 최우선으로 처리하는 이유는 "마법사는 근접에서 죽는다"는
> 명확한 약점을 만들기 위해서다. 플레이어가 순간이동 스킬로 거리를 좁히거나
> Status.Stunned로 발을 묶으면 마법형 NPC를 효과적으로 처치할 수 있다.
> 이런 구조가 스킬 시너지(기절 스킬 → 마법형 NPC 처치)를 자연스럽게 유도한다.

---

## 6. 공통 전환 조건 정리

| 전환 | 조건 | 우선순위 |
|------|------|---------|
| 어떤 상태 → Dead | HP <= 0 | 1 |
| 어떤 상태 → Staggered | HasTag(Status.Stunned) | 2 |
| Idle → Combat | 플레이어 감지 범위 진입 | 3 |
| Combat → Idle | 플레이어 감지 범위 이탈 + 10초 경과 | 4 |
| Healthy → Wounded | HP 60% 이하 | Combat 내부 |
| Wounded → Critical | HP 30% 이하 | Combat 내부 |
| Critical → Wounded | HP 30% 초과 (회복 시) | Combat 내부 |