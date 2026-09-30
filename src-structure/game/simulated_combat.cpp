// simulated_combat.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 64/119 (A:19 B:29 C:16); unaccounted 55; skipped std 43.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (103 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62773; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3c90, 0x15, STATIC_INIT_DISPATCH, "simulated_combat#1")

// name:C; dyninit; see ledger; map:62774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#1")

// confidence:A; dyninit-init; owner-conf-C; map:62775; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3cb0, 0x15, STATIC_INIT_DISPATCH, "simulated_combat#2")

// name:C; dyninit; see ledger; map:62776
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#2")

// confidence:A; dyninit-init; owner-conf-C; map:62777; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3cd0, 0x15, STATIC_INIT_DISPATCH, "simulated_combat#3")

// name:C; dyninit; see ledger; map:62778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#3")

// confidence:A; dyninit-init; owner-conf-C; map:62779; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3cf0, 0x15, STATIC_INIT_DISPATCH, "simulated_combat#4")

// name:C; dyninit; see ledger; map:62780
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#4")

// confidence:A; dyninit-init; owner-conf-C; map:62781; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3d10, 0x10, STATIC_INIT_DISPATCH, "simulated_combat#5")

// name:C; dyninit; see ledger; map:62782
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#5")

// confidence:A; dyninit-init; owner-conf-C; map:62783; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3d20, 0x15, STATIC_INIT_DISPATCH, "simulated_combat#6")

// name:C; dyninit; see ledger; map:62784
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "simulated_combat#6")

// confidence:A; align-order; retn,stable,vptr; map:37231
VA_CHT_1(0x007b3d40, 0x169)
t_simulated_combat_creature::t_simulated_combat_creature(
    t_creature_stack* arg_0,
    int arg_1,
    bool arg_2,
    double arg_3,
    t_abstract_grail_data_source const& arg_4,
    t_player const* arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:37232
VA_CHT_1(0x007b3fe0, 0x2d2)
t_simulated_combat_creature::t_simulated_combat_creature(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_grail_data_source const& t_simulated_combat_creature::get_grail_data() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37234
VA_CHT_1(0x007b42c0, 0x39)
void t_simulated_combat_creature::add_wounds(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37235
VA_CHT_1(0x007b4300, 0x179)
bool t_simulated_combat_creature::can_retaliate(t_simulated_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37236
VA_CHT_1(0x007b4480, 0x7)
bool t_simulated_combat_creature::can_shoot() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::do_attack(
    t_simulated_combat_creature& arg_0,
    bool arg_1,
    bool arg_2,
    int arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::do_melee(t_simulated_combat_creature& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37239
VA_CHT_1(0x007b4490, 0x94)
void t_simulated_combat_creature::do_ranged_attack(t_simulated_combat_creature& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37240
VA_CHT_1(0x007b46c0, 0x112)
int t_simulated_combat_creature::get_damage(t_simulated_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:37241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::process_new_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:37242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::heal(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37243
VA_CHT_1(0x007b47e0, 0x88)
void t_simulated_combat_creature::resurrect(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37244
VA_CHT_1(0x007b4870, 0xb0)
void t_simulated_combat_creature::set_enchantment(t_spell arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:37245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_spell(t_spell arg_0, int arg_1, t_spell_source arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37246
VA_CHT_1(0x007b4920, 0x15f)
void t_simulated_combat_creature::set_spell(
    t_spell arg_0,
    t_combat_action_message const& arg_1,
    int arg_2,
    t_spell_source arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::cast_spell_on(t_spell arg_0, t_simulated_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37248
VA_CHT_1(0x007b4c10, 0x410)
t_simulated_combat::t_simulated_combat(
    t_creature_array& arg_0,
    t_player* arg_1,
    t_creature_array& arg_2,
    t_player* arg_3,
    t_adventure_map& arg_4,
    t_adv_map_point const& arg_5,
    t_town* arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:62785
VA_CHT_1(0x007b5020, 0x18d)
static void add_creatures(
    t_creature_array& arg_0,
    t_simulated_combat_creature_list& arg_1,
    bool arg_2,
    double arg_3,
    t_abstract_grail_data_source const& arg_4,
    t_player const* arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37249
VA_CHT_1(0x007b51c0, 0x215)
t_simulated_combat::t_simulated_combat(
    t_creature_array** arg_0,
    t_player** arg_1,
    t_town* arg_2,
    bool arg_3,
    t_abstract_grail_data_source const& arg_4,
    t_abstract_grail_data_source const& arg_5
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37250
VA_CHT_1(0x007b53e0, 0x139)
t_simulated_combat::~t_simulated_combat()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37251
VA_CHT_1(0x007b5520, 0xa0)
void t_simulated_combat::add(t_simulated_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37252
VA_CHT_1(0x007b55c0, 0x18a)
void t_simulated_combat::cast_damage(
    t_simulated_combat_creature& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:62786
VA_CHT_1(0x007b5750, 0x8b)
static int get_spell_damage(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature const& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37253
VA_CHT_1(0x007b57e0, 0x2a4)
void t_simulated_combat::cast_spell(
    t_simulated_combat_creature& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature* arg_2,
    t_simulated_combat_creature* arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37254
VA_CHT_1(0x007b5aa0, 0x1f2)
void t_simulated_combat::cast_summoning(t_simulated_combat_creature& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37255
VA_CHT_1(0x007b5ca0, 0x3bd)
bool t_simulated_combat::choose_action(t_simulated_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37256
VA_CHT_1(0x007b6060, 0x27b)
int t_simulated_combat::choose_damage_target(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature*& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37257
VA_CHT_1(0x007b6300, 0x19b)
int t_simulated_combat::choose_sacrifice_target(
    t_simulated_combat_creature const& arg_0,
    t_simulated_combat_creature*& arg_1,
    t_simulated_combat_creature*& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37258
VA_CHT_1(0x007b64a0, 0x196)
int t_simulated_combat::choose_spell(
    t_simulated_combat_creature const& arg_0,
    t_spell& arg_1,
    t_simulated_combat_creature*& arg_2,
    t_simulated_combat_creature*& arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37259
VA_CHT_1(0x007b6660, 0xe0)
int t_simulated_combat::choose_spell_target(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature*& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_simulated_combat::choose_spell_target(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature*& arg_2,
    t_simulated_combat_creature*& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:62787
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_summoning_value(t_simulated_combat_creature const& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37261
VA_CHT_1(0x007b6740, 0x16e)
int t_simulated_combat::get_mass_spell_value(t_simulated_combat_creature const& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37262
VA_CHT_1(0x007b68b0, 0x35d)
int t_simulated_combat::get_spell_target_value(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:62788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_enchantment_value(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature const& arg_2,
    int arg_3,
    bool const* arg_4
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37263
VA_CHT_1(0x007b6c30, 0x1aa)
void t_simulated_combat::initialize()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37264
VA_CHT_1(0x007b6de0, 0x105)
void t_simulated_combat::run()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37265
VA_CHT_1(0x007b6ef0, 0x2d)
void t_simulated_combat::report_results(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37266
VA_CHT_1(0x007b6f20, 0x10e)
void t_simulated_combat::record_results(t_adventure_frame* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37267
VA_CHT_1(0x007b7030, 0x75)
void t_simulated_combat::finalize_combat(
    t_adventure_frame* arg_0,
    bool const* arg_1,
    t_counted_ptr<t_army>& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37268
VA_CHT_1(0x007b70b0, 0x6c)
t_simulated_combat_creature* t_simulated_combat::select_next_creature(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37269
VA_CHT_1(0x007b7120, 0x3d)
void t_simulated_combat::set_effectiveness(bool arg_0, double arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37270
VA_CHT_1(0x007b7160, 0x47)
void t_simulated_combat::update_attacking_force()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37271
VA_CHT_1(0x007b71b0, 0x3ef)
float t_simulated_combat::query_combat_value() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37272
VA_CHT_1(0x007b75a0, 0x178)
float t_simulated_combat::query_value_drop() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37273
VA_CHT_1(0x007b7720, 0x4)
t_creature_array const* t_simulated_combat::get_losses() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62789; name:B (dyninit; see ledger)
VA_CHT_1(0x007b77f0, 0x20)
// simulated_combat$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:62791; name:B (dyninit; see ledger)
VA_CHT_1(0x007b7810, 0x5c)
// simulated_combat$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// simulated_combat$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// simulated_combat$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// simulated_combat$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:37274
VA_CHT_1_COMPGEN(0x007b3eb0, 0x29, VECTOR_DELETING_DTOR, t_simulated_combat_creature)

// name:A; map symbol; map:37275
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_simulated_combat_creature)

// name:A; map symbol; map:37276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_simulated_combat_creature::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:37277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simulated_combat_creature::~t_simulated_combat_creature()
{
    // Body unavailable.
}

// name:A; map symbol; map:37278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_creature::t_abstract_combat_creature(t_abstract_combat_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_target::t_abstract_target(t_abstract_target const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_simulated_combat_creature::get_position() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_creature::set_retaliated(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_abstract_creature::get_damage_modifier(t_has_defense const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:37284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool affects_magic(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_position(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simulated_combat_creature_list::t_simulated_combat_creature_list()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:37287
VA_CHT_1(0x007b62e0, 0x1e)
t_simulated_combat_creature_list::~t_simulated_combat_creature_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:37288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_ptr<t_abstract_grail_data_source>::`default ctor closure'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:37289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_spell_damage(
    t_simulated_combat_creature const& arg_0,
    t_spell arg_1,
    t_simulated_combat_creature const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_simulated_combat_creature::get_spell_defense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_simulated_combat_creature::get_spell_offense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_simulated_combat_creature::get_total_hits() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_creature::set_spell_points(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_simulated_combat_creature::get_effectiveness() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:37295
VA_CHT_1(0x007b7730, 0x2a)
void t_simulated_combat_creature::set_defense(double arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_offense(double arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_simulated_combat_creature::casts_spells() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_first_casualty_time(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_lifespan(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simulated_combat_creature::set_effectiveness(double arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_simulated_combat_creature>::t_counted_ptr<t_simulated_combat_creature>(
    t_simulated_combat_creature* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simulated_combat_creature* t_counted_ptr<t_simulated_combat_creature>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_grail_data_source>::t_owned_ptr<t_abstract_grail_data_source>(
    t_abstract_grail_data_source* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_grail_data_source>::~t_owned_ptr<t_abstract_grail_data_source>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37343
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_abstract_grail_data_source>::reset(t_abstract_grail_data_source* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_grail_data_source& t_owned_ptr<t_abstract_grail_data_source>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37347
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_simulated_combat_creature>")

// confidence:C; align-order; stable; map:37349
VA_CHT_1(0x007b7870, 0xb)
// [thunk]: public: virtual bool t_abstract_combat_creature::belongs_to`vtordisp{-4, 68}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:37350
VA_CHT_1(0x007b7880, 0xb)
// [thunk]: public: virtual bool t_abstract_combat_creature::controlled_by`vtordisp{-4, 68}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:37351
VA_CHT_1(0x007b7890, 0xb)
// [thunk]: public: virtual bool t_abstract_combat_creature::is_active`vtordisp{-4, 68}'(t_spell) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:37352
VA_CHT_1_COMPGEN(0x007b78a0, 0xe, VECTOR_DELETING_DTOR, t_simulated_combat_creature)

// confidence:C; align-order; stable; map:37353
VA_CHT_1(0x007b78b0, 0xb)
// [thunk]: public: virtual float t_abstract_combat_creature::get_defense_basic`vtordisp{-4, 68}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:37354
VA_CHT_1(0x007b78c0, 0xb)
// [thunk]: public: virtual float t_abstract_combat_creature::get_defense_bonus`vtordisp{-4, 68}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (6 symbols) ===

// confidence:B; rtti-order; map:45761
DATA_CHT_1_COMPGEN(0x008ecd34, "const t_simulated_combat_creature::`vftable'{for `t_has_defense'}")

// confidence:A; rtti-name; map:45762
DATA_CHT_1_COMPGEN(0x008ecd54, "const t_simulated_combat_creature::`vftable'{for `t_abstract_combat_creature'}")

// name:A; map symbol; map:45763
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_simulated_combat_creature::`vftable'{for `t_abstract_creature'}")

// confidence:B; rtti-order; map:45764
DATA_CHT_1_COMPGEN(0x008ecde0, "const t_simulated_combat_creature::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45765
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_simulated_combat_creature::`vbtable'")

// name:A; map symbol; map:45766
DATA_CHT_1(UNACCOUNTED)
// __real@8@4006c800000000000000

// === .rdata$r (9 symbols) ===

// name:A; map symbol; map:56302
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_simulated_combat_creature::`RTTI Complete Object Locator'{for `t_has_defense'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_simulated_combat_creature@@;vft=4ecd54;col=51b264;td=5b9980;chd=51b2f0;offset=8;cdOffset=0;validated-hierarchy; map:56303
DATA_CHT_1_COMPGEN(0x0091b264, "const t_simulated_combat_creature::`RTTI Complete Object Locator'{for `t_abstract_combat_creature'}")

// name:A; map symbol; map:56304
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_simulated_combat_creature::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_target@@;bcd=51b28c;pmd=0,12,8;attributes=16;validated-hierarchy-link; map:56305
DATA_CHT_1_COMPGEN(0x0091b28c, "t_abstract_target::`RTTI Base Class Descriptor at (0, 12, 8, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_combat_creature@@;bcd=51b2a4;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:56306
DATA_CHT_1_COMPGEN(0x0091b2a4, "t_abstract_combat_creature::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_simulated_combat_creature@@;bcd=51b2bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56307
DATA_CHT_1_COMPGEN(0x0091b2bc, "t_simulated_combat_creature::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_simulated_combat_creature@@;vft=4ecd54;col=51b264;td=5b9980;chd=51b2f0;offset=8;cdOffset=0;validated-hierarchy; map:56308
DATA_CHT_1_COMPGEN(0x0091b2d4, "t_simulated_combat_creature::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_simulated_combat_creature@@;vft=4ecd54;col=51b264;td=5b9980;chd=51b2f0;offset=8;cdOffset=0;validated-hierarchy; map:56309
DATA_CHT_1_COMPGEN(0x0091b2f0, "t_simulated_combat_creature::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56310
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_simulated_combat_creature::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_simulated_combat_creature@@;td=5b9980;validated-header; map:59550
DATA_CHT_1_COMPGEN(0x009b9980, "t_simulated_combat_creature `RTTI Type Descriptor'")
