// creature.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 69/124 (A:17 B:3 C:0); unaccounted 55; skipped std 43.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (92 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67043; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00605610, 0x15, STATIC_INIT_DISPATCH, "creature#1")

// name:C; dyninit; see ledger; map:67044
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "creature#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:22825
VA_CHT_1(0x00605630, 0xf0)
t_creature::t_creature()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:22826
VA_CHT_1(0x006058a0, 0xf4)
t_creature::t_creature(t_creature_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22827
VA_CHT_1(0x006059a0, 0x2c2)
void t_creature::add(t_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22828
VA_CHT_1(0x00605c70, 0x16)
bool t_creature::can_add(t_creature_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22829
VA_CHT_1(0x00605c90, 0x3e)
bool t_creature::can_add(t_creature_stack const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22830
VA_CHT_1(0x00605cd0, 0xf)
int t_creature::get_damage_high() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22831
VA_CHT_1(0x00605ce0, 0x50)
float t_creature::get_offense(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22832
VA_CHT_1(0x00605d30, 0xb0)
float t_creature::get_offense(bool arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22833
VA_CHT_1(0x00605de0, 0xe)
float t_creature::get_defense_basic(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22834
VA_CHT_1(0x00605df0, 0x52)
float t_creature::get_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22835
VA_CHT_1(0x00605e50, 0xe0)
float t_creature::get_defense(bool arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22836
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_creature::get_defense_reduction(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22837
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_damage_low() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22838
VA_CHT_1(0x00605f40, 0x24)
int t_creature::get_experience_value(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22839
VA_CHT_1(0x00605f70, 0x3)
t_creature const* t_creature::get_const_creature() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22840
VA_CHT_1(0x00605f80, 0xf)
int t_creature::get_hit_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22841
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_morale(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22842
VA_CHT_1(0x00605f90, 0x3a)
int t_creature::get_morale_bonus(t_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_luck_bonus(t_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22844
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22845
VA_CHT_1(0x00605ff0, 0x1c)
bool t_creature::has_ability(t_creature_ability arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22846
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature::is_active() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22847
VA_CHT_1(0x006060a0, 0x18)
int t_creature::get_combat_movement() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22848
VA_CHT_1(0x006060c0, 0x110)
std::string t_creature::get_army_name() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22849
VA_CHT_1(0x006061d0, 0x38)
std::string t_creature::get_name(bool arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22850
VA_CHT_1(0x00606250, 0xf)
int t_creature::get_number() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_layer> t_creature::get_portrait(int arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22852
VA_CHT_1(0x00606260, 0xf)
int t_creature::get_shots() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_speed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_speed(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_maximum_spell_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_spell_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature::remove(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22858
VA_CHT_1(0x00606320, 0xf)
t_creature_traits const& t_creature::get_traits() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22859
VA_CHT_1(0x00606330, 0x15)
bool t_creature::knows_spell(t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_spell_power(t_spell arg_0, t_abstract_grail_data_source const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_creature::get_alignment() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22862
VA_CHT_1(0x00606450, 0x4b)
bool t_creature::is_native_terrain(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22863
VA_CHT_1(0x006064a0, 0x1a)
bool t_creature::is_undead() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22864
VA_CHT_1(0x006064c0, 0x2c)
t_cached_ptr<t_combat_actor_model> t_creature::get_combat_model(double arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_missile_type t_creature::get_missile_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22868
VA_CHT_1(0x006065b0, 0xe2)
bool t_creature::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature::preplacement(t_adventure_map& arg_0, int arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22870
VA_CHT_1(0x00606870, 0x18)
void t_creature::get_income(int arg_0, t_material_array& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22871
VA_CHT_1(0x00606890, 0xca)
void t_creature::process_new_day(t_player* arg_0, bool arg_1, t_creature_array* arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:22872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature::get_stoning_chance() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22873
VA_CHT_1(0x00606960, 0x16)
int t_creature::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22874
VA_CHT_1(0x00606980, 0x15e)
t_counted_ptr<t_creature_stack> t_creature::clone() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22875
VA_CHT_1(0x00606cc0, 0x54)
int t_creature::get_magic_resistance(t_player const* arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22876
VA_CHT_1(0x00606d20, 0x12)
t_skill_mastery t_creature::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22877
VA_CHT_1(0x00606d40, 0x1e)
t_skill_mastery t_creature::get_stealth_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_creature::get_right_click_text() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67045; name:B (dyninit; see ledger)
VA_CHT_1(0x00606f80, 0x20)
// creature$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67047; name:B (dyninit; see ledger)
VA_CHT_1(0x00606fa0, 0x5c)
// creature$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67049
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:22879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_stack::ai_start_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:22880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_stack_with_backpack::get_backpack_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact const& t_stack_with_backpack::get_backpack_slot(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type t_creature::get_creature_type() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22883
VA_CHT_1_COMPGEN(0x00605770, 0x29, VECTOR_DELETING_DTOR, t_creature)

// name:A; map symbol; map:22884
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature)

// name:A; map symbol; map:22885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stack_with_backpack::t_stack_with_backpack()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22886
VA_CHT_1_COMPGEN(0x006057a0, 0x29, VECTOR_DELETING_DTOR, t_stack_with_backpack)

// name:A; map symbol; map:22887
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_stack_with_backpack)

// name:A; map symbol; map:22888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_stack_with_backpack::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:22889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool has_ability(t_creature_type arg_0, t_creature_ability arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:22890
VA_CHT_1(0x00605fd0, 0x1c)
bool t_creature_traits::has_ability(t_creature_ability arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:22891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature::t_creature(t_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_has_defense::t_has_defense(t_has_defense const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:22893
VA_CHT_1(0x006c4a50, 0x209)
t_stack_with_backpack::t_stack_with_backpack(t_stack_with_backpack const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:22894
VA_CHT_1(0x00606ae0, 0x1b0)
t_creature_stack::t_creature_stack(t_creature_stack const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:22895
VA_CHT_1_COMPGEN(0x00606c90, 0x26, SCALAR_DELETING_DTOR, t_creature_stack)

// name:A; map symbol; map:22896
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature_stack)

// name:A; map symbol; map:22897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_creature::t_abstract_creature(t_abstract_creature const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_creature_stack::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:22933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_creature_type const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:22934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_type get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22943
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature)

// name:A; map symbol; map:22944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual float t_creature::get_defense_basic`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:22945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual float t_creature::get_defense_bonus`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22946
VA_CHT_1_COMPGEN(0x00607000, 0xe, VECTOR_DELETING_DTOR, t_stack_with_backpack)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22947
VA_CHT_1(0x00607010, 0x8)
// [thunk]: public: virtual float t_creature_stack::get_defense_basic`vtordisp{-4, 40}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22948
VA_CHT_1(0x00607020, 0x8)
// [thunk]: public: virtual float t_creature_stack::get_defense_bonus`vtordisp{-4, 40}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22949
VA_CHT_1_COMPGEN(0x00607030, 0xe, VECTOR_DELETING_DTOR, t_creature_stack)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22950
VA_CHT_1(0x00607040, 0xb)
// [thunk]: public: virtual float t_creature_stack::get_defense_basic`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:22951
VA_CHT_1(0x00607050, 0xb)
// [thunk]: public: virtual float t_creature_stack::get_defense_bonus`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (12 symbols) ===

// name:A; map symbol; map:44158
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature::`vftable'{for `t_has_defense'}")

// confidence:B; rtti-order; map:44159
DATA_CHT_1_COMPGEN(0x008de2a4, "const t_creature::`vftable'{for `t_abstract_creature'}")

// confidence:A; rtti-name; map:44160
DATA_CHT_1_COMPGEN(0x008de21c, "const t_creature::`vftable'")

// name:A; map symbol; map:44161
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature::`vbtable'")

// name:A; map symbol; map:44162
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stack_with_backpack::`vftable'{for `t_has_defense'}")

// confidence:B; rtti-order; map:44163
DATA_CHT_1_COMPGEN(0x008de424, "const t_stack_with_backpack::`vftable'{for `t_abstract_creature'}")

// confidence:A; rtti-name; map:44164
DATA_CHT_1_COMPGEN(0x008de398, "const t_stack_with_backpack::`vftable'")

// name:A; map symbol; map:44165
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stack_with_backpack::`vbtable'")

// name:A; map symbol; map:44166
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_stack::`vftable'{for `t_has_defense'}")

// confidence:B; rtti-order; map:44167
DATA_CHT_1_COMPGEN(0x008de5ac, "const t_creature_stack::`vftable'{for `t_abstract_creature'}")

// confidence:A; rtti-name; map:44168
DATA_CHT_1_COMPGEN(0x008de520, "const t_creature_stack::`vftable'")

// name:A; map symbol; map:44169
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_stack::`vbtable'")

// === .rdata$r (20 symbols) ===

// name:A; map symbol; map:51532
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature::`RTTI Complete Object Locator'{for `t_has_defense'}")

// name:A; map symbol; map:51533
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_has_defense@@;bcd=5077b8;pmd=0,12,4;attributes=16;validated-hierarchy-link; map:51534
DATA_CHT_1_COMPGEN(0x009077b8, "t_has_defense::`RTTI Base Class Descriptor at (0, 12, 4, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_creature@@;bcd=5077d0;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:51535
DATA_CHT_1_COMPGEN(0x009077d0, "t_abstract_creature::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_stack@@;bcd=5077e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51536
DATA_CHT_1_COMPGEN(0x009077e8, "t_creature_stack::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_stack_with_backpack@@;bcd=507800;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51537
DATA_CHT_1_COMPGEN(0x00907800, "t_stack_with_backpack::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature@@;bcd=507818;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51538
DATA_CHT_1_COMPGEN(0x00907818, "t_creature::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature@@;vft=4de21c;col=50785c;td=598f0c;chd=50784c;offset=172;cdOffset=0;validated-hierarchy; map:51539
DATA_CHT_1_COMPGEN(0x00907830, "t_creature::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature@@;vft=4de21c;col=50785c;td=598f0c;chd=50784c;offset=172;cdOffset=0;validated-hierarchy; map:51540
DATA_CHT_1_COMPGEN(0x0090784c, "t_creature::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature@@;vft=4de21c;col=50785c;td=598f0c;chd=50784c;offset=172;cdOffset=0;validated-hierarchy; map:51541
DATA_CHT_1_COMPGEN(0x0090785c, "const t_creature::`RTTI Complete Object Locator'")

// name:A; map symbol; map:51542
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stack_with_backpack::`RTTI Complete Object Locator'{for `t_has_defense'}")

// name:A; map symbol; map:51543
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stack_with_backpack::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_stack_with_backpack@@;vft=4de398;col=50777c;td=590144;chd=50776c;offset=160;cdOffset=0;validated-hierarchy; map:51544
DATA_CHT_1_COMPGEN(0x00907754, "t_stack_with_backpack::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_stack_with_backpack@@;vft=4de398;col=50777c;td=590144;chd=50776c;offset=160;cdOffset=0;validated-hierarchy; map:51545
DATA_CHT_1_COMPGEN(0x0090776c, "t_stack_with_backpack::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_stack_with_backpack@@;vft=4de398;col=50777c;td=590144;chd=50776c;offset=160;cdOffset=0;validated-hierarchy; map:51546
DATA_CHT_1_COMPGEN(0x0090777c, "const t_stack_with_backpack::`RTTI Complete Object Locator'")

// name:A; map symbol; map:51547
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_stack::`RTTI Complete Object Locator'{for `t_has_defense'}")

// name:A; map symbol; map:51548
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_stack::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_stack@@;vft=4de520;col=5078bc;td=590124;chd=5078ac;offset=120;cdOffset=0;validated-hierarchy; map:51549
DATA_CHT_1_COMPGEN(0x00907898, "t_creature_stack::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_stack@@;vft=4de520;col=5078bc;td=590124;chd=5078ac;offset=120;cdOffset=0;validated-hierarchy; map:51550
DATA_CHT_1_COMPGEN(0x009078ac, "t_creature_stack::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_stack@@;vft=4de520;col=5078bc;td=590124;chd=5078ac;offset=120;cdOffset=0;validated-hierarchy; map:51551
DATA_CHT_1_COMPGEN(0x009078bc, "const t_creature_stack::`RTTI Complete Object Locator'")
