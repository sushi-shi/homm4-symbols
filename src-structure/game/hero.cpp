// hero.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\hero.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 170/306 (A:6 B:1 C:3); unaccounted 136; skipped std 190.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (274 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65261; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ba500, 0x15, STATIC_INIT_DISPATCH, "hero#1")

// name:C; dyninit; see ledger; map:65262
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65263; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ba520, 0x13, STATIC_INIT_DISPATCH, "hero#2")

// name:C; dyninit; see ledger; map:65264
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65265; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ba540, 0x1f, STATIC_INIT_DISPATCH, "hero#3")

// name:C; dyninit; see ledger; map:65266
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero#3")

namespace {

// name:A; map symbol; map:26875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_old_built_in_event(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_ownable_built_in_event& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26876
VA_CHT_1(0x006ba560, 0x1a4)
bool read_old_timed_event(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_ownable_timed_event& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26877
VA_CHT_1(0x006ba710, 0x1bd)
void t_hero::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26878
VA_CHT_1(0x006ba8d0, 0x25b)
t_hero::t_hero()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26879
VA_CHT_1(0x006bad80, 0x3c0)
t_hero::t_hero(t_default_hero const& arg_0, t_town_type arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26880
VA_CHT_1(0x006bb140, 0x4c4)
t_hero::t_hero(t_hero_carryover_data const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26881
VA_CHT_1(0x006bb610, 0x2a9)
t_hero::~t_hero()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26882
VA_CHT_1(0x006bb8c0, 0x1fc)
void t_hero::set_class(t_hero_class arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:26883
VA_CHT_1(0x006bbbf0, 0x4f)
std::string t_hero::get_name(bool arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_layer> t_hero::get_portrait(int arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26885
VA_CHT_1(0x006bbc40, 0xf3)
std::vector<t_skill, std::allocator<t_skill>> t_hero::get_skills() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26886
VA_CHT_1(0x006bbd40, 0x112)
t_cached_ptr<t_sound> t_hero::get_sound(t_adv_actor_action_id arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:65267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_hero::get_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26887
VA_CHT_1(0x006bbe70, 0xf2)
std::vector<t_skill, std::allocator<t_skill>> t_hero::get_primary_skills() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26888
VA_CHT_1(0x006bbf70, 0x14d)
std::vector<t_skill, std::allocator<t_skill>> t_hero::get_upgradable_skills() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_spell_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::can_add(t_creature_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::can_add(t_creature_stack const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26892
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::can_cast(t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero const* t_hero::get_const_hero() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_number() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_maximum_spell_points() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26896
VA_CHT_1(0x006bc170, 0x42)
int t_hero::get_damage_low(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26897
VA_CHT_1(0x006bc1c0, 0x47)
int t_hero::get_damage_low() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26898
VA_CHT_1(0x006bc210, 0x47)
int t_hero::get_damage_high(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26899
VA_CHT_1(0x006bc260, 0x4c)
int t_hero::get_damage_high() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26900
VA_CHT_1(0x006bc2b0, 0x67)
int t_hero::get_hit_points(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26901
VA_CHT_1(0x006bc3e0, 0x2f)
int t_hero::get_hit_points() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_combat_movement() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_speed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26905
VA_CHT_1(0x006bc410, 0x37)
int t_hero::get_shots() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26906
VA_CHT_1(0x006bc450, 0x184)
bool t_hero::equip(t_artifact const& arg_0, t_artifact_slot arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26907
VA_CHT_1(0x006bc5e0, 0x203)
bool t_hero::equip(t_artifact const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26908
VA_CHT_1(0x006bc7f0, 0x32)
bool t_hero::add(t_artifact const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26909
VA_CHT_1(0x006bc830, 0x3c)
bool t_hero::can_learn(t_skill const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26910
VA_CHT_1(0x006bc870, 0xe5)
t_skill t_hero::choose_skill(std::vector<t_skill, std::allocator<t_skill>> const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26911
VA_CHT_1(0x006bc960, 0x1a)
int t_hero::get_primary_skill_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26912
VA_CHT_1(0x006bc980, 0x186)
void t_hero::add_primary_skill(
    std::vector<t_skill, std::allocator<t_skill>>& arg_0,
    t_adventure_map const& arg_1,
    bool* arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26913
VA_CHT_1(0x006bcb10, 0x5cc)
std::vector<t_skill, std::allocator<t_skill>> t_hero::get_skill_choices(t_adventure_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:65268
VA_CHT_1(0x006bd0e0, 0x42b)
static bool increase_existing_skills(
    t_hero const& arg_0,
    std::vector<t_skill, std::allocator<t_skill>>& arg_1,
    t_adventure_map const& arg_2,
    bool* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26914
VA_CHT_1(0x006bd510, 0x22)
std::string t_hero::get_class_name() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65269; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bd540, 0x29, STATIC_INIT_DISPATCH, "hero#4")

// name:C; dyninit; see ledger; map:65270
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "hero#4")

// name:C; dyninit; see ledger; map:65271
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#4")

// confidence:C; dyninit-dtor; owner-conf-C;manual-review=complete-R22:unresolved; map:65272; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bd570, 0x20, STATIC_DTOR, "hero#4")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26915
VA_CHT_1(0x006bd590, 0xee)
int t_hero::get_experience(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26916
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_level(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26917
VA_CHT_1(0x006bd680, 0x94)
std::string t_hero::get_class_description() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65273; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bd720, 0x11, STATIC_INIT_DISPATCH, "hero#5")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65274; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bd740, 0xd1, STATIC_CTOR, "hero#5")

// name:C; dyninit; see ledger; map:65275
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#5")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65276; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bd820, 0xa, STATIC_DTOR, "hero#5")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26918
VA_CHT_1(0x006bd830, 0x5a2)
bool t_hero::update_class(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65277; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bdde0, 0x11, STATIC_INIT_DISPATCH, k_max_level_reached)

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65278; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bde00, 0xd1, STATIC_CTOR, k_max_level_reached)

// name:C; dyninit; see ledger; map:65279
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_max_level_reached)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65280; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bdee0, 0xa, STATIC_DTOR, k_max_level_reached)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65281; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bdef0, 0x11, STATIC_INIT_DISPATCH, k_max_level_reached_title)

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65282; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bdf10, 0xd1, STATIC_CTOR, k_max_level_reached_title)

// name:C; dyninit; see ledger; map:65283
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_max_level_reached_title)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65284; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bdff0, 0xa, STATIC_DTOR, k_max_level_reached_title)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26919
VA_CHT_1(0x006be000, 0x4dd)
void t_hero::check_level(t_adventure_map const& arg_0, t_window* arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:65285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_skill ai_choose_skill(
    t_hero const& arg_0,
    std::vector<t_skill, std::allocator<t_skill>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26920
VA_CHT_1(0x006be4e0, 0x50)
bool t_hero::can_add_experience(t_player* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26921
VA_CHT_1(0x006be530, 0x19)
int t_hero::get_experience_needed_for_next_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26922
VA_CHT_1(0x006be550, 0x31)
bool t_hero::has_visited(t_single_use_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26923
VA_CHT_1(0x006be590, 0x2b)
bool t_hero::has_visited(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26924
VA_CHT_1(0x006be5c0, 0x1f4)
void t_hero::set_visited(t_single_use_object const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26925
VA_CHT_1(0x006be7c0, 0x1e0)
void t_hero::set_visited(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65286; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006be9a0, 0x11, STATIC_INIT_DISPATCH, "hero#8")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65287; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006be9c0, 0xd1, STATIC_CTOR, "hero#8")

// name:C; dyninit; see ledger; map:65288
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#8")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65289; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006beaa0, 0xa, STATIC_DTOR, "hero#8")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65290; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006beab0, 0x11, STATIC_INIT_DISPATCH, "hero#9")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65291; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bead0, 0xd1, STATIC_CTOR, "hero#9")

// name:C; dyninit; see ledger; map:65292
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#9")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65293; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bebb0, 0xa, STATIC_DTOR, "hero#9")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26926
VA_CHT_1(0x006bebc0, 0x14d)
std::string t_hero::get_pronoun() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65294; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bed10, 0x11, STATIC_INIT_DISPATCH, "hero#10")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65295; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bed30, 0xd1, STATIC_CTOR, "hero#10")

// name:C; dyninit; see ledger; map:65296
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#10")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65297; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bee10, 0xa, STATIC_DTOR, "hero#10")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65298; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bee20, 0x11, STATIC_INIT_DISPATCH, "hero#11")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65299; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bee40, 0xd1, STATIC_CTOR, "hero#11")

// name:C; dyninit; see ledger; map:65300
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#11")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65301; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bef20, 0xa, STATIC_DTOR, "hero#11")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26927
VA_CHT_1(0x006bef30, 0x14d)
std::string t_hero::get_possessive_pronoun() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65302; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf080, 0x11, STATIC_INIT_DISPATCH, "hero#12")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65303; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf0a0, 0xd1, STATIC_CTOR, "hero#12")

// name:C; dyninit; see ledger; map:65304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#12")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65305; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf180, 0xa, STATIC_DTOR, "hero#12")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65306; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf190, 0x11, STATIC_INIT_DISPATCH, "hero#13")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65307; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf1b0, 0xd1, STATIC_CTOR, "hero#13")

// name:C; dyninit; see ledger; map:65308
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#13")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65309; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf290, 0xa, STATIC_DTOR, "hero#13")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26928
VA_CHT_1(0x006bf2a0, 0x14d)
std::string t_hero::get_accusative_pronoun() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65310; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf3f0, 0x11, STATIC_INIT_DISPATCH, "hero#14")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65311; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf410, 0xd1, STATIC_CTOR, "hero#14")

// name:C; dyninit; see ledger; map:65312
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#14")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65313; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf4f0, 0xa, STATIC_DTOR, "hero#14")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65314; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf500, 0x11, STATIC_INIT_DISPATCH, "hero#15")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65315; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf520, 0xd1, STATIC_CTOR, "hero#15")

// name:C; dyninit; see ledger; map:65316
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#15")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65317; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006bf600, 0xa, STATIC_DTOR, "hero#15")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26929
VA_CHT_1(0x006bf610, 0x14d)
std::string t_hero::get_reflexive_pronoun() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26930
VA_CHT_1(0x006bf760, 0x15b)
void t_hero::get_income(int arg_0, t_material_array& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26931
VA_CHT_1(0x006bf8c0, 0xa0)
void t_hero::do_summoning(t_creature_array& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:65318
VA_CHT_1(0x006bf960, 0xf0)
static t_creature_type choose_summoned_creature(t_creature_array& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::process_new_day(t_player* arg_0, bool arg_1, t_creature_array* arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:26933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::learn_spells(t_town const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26934
VA_CHT_1(0x006bfbd0, 0x7b)
int t_hero::get_spell_power(t_spell arg_0, t_abstract_grail_data_source const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::knows_spell(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26936
VA_CHT_1(0x006bfd00, 0x63)
bool t_hero::can_learn(t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::learn_spell(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26938
VA_CHT_1(0x006bfe10, 0x51)
void t_hero::learn_all_spells_cheat()
{
    // Body unavailable.
}

// name:A; map symbol; map:26939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_spell_cost(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26940
VA_CHT_1(0x006bfe80, 0x6f)
t_cached_ptr<t_combat_actor_model> t_hero::get_combat_model(double arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26941
VA_CHT_1(0x006bfef0, 0xf)
t_missile_type t_hero::get_missile_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:65319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool read_skills_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    std::vector<t_skill, std::allocator<t_skill>>& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_name_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_artifacts_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_bonuses_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_built_in_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_continuous_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:26950
VA_CHT_1(0x006bff00, 0x6a7)
bool t_hero::read_gender_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:26951
VA_CHT_1(0x006c05b0, 0x980)
bool t_hero::read_hero_class_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_level_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_portrait_id_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_spellbook_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_timed_events_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::read_triggerable_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26957
VA_CHT_1(0x006c1360, 0xae5)
bool t_hero::read_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26958
VA_CHT_1(0x006c1e50, 0x68)
bool t_hero::read_ai_importance_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26959
VA_CHT_1(0x006c1ec0, 0x22e)
bool t_hero::write_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26960
VA_CHT_1(0x006c20f0, 0x13)
int t_hero::get_experience_value(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26961
VA_CHT_1(0x006c2110, 0x22)
float t_hero::ai_value() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26962
VA_CHT_1(0x006c2140, 0x57)
float t_hero::ai_value(t_creature_array const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_hero::ai_value_including_dead() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26964
VA_CHT_1(0x006c21d0, 0x20)
int t_hero::ai_get_total_defense() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26965
VA_CHT_1(0x006c21f0, 0x39)
int t_hero::ai_get_total_offense(t_offense_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26966
VA_CHT_1(0x006c2230, 0x5e)
int t_hero::ai_get_total_offense() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::ai_start_turn(t_creature_array const* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65320; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c2290, 0x11, STATIC_INIT_DISPATCH, "hero#16")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65321; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c22b0, 0xd1, STATIC_CTOR, "hero#16")

// name:C; dyninit; see ledger; map:65322
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "hero#16")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65323; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c2390, 0xa, STATIC_DTOR, "hero#16")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26968
VA_CHT_1(0x006c23a0, 0x53a)
void t_hero::learn_skill(t_skill const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26969
VA_CHT_1(0x006c28e0, 0xe9)
bool t_hero::has_ability(t_creature_ability arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::preplacement(t_adventure_map& arg_0, int arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26971
VA_CHT_1(0x006c2ce0, 0x354)
void t_hero::derandomize(t_adventure_map& arg_0, t_player* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26972
VA_CHT_1(0x006c3040, 0x239)
void t_hero::initialize(t_adventure_map& arg_0, t_default_hero const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26973
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_wounds() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26974
VA_CHT_1(0x006c3290, 0x29)
bool t_hero::is_active() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::is_dead() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26976
VA_CHT_1(0x006c32d0, 0xe)
t_skill_mastery t_hero::get_skill(t_skill_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_tactics_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:65324
VA_CHT_1(0x006c33a0, 0x3e)
static t_skill_mastery get_tactics_skill(t_hero const& arg_0, t_skill_type arg_1, bool arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:26978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_tactics_offense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_tactics_speed_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_tactics_move_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26981
VA_CHT_1(0x006c33e0, 0x13)
int t_hero::get_leadership_luck_bonus() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26982
VA_CHT_1(0x006c3400, 0xe)
int t_hero::get_leadership_morale_bonus() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26983
VA_CHT_1(0x006c3410, 0x6c)
int t_hero::get_army_move_bonus(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_hero::get_army_move_multiplier(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26985
VA_CHT_1(0x006c3480, 0x59)
int t_hero::get_army_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26986
VA_CHT_1(0x006c34e0, 0x62)
bool t_hero::is_native_terrain(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26987
VA_CHT_1(0x006c3590, 0x14)
int t_hero::get_resurrection_cost() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26988
VA_CHT_1(0x006c35b0, 0x12)
int t_hero::get_stoning_chance() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26989
VA_CHT_1(0x006c35d0, 0xdd)
bool t_hero::accept(t_artifact_effect_visitor& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_hero::get_defense_basic(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26991
VA_CHT_1(0x006c36c0, 0x69)
float t_hero::get_defense_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26992
VA_CHT_1(0x006c3730, 0x2a)
float t_hero::get_defense_reduction(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_hero::get_offense(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26994
VA_CHT_1(0x006c37f0, 0x5)
int t_hero::get_luck() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_morale(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26996
VA_CHT_1(0x006c3800, 0xb6)
int t_hero::get_skill_power(t_skill const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26997
VA_CHT_1(0x006c3900, 0x26)
int t_hero::get_skill_power(t_skill_type arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26998
VA_CHT_1(0x006c3930, 0x185)
void t_hero::execute_script(t_hero_scriptable_event arg_0, t_script_context_hero const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:26999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::process_timed_events(
    t_adventure_map& arg_0,
    t_creature_array* arg_1,
    t_player* arg_2,
    t_adv_map_point const* arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::process_continuous_events(
    t_adventure_map& arg_0,
    t_creature_array* arg_1,
    t_player* arg_2,
    t_adv_map_point const* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::process_triggerable_events(
    t_adventure_map& arg_0,
    std::string const& arg_1,
    t_creature_array* arg_2,
    t_player* arg_3,
    t_adv_map_point const* arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27002
VA_CHT_1(0x006c41f0, 0x26b)
void t_hero::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27003
VA_CHT_1(0x006c4460, 0x42)
void t_hero::clear_nobility_town()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27004
VA_CHT_1(0x006c44b0, 0x16b)
void t_hero::visit_town(t_abstract_town* arg_0, t_creature_array const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27005
VA_CHT_1(0x006c4620, 0x59)
void t_hero::set_nobility_town(t_abstract_town* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::raise_nobility_priority()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27007
VA_CHT_1(0x006c4680, 0x25)
void t_hero::lower_nobility_priority()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27008
VA_CHT_1(0x006c46b0, 0xd)
void t_hero::set_dead(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:27009
VA_CHT_1(0x006c46c0, 0x38c)
t_counted_ptr<t_creature_stack> t_hero::clone() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:27010
VA_CHT_1(0x006c4f60, 0x6f)
int t_hero::get_magic_resistance(t_player const* arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27011
VA_CHT_1(0x006c4fd0, 0x297)
void t_hero::store(t_hero_carryover_data& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27012
VA_CHT_1(0x006c5270, 0x51)
void t_hero::set_built_in_events(t_counted_ptr<t_ownable_built_in_event> const (& arg_0)[3])
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27013
VA_CHT_1(0x006c55e0, 0x1b)
void t_hero::take_continuous_events(
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>>& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27014
VA_CHT_1(0x006c5ff0, 0x31)
void t_hero::take_timed_events(
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>>& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27015
VA_CHT_1(0x006c6df0, 0x3b)
void t_hero::take_triggerable_events(
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::redistribute_artifacts(t_creature_array& arg_0, t_artifact_list& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27017
VA_CHT_1(0x006c7180, 0x51)
t_skill_mastery t_hero::get_anti_stealth_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27018
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_hero::get_stealth_level() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27019
VA_CHT_1(0x006c71e0, 0x52)
bool t_hero::mark_eluded(t_army const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27020
VA_CHT_1(0x006c7240, 0x56)
bool t_hero::was_eluded(t_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_hero::get_right_click_text() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27022
VA_CHT_1(0x006c72a0, 0x51)
void t_hero::update_artifact_spells()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65325; name:B (dyninit; see ledger)
VA_CHT_1(0x006c7360, 0x20)
// hero$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65327; name:B (dyninit; see ledger)
VA_CHT_1(0x006c7380, 0x5c)
// hero$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// hero$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// hero$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// hero$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:27023
VA_CHT_1(0x006c5490, 0x33)
t_town_type t_hero::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27024
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact const& t_hero::get_artifact(t_artifact_slot arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero::is_imprisoned() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:27026
VA_CHT_1_COMPGEN(0x006bab70, 0x29, SCALAR_DELETING_DTOR, t_hero)

// name:A; map symbol; map:27027
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_hero)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27029
VA_CHT_1(0x006c21a0, 0x2a)
t_university_diploma_array::t_university_diploma_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:27030
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_university_diploma_array::~t_university_diploma_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:27031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_hero::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27033
VA_CHT_1(0x006c70a0, 0x19)
t_hero_class t_hero::get_class() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27034
VA_CHT_1(0x006c7300, 0x14)
std::string const& t_hero_carryover_data::get_biography() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero_carryover_data::get_biography_id() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27036
VA_CHT_1(0x006c6680, 0x3b)
int t_hero_carryover_data::get_bonus(t_stat_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero_carryover_data::get_experience() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_class t_hero_carryover_data::get_class() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero_carryover_data::get_portrait_id() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<188> const& t_hero_carryover_data::get_spellbook() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero_carryover_data::is_male() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27042
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero_carryover_data::use_spellcaster_model() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill const& t_skill_choice_dialog::get_choice() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_skill_choice_dialog>::~t_counted_ptr<t_skill_choice_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_single_use_object::get_single_use_id() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27046
VA_CHT_1(0x006bfb80, 0x43)
bool t_abstract_town::is_hero_in_nobility_list(t_hero* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27047
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_guild_spell, std::allocator<t_guild_spell>> const& t_town::get_spells() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_university_diploma::t_university_diploma()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27049
VA_CHT_1(0x006c7320, 0x39)
t_default_hero t_adventure_map::get_generic_hero(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_hero_portrait_used(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27051
VA_CHT_1(0x006c32e0, 0x3e)
bool t_default_hero_list::is_portrait_used(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_level_map_point_2d const& arg_0, t_level_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero::t_hero(t_hero const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_university_diploma_array::t_university_diploma_array(t_university_diploma_array const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27057
VA_CHT_1(0x006bc0d0, 0x33)
void t_hero_carryover_data::set_alignment(t_town_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27058
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_biography(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27059
VA_CHT_1(0x006bab40, 0x14)
void t_hero_carryover_data::set_biography_id(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_bonuses(int const (& arg_0)[16])
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27061
VA_CHT_1(0x006bfe70, 0xf)
void t_hero_carryover_data::set_experience(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27062
VA_CHT_1(0x006c3550, 0x33)
void t_hero_carryover_data::set_class(t_hero_class arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_is_male(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_name(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_is_named_by_map(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_portrait_id(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_mastery(t_skill_type arg_0, t_skill_mastery arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_spellbook(std::bitset<188> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero_carryover_data::set_use_spellcaster_model(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_town>::t_counted_ptr<t_abstract_town>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_town>& t_counted_ptr<t_abstract_town>::operator=(t_abstract_town* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_skill_choice_dialog>::t_counted_ptr<t_skill_choice_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_skill_choice_dialog>& t_counted_ptr<t_skill_choice_dialog>::operator=(
    t_skill_choice_dialog* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_choice_dialog* t_counted_ptr<t_skill_choice_dialog>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27234
VA_CHT_1(0x006c5fa0, 0x43)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_hero_class const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27235
VA_CHT_1(0x006bc120, 0x47)
t_hero_class get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_scriptable_event enum_incr(t_hero_scriptable_event& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_class t_random_number_generator::operator()(t_hero_class arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:27242
VA_CHT_1(0x006bc320, 0x6a)
void subtract_temporary_bonuses(
    int (& arg_0)[16],
    std::vector<t_temporary_bonus, std::allocator<t_temporary_bonus>> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void subtract_temporary_bonuses(
    int (& arg_0)[16],
    std::vector<t_timed_bonus, std::allocator<t_timed_bonus>> const& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27264
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_hero)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27265
VA_CHT_1(0x006c73e0, 0xe)
// [thunk]: public: virtual float t_hero::get_defense_basic`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27266
VA_CHT_1(0x006c73f0, 0x8)
// [thunk]: public: virtual float t_hero::get_defense_bonus`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (12 symbols) ===

// name:A; map symbol; map:44576
DATA_CHT_1(UNACCOUNTED)
int const* const k_tactics_defense_bonus; // Initial value unavailable.

// name:A; map symbol; map:44577
DATA_CHT_1(UNACCOUNTED)
int const* const k_tactics_offense_bonus; // Initial value unavailable.

// name:A; map symbol; map:44578
DATA_CHT_1(UNACCOUNTED)
int const* const k_tactics_speed; // Initial value unavailable.

// name:A; map symbol; map:44579
DATA_CHT_1(UNACCOUNTED)
int const* const k_leadership_morale_bonus; // Initial value unavailable.

// name:A; map symbol; map:44580
DATA_CHT_1(UNACCOUNTED)
int const* const k_tactics_move_bonus; // Initial value unavailable.

// name:A; map symbol; map:44581
DATA_CHT_1(UNACCOUNTED)
int const* const k_leadership_luck_bonus; // Initial value unavailable.

// name:A; map symbol; map:44582
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_hero::`vftable'{for `t_has_defense'}")

// confidence:B; rtti-order; map:44583
DATA_CHT_1_COMPGEN(0x008e251c, "const t_hero::`vftable'{for `t_abstract_creature'}")

// confidence:A; rtti-name; map:44584
DATA_CHT_1_COMPGEN(0x008e2494, "const t_hero::`vftable'")

// name:A; map symbol; map:44585
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_hero::`vbtable'")

// name:A; map symbol; map:44586
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ff8c49ba5e353f7d000

// name:A; map symbol; map:44587
DATA_CHT_1(UNACCOUNTED)
// __real@8@3ffb8f5c28f5c28f6000

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:52725
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_hero::`RTTI Complete Object Locator'{for `t_has_defense'}")

// name:A; map symbol; map:52726
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_hero::`RTTI Complete Object Locator'{for `t_abstract_creature'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_hero@@;bcd=50cd50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52727
DATA_CHT_1_COMPGEN(0x0090cd50, "t_hero::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_hero@@;vft=4e2494;col=50cd94;td=5a7f08;chd=50cd84;offset=1944;cdOffset=0;validated-hierarchy; map:52728
DATA_CHT_1_COMPGEN(0x0090cd68, "t_hero::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_hero@@;vft=4e2494;col=50cd94;td=5a7f08;chd=50cd84;offset=1944;cdOffset=0;validated-hierarchy; map:52729
DATA_CHT_1_COMPGEN(0x0090cd84, "t_hero::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_hero@@;vft=4e2494;col=50cd94;td=5a7f08;chd=50cd84;offset=1944;cdOffset=0;validated-hierarchy; map:52730
DATA_CHT_1_COMPGEN(0x0090cd94, "const t_hero::`RTTI Complete Object Locator'")

// === .data (8 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_hero@@;td=5a7f08;validated-header; map:58667
DATA_CHT_1_COMPGEN(0x009a7f08, "t_hero `RTTI Type Descriptor'")

// name:A; map symbol; map:58668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "stat_type >= 0&& stat_type < k_...")

// name:A; map symbol; map:58669
DATA_CHT_1_COMPGEN(UNACCOUNTED, "portrait_id >= 0&& portrait_id ...")

// name:A; map symbol; map:58670
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\default_heroes.h")

// name:A; map symbol; map:58671
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_alignment >= 0&& new_alignm...")

// name:A; map symbol; map:58672
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_class >= 0&& new_class < k_...")

// name:A; map symbol; map:58673
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_mastery >= k_mastery_none&&...")

// name:A; map symbol; map:58674
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\hero.cpp")

// === .bss (6 symbols) ===

// name:A; map symbol; map:60232
DATA_CHT_1(UNACCOUNTED)
t_level_map_point_2d const t_hero::k_nobility_town_position_not_in_use; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60233
DATA_CHT_1(0x009eeee4)
t_external_string const k_max_level_reached; // Initial value unavailable.

// name:A; map symbol; map:60234
DATA_CHT_1(UNACCOUNTED)
t_level_map_point_2d const t_hero::k_nobility_town_position_none; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60235
DATA_CHT_1(0x009eef04)
t_external_string const k_max_level_reached_title; // Initial value unavailable.

// name:A; map symbol; map:60236
DATA_CHT_1(UNACCOUNTED)
std::_Tree<int, std::pair<int const, t_university_diploma>, std::map<int, t_university_diploma, std::less<int>, std::allocator<t_university_diploma>>::_Kfn, std::less<int>, std::allocator<t_university_diploma>>::_Node*std::_Tree<int, std::pair<int const, t_university_diploma>, std::map<int, t_university_diploma, std::less<int>, std::allocator<t_university_diploma>>::_Kfn, std::less<int>, std::allocator<t_university_diploma>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60238
DATA_CHT_1(UNACCOUNTED)
std::_Tree<int, int, std::set<int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>::_Node*std::_Tree<int, int, std::set<int, std::less<int>, std::allocator<int>>::_Kfn, std::less<int>, std::allocator<int>>::_Nil; // Initial value unavailable.
