// creature_stack.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 50/135 (A:23 B:10 C:17); unaccounted 85; skipped std 27.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (134 symbols) ===

// name:A; map symbol; map:23443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type get_terrain_type(t_stat_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stat_type get_stat_type(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:23445
VA_CHT_1(0x006184d0, 0x7)
t_has_defense::~t_has_defense()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:23446
VA_CHT_1(0x006184e0, 0x16)
t_abstract_creature::~t_abstract_creature()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23447
VA_CHT_1(0x00618500, 0x6d)
int t_abstract_creature::get_range_effect(int arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23448
VA_CHT_1(0x00618570, 0x9a)
float t_abstract_creature::get_damage_modifier(t_has_defense const& arg_0, bool arg_1, float arg_2) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23449
VA_CHT_1(0x00618610, 0x64)
bool t_abstract_creature::can_cast_spells() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23450
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_creature::is_native_terrain(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:23451
VA_CHT_1(0x00618680, 0x9e)
t_creature_stack::t_creature_stack()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:23452
VA_CHT_1(0x00618720, 0x73)
t_creature_stack::~t_creature_stack()
{
    // Body unavailable.
}

// name:A; map symbol; map:23453
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::process_new_day(t_player* arg_0, bool arg_1, t_creature_array* arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:23454
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type t_creature_stack::get_creature_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23455
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::get_income(int arg_0, t_material_array& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_army_move_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23457
VA_CHT_1(0x00618890, 0x10)
float t_creature_stack::get_army_move_multiplier(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23459
VA_CHT_1(0x006188a0, 0x3c)
int t_creature_stack::get_raw_adventure_movement() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23460
VA_CHT_1(0x006188e0, 0x91)
float t_creature_stack::get_adventure_movement_modifier(float arg_0, float arg_1, float arg_2) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23461
VA_CHT_1(0x00618980, 0x4c)
int get_terrain_cost(t_terrain_type arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23462
VA_CHT_1(0x006189d0, 0x5c)
int t_creature_stack::get_army_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::add(t_artifact const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::add_to_backpack(t_artifact const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:66956; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00618a90, 0x16, STATIC_INIT_DISPATCH, "creature_stack#1")

// name:C; dyninit; see ledger; map:66957
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "creature_stack#1")

// name:C; dyninit; see ledger; map:66958
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "creature_stack#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:66959; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00618ab0, 0xa, STATIC_DTOR, "creature_stack#1")

// name:A; map symbol; map:23466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact const& t_creature_stack::get_artifact(t_artifact_slot arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_backpack_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact const& t_creature_stack::get_backpack_slot(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact t_creature_stack::remove_backpack(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::has_ability(t_creature_ability arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::can_add(t_creature_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::can_add(t_creature_stack const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature const* t_creature_stack::get_const_creature() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::can_cast(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23475
VA_CHT_1(0x00618ad0, 0x8)
int t_creature_stack::get_bonus(t_stat_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_damage_high() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23477
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_damage_low() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23478
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::get_defense(bool arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23479
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::get_defense_basic(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23480
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::get_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::get_defense_reduction(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::get_offense(bool arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23483
VA_CHT_1(0x00618b00, 0x3f)
float t_creature_stack::get_offense(bool arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23484
VA_CHT_1(0x00618b60, 0x57)
int t_creature_stack::ai_get_total_offense(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::ai_get_total_offense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::ai_get_total_defense(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23487
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::ai_get_total_defense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23488
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature_stack::ai_get_average_defense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero const* t_creature_stack::get_const_hero() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_hit_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_combat_movement() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_missile_type t_creature_stack::get_missile_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:23493
VA_CHT_1(0x00618bc0, 0x6f)
std::string t_creature_stack::get_name(bool arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23494
VA_CHT_1(0x00618c30, 0x77)
std::string t_creature_stack::get_army_name() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23495
VA_CHT_1(0x00618cb0, 0x20)
int t_creature_stack::get_number() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::knows_spell(t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_creature_stack::get_skill(t_skill_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_tactics_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_tactics_offense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_tactics_speed_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_leadership_luck_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_leadership_morale_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_tactics_move_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23507
VA_CHT_1(0x00618e30, 0x23)
int t_creature_stack::get_spell_cost(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23508
VA_CHT_1(0x00618ec0, 0x36)
int t_creature_stack::get_spell_power(
    t_spell arg_0,
    t_abstract_grail_data_source const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_layer> t_creature_stack::get_portrait(int arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_shots() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_speed(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_speed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_maximum_spell_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_spell_points() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23515
VA_CHT_1(0x00618f00, 0xc)
void t_creature_stack::learn_spells(t_town const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::remove(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23517
VA_CHT_1(0x00618f10, 0x1d)
t_town_type t_creature_stack::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_experience_value(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_luck() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23520
VA_CHT_1(0x00618f30, 0x4b)
int t_creature_stack::get_luck(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_luck_bonus(t_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_morale(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_morale_bonus(t_hero const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23524
VA_CHT_1(0x00618f90, 0x60)
std::string t_creature_stack::get_right_click_text() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23525
VA_CHT_1(0x00619000, 0x19)
int t_creature_stack::get_morale() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23526
VA_CHT_1(0x00619020, 0x289)
void t_creature_stack::add_bonus(t_stat_type arg_0, int arg_1, t_qualified_adv_object_type const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23527
VA_CHT_1(0x006192b0, 0x288)
void t_creature_stack::add_temp_bonus(t_stat_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23528
VA_CHT_1(0x00619540, 0x6c)
int t_creature_stack::get_bonus_time(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23529
VA_CHT_1(0x006195b0, 0x2da)
bool t_creature_stack::add_timed_bonus(
    t_stat_type arg_0,
    int arg_1,
    t_qualified_adv_object_type const& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23530
VA_CHT_1(0x00619890, 0x73)
void t_creature_stack::clear_temporary_bonuses()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23531
VA_CHT_1(0x00619910, 0x67)
bool t_creature_stack::has_temporary_bonus(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23532
VA_CHT_1(0x00619980, 0x67)
bool t_creature_stack::has_timed_bonus(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_wounds() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::is_active() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::is_spell_active(t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::is_dead() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23537
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::is_undead() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23539
VA_CHT_1(0x006199f0, 0x36)
t_cached_ptr<t_combat_actor_model> t_creature_stack::get_combat_model(double arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23540
VA_CHT_1(0x00619a30, 0x23)
t_cached_ptr<t_sound> t_creature_stack::get_sound(t_adv_actor_action_id arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23541
VA_CHT_1(0x00619a60, 0x4c)
bool t_creature_stack::preplacement(t_adventure_map& arg_0, int arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:23542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_stoning_chance() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23543
VA_CHT_1(0x00619ab0, 0x62)
float t_creature_stack::ai_value() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23544
VA_CHT_1(0x00619b20, 0x94)
float t_creature_stack::ai_value(t_creature_array const* arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23545
VA_CHT_1(0x00619bc0, 0x148)
t_counted_ptr<t_creature_stack> t_creature_stack::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_temporary_bonus, std::allocator<t_temporary_bonus>> const& t_creature_stack::get_bonus_array(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_stack::set_spell(t_spell arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_stack::get_magic_resistance(t_player const* arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::on_begin_turn(t_player* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::on_end_turn(t_player* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::redistribute_artifacts(t_creature_array& arg_0, t_artifact_list& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; map:23552
VA_CHT_1(0x00619d10, 0x1d8)
void t_creature_stack::copy_bonuses(t_creature_stack const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_creature_stack::get_anti_stealth_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_creature_stack::get_stealth_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stack_with_backpack::add(t_artifact const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stack_with_backpack::add_to_backpack(t_artifact const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23557
VA_CHT_1(0x00619ef0, 0x1d9)
t_artifact t_stack_with_backpack::remove_backpack(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stack_with_backpack::is_spell_active(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23559
VA_CHT_1(0x0061a0d0, 0x203)
bool t_stack_with_backpack::set_spell(t_spell arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23560
VA_CHT_1(0x0061a2e0, 0x229)
bool t_stack_with_backpack::read_header(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23561
VA_CHT_1(0x0061ad50, 0x229)
bool t_stack_with_backpack::write_header(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:23562
VA_CHT_1(0x0061b0a0, 0x64)
bool t_stack_with_backpack::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:23563
VA_CHT_1(0x0061bb30, 0x28)
bool t_stack_with_backpack::has_terrain_mastery(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stack_with_backpack::on_begin_turn(t_player* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stack_with_backpack::on_end_turn(t_player* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_stack_with_backpack::get_army_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stack_with_backpack::redistribute_artifacts(t_creature_array& arg_0, t_artifact_list& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66960; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0061bba0, 0x20, STATIC_INIT_DISPATCH, creature_stack)

// confidence:C; align-band; retn,stable; map:23568
VA_CHT_1(0x0061bb60, 0x14)
t_temporary_bonus::t_temporary_bonus()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23569
VA_CHT_1(0x0061bb80, 0x14)
t_timed_bonus::t_timed_bonus()
{
    // Body unavailable.
}

// name:A; map symbol; map:23590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stat_type get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_stat_type const& arg_1)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// name:A; map symbol; map:44198
DATA_CHT_1(UNACCOUNTED)
// __real@4@4003a000000000000000
