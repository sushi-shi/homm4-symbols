// combat_creature.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_creature.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 323/493 (A:132 B:99 C:92); unaccounted 170; skipped std 69.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (398 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67837; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005badf0, 0x15, STATIC_INIT_DISPATCH, "combat_creature#1")

// name:C; dyninit; see ledger; map:67838
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#1")

// confidence:A; dyninit-init; owner-conf-C; map:67839; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005bae10, 0x15, STATIC_INIT_DISPATCH, "combat_creature#2")

// name:C; dyninit; see ledger; map:67840
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#2")

// confidence:A; dyninit-init; owner-conf-C; map:67841; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005bae30, 0x15, STATIC_INIT_DISPATCH, "combat_creature#3")

// name:C; dyninit; see ledger; map:67842
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#3")

// confidence:A; dyninit-init; owner-conf-C; map:67843; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005bae50, 0x15, STATIC_INIT_DISPATCH, "combat_creature#4")

// name:C; dyninit; see ledger; map:67844
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#4")

// confidence:A; dyninit-init; owner-conf-C; map:67845; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005bae70, 0x10, STATIC_INIT_DISPATCH, "combat_creature#5")

// name:C; dyninit; see ledger; map:67846
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#5")

// confidence:A; dyninit-init; owner-conf-C; map:67847; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005bae80, 0x15, STATIC_INIT_DISPATCH, "combat_creature#6")

// name:C; dyninit; see ledger; map:67848
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_creature#6")

// confidence:C; align-order; retn,stable; map:20254
VA_CHT_1(0x005baea0, 0x1a)
t_abstract_combat_creature::t_spell_effect::t_spell_effect()
{
    // Body unavailable.
}

// name:A; map symbol; map:20255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_ai_data::t_combat_creature_ai_data()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20256
VA_CHT_1(0x005baec0, 0x99)
void t_combat_creature_ai_data::clear()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:20257
VA_CHT_1(0x005baf60, 0x270)
t_combat_creature::t_combat_creature(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:20258
VA_CHT_1(0x005bb500, 0x735)
t_combat_creature::t_combat_creature(
    t_battlefield& arg_0,
    t_creature_stack* arg_1,
    int arg_2,
    t_creature_array const* arg_3,
    double arg_4,
    bool arg_5,
    t_player const* arg_6
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20259
VA_CHT_1(0x005bbc40, 0x223)
void t_combat_creature::initialize()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20260
VA_CHT_1(0x005bbe70, 0x12b)
void t_combat_creature::set_sounds()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20261
VA_CHT_1(0x005bbfa0, 0xa2)
int t_combat_creature::get_spell_cost(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20262
VA_CHT_1(0x005bc050, 0x10)
t_abstract_grail_data_source const& t_combat_creature::get_grail_data() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20263
VA_CHT_1(0x005bc060, 0x9d)
void t_combat_creature::clear_ai_variables()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20264
VA_CHT_1(0x005bc100, 0xdd)
t_combat_creature* t_combat_creature::get_closest_melee_target() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20265
VA_CHT_1(0x005bc1e0, 0x1bc)
double t_combat_creature::get_ai_ranged_reduction() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20266
VA_CHT_1(0x005bc3a0, 0x47)
double t_combat_creature::get_ai_melee_reduction() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20267
VA_CHT_1(0x005bc3f0, 0x14b)
double t_combat_creature::get_ai_melee_value_per_hit() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20268
VA_CHT_1(0x005bc540, 0x14c)
double t_combat_creature::get_ai_ranged_value_per_hit() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20269
VA_CHT_1(0x005bc690, 0x1b2)
double get_estimated_healing_value(t_combat_creature const& arg_0, t_spell arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20270
VA_CHT_1(0x005bc850, 0x2e5)
double t_combat_creature::get_ai_estimated_value(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67849
VA_CHT_1(0x005bcb50, 0x123)
static double get_damage_spell_value(t_battlefield& arg_0, bool arg_1, t_spell arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67850
VA_CHT_1(0x005bcc80, 0x24d)
static double get_estimated_enchantment_value(t_battlefield& arg_0, bool arg_1, t_spell arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:67851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static double get_estimated_hand_of_death_value(t_combat_creature const& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20271
VA_CHT_1(0x005bced0, 0x13b)
double t_combat_creature::get_ai_spellcasting_value_per_hit() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20272
VA_CHT_1(0x005bd010, 0x1ce)
double t_combat_creature::get_ai_tactics_value_per_hit() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20273
VA_CHT_1(0x005bd1e0, 0xa9)
double t_combat_creature::get_ai_value_per_hit() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20274
VA_CHT_1(0x005bd290, 0x223)
double t_combat_creature::get_ai_value(int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20275
VA_CHT_1(0x005bd4c0, 0x126)
void t_combat_creature::process_new_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:67852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void recharge_wands(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20276
VA_CHT_1(0x005bd5f0, 0x4a)
t_counted_ptr<t_playing_sound> t_combat_creature::play_sound(t_combat_actor_action_id arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_ranged() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20278
VA_CHT_1(0x005bd640, 0xe0)
void t_combat_creature::set_animation(
    t_combat_actor_action_id arg_0,
    t_direction arg_1,
    t_handler_1<t_combat_creature&> arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20279
VA_CHT_1(0x005bd720, 0x15c)
void t_combat_creature::set_animation(
    t_combat_actor_action_id arg_0,
    t_direction arg_1,
    t_handler_1<t_combat_creature&> arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20280
VA_CHT_1(0x005bd880, 0xa7)
void t_combat_creature::set_animation(t_combat_actor_action_id arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20281
VA_CHT_1(0x005bd930, 0x120)
void t_combat_creature::set_animation(
    t_combat_actor_action_id arg_0,
    t_direction arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20282
VA_CHT_1(0x005bda50, 0x74)
void t_combat_creature::on_placed()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20283
VA_CHT_1(0x005bdad0, 0x1d)
void t_combat_creature::on_removed()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20284
VA_CHT_1(0x005bdaf0, 0xf0)
int t_combat_creature::get_speed() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20285
VA_CHT_1(0x005bdbe0, 0x7)
t_combat_label* t_combat_creature::get_label() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20286
VA_CHT_1(0x005bdbf0, 0x33)
void t_combat_creature::set_label(t_combat_label* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::on_turning()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20288
VA_CHT_1(0x005bdc30, 0xd)
void t_combat_creature::on_turned()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20289
VA_CHT_1(0x005bdc40, 0xd)
void t_combat_creature::on_moving()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20290
VA_CHT_1(0x005bdc50, 0x50)
void t_combat_creature::refresh_label_position(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::on_moved(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20292
VA_CHT_1(0x005bdd40, 0x256)
bool t_combat_creature::has_ability(t_creature_ability arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_damage_low() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_damage_low(t_spell arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67853
VA_CHT_1(0x005be090, 0xde)
static int get_damage_bonus(t_combat_creature const& arg_0, int arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20295
VA_CHT_1(0x005be170, 0x51)
int t_combat_creature::get_damage_high() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_damage_high(t_spell arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20297
VA_CHT_1(0x005be1d0, 0x20d)
float t_combat_creature::get_offense(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20298
VA_CHT_1(0x005be3e0, 0x2a3)
int t_combat_creature::adjust_attack_damage(
    int arg_0,
    t_attackable_object const& arg_1,
    bool arg_2,
    int arg_3,
    t_wall_bonus arg_4
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20299
VA_CHT_1(0x005be6a0, 0x116)
int t_combat_creature::get_damage(
    t_attackable_object const& arg_0,
    bool arg_1,
    int arg_2,
    t_wall_bonus arg_3
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20300
VA_CHT_1(0x005be7c0, 0x39)
int t_combat_creature::get_total_damage_high(
    t_attackable_object const& arg_0,
    bool arg_1,
    int arg_2,
    t_wall_bonus arg_3
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20301
VA_CHT_1(0x005be800, 0x39)
int t_combat_creature::get_total_damage_low(
    t_attackable_object const& arg_0,
    bool arg_1,
    int arg_2,
    t_wall_bonus arg_3
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20302
VA_CHT_1(0x005be840, 0xcd)
int t_combat_creature::get_adjusted_number(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20303
VA_CHT_1(0x005be910, 0x67)
int t_combat_creature::get_melee_damage(t_attackable_object const& arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67854
VA_CHT_1(0x005be980, 0x1cf)
static int adjust_projected_damage(
    t_combat_creature const& arg_0,
    int arg_1,
    t_attackable_object const& arg_2,
    int arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20304
VA_CHT_1(0x005beb50, 0xee)
void t_combat_creature::get_melee_effect(
    t_combat_creature const& arg_0,
    int arg_1,
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>>& arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20305
VA_CHT_1(0x005bec40, 0x31b)
void t_combat_creature::get_melee_effect(
    t_combat_creature const& arg_0,
    int arg_1,
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>>& arg_2,
    t_attack_angle const& arg_3,
    t_map_point_2d const& arg_4
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20306
VA_CHT_1(0x005bef60, 0xd2)
int t_combat_creature::get_ranged_damage(t_combat_creature const& arg_0, int arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20307
VA_CHT_1(0x005bf040, 0x72)
int t_combat_creature::get_spell_damage(t_combat_creature const& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::increase_permanent_death_count(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::increase_spell_points(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20310
VA_CHT_1(0x005bf0c0, 0xe2)
bool t_combat_creature::is_incapacitated() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20311
VA_CHT_1(0x005bf1b0, 0x47b)
void t_combat_creature::resolve_damage()
{
    // Body unavailable.
}

// name:A; map symbol; map:20312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_new_poison() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20313
VA_CHT_1(0x005bf630, 0x28e)
void t_combat_creature::apply_damage(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20314
VA_CHT_1(0x005bf8c0, 0xe)
bool t_combat_creature::blocks_movement() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20315
VA_CHT_1(0x005bf8d0, 0x2f)
std::string t_combat_creature::get_object_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_tactics_defense_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_tactics_move_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20318
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_tactics_offense_bonus() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_tactics_speed_bonus() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20320
VA_CHT_1(0x005bf900, 0x1c)
int t_combat_creature::get_attack_range() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20321
VA_CHT_1(0x005bf920, 0x1d)
t_missile_type t_combat_creature::get_missile_type() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20322
VA_CHT_1(0x005bf940, 0x8)
double t_combat_creature::get_interference_bonus() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20323
VA_CHT_1(0x005bf950, 0x11d)
double t_combat_creature::project_interference_bonus(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20324
VA_CHT_1(0x005bfa70, 0x10c)
int t_combat_creature::get_combat_movement() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20325
VA_CHT_1(0x005bfb80, 0x1ee)
double t_combat_creature::get_combat_value() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_hit_points(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:20327
VA_CHT_1(0x005bfd70, 0x8e)
int t_combat_creature::get_hit_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_base_luck() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20329
VA_CHT_1(0x005bfe00, 0x1c)
int t_combat_creature::get_luck_without_spells() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20330
VA_CHT_1(0x005bfe20, 0x8e)
int t_combat_creature::get_luck() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20331
VA_CHT_1(0x005bfeb0, 0x3e)
int t_combat_creature::get_morale_without_spells() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20332
VA_CHT_1(0x005bfef0, 0xf5)
int t_combat_creature::get_morale() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20333
VA_CHT_1(0x005bfff0, 0x3a)
int t_combat_creature::get_arc_attack() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20334
VA_CHT_1(0x005c0030, 0x35)
int t_combat_creature::get_arc_threat() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20335
VA_CHT_1(0x005c0070, 0x6b)
t_threat_footprint const& t_combat_creature::get_threat_footprint() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::clear_all_spells(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20337
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::clear_spells(t_town_type arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20338
VA_CHT_1(0x005c00e0, 0x482)
void t_combat_creature::set_spell(
    t_spell arg_0,
    t_combat_action_message const& arg_1,
    int arg_2,
    t_spell_source arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:67855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void cast_cancellation(t_combat_creature* arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20339
VA_CHT_1(0x005c0680, 0x15)
void t_combat_creature::change_spell_points(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:20340
VA_CHT_1(0x005c06a0, 0x11a)
void t_combat_creature::do_update_original_army(t_creature_array** arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::transfer_spells(t_creature_stack* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20342
VA_CHT_1(0x005c0850, 0xc5)
t_creature_influence_bonus::t_creature_influence_bonus()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:20343
VA_CHT_1(0x005c09b0, 0x1b1)
t_creature_influence::t_creature_influence(t_creature_influence_bonus const& arg_0, t_combat_creature* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::add_influence(t_combat_creature* arg_0, t_creature_influence_bonus const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20345
VA_CHT_1(0x005c0b70, 0x1fe)
bool t_combat_creature::check_influence(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20346
VA_CHT_1(0x005c1140, 0x7f2)
void t_combat_creature::check_influences()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20347
VA_CHT_1(0x005c1940, 0x129)
void t_combat_creature::clear_influence()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20348
VA_CHT_1(0x005c1a70, 0x9b)
int t_combat_creature::get_edge_distance(t_combat_object_base const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20349
VA_CHT_1(0x005c1b10, 0x218)
void t_combat_creature::set_influence()
{
    // Body unavailable.
}

// name:A; map symbol; map:67856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool check_water(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:67857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool check_brush_bonus(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20350
VA_CHT_1(0x005c1d30, 0x282)
float t_combat_creature::get_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20351
VA_CHT_1(0x005c1fc0, 0x91)
int t_combat_creature::get_attacks(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20352
VA_CHT_1(0x005c2060, 0x84)
int t_combat_creature::get_spell_chance(t_combat_creature const& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20353
VA_CHT_1(0x005c20f0, 0x60)
int t_combat_creature::get_magic_resistance(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20354
VA_CHT_1(0x005c2150, 0x3b)
int t_combat_creature::get_magic_resistance(t_combat_creature const& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20355
VA_CHT_1(0x005c2190, 0x199)
void t_combat_creature::clear_spell(t_spell arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_spell_damage(t_combat_creature const& arg_0, t_spell arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20357
VA_CHT_1(0x005c2400, 0xde)
void t_combat_creature::decrement_durations()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20358
VA_CHT_1(0x005c24e0, 0x2cf)
bool t_combat_creature::can_retaliate(t_combat_creature const& arg_0, bool arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20359
VA_CHT_1(0x005c27b0, 0x52)
t_spell t_combat_creature::get_default_spell() const
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67858; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c2810, 0x11, STATIC_INIT_DISPATCH, "combat_creature#7")

// confidence:B; dyninit-ctor; owner-conf-C; map:67859; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c2830, 0xd1, STATIC_CTOR, "combat_creature#7")

// name:C; dyninit; see ledger; map:67860
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#7")

// confidence:B; dyninit-dtor; owner-conf-C; map:67861; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c2910, 0xa, STATIC_DTOR, "combat_creature#7")

// confidence:A; align-order; retn,stable,vslot; map:20360
VA_CHT_1(0x005c2920, 0x471)
int t_combat_creature::add_damage(
    int arg_0,
    t_combat_creature* arg_1,
    bool arg_2,
    bool arg_3,
    t_combat_action_message const& arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20361
VA_CHT_1(0x005c2da0, 0x51)
void t_combat_creature::check_morale()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20362
VA_CHT_1(0x005c2e00, 0x2d)
bool t_combat_creature::got_good_morale() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20363
VA_CHT_1(0x005c2e30, 0x7)
bool t_combat_creature::got_bad_morale() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20364
VA_CHT_1(0x005c2e40, 0x62)
int t_combat_creature::get_adjusted_speed() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20365
VA_CHT_1(0x005c2eb0, 0x11d)
bool t_combat_creature::moves_before(t_combat_creature const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20366
VA_CHT_1(0x005c2fd0, 0x23e)
void t_combat_creature::pre_action_flinch(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67862; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3230, 0x11, STATIC_INIT_DISPATCH, "combat_creature#8")

// confidence:B; dyninit-ctor; owner-conf-C; map:67863; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3250, 0xd1, STATIC_CTOR, "combat_creature#8")

// name:C; dyninit; see ledger; map:67864
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#8")

// confidence:B; dyninit-dtor; owner-conf-C; map:67865; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3330, 0xa, STATIC_DTOR, "combat_creature#8")

// confidence:A; dyninit-init; owner-conf-C; map:67866; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3340, 0x11, STATIC_INIT_DISPATCH, "combat_creature#9")

// confidence:B; dyninit-ctor; owner-conf-C; map:67867; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3360, 0xd1, STATIC_CTOR, "combat_creature#9")

// name:C; dyninit; see ledger; map:67868
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#9")

// confidence:B; dyninit-dtor; owner-conf-C; map:67869; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3440, 0xa, STATIC_DTOR, "combat_creature#9")

// confidence:C; align-order; retn,stable; map:20367
VA_CHT_1(0x005c3450, 0x1d4)
bool t_combat_creature::show_morale_animation()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20368
VA_CHT_1(0x005c3630, 0x15a)
void t_combat_creature::resurrect(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67870; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3790, 0x11, STATIC_INIT_DISPATCH, "combat_creature#10")

// confidence:B; dyninit-ctor; owner-conf-C; map:67871; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c37b0, 0xd1, STATIC_CTOR, "combat_creature#10")

// name:C; dyninit; see ledger; map:67872
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#10")

// confidence:B; dyninit-dtor; owner-conf-C; map:67873; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c3890, 0xa, STATIC_DTOR, "combat_creature#10")

// confidence:A; align-order; retn,stable,vslot; map:20369
VA_CHT_1(0x005c38a0, 0xef)
bool t_combat_creature::check_guardian_robe()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20370
VA_CHT_1(0x005c3990, 0x59)
bool t_combat_creature::check_flinch(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20371
VA_CHT_1(0x005c39f0, 0x6c)
void t_combat_creature::kill(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20372
VA_CHT_1(0x005c3a60, 0x1f0)
void t_combat_creature::kill_permanently(int arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_underlay() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20374
VA_CHT_1(0x005c3c60, 0x93)
void t_combat_creature::check_blocking()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20375
VA_CHT_1(0x005c3d00, 0x23)
void t_combat_creature::set_underlay(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20376
VA_CHT_1(0x005c3d30, 0x45)
bool t_combat_creature::get_controller() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20377
VA_CHT_1(0x005c3d80, 0x1b)
void t_combat_creature::fade_in(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20378
VA_CHT_1(0x005c3da0, 0xdf)
void t_combat_creature::fade_out(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20379
VA_CHT_1(0x005c3e80, 0x75)
void t_combat_creature::fade_out(t_handler arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_alpha(t_battlefield& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20381
VA_CHT_1(0x005c3f40, 0x19)
void t_combat_creature::set_selection_shadow(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67874
VA_CHT_1(0x005c3f60, 0x22e)
static void set_shadow(
    bool arg_0,
    char const* arg_1,
    t_counted_ptr<t_abstract_combat_object>& arg_2,
    t_combat_creature& arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20382
VA_CHT_1(0x005c4190, 0x19)
void t_combat_creature::set_active_shadow(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20383
VA_CHT_1(0x005c41b0, 0x92)
int t_combat_creature::get_edge_distance(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20384
VA_CHT_1(0x005c4250, 0x6e)
int t_combat_creature::get_edge_subcell_distance(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20385
VA_CHT_1(0x005c42c0, 0x53)
t_combat_actor_action_id t_combat_creature::get_animation_action() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20386
VA_CHT_1(0x005c4320, 0x18)
bool t_combat_creature::is_busy() const
{
    // Body unavailable.
}

namespace {

// confidence:A; align-order; retn,stable,vslot; map:20387
VA_CHT_1(0x005c4340, 0x2e)
void t_sequence_actions::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; stable; map:20388
VA_CHT_1(0x005c4370, 0x1f9)
void t_combat_creature::append_handler(t_handler_1<t_combat_creature&> arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20389
VA_CHT_1(0x005c45b0, 0x73)
void t_combat_creature::clear_bindings()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20390
VA_CHT_1(0x005c46f0, 0x13e)
void t_combat_creature::set_binding(t_combat_creature& arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20391
VA_CHT_1(0x005c4830, 0x1c9)
void t_combat_creature::show_resurrection(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20392
VA_CHT_1(0x005c4a00, 0xaa)
void t_combat_creature::show_angels(t_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67875; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c4ab0, 0x11, STATIC_INIT_DISPATCH, "combat_creature#11")

// confidence:B; dyninit-ctor; owner-conf-C; map:67876; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c4ad0, 0xd1, STATIC_CTOR, "combat_creature#11")

// name:C; dyninit; see ledger; map:67877
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#11")

// confidence:B; dyninit-dtor; owner-conf-C; map:67878; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005c4bb0, 0xa, STATIC_DTOR, "combat_creature#11")

// confidence:C; align-order; retn,stable; map:20393
VA_CHT_1(0x005c4bc0, 0x1d6)
void t_combat_creature::use_guardian_angel()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20394
VA_CHT_1(0x005c4da0, 0x18f)
void t_combat_creature::begin_rebirth()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20395
VA_CHT_1(0x005c4f30, 0x127)
void t_combat_creature::remove_from_map()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20396
VA_CHT_1(0x005c5060, 0x389)
void t_combat_creature::animate_death(bool arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20397
VA_CHT_1(0x005c53f0, 0x60)
bool t_combat_creature::check_cowardice(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20398
VA_CHT_1(0x005c5450, 0x240)
int t_combat_creature::get_total_hits(bool arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20399
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_combat_creature::get_impact_point(
    t_map_point_2d const& arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20400
VA_CHT_1(0x005c5690, 0x41)
void t_combat_creature::add_martyr_client(t_counted_ptr<t_combat_creature> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::clear_martyr_clients()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20402
VA_CHT_1(0x005c56e0, 0x148)
void t_combat_creature::remove_martyr_client(t_counted_ptr<t_combat_creature> arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:20403
VA_CHT_1(0x005c5830, 0x167)
void t_combat_creature::set_martyr_protector(t_counted_ptr<t_combat_creature> arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20404
VA_CHT_1(0x005c59a0, 0x305)
t_direction t_combat_creature::get_wait_direction(t_direction arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20405
VA_CHT_1(0x005c5cb0, 0xe3)
void t_combat_creature::set_wait_animation()
{
    // Body unavailable.
}

// name:A; map symbol; map:20406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_creature() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20407
VA_CHT_1(0x005c5da0, 0x30)
bool t_combat_creature::is_native_terrain(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::can_be_attacked() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20409
VA_CHT_1(0x005c5de0, 0x33)
void t_combat_creature::preload_flinch(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67879
VA_CHT_1(0x005c5e20, 0x18b)
static t_combat_actor_action_id get_action(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    t_direction& arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20410
VA_CHT_1(0x005c5fb0, 0x56)
void t_combat_creature::flinch(t_combat_creature const& arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20411
VA_CHT_1(0x005c6010, 0xe)
bool t_combat_creature::is_alive() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20412
VA_CHT_1(0x005c6020, 0x43)
t_stationary_combat_object* t_combat_creature::get_tower() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20413
VA_CHT_1(0x005c6070, 0x2a)
bool t_combat_creature::is_giant() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20414
VA_CHT_1(0x005c60a0, 0x7)
int t_combat_creature::get_normal_alpha() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20415
VA_CHT_1(0x005c60b0, 0x1d2)
bool t_combat_creature::interferes(
    t_map_point_2d const& arg_0,
    int arg_1,
    t_combat_creature const& arg_2,
    t_map_point_2d const& arg_3
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20416
VA_CHT_1(0x005c6290, 0x7a)
bool t_combat_creature::interferes(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20417
VA_CHT_1(0x005c6310, 0x134)
void t_combat_creature::get_interfere_with_list(
    t_combat_creature_list& arg_0,
    t_map_point_2d const& arg_1,
    t_direction arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20418
VA_CHT_1(0x005c6450, 0x13c)
void t_combat_creature::get_interfered_by_list(
    t_combat_creature_list& arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20419
VA_CHT_1(0x005c6590, 0x5f)
t_map_point_3d t_combat_creature::get_position_in_tower(t_stationary_combat_object* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20420
VA_CHT_1(0x005c6614, 0x115)
void t_combat_creature::place_in_tower(t_stationary_combat_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20421
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::place_in_tower(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20422
VA_CHT_1(0x005c6730, 0x4b)
void t_combat_creature::place_in_tower()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20423
VA_CHT_1(0x005c6780, 0xde)
void t_combat_creature::remove_from_tower()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20424
VA_CHT_1(0x005c6860, 0x7)
bool t_combat_creature::is_elevated() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20425
VA_CHT_1(0x005c6870, 0x44)
int t_combat_creature::get_depth() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20426
VA_CHT_1(0x005c68c0, 0xe)
t_attackable_object* t_combat_creature::get_attackable_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20427
VA_CHT_1(0x005c68d0, 0x7)
t_abstract_combat_object const* t_combat_creature::get_const_object() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20428
VA_CHT_1(0x005c68e0, 0x157)
t_combat_object_list t_combat_creature::get_objects() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20429
VA_CHT_1(0x005c6a40, 0xb1)
int t_combat_creature::get_stoning_chance(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20430
VA_CHT_1(0x005c6b00, 0x33)
void t_combat_creature::set_retaliated(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20431
VA_CHT_1(0x005c6b40, 0x22)
void t_combat_creature::update_retaliation(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20432
VA_CHT_1(0x005c6b70, 0xed)
t_screen_point t_combat_creature::get_animation_position(t_animation const* arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20433
VA_CHT_1(0x005c6c60, 0x78)
int t_combat_creature::get_remaining_hitpoints() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20434
VA_CHT_1(0x005c6ce0, 0x292)
void t_combat_creature::change_active_spell_effect()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20435
VA_CHT_1(0x005c6f80, 0xce)
t_pixel_24 const& t_combat_creature::get_message_color() const
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_combat_creature::get_message_color$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:20436
VA_CHT_1(0x005c7060, 0xbd)
double get_total_weight(
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>> const& arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20437
VA_CHT_1(0x005c7120, 0x2e1)
void t_combat_creature::get_melee_exchange_effect(
    t_combat_creature const& arg_0,
    int arg_1,
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>>& arg_2,
    t_attack_angle const& arg_3,
    t_map_point_2d const& arg_4,
    bool arg_5,
    bool arg_6,
    bool arg_7
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20438
VA_CHT_1(0x005c7410, 0xe4)
void t_combat_creature::get_melee_exchange_effect(
    t_combat_creature const& arg_0,
    int arg_1,
    std::map<t_combat_creature const* const, int, std::less<t_combat_creature const* const>, std::allocator<int>>& arg_2,
    t_attack_angle const& arg_3,
    t_map_point_2d const& arg_4,
    bool arg_5
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20439
VA_CHT_1(0x005c7500, 0x145)
int t_combat_creature::project_ranged_damage(
    t_combat_creature const& arg_0,
    int& arg_1,
    t_combat_creature const*& arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20440
VA_CHT_1(0x005c7650, 0x142)
t_combat_path_finder& t_combat_creature::get_path_finder(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20441
VA_CHT_1(0x005c77a0, 0x18a)
int t_combat_creature::get_damage_done_limit(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20442
VA_CHT_1(0x005c7930, 0x285)
int t_combat_creature::get_damage_taken_limit(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20443
VA_CHT_1(0x005c7bc0, 0x32e)
double t_combat_creature::get_threat_type_weight(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20444
VA_CHT_1(0x005c7ef0, 0x29e)
double t_combat_creature::get_damage_decrease_ai_value(double arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:67881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static double get_basic_damage_multiplier(t_combat_creature const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20445
VA_CHT_1(0x005c8190, 0x4e)
double t_combat_creature::get_damage_decrease_ai_value(double arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20446
VA_CHT_1(0x005c81e0, 0x353)
double t_combat_creature::get_damage_increase_ai_value(double arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20447
VA_CHT_1(0x005c8540, 0x4e)
double t_combat_creature::get_damage_increase_ai_value(double arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20448
VA_CHT_1(0x005c8590, 0x1c0)
double t_combat_creature::get_defense_increase_ai_value(double arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20449
VA_CHT_1(0x005c8750, 0x1be)
double t_combat_creature::get_defense_decrease_ai_value(double arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20450
VA_CHT_1(0x005c8910, 0xd1)
double t_combat_creature::get_ai_value_per_action() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20451
VA_CHT_1(0x005c89f0, 0x2d)
bool t_combat_creature::has_nonmissile_damage_spells() const
{
    // Body unavailable.
}

// name:A; map symbol; map:67882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool can_cast_spells(t_combat_creature const& arg_0, t_spell const* arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20452
VA_CHT_1(0x005c8a20, 0x2d)
bool t_combat_creature::has_damage_spells() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:20453
VA_CHT_1(0x005c8a50, 0x2d)
bool t_combat_creature::has_missile_spells() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20454
VA_CHT_1(0x005c8a80, 0x249)
double t_combat_creature::get_ai_move_value(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20455
VA_CHT_1(0x005c8cd0, 0x3d9)
double t_combat_creature::get_ai_speed_value(int arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20456
VA_CHT_1(0x005c90b0, 0x108)
void t_combat_creature::add_creatures(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20457
VA_CHT_1(0x005c91c0, 0xd2)
void t_combat_creature::on_battlefield_destruction()
{
    // Body unavailable.
}

// name:A; map symbol; map:20458
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_type t_combat_creature::get_object_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20459
VA_CHT_1(0x005c92a0, 0xbd2)
bool t_combat_creature::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:67883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool read_abilities(std::basic_streambuf<char, std::char_traits<char>>& arg_0, bool* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20460
VA_CHT_1(0x005c9e80, 0x9bd)
bool t_combat_creature::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:67884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool write_abilities(std::basic_streambuf<char, std::char_traits<char>>& arg_0, bool const* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20461
VA_CHT_1(0x005ca840, 0x45)
void t_combat_creature::add_poison(int arg_0, t_combat_creature const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67885; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ca890, 0x11, STATIC_INIT_DISPATCH, "combat_creature#12")

// confidence:B; dyninit-ctor; owner-conf-C; map:67886; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ca8b0, 0xd1, STATIC_CTOR, "combat_creature#12")

// name:C; dyninit; see ledger; map:67887
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "combat_creature#12")

// confidence:B; dyninit-dtor; owner-conf-C; map:67888; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ca990, 0xa, STATIC_DTOR, "combat_creature#12")

namespace {

// confidence:A; align-order; stable,vptr; map:20462
VA_CHT_1(0x005ca9a0, 0x113)
t_pain_mirror_action::t_pain_mirror_action(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:20463
VA_CHT_1(0x005cab60, 0x133)
void t_pain_mirror_action::execute(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:20464
VA_CHT_1(0x005caca0, 0x137)
void t_pain_mirror_action::operator()()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-tinit; owner-conf-B; map:67889; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cb970, 0x20, STATIC_INIT_DISPATCH, combat_creature)

// name:A; map symbol; map:20465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_ptr<t_combat_path_finder>::`default ctor closure'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:20466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_blocking_attack() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20467
VA_CHT_1_COMPGEN(0x005bb1e0, 0x29, SCALAR_DELETING_DTOR, t_combat_creature)

// name:A; map symbol; map:20468
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_creature)

// confidence:C; align-band; retn,stable; map:20469
VA_CHT_1(0x005cb540, 0x33)
t_spell_list::t_spell_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:20470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_list::~t_spell_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:20471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_influence_list::t_influence_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:20472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_influence_list::~t_influence_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:20473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_label>::~t_counted_ptr<t_combat_label>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_combat_creature::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:20475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature::~t_combat_creature()
{
    // Body unavailable.
}

// name:A; map symbol; map:20476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::has_action(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20477
VA_CHT_1(0x005cb520, 0x19)
bool is_single_target(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20478
VA_CHT_1(0x005cb580, 0x19)
bool is_mass_effect(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20479
VA_CHT_1(0x005cb760, 0x13)
bool affects_defense(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20480
VA_CHT_1(0x005cb960, 0x10)
bool affects_offense(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20481
VA_CHT_1(0x005caed0, 0x38)
void t_artifact_prop::t_spell_charges_base::recharge()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20482
VA_CHT_1(0x005cb5a0, 0x67)
bool t_combat_creature::consider_active(t_spell arg_0, t_spell arg_1, t_spell arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::adjust_for_charging_bonus(int& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20484
VA_CHT_1(0x005cafe0, 0x4c)
int t_combat_creature::get_spell_damage(
    t_combat_creature const& arg_0,
    t_spell arg_1,
    t_abstract_grail_data_source const& arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20485
VA_CHT_1_COMPGEN(0x005c0830, 0x1e, VECTOR_DELETING_DTOR, t_creature_influence)

// name:A; map symbol; map:20486
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature_influence)

// confidence:C; align-band; retn; map:20487
VA_CHT_1(0x005cb680, 0xbb)
t_creature_influence_bonus::t_creature_influence_bonus(t_creature_influence_bonus const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:20488
VA_CHT_1(0x005c0920, 0x8f)
t_creature_influence_bonus::~t_creature_influence_bonus()
{
    // Body unavailable.
}

// name:A; map symbol; map:20489
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_influence::~t_creature_influence()
{
    // Body unavailable.
}

// name:A; map symbol; map:20490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_influence>::~t_counted_ptr<t_creature_influence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type t_battlefield_cell::get_terrain_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::is_quicksand() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::has_brush() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor> t_combat_actor::get_animation() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20495
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_action_id t_play_combat_animation::get_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> t_play_combat_animation::get_end_handler() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:20497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_actions::t_sequence_actions(
    t_handler_1<t_combat_creature&> arg_0,
    t_handler_1<t_combat_creature&> arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:20498
VA_CHT_1_COMPGEN(0x005c4590, 0x1e, VECTOR_DELETING_DTOR, t_sequence_actions)

// name:A; map symbol; map:20499
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sequence_actions)

namespace {

// name:A; map symbol; map:20500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_actions::~t_sequence_actions()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable; map:20501
VA_CHT_1(0x005cade0, 0xe7)
bool t_combat_creature::can_use_rebirth() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_angle(t_direction arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::robe_blocked_damage() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_window* t_battlefield::get_window() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20505
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature>::~t_counted_ptr<t_creature>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_magic_leech_client(t_counted_ptr<t_combat_creature> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield& t_combat_reader::get_battlefield()
{
    // Body unavailable.
}

// name:A; map symbol; map:20508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield const& t_combat_writer::get_battlefield()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20509
VA_CHT_1_COMPGEN(0x005caac0, 0x1e, VECTOR_DELETING_DTOR, t_pain_mirror_action)

// name:A; map symbol; map:20510
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_pain_mirror_action)

namespace {

// name:A; map symbol; map:20511
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pain_mirror_action::~t_pain_mirror_action()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:20542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_creature&>* t_handler_1<t_combat_creature&>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* t_counted_ptr<t_creature_stack>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20577
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature const& t_counted_const_ptr<t_combat_creature>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor>::t_counted_ptr<t_counted_idle_processor>(
    t_counted_ptr<t_counted_idle_processor> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_idle_processor* t_counted_ptr<t_counted_idle_processor>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20580
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_influence>::t_counted_ptr<t_creature_influence>(t_creature_influence* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20581
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_influence* t_counted_ptr<t_creature_influence>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_influence* t_counted_ptr<t_creature_influence>::operator t_creature_influence*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>::t_counted_ptr<t_spell_effect_window>(t_spell_effect_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_creature_ai_data>::t_owned_ptr<t_combat_creature_ai_data>(
    t_combat_creature_ai_data* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_creature_ai_data>::~t_owned_ptr<t_combat_creature_ai_data>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20586
VA_CHT_1(0x005cb460, 0x52)
void t_owned_ptr<t_combat_creature_ai_data>::reset(t_combat_creature_ai_data* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_ai_data* t_owned_ptr<t_combat_creature_ai_data>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20588
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_label>::t_counted_ptr<t_combat_label>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20589
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_label>& t_counted_ptr<t_combat_label>::operator=(t_combat_label* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_label* t_counted_ptr<t_combat_label>::operator t_combat_label*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_label* t_counted_ptr<t_combat_label>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_label& t_counted_ptr<t_combat_label>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_path_finder>::t_owned_ptr<t_combat_path_finder>(t_combat_path_finder* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_path_finder>::~t_owned_ptr<t_combat_path_finder>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20595
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_finder* t_owned_ptr<t_combat_path_finder>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_combat_path_finder>::reset(t_combat_path_finder* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20597
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_finder& t_owned_ptr<t_combat_path_finder>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_ability enum_incr(t_creature_ability& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_animation* t_counted_ptr<t_play_combat_animation>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20600
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>::t_counted_ptr<t_abstract_combat_object>(
    t_counted_ptr<t_combat_label> const& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:20601
VA_CHT_1(0x005cb060, 0x133)
t_handler bound_handler(t_combat_creature& arg_0, void (t_combat_creature::*)(void))
{
    // Body unavailable.
}

// name:A; map symbol; map:20602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, int> bound_handler(
    t_combat_creature& arg_0,
    void (t_combat_creature::*)(t_window*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*> add_2nd_argument(t_handler_2<t_window*, int> arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20604
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, int>::~t_handler_2<t_window*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, int>>::~t_counted_ptr<t_handler_base_2<t_window*, int>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature>::t_counted_ptr<t_creature>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20607
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature>& t_counted_ptr<t_creature>::operator=(t_creature* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature& t_counted_ptr<t_creature>::operator*() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20611
VA_CHT_1_COMPGEN(0x005cb740, 0x1e, SCALAR_DELETING_DTOR, t_combat_creature_ai_data)

// name:A; map symbol; map:20612
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_path_finder)

// name:A; map symbol; map:20613
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_creature_influence>")

// name:A; map symbol; map:20614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_ai_data::~t_combat_creature_ai_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:20615
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_finder::~t_combat_path_finder()
{
    // Body unavailable.
}

// name:A; map symbol; map:20616
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_finder_base::~t_combat_path_finder_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:20617
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_queue::~t_combat_path_queue()
{
    // Body unavailable.
}

// name:A; map symbol; map:20619
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, int>::t_handler_2<t_window*, int>(t_handler_base_2<t_window*, int>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20620
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, int>* t_handler_2<t_window*, int>::operator t_handler_base_2<t_window*, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20621
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_combat_creature>::t_bound_handler<t_combat_creature>(
    t_combat_creature& arg_0,
    void (t_combat_creature::*)(void)
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:20622
VA_CHT_1(0x005cb810, 0x22)
void t_bound_handler<t_combat_creature>::operator()()
{
    // Body unavailable.
}

// name:A; map symbol; map:20623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_combat_creature, t_window*, int>::t_bound_handler_2<t_combat_creature, t_window*, int>(
    t_combat_creature& arg_0,
    void (t_combat_creature::*)(t_window*, int)
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20624
VA_CHT_1(0x005cb840, 0x2f)
void t_bound_handler_2<t_combat_creature, t_window*, int>::operator()(t_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_window*, int>::t_add_2nd_handler_1<t_window*, int>(
    t_handler_base_2<t_window*, int>* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20626
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_window*, int>::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20627
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler<t_combat_creature>")

// name:A; map symbol; map:20628
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_combat_creature>")

// confidence:A; align-band; retn,stable,vslot; map:20629
VA_CHT_1_COMPGEN(0x005cb870, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_combat_creature, t_window*, int>")

// name:A; map symbol; map:20630
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_combat_creature, t_window*, int>")

// confidence:C; align-band; retn,stable; map:20631
VA_CHT_1(0x005caae0, 0x73)
t_handler_base_2<t_window*, int>::t_handler_base_2<t_window*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20632
VA_CHT_1_COMPGEN(0x005cb8b0, 0x1e, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, int>")

// name:A; map symbol; map:20633
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, int>")

// name:A; map symbol; map:20634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_combat_creature>::~t_bound_handler<t_combat_creature>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_combat_creature, t_window*, int>::~t_bound_handler_2<t_combat_creature, t_window*, int>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:20636
VA_CHT_1(0x005cb780, 0x84)
t_handler_base_2<t_window*, int>::~t_handler_base_2<t_window*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:20637
VA_CHT_1(0x005cb8d0, 0x21)
t_abstract_function_2<void, t_window*, int>::~t_abstract_function_2<void, t_window*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:20638
VA_CHT_1_COMPGEN(0x005cb890, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, int>")

// name:A; map symbol; map:20639
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, int>")

// name:A; map symbol; map:20640
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_window*, int>")

// name:A; map symbol; map:20641
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, int>")

// name:A; map symbol; map:20642
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_window*, int>::t_abstract_function_2<void, t_window*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:20643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_window*, int>::~t_add_2nd_handler_1<t_window*, int>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:20644
VA_CHT_1(0x005cb400, 0x56)
void t_handler_2<t_window*, int>::operator()(t_window* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_creature_influence>::t_counted_ptr<t_creature_influence>(
    t_counted_ptr<t_creature_influence> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_label* t_counted_ptr<t_combat_label>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_object* implicit_cast(t_abstract_combat_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, int>>::t_counted_ptr<t_handler_base_2<t_window*, int>>(
    t_handler_base_2<t_window*, int>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20651
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, int>* t_counted_ptr<t_handler_base_2<t_window*, int>>::operator t_handler_base_2<t_window*, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:20652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, int>& t_counted_ptr<t_handler_base_2<t_window*, int>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:20653
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_combat_creature, t_window*, int>")

// name:A; map symbol; map:20654
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, int>")

// confidence:C; align-order; stable; map:20655
VA_CHT_1_COMPGEN(0x005cb9a0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, int>")

// confidence:C; align-order; stable; map:20656
VA_CHT_1_COMPGEN(0x005cb9b0, 0x8, VECTOR_DELETING_DTOR, t_pain_mirror_action)

// confidence:C; align-order; stable; map:20657
VA_CHT_1_COMPGEN(0x005cb9c0, 0x8, VECTOR_DELETING_DTOR, t_sequence_actions)

// confidence:C; align-order; stable; map:20658
VA_CHT_1_COMPGEN(0x005cb9d0, 0x8, VECTOR_DELETING_DTOR, t_combat_creature)

// confidence:C; align-order; stable; map:20659
VA_CHT_1(0x005cb9e0, 0x8)
// [thunk]: public: virtual bool t_combat_creature::has_ability`adjustor{2332}'(t_creature_ability) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20660
VA_CHT_1(0x005cb9f0, 0xb)
// [thunk]: public: virtual bool t_abstract_combat_creature::belongs_to`vtordisp{-4, 576}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20661
VA_CHT_1(0x005cba00, 0xe)
// [thunk]: public: virtual bool t_abstract_combat_creature::controlled_by`vtordisp{-4, 576}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20662
VA_CHT_1(0x005cba10, 0xe)
// [thunk]: public: virtual bool t_abstract_combat_creature::is_active`vtordisp{-4, 576}'(t_spell) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20663
VA_CHT_1_COMPGEN(0x005cba20, 0xe, VECTOR_DELETING_DTOR, t_combat_creature)

// confidence:C; align-order; stable; map:20664
VA_CHT_1(0x005cba30, 0xe)
// [thunk]: public: virtual float t_abstract_combat_creature::get_defense_basic`vtordisp{-4, 576}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20665
VA_CHT_1(0x005cba40, 0xe)
// [thunk]: public: virtual float t_combat_creature::get_defense_bonus`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:20666
VA_CHT_1_COMPGEN(0x005cba50, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler<t_combat_creature>")

// === .rdata (28 symbols) ===

// confidence:B; rtti-order; map:43911
DATA_CHT_1_COMPGEN(0x008dc1f8, "const t_combat_creature::`vftable'{for `t_has_defense'}")

// confidence:A; rtti-name; map:43912
DATA_CHT_1_COMPGEN(0x008dc1e8, "const t_combat_creature::`vftable'")

// confidence:B; rtti-order; map:43913
DATA_CHT_1_COMPGEN(0x008dc20c, "const t_combat_creature::`vftable'{for `t_attackable_object'}")

// confidence:B; rtti-order; map:43914
DATA_CHT_1_COMPGEN(0x008dc25c, "const t_combat_creature::`vftable'{for `t_abstract_creature'}")

// confidence:B; rtti-order; map:43915
DATA_CHT_1_COMPGEN(0x008dc2e8, "const t_combat_creature::`vftable'{for `t_combat_object_base'}")

// confidence:B; rtti-order; map:43916
DATA_CHT_1_COMPGEN(0x008dc304, "const t_combat_creature::`vftable'{for `t_combat_saveable_object'}")

// name:A; map symbol; map:43917
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`vbtable'{for `t_attackable_object'}")

// name:A; map symbol; map:43918
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`vbtable'{for `t_abstract_combat_creature'}")

// name:A; map symbol; map:43919
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ff8a3d70a3d70a3d800

// name:A; map symbol; map:43920
DATA_CHT_1(UNACCOUNTED)
// __real@8@4002a000000000000000

// name:A; map symbol; map:43921
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffed9999a0000000000

// name:A; map symbol; map:43922
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffecccccd0000000000

// name:A; map symbol; map:43923
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffec000000000000000

// name:A; map symbol; map:43924
DATA_CHT_1(UNACCOUNTED)
// __real@4@3fffa000000000000000

// confidence:A; rtti-name; map:43925
DATA_CHT_1_COMPGEN(0x008dc3d4, "const t_creature_influence::`vftable'")

// confidence:A; rtti-name; map:43926
DATA_CHT_1_COMPGEN(0x008dc3dc, "const t_sequence_actions::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43927
DATA_CHT_1_COMPGEN(0x008dc3e8, "const t_sequence_actions::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43928
DATA_CHT_1_COMPGEN(0x008dc3f0, "const t_pain_mirror_action::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43929
DATA_CHT_1_COMPGEN(0x008dc3fc, "const t_pain_mirror_action::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43930
DATA_CHT_1_COMPGEN(0x008dc408, "const t_bound_handler<t_combat_creature>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43931
DATA_CHT_1_COMPGEN(0x008dc414, "const t_bound_handler<t_combat_creature>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43932
DATA_CHT_1_COMPGEN(0x008dc41c, "const t_bound_handler_2<t_combat_creature, t_window*, int>::`vftable'{for `t_abstract_function_2<void, t_window*, int>'}")

// confidence:B; rtti-order; map:43933
DATA_CHT_1_COMPGEN(0x008dc428, "const t_bound_handler_2<t_combat_creature, t_window*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43934
DATA_CHT_1_COMPGEN(0x008dc43c, "const t_add_2nd_handler_1<t_window*, int>::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43935
DATA_CHT_1_COMPGEN(0x008dc448, "const t_add_2nd_handler_1<t_window*, int>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43936
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, int>::`vftable'{for `t_abstract_function_2<void, t_window*, int>'}")

// name:A; map symbol; map:43937
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43938
DATA_CHT_1_COMPGEN(0x008dc430, "const t_abstract_function_2<void, t_window*, int>::`vftable'")

// === .rdata$r (55 symbols) ===

// name:A; map symbol; map:50711
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`RTTI Complete Object Locator'{for `t_has_defense'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_creature@@;vft=4dc1e8;col=503bc8;td=592fe8;chd=503bb8;offset=3080;cdOffset=0;validated-hierarchy; map:50712
DATA_CHT_1_COMPGEN(0x00903bc8, "const t_combat_creature::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50713
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`RTTI Complete Object Locator'{for `t_attackable_object'}")

// name:A; map symbol; map:50714
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// name:A; map symbol; map:50715
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`RTTI Complete Object Locator'{for `t_combat_object_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=503ad4;pmd=2528,-1,0;attributes=0;validated-hierarchy-link; map:50716
DATA_CHT_1_COMPGEN(0x00903ad4, "t_uncopyable::`RTTI Base Class Descriptor at (2528, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_attackable_object@@;bcd=503aec;pmd=2488,-1,0;attributes=0;validated-hierarchy-link; map:50717
DATA_CHT_1_COMPGEN(0x00903aec, "t_attackable_object::`RTTI Base Class Descriptor at (2488, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_has_defense@@;bcd=503b04;pmd=0,160,4;attributes=16;validated-hierarchy-link; map:50718
DATA_CHT_1_COMPGEN(0x00903b04, "t_has_defense::`RTTI Base Class Descriptor at (0, 160, 4, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_creature@@;bcd=503b1c;pmd=156,-1,0;attributes=0;validated-hierarchy-link; map:50719
DATA_CHT_1_COMPGEN(0x00903b1c, "t_abstract_creature::`RTTI Base Class Descriptor at (156, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_target@@;bcd=503b34;pmd=0,160,8;attributes=16;validated-hierarchy-link; map:50720
DATA_CHT_1_COMPGEN(0x00903b34, "t_abstract_target::`RTTI Base Class Descriptor at (0, 160, 8, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_combat_creature@@;bcd=503b4c;pmd=156,-1,0;attributes=0;validated-hierarchy-link; map:50721
DATA_CHT_1_COMPGEN(0x00903b4c, "t_abstract_combat_creature::`RTTI Base Class Descriptor at (156, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_creature@@;bcd=503b64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50722
DATA_CHT_1_COMPGEN(0x00903b64, "t_combat_creature::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_creature@@;vft=4dc1e8;col=503bc8;td=592fe8;chd=503bb8;offset=3080;cdOffset=0;validated-hierarchy; map:50723
DATA_CHT_1_COMPGEN(0x00903b7c, "t_combat_creature::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_creature@@;vft=4dc1e8;col=503bc8;td=592fe8;chd=503bb8;offset=3080;cdOffset=0;validated-hierarchy; map:50724
DATA_CHT_1_COMPGEN(0x00903bb8, "t_combat_creature::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50725
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_creature::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AUt_creature_influence_bonus@@;bcd=503bdc;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50726
DATA_CHT_1_COMPGEN(0x00903bdc, "t_creature_influence_bonus::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AUt_creature_influence@@;bcd=503bf4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50727
DATA_CHT_1_COMPGEN(0x00903bf4, "t_creature_influence::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AUt_creature_influence@@;vft=4dc3d4;col=503c2c;td=598d7c;chd=503c1c;offset=0;cdOffset=0;validated-hierarchy; map:50728
DATA_CHT_1_COMPGEN(0x00903c0c, "t_creature_influence::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AUt_creature_influence@@;vft=4dc3d4;col=503c2c;td=598d7c;chd=503c1c;offset=0;cdOffset=0;validated-hierarchy; map:50729
DATA_CHT_1_COMPGEN(0x00903c1c, "t_creature_influence::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AUt_creature_influence@@;vft=4dc3d4;col=503c2c;td=598d7c;chd=503c1c;offset=0;cdOffset=0;validated-hierarchy; map:50730
DATA_CHT_1_COMPGEN(0x00903c2c, "const t_creature_influence::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sequence_actions@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3dc;col=503c90;td=598e98;chd=503c80;offset=8;cdOffset=0;validated-hierarchy; map:50731
DATA_CHT_1_COMPGEN(0x00903c90, "const t_sequence_actions::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sequence_actions@?%C:\Work\game\combat_creature.cpp1737517376@@;bcd=503c54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50732
DATA_CHT_1_COMPGEN(0x00903c54, "t_sequence_actions::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sequence_actions@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3dc;col=503c90;td=598e98;chd=503c80;offset=8;cdOffset=0;validated-hierarchy; map:50733
DATA_CHT_1_COMPGEN(0x00903c6c, "t_sequence_actions::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sequence_actions@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3dc;col=503c90;td=598e98;chd=503c80;offset=8;cdOffset=0;validated-hierarchy; map:50734
DATA_CHT_1_COMPGEN(0x00903c80, "t_sequence_actions::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50735
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sequence_actions::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_pain_mirror_action@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3f0;col=503cf8;td=598f50;chd=503ce8;offset=8;cdOffset=0;validated-hierarchy; map:50736
DATA_CHT_1_COMPGEN(0x00903cf8, "const t_pain_mirror_action::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_pain_mirror_action@?%C:\Work\game\combat_creature.cpp1737517376@@;bcd=503cb8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50737
DATA_CHT_1_COMPGEN(0x00903cb8, "t_pain_mirror_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_pain_mirror_action@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3f0;col=503cf8;td=598f50;chd=503ce8;offset=8;cdOffset=0;validated-hierarchy; map:50738
DATA_CHT_1_COMPGEN(0x00903cd0, "t_pain_mirror_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_pain_mirror_action@?%C:\Work\game\combat_creature.cpp1737517376@@;vft=4dc3f0;col=503cf8;td=598f50;chd=503ce8;offset=8;cdOffset=0;validated-hierarchy; map:50739
DATA_CHT_1_COMPGEN(0x00903ce8, "t_pain_mirror_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50740
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_pain_mirror_action::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler@Vt_combat_creature@@@@;vft=4dc408;col=503d5c;td=598fa0;chd=503d4c;offset=8;cdOffset=0;validated-hierarchy; map:50741
DATA_CHT_1_COMPGEN(0x00903d5c, "const t_bound_handler<t_combat_creature>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler@Vt_combat_creature@@@@;bcd=503d20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50742
DATA_CHT_1_COMPGEN(0x00903d20, "t_bound_handler<t_combat_creature>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler@Vt_combat_creature@@@@;vft=4dc408;col=503d5c;td=598fa0;chd=503d4c;offset=8;cdOffset=0;validated-hierarchy; map:50743
DATA_CHT_1_COMPGEN(0x00903d38, "t_bound_handler<t_combat_creature>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler@Vt_combat_creature@@@@;vft=4dc408;col=503d5c;td=598fa0;chd=503d4c;offset=8;cdOffset=0;validated-hierarchy; map:50744
DATA_CHT_1_COMPGEN(0x00903d4c, "t_bound_handler<t_combat_creature>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50745
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler<t_combat_creature>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_combat_creature@@PAVt_window@@H@@;vft=4dc41c;col=503e34;td=599040;chd=503e24;offset=8;cdOffset=0;validated-hierarchy; map:50746
DATA_CHT_1_COMPGEN(0x00903e34, "const t_bound_handler_2<t_combat_creature, t_window*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;bcd=503dc8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50747
DATA_CHT_1_COMPGEN(0x00903dc8, "t_abstract_function_2<void, t_window*, int>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_window@@H@@;bcd=503de0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50748
DATA_CHT_1_COMPGEN(0x00903de0, "t_handler_base_2<t_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_combat_creature@@PAVt_window@@H@@;bcd=503df8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50749
DATA_CHT_1_COMPGEN(0x00903df8, "t_bound_handler_2<t_combat_creature, t_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_combat_creature@@PAVt_window@@H@@;vft=4dc41c;col=503e34;td=599040;chd=503e24;offset=8;cdOffset=0;validated-hierarchy; map:50750
DATA_CHT_1_COMPGEN(0x00903e10, "t_bound_handler_2<t_combat_creature, t_window*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_combat_creature@@PAVt_window@@H@@;vft=4dc41c;col=503e34;td=599040;chd=503e24;offset=8;cdOffset=0;validated-hierarchy; map:50751
DATA_CHT_1_COMPGEN(0x00903e24, "t_bound_handler_2<t_combat_creature, t_window*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50752
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_combat_creature, t_window*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@H@@;vft=4dc43c;col=503e98;td=599088;chd=503e88;offset=8;cdOffset=0;validated-hierarchy; map:50753
DATA_CHT_1_COMPGEN(0x00903e98, "const t_add_2nd_handler_1<t_window*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@H@@;bcd=503e5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50754
DATA_CHT_1_COMPGEN(0x00903e5c, "t_add_2nd_handler_1<t_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@H@@;vft=4dc43c;col=503e98;td=599088;chd=503e88;offset=8;cdOffset=0;validated-hierarchy; map:50755
DATA_CHT_1_COMPGEN(0x00903e74, "t_add_2nd_handler_1<t_window*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@H@@;vft=4dc43c;col=503e98;td=599088;chd=503e88;offset=8;cdOffset=0;validated-hierarchy; map:50756
DATA_CHT_1_COMPGEN(0x00903e88, "t_add_2nd_handler_1<t_window*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50757
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_window*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50758
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, int>'}")

// name:A; map symbol; map:50759
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, int>::`RTTI Base Class Array'")

// name:A; map symbol; map:50760
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50761
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;bcd=503d70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50762
DATA_CHT_1_COMPGEN(0x00903d70, "t_abstract_function_2<void, t_window*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;vft=4dc430;col=503da0;td=598fd8;chd=503d90;offset=0;cdOffset=0;validated-hierarchy; map:50763
DATA_CHT_1_COMPGEN(0x00903d88, "t_abstract_function_2<void, t_window*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;vft=4dc430;col=503da0;td=598fd8;chd=503d90;offset=0;cdOffset=0;validated-hierarchy; map:50764
DATA_CHT_1_COMPGEN(0x00903d90, "t_abstract_function_2<void, t_window*, int>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;vft=4dc430;col=503da0;td=598fd8;chd=503d90;offset=0;cdOffset=0;validated-hierarchy; map:50765
DATA_CHT_1_COMPGEN(0x00903da0, "const t_abstract_function_2<void, t_window*, int>::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AUt_creature_influence_bonus@@;td=598d50;validated-header; map:58201
DATA_CHT_1_COMPGEN(0x00998d50, "t_creature_influence_bonus `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AUt_creature_influence@@;td=598d7c;validated-header; map:58202
DATA_CHT_1_COMPGEN(0x00998d7c, "t_creature_influence `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_counted_idle_processor@@;td=598dc8;validated-header; map:58203
DATA_CHT_1_COMPGEN(0x00998dc8, "t_counted_idle_processor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_play_combat_animation@@;td=598df0;validated-header; map:58204
DATA_CHT_1_COMPGEN(0x00998df0, "t_play_combat_animation `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sequence_actions@?%C:\Work\game\combat_creature.cpp1737517376@@;td=598e98;validated-header; map:58205
DATA_CHT_1_COMPGEN(0x00998e98, "t_sequence_actions `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_creature@@;td=598f0c;validated-header; map:58206
DATA_CHT_1_COMPGEN(0x00998f0c, "t_creature `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_pain_mirror_action@?%C:\Work\game\combat_creature.cpp1737517376@@;td=598f50;validated-header; map:58207
DATA_CHT_1_COMPGEN(0x00998f50, "t_pain_mirror_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler@Vt_combat_creature@@@@;td=598fa0;validated-header; map:58208
DATA_CHT_1_COMPGEN(0x00998fa0, "t_bound_handler<t_combat_creature> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@H@@;td=598fd8;validated-header; map:58209
DATA_CHT_1_COMPGEN(0x00998fd8, "t_abstract_function_2<void, t_window*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_window@@H@@;td=599010;validated-header; map:58210
DATA_CHT_1_COMPGEN(0x00999010, "t_handler_base_2<t_window*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_combat_creature@@PAVt_window@@H@@;td=599040;validated-header; map:58211
DATA_CHT_1_COMPGEN(0x00999040, "t_bound_handler_2<t_combat_creature, t_window*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@H@@;td=599088;validated-header; map:58212
DATA_CHT_1_COMPGEN(0x00999088, "t_add_2nd_handler_1<t_window*, int> `RTTI Type Descriptor'")
