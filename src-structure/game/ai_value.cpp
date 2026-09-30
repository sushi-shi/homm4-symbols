// ai_value.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 69/179 (A:25 B:21 C:23); unaccounted 110; skipped std 82.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (142 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69675; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00503c40, 0x15, STATIC_INIT_DISPATCH, "ai_value#1")

// name:C; dyninit; see ledger; map:69676
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "ai_value#1")

// confidence:C; align-order; retn,stable; map:13568
VA_CHT_1(0x00503c60, 0x28)
bool ai_is_hero_ranged(t_hero const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool player_can_afford(t_creature_array const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13570
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool ai_wants_primary_skill(t_hero const* arg_0, t_skill_type arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13571
VA_CHT_1(0x00503c90, 0x30)
int get_player_number(t_creature_array const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13572
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_extract_hit_points(float arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13573
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_extract_damage(float arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13574
VA_CHT_1(0x00503cc0, 0x153)
float ai_get_spell_power_bonus(t_spell arg_0, t_hero const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_get_value_of_additional_level(t_skill_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13576
VA_CHT_1(0x00503e30, 0x39)
float ai_get_spell_damage(t_spell arg_0, t_hero const* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13577
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_speed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_move_speed(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_luck(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13580
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_morale(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13581
VA_CHT_1(0x00503e70, 0x4f)
float ai_bonus_for_luck_change(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13582
VA_CHT_1(0x00503ec0, 0x4f)
float ai_bonus_for_morale_change(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13583
VA_CHT_1(0x00503f10, 0x118)
float ai_value_of_luck_change(
    t_creature_array const& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13584
VA_CHT_1(0x00504030, 0x117)
float ai_value_of_morale_change(
    t_creature_array const& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_xp(t_creature_array const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_xp_for_army(t_creature_array const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_additional_move_speed(t_creature_stack const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13588
VA_CHT_1(0x00504150, 0x22)
float ai_value_of_additional_speed(t_creature_stack const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13589
VA_CHT_1(0x00504180, 0x22)
float ai_value_of_additional_speed(t_creature_array const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13590
VA_CHT_1(0x005041b0, 0x18)
float ai_value_of_additional_move_speed(t_creature_array const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13591
VA_CHT_1(0x005041d0, 0x6b)
float ai_value_of_additional_spell_points(t_hero const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_additional_hit_points(float arg_0, float arg_1, float arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13593
VA_CHT_1(0x00504240, 0x50)
float ai_value_of_additional_hit_points(t_creature_stack const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_additional_damage(t_hero const* arg_0, int arg_1, t_offense_type arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13595
VA_CHT_1(0x00504290, 0x60)
float ai_value_of_additional_damage(t_creature_stack const* arg_0, bool arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:13596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_additional_damage(t_creature_stack const* arg_0, bool arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13597
VA_CHT_1(0x005042f0, 0x65)
float ai_value_of_additional_damage(t_creature_stack const* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13598
VA_CHT_1(0x00504360, 0xaf)
float ai_value_of_additional_damage(t_creature_stack const* arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13599
VA_CHT_1(0x00504410, 0x186)
float ai_bonus_for_generalship_skills(t_creature_array const* arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13600
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_related_skills(t_skill arg_0, t_hero const* arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13601
VA_CHT_1(0x005045a0, 0x176)
float ai_value_of_tactics_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_combat_increase(t_hero const* arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_archery_increase(t_hero const* arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13604
VA_CHT_1(0x00504720, 0x20)
float ai_value_of_scouting_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_toughness_increase(t_hero const* arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_resistance_increase(t_hero const* arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13607
VA_CHT_1(0x00504740, 0xd3)
float ai_value_of_nobility_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_leadership_increase(
    t_hero const* arg_0,
    t_skill_mastery arg_1,
    t_creature_array const* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_pathfinding_increase(
    t_hero const* arg_0,
    t_skill_mastery arg_1,
    t_creature_array const* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_seamanship_increase(
    t_hero const* arg_0,
    t_skill_mastery arg_1,
    t_creature_array const* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13611
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_stealth_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13612
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_estates_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13613
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_mining(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_mining_increase(t_hero const* arg_0, t_skill_mastery arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:13615
VA_CHT_1(0x00504830, 0x189)
float ai_value_of_magic_skill_increase(
    t_town_type arg_0,
    t_hero const* arg_1,
    t_skill arg_2,
    t_creature_array const* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:13616
VA_CHT_1(0x005049c0, 0x5a8)
float ai_value_of_skill_increase(
    t_hero const* arg_0,
    t_skill arg_1,
    t_creature_array const* arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:13617
VA_CHT_1(0x00505000, 0x49)
float ai_value_of_skill_increase_minus_cost(
    t_hero const* arg_0,
    t_skill arg_1,
    int arg_2,
    t_creature_array const* arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13618
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_average_skill_value(
    float arg_0,
    t_skill_type arg_1,
    t_skill_type arg_2,
    t_creature_array const* arg_3,
    t_single_use_object const* arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13619
VA_CHT_1(0x00505050, 0x11a)
float ai_average_of_upgradable_skill_value(
    float arg_0,
    t_skill_type arg_1,
    t_skill_type arg_2,
    t_creature_array const* arg_3,
    t_single_use_object const* arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13620
VA_CHT_1(0x00505170, 0x9e)
float ai_average_of_upgradable_skill_value(
    t_hero const* arg_0,
    float arg_1,
    t_skill_type arg_2,
    t_skill_type arg_3,
    t_creature_array const* arg_4,
    t_single_use_object const* arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13621
VA_CHT_1(0x00505210, 0xd8)
float ai_summed_skill_value(
    float arg_0,
    t_skill_type arg_1,
    t_skill_type arg_2,
    t_creature_array const* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_summed_primary_skill_value(
    float arg_0,
    bool arg_1,
    t_creature_array const* arg_2,
    t_single_use_object const* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:13623
VA_CHT_1(0x005052f0, 0x54)
float ai_get_slayer_value_multiplier(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13624
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_evil_hour(t_hero const* arg_0, t_creature_array const* arg_1, float arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_prayer_spell(t_hero const* arg_0, t_creature_array const* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13626
VA_CHT_1(0x00505450, 0x19a)
float ai_value_of_drain_life_spell(t_hero const* arg_0, t_creature_array const* arg_1, float arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_celestial_armor_spell(t_hero const* arg_0, t_creature_array const* arg_1, float arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_vampiric_touch(t_hero const* arg_0, t_creature_array const* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13629
VA_CHT_1(0x005055f0, 0xc1)
float ai_value_of_generic_spell(
    t_hero const* arg_0,
    t_creature_array const* arg_1,
    t_town_type arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13630
VA_CHT_1(0x005056c0, 0x2e)
float ai_value_of_generic_damage_spell_amount(t_hero const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_generic_damage_spell(t_hero const* arg_0, t_spell arg_1, float arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:13632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_augmented_attack_spell(t_hero const* arg_0, t_creature_array const* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13633
VA_CHT_1(0x005056f0, 0xcf)
float ai_value_of_generic_healing_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13634
VA_CHT_1(0x005057c0, 0xb7)
float ai_value_of_generic_mass_healing_spell(
    t_hero const* arg_0,
    t_spell arg_1,
    t_creature_array const* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_summoning_spell(t_hero const* arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_value_of_multiplicative_spell(float arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13637
VA_CHT_1(0x00505880, 0xf9)
float ai_value_of_healing_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13638
VA_CHT_1(0x00505980, 0xa8)
float ai_value_of_generic_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13639
VA_CHT_1(0x00505ac0, 0x1f5)
float ai_value_of_curse_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13640
VA_CHT_1(0x00505dc0, 0x2e1)
float ai_value_of_damage_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13641
VA_CHT_1(0x00506130, 0x47f)
float ai_value_of_bless_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13642
VA_CHT_1(0x005066c0, 0x262)
float ai_value_of_spell(t_hero const* arg_0, t_spell arg_1, t_creature_array const* arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:13643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell ai_get_best_spell(t_hero const* arg_0, t_creature_array const* arg_1, int& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13644
VA_CHT_1(0x005069d0, 0x222)
t_artifact_value_query::t_artifact_value_query(
    t_creature_array const* arg_0,
    t_creature_stack const* arg_1,
    t_artifact_type arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_value_query::t_artifact_value_query()
{
    // Body unavailable.
}

// name:A; map symbol; map:13646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float get_generic_hero_artifact_effect_value(t_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float get_generic_creature_artifact_effect_value(t_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_value_visitor::t_artifact_value_visitor(
    t_creature_stack const* arg_0,
    t_creature_array const* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13649
VA_CHT_1(0x00506c20, 0x261)
bool t_artifact_value_visitor::visit_ability(t_artifact_prop::t_give_ability& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_value_visitor::visit_aligned_bonus(t_artifact_prop::t_aligned_bonus_base& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13651
VA_CHT_1(0x00507070, 0xbc)
bool t_artifact_value_visitor::visit_combat(t_artifact_prop::t_combat& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13652
VA_CHT_1(0x00507130, 0x50)
bool t_artifact_value_visitor::visit_damage(t_artifact_prop::t_damage_bonus_base& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13653
VA_CHT_1(0x00507180, 0x48)
bool t_artifact_value_visitor::visit_growth(t_artifact_prop::t_creature_growth& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13654
VA_CHT_1(0x005071d0, 0x6e)
bool t_artifact_value_visitor::visit_income(t_artifact_prop::t_income& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13655
VA_CHT_1(0x00507240, 0x14b)
bool t_artifact_value_visitor::visit_movement(t_artifact_prop::t_movement& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:13656
VA_CHT_1(0x00507390, 0x254)
bool t_artifact_value_visitor::visit_skill(t_artifact_prop::t_skill_effect& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_value_visitor::visit_spell(t_artifact_prop::t_single_spell& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:13658
VA_CHT_1(0x00507790, 0x298)
bool t_artifact_value_visitor::visit_spell_attack(t_artifact_prop::t_spell_with_attack_base& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13659
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_value_visitor::visit_spell_charges(t_artifact_prop::t_spell_charges_base& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_value_visitor::visit_spell_cost(t_artifact_prop::t_spell_cost_base& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:13661
VA_CHT_1(0x00507ae0, 0x416)
bool t_artifact_value_visitor::visit_spell_list(t_artifact_prop::t_spell_list_effect& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:13662
VA_CHT_1(0x00508540, 0x2ec)
float ai_value_of_artifact(t_artifact_value_query& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:13663
VA_CHT_1(0x005090f0, 0xde)
float ai_value_of_artifact_simple(t_creature_array const& arg_0, t_artifact_type arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:13664
VA_CHT_1(0x00509440, 0x91)
float ai_value_of_abstract_artifact(t_creature_array const& arg_0, t_artifact_type arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:13665
VA_CHT_1(0x005099c0, 0x19)
float ai_give_artifact_to_army(t_creature_array& arg_0, t_artifact const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:13666
VA_CHT_1(0x005099e0, 0x43)
float ai_value_of_artifact_complex(t_creature_array const& arg_0, t_artifact const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69677; name:B (dyninit; see ledger)
VA_CHT_1(0x00509a30, 0x20)
// ai_value$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69679; name:B (dyninit; see ledger)
VA_CHT_1(0x00509a50, 0x5c)
// ai_value$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// ai_value$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// ai_value$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// ai_value$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:13667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_leadership_skill(t_skill_mastery arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13668
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float ai_bonus_for_tactics_skill(t_skill_mastery arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13669
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect_visitor::t_artifact_effect_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:13670
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_effect_visitor)

// name:A; map symbol; map:13671
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_artifact_effect_visitor)

// name:A; map symbol; map:13672
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_value_visitor)

// name:A; map symbol; map:13673
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_artifact_value_visitor)

// confidence:A; align-band; retn,stable,vptr; map:13674
VA_CHT_1(0x00508030, 0x4f9)
t_artifact_value_visitor::~t_artifact_value_visitor()
{
    // Body unavailable.
}

// name:A; map symbol; map:13675
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_ability t_artifact_prop::t_give_ability::get_ability() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_effect::get_amount() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_target t_artifact_effect::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_prop::t_attack::affects_melee() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13679
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_prop::t_attack::affects_ranged() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_prop::t_damage_bonus_base::get_additional_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_prop::t_damage_bonus_base::get_levels_per_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_prop::t_creature_growth::get_bonus(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array const& t_artifact_prop::t_income::get_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_prop::t_movement::affects_land() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_prop::t_movement::affects_sea() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13686
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_type t_artifact_prop::t_skill_effect::get_skill() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::set<t_spell, std::less<t_spell>, std::allocator<t_spell>> const& t_artifact_prop::t_spell_list_effect::get_spells(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact::accept(t_artifact_effect_visitor& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:13691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_artifact_effect_visitor::set_artifact(t_artifact const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13692
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_artifact_value_query::get_value() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13693
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_artifact_value_visitor::get_value() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_artifact_value_visitor::clear_value()
{
    // Body unavailable.
}

// name:A; map symbol; map:13695
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_value_query& t_artifact_value_query::operator=(t_artifact_value_query const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:13767
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect* t_counted_ptr<t_artifact_effect>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_town* t_counted_ptr<t_abstract_town>::operator t_abstract_town*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:13769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int const& maximum(int const& arg_0, int const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery enum_subtract(t_skill_mastery arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float const& maximum(float const& arg_0, float const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_type enum_incr(t_skill_type& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_slot enum_add(t_artifact_slot arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery enum_decr(t_skill_mastery& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:13782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_slot enum_incr(t_artifact_slot& arg_0, int arg_1)
{
    // Body unavailable.
}

// === .rdata (26 symbols) ===

// name:A; map symbol; map:43358
DATA_CHT_1(UNACCOUNTED)
float const k_ai_creature_value_modifier; // Initial value unavailable.

// name:A; map symbol; map:43359
DATA_CHT_1(UNACCOUNTED)
int const k_ai_mine_value_multiplier; // Initial value unavailable.

// name:A; map symbol; map:43360
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffdcccccd0000000000

// name:A; map symbol; map:43361
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffe99999a0000000000

// name:A; map symbol; map:43362
DATA_CHT_1(UNACCOUNTED)
// __real@4@4002a000000000000000

// name:A; map symbol; map:43363
DATA_CHT_1(UNACCOUNTED)
// __real@4@4001e000000000000000

// name:A; map symbol; map:43364
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fffe000000000000000

// name:A; map symbol; map:43365
DATA_CHT_1(UNACCOUNTED)
// __real@4@4000e000000000000000

// name:A; map symbol; map:43366
DATA_CHT_1(UNACCOUNTED)
// __real@4@40009555550000000000

// name:A; map symbol; map:43367
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffeb333330000000000

// name:A; map symbol; map:43368
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fffb333330000000000

// name:A; map symbol; map:43369
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ffdccccccccccccd000

// name:A; map symbol; map:43370
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffe8000000000000000

// name:A; map symbol; map:43371
DATA_CHT_1(UNACCOUNTED)
// __real@4@4000c000000000000000

// name:A; map symbol; map:43372
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ff7a3d70a3d70a3d800

// name:A; map symbol; map:43373
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffbe147ae0000000000

// name:A; map symbol; map:43374
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffc99999a0000000000

// name:A; map symbol; map:43375
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fff9333330000000000

// name:A; map symbol; map:43376
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffbb851ec0000000000

// name:A; map symbol; map:43377
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffd8000000000000000

// confidence:A; rtti-name; map:43378
DATA_CHT_1_COMPGEN(0x008d4f7c, "const t_artifact_value_visitor::`vftable'")

// confidence:A; rtti-name; map:43379
DATA_CHT_1_COMPGEN(0x008d618c, "const t_artifact_effect_visitor::`vftable'")

// name:A; map symbol; map:43380
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffb8000000000000000

// name:A; map symbol; map:43381
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ffd9999999999999800

// name:A; map symbol; map:43382
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffce617c20000000000

// name:A; map symbol; map:43383
DATA_CHT_1(UNACCOUNTED)
// __real@4@4006c800000000000000

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_effect_visitor@@;bcd=4fca4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49173
DATA_CHT_1_COMPGEN(0x008fca4c, "t_artifact_effect_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_value_visitor@@;bcd=4fca64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49174
DATA_CHT_1_COMPGEN(0x008fca64, "t_artifact_value_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_value_visitor@@;vft=4d4f7c;col=4fca98;td=58f324;chd=4fca88;offset=0;cdOffset=0;validated-hierarchy; map:49175
DATA_CHT_1_COMPGEN(0x008fca7c, "t_artifact_value_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_value_visitor@@;vft=4d4f7c;col=4fca98;td=58f324;chd=4fca88;offset=0;cdOffset=0;validated-hierarchy; map:49176
DATA_CHT_1_COMPGEN(0x008fca88, "t_artifact_value_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_value_visitor@@;vft=4d4f7c;col=4fca98;td=58f324;chd=4fca88;offset=0;cdOffset=0;validated-hierarchy; map:49177
DATA_CHT_1_COMPGEN(0x008fca98, "const t_artifact_value_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_effect_visitor@@;vft=4d618c;col=4fef38;td=58f2fc;chd=4fef28;offset=0;cdOffset=0;validated-hierarchy; map:49178
DATA_CHT_1_COMPGEN(0x008fef20, "t_artifact_effect_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_effect_visitor@@;vft=4d618c;col=4fef38;td=58f2fc;chd=4fef28;offset=0;cdOffset=0;validated-hierarchy; map:49179
DATA_CHT_1_COMPGEN(0x008fef28, "t_artifact_effect_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_effect_visitor@@;vft=4d618c;col=4fef38;td=58f2fc;chd=4fef28;offset=0;cdOffset=0;validated-hierarchy; map:49180
DATA_CHT_1_COMPGEN(0x008fef38, "const t_artifact_effect_visitor::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_effect_visitor@@;td=58f2fc;validated-header; map:57801
DATA_CHT_1_COMPGEN(0x0098f2fc, "t_artifact_effect_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_value_visitor@@;td=58f324;validated-header; map:57802
DATA_CHT_1_COMPGEN(0x0098f324, "t_artifact_value_visitor `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60052
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_spell, t_spell, std::set<t_spell, std::less<t_spell>, std::allocator<t_spell>>::_Kfn, std::less<t_spell>, std::allocator<t_spell>>::_Node*std::_Tree<t_spell, t_spell, std::set<t_spell, std::less<t_spell>, std::allocator<t_spell>>::_Kfn, std::less<t_spell>, std::allocator<t_spell>>::_Nil; // Initial value unavailable.
