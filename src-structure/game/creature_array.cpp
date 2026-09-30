// creature_array.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_array.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 97/124 (A:15 B:46 C:36); unaccounted 27; skipped std 12.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (117 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67018; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00607850, 0x5, STATIC_INIT_DISPATCH, "creature_array#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:67019; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00607860, 0x15, STATIC_CTOR, "creature_array#1")

// confidence:A; align-order; retn,stable,vptr; map:22966
VA_CHT_1(0x00607880, 0x1bd)
t_creature_array::t_creature_array()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:22967
VA_CHT_1(0x00607a70, 0x1e2)
t_creature_array::t_creature_array(t_creature_array* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22968
VA_CHT_1(0x00607c60, 0x59)
void t_creature_array::move_creatures_from(t_creature_array& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:22969
VA_CHT_1(0x00607cc0, 0x85)
t_creature_array::~t_creature_array()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22970
VA_CHT_1(0x00607d50, 0xaa)
void t_creature_array::clear()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22971
VA_CHT_1(0x00607e00, 0x9d)
void t_creature_array::clear(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22972
VA_CHT_1(0x00607ea0, 0x1c)
int t_creature_array::find(t_hero const* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22973
VA_CHT_1(0x00607ec0, 0x45)
int t_creature_array::find(t_creature_type arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:22974
VA_CHT_1(0x00607f10, 0x19)
t_abstract_grail_data_source const& t_creature_array::get_grail_data() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22975
VA_CHT_1(0x00607f30, 0x28)
int t_creature_array::get_hero_count() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22976
VA_CHT_1(0x00607f60, 0x36)
int t_creature_array::get_living_hero_count() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:22977
VA_CHT_1(0x00607fa0, 0x196)
bool t_creature_array::add(t_counted_ptr<t_creature_stack> arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22978
VA_CHT_1(0x00608140, 0x4a)
void t_creature_array::remove(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22979
VA_CHT_1(0x00608190, 0x2f)
bool t_creature_array::can_add(t_creature_type arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22980
VA_CHT_1(0x006081c0, 0x29)
bool t_creature_array::can_add_hero() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22981
VA_CHT_1(0x006081f0, 0x29)
bool t_creature_array::empty() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22982
VA_CHT_1(0x00608220, 0x35)
int t_creature_array::get_empty_slot_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_creature_array::get_fastest_raw_move() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:22984
VA_CHT_1(0x00608260, 0x2b)
void t_creature_array::expend_all_movement()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:22985
VA_CHT_1(0x00608290, 0xd3)
void t_creature_array::expend_most_movement(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22986
VA_CHT_1(0x00608370, 0xd0)
int t_creature_array::get_move_cost(t_terrain_type arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22987
VA_CHT_1(0x00608440, 0x124)
int t_creature_array::get_leader_index() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22988
VA_CHT_1(0x00608570, 0xb3)
t_hero* t_creature_array::get_strongest_hero()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:22989
VA_CHT_1(0x00608630, 0x5)
t_hero const* t_creature_array::get_strongest_hero() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22990
VA_CHT_1(0x00608640, 0xbd)
t_hero* t_creature_array::get_weakest_hero()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:22991
VA_CHT_1(0x00608700, 0x5)
t_hero const* t_creature_array::get_weakest_hero() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:22992
VA_CHT_1(0x00608710, 0x3b)
t_hero* t_creature_array::get_any_hero()
{
    // Body unavailable.
}

// confidence:C; align-order; map:22993
VA_CHT_1(0x00608750, 0x5)
t_hero const* t_creature_array::get_any_hero() const
{
    // Body unavailable.
}

// name:A; map symbol; map:22994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_array::is_graveyard() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22995
VA_CHT_1(0x00608760, 0x8a)
void t_creature_array::process_new_day(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22996
VA_CHT_1(0x006087f0, 0x31)
bool t_creature_array::add(t_artifact const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22997
VA_CHT_1(0x00608830, 0x26)
void t_creature_array::learn_spells(t_town const* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22998
VA_CHT_1(0x00608860, 0x9a)
int t_creature_array::get_morale(t_town_type arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:22999
VA_CHT_1(0x00608900, 0x2c3)
bool t_creature_array::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23000
VA_CHT_1(0x00608bd0, 0x378)
bool t_creature_array::read_version(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23001
VA_CHT_1(0x00608f50, 0x50)
bool t_creature_array::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:C; align-order; retn,stable; map:23003
VA_CHT_1(0x00609010, 0x194)
t_counted_ptr<t_creature_stack> reconstruct_stack_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:23004
VA_CHT_1(0x006091b0, 0x19e)
bool t_creature_array::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23005
VA_CHT_1(0x00609350, 0x1e0)
bool t_creature_array::read_summary_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23006
VA_CHT_1(0x00609530, 0x3a)
void t_creature_array::initialize()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23007
VA_CHT_1(0x00609570, 0xfd)
bool t_creature_array::add(t_creature_type arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23008
VA_CHT_1(0x00609670, 0x28)
int t_creature_array::get_experience_value() const
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:67020; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006096a0, 0xa, STATIC_INIT_DISPATCH, "creature_array#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:67021; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006096b0, 0xd1, STATIC_CTOR, "creature_array#2")

// confidence:B; dyninit-atexit; owner-conf-C; map:67022; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00609790, 0xc, STATIC_ATEXIT, "creature_array#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:67023; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006097a0, 0xa, STATIC_DTOR, "creature_array#2")

// confidence:B; align-order; retn,stable; map:23009
VA_CHT_1(0x006097b0, 0x517)
void t_creature_array::add_experience(int arg_0, t_window* arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23010
VA_CHT_1(0x00609cd0, 0x132)
void t_creature_array::consolidate()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23011
VA_CHT_1(0x00609e10, 0xe2)
bool can_combine(t_creature_array const& arg_0, t_creature_array const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23012
VA_CHT_1(0x00609f00, 0x4b)
bool t_creature_array::preplacement(t_adventure_map& arg_0, int arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23013
VA_CHT_1(0x00609f50, 0xce)
void t_creature_array::swap(t_creature_array& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23014
VA_CHT_1(0x0060a020, 0x44)
void t_creature_array::swap_creatures(t_creature_array& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_creature_array::get_skill(t_skill_type arg_0, t_hero** arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23016
VA_CHT_1(0x0060a070, 0x96)
t_hero const* t_creature_array::get_most_powerful_skill_const(t_skill_type arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23017
VA_CHT_1(0x0060a110, 0x1f)
int t_creature_array::get_most_powerful_skill_power(t_skill_type arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23018
VA_CHT_1(0x0060a130, 0x2e)
void t_creature_array::add_bonus(t_stat_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23019
VA_CHT_1(0x0060a160, 0x34)
int t_creature_array::get_recruitment_discount() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23020
VA_CHT_1(0x0060a1a0, 0x33)
bool t_creature_array::has_seamans_hat() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23021
VA_CHT_1(0x0060a1e0, 0xc7)
void t_creature_array::change_movement(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23022
VA_CHT_1(0x0060a2b0, 0xc2)
int t_creature_array::get_movement(bool arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23023
VA_CHT_1(0x0060a380, 0xd2)
int t_creature_array::get_max_movement(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23024
VA_CHT_1(0x0060a460, 0x8e)
bool t_creature_array::add_move_bonus(int arg_0, t_qualified_adv_object_type const& arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23025
VA_CHT_1(0x0060a4f0, 0x54)
int t_creature_array::get_shortest_bonus(t_qualified_adv_object_type const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array::post_change()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23027
VA_CHT_1(0x0060a550, 0x36)
void t_creature_array::visit_town(t_abstract_town* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23028
VA_CHT_1(0x0060a590, 0xa)
void t_creature_array::set_patrol_radius(signed char arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23029
VA_CHT_1(0x0060a5a0, 0xa)
void t_creature_array::set_patrol_type(t_patrol_type arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23030
VA_CHT_1(0x0060a5b0, 0x45)
bool t_creature_array::is_in_patrol_radius(t_adv_map_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23031
VA_CHT_1(0x0060a600, 0x65)
float t_creature_array::ai_value() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23032
VA_CHT_1(0x0060a670, 0x7e)
float t_creature_array::ai_value_including_dead() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23033
VA_CHT_1(0x0060a6f0, 0x5c)
float t_creature_array::ai_value_creatures(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23034
VA_CHT_1(0x0060a750, 0x8b)
t_creature_stack const* t_creature_array::ai_get_most_powerful(float& arg_0, float& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:23035
VA_CHT_1(0x0060a7e0, 0x26)
int t_creature_array::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23036
VA_CHT_1(0x0060a810, 0x80)
bool t_creature_array::is_full_army() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array::ai_start_turn()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23038
VA_CHT_1(0x0060a890, 0x4)
t_adv_map_point const& t_creature_array::get_initial_location() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_army_data_cache* t_creature_array::get_ai_data_cache() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:23040
VA_CHT_1(0x0060a8a0, 0x75)
void t_creature_array::set_ai_data_cache(t_counted_ptr<t_ai_army_data_cache> arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23041
VA_CHT_1(0x0060a920, 0x20)
void t_creature_array::set_initial_location(t_adv_map_point const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23042
VA_CHT_1(0x0060a940, 0x184)
void t_creature_array::copy_extra_properties(t_creature_array const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23043
VA_CHT_1(0x0060aad0, 0x36)
void t_creature_array::on_begin_turn()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23044
VA_CHT_1(0x0060ab10, 0x36)
void t_creature_array::on_end_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:23045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array* t_creature_array::get_creature_array()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23046
VA_CHT_1(0x0060ab60, 0x73)
float t_creature_array::get_movement_modifier(t_creature_stack const& arg_0, bool arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23047
VA_CHT_1(0x0060abe0, 0x8e)
int t_creature_array::get_move_bonus(bool arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23048
VA_CHT_1(0x0060ac70, 0x50)
float t_creature_array::get_move_multiplier(bool arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23049
VA_CHT_1(0x0060acc0, 0x37)
bool t_creature_array::is_alive() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23050
VA_CHT_1(0x0060ad40, 0x77)
t_skill_mastery t_creature_array::get_anti_stealth_level() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:23051
VA_CHT_1(0x0060adc0, 0x5f)
t_skill_mastery t_creature_array::get_stealth_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array::set_in_combat(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_creature_array::is_aquatic() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23054
VA_CHT_1(0x0060ae20, 0xc1)
void t_creature_array::check_hero_levels(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23055
VA_CHT_1(0x0060aef0, 0x7e)
void add_start_creature(t_creature_array& arg_0, t_town_type arg_1, t_town_building arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:67024
VA_CHT_1(0x0060af70, 0x45)
static int choose_slot(t_creature_array const& arg_0, t_creature_type arg_1, int const* arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67025; name:B (dyninit; see ledger)
VA_CHT_1(0x0060b070, 0x19)
// creature_array$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:67027; name:B (dyninit; see ledger)
VA_CHT_1(0x0060b150, 0x43)
// creature_array$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67028
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_array$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67029
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_array$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67030
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// creature_array$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:23056
VA_CHT_1_COMPGEN(0x00607a40, 0x26, VECTOR_DELETING_DTOR, t_creature_array)

// name:A; map symbol; map:23057
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature_array)

// confidence:C; align-band; retn,stable; map:23058
VA_CHT_1(0x0060b1a0, 0xc)
bool t_hero::get_max_experience_flag() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23059
VA_CHT_1(0x0060b1b0, 0xc)
void t_hero::set_max_experience_flag()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23060
VA_CHT_1(0x0060b1c0, 0xc)
unsigned short t_player::get_max_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_player::has_max_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero const* t_creature_array::get_most_powerful_skill(t_skill_type arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23063
VA_CHT_1(0x0060afc0, 0xa4)
void t_ai_army_data_cache::start_turn()
{
    // Body unavailable.
}

// name:A; map symbol; map:23066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ai_army_data_cache>::t_counted_ptr<t_ai_army_data_cache>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_army_data_cache* t_counted_ptr<t_ai_army_data_cache>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:23068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ai_army_data_cache>& t_counted_ptr<t_ai_army_data_cache>::operator=(
    t_counted_ptr<t_ai_army_data_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ai_army_data_cache>& t_counted_ptr<t_ai_army_data_cache>::operator=(
    t_ai_army_data_cache* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_ai_importance const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:23071
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_importance get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:23081
VA_CHT_1(0x0060b1d0, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`vtordisp{-4, 0}'(void)
// Function body not reconstructed; signature retained as a comment.

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:44170
DATA_CHT_1_COMPGEN(0x008de6d4, "const t_creature_array::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:44171
DATA_CHT_1_COMPGEN(0x008de714, "const t_creature_array::`vftable'{for `t_creature_array'}")

// name:A; map symbol; map:44172
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_array::`vbtable'")

// === .rdata$r (4 symbols) ===

// name:A; map symbol; map:51552
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_array::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:51553
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_creature_array::`RTTI Base Class Array'")

// name:A; map symbol; map:51554
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_creature_array::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51555
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_creature_array::`RTTI Complete Object Locator'{for `t_creature_array'}")
