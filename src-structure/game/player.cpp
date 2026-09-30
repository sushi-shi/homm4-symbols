// player.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\player.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 133/228 (A:52 B:55 C:26); unaccounted 95; skipped std 137.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (169 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63704; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075c1e0, 0x15, STATIC_INIT_DISPATCH, "player#1")

// name:C; dyninit; see ledger; map:63705
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "player#1")

namespace {

// name:A; map symbol; map:31865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void add_creature_stacks_to_set(
    t_creature_array& arg_0,
    t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>>& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-B; map:63706; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075c200, 0x11, STATIC_INIT_DISPATCH, k_player_income_text)

// confidence:B; dyninit-ctor; owner-conf-B; map:63707; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075c220, 0xd1, STATIC_CTOR, k_player_income_text)

// name:A; dyninit; see ledger; map:63708
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_player_income_text)

// confidence:B; dyninit-dtor; owner-conf-B; map:63709; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075c300, 0xa, STATIC_DTOR, k_player_income_text)

// confidence:C; align-order; retn,stable; map:31866
VA_CHT_1(0x0075c310, 0x46)
t_material_array get_initial_budget(t_difficulty arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:31867
VA_CHT_1(0x0075c360, 0x1b7)
t_player::t_player()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:31868
VA_CHT_1(0x0075c780, 0x1c1)
t_player::t_player(bool arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31869
VA_CHT_1(0x0075c950, 0x270)
void t_player::common_construct()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31870
VA_CHT_1(0x0075cca0, 0x15b)
void t_player::add(t_caravan* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31871
VA_CHT_1(0x0075ce00, 0xc0)
void t_player::add(t_adv_dwelling* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31872
VA_CHT_1(0x0075cec0, 0xbd)
void t_player::add_army(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31873
VA_CHT_1(0x0075cf80, 0xc0)
void t_player::add_graveyard(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31874
VA_CHT_1(0x0075d040, 0xa9)
void t_player::add_garrison(t_ownable_garrisonable_adv_object* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31875
VA_CHT_1(0x0075d0f0, 0x7b)
void t_player::add(t_quest_origin_site* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31876
VA_CHT_1(0x0075d170, 0x298)
t_vector_set<t_creature_stack*, std::less<t_creature_stack*>, std::allocator<t_creature_stack*>> t_player::build_creature_stack_set(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::clear_max_level()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31878
VA_CHT_1(0x0075d410, 0x11)
t_army_array* t_player::get_armies()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31879
VA_CHT_1(0x0075d430, 0x4)
t_army_array const* t_player::get_armies() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31880
VA_CHT_1(0x0075d440, 0x7b)
void t_player::add_object(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31881
VA_CHT_1(0x0075d4c0, 0xb5)
void t_player::add_town(t_town* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31882
VA_CHT_1(0x0075d580, 0x7b)
void t_player::add(t_mine* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31883
VA_CHT_1(0x0075d600, 0x7)
t_town_list* t_player::get_towns()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31884
VA_CHT_1(0x0075d610, 0x4e)
void t_player::fractional_gain(t_material arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31885
VA_CHT_1(0x0075d660, 0x4f)
void t_player::initialize(bool arg_0, t_difficulty arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31886
VA_CHT_1(0x0075d6b0, 0x12)
void t_player::set_key(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31887
VA_CHT_1(0x0075d6d0, 0xe)
bool t_player::has_key(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31888
VA_CHT_1(0x0075d6e0, 0xe)
int t_player::get_obelisk_count(t_obelisk_color arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31889
VA_CHT_1(0x0075d6f0, 0xe)
void t_player::inc_obelisk_count(t_obelisk_color arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31890
VA_CHT_1(0x0075d700, 0x161)
t_material_array t_player::get_income(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:63710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void add_creature_array_income(t_creature_array const& arg_0, t_material_array& arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31891
VA_CHT_1(0x0075d870, 0x7a1)
void t_player::get_income_text(int arg_0, int arg_1, std::string& arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31892
VA_CHT_1(0x0075e020, 0x40)
bool t_player::gets_global_grail_effects(t_town_type arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31893
VA_CHT_1(0x0075e060, 0x27)
bool t_player::can_create_army() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31894
VA_CHT_1(0x0075e090, 0x81)
void t_player::remove(t_adv_dwelling* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31895
VA_CHT_1(0x0075e120, 0xc6)
void t_player::remove_object(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31896
VA_CHT_1(0x0075e1f0, 0xda)
void t_player::remove_army(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31897
VA_CHT_1(0x0075e2d0, 0xe0)
void t_player::remove_graveyard(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31898
VA_CHT_1(0x0075e3b0, 0xe0)
void t_player::remove(t_caravan* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31899
VA_CHT_1(0x0075e490, 0xc6)
void t_player::remove(t_mine* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31900
VA_CHT_1(0x0075e560, 0x81)
void t_player::remove_garrison(t_ownable_garrisonable_adv_object* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31901
VA_CHT_1(0x0075e5f0, 0xce)
void t_player::remove_town(t_town* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31902
VA_CHT_1(0x0075e6c0, 0xc6)
void t_player::remove(t_quest_origin_site* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31903
VA_CHT_1(0x0075e790, 0x33)
void t_player::mark_visibility(int arg_0, t_map_segment_overlay<t_tile_visibility_data>& arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31904
VA_CHT_1(0x0075e7d0, 0x35a)
bool t_player::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31905
VA_CHT_1(0x0075eb30, 0x49e)
bool t_player::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31906
VA_CHT_1(0x0075efd0, 0x1ee)
bool t_player::has_lost() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31907
VA_CHT_1(0x0075f1c0, 0x7)
bool t_player::is_eliminated() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31908
VA_CHT_1(0x0075f1d0, 0x4b)
int t_player::get_magic_dampener_bonus() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31909
VA_CHT_1(0x0075f220, 0x2d)
int t_player::get_necromancy_amplifier_bonus() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31910
VA_CHT_1(0x0075f250, 0x30)
void t_player::force_garrison_visits()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31911
VA_CHT_1(0x0075f280, 0xed)
int t_player::get_total_army_experience() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31912
VA_CHT_1(0x0075f370, 0x7)
std::list<t_counted_ptr<t_ownable_garrisonable_adv_object>, std::allocator<t_counted_ptr<t_ownable_garrisonable_adv_object>>> const& t_player::get_garrisons(

) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31913
VA_CHT_1(0x0075f380, 0x199)
void t_player::ai_start_turn(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31914
VA_CHT_1(0x0075f520, 0x3a4)
void t_player::ai_calculate_resource_demand(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31915
VA_CHT_1(0x0075f8d0, 0x19a)
void t_player::ai_calculate_reserved_funds(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31916
VA_CHT_1(0x0075fa70, 0xf5)
void t_player::ai_calculate_artifact_values()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31917
VA_CHT_1(0x0075fb70, 0x24a)
void t_player::ai_calculate_artifact_values(t_creature_array const& arg_0, int* arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31918
VA_CHT_1(0x0075fdc0, 0x4)
unsigned char t_player::get_building_delay() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array const& t_player::ai_get_discretionary_funds() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::ai_set_discretionary_amount(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31921
VA_CHT_1(0x0075fdd0, 0x15)
void t_player::ai_set_discretionary_funds(t_material_array const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31922
VA_CHT_1(0x0075fdf0, 0xb)
int t_player::ai_get_discretionary_amount(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_player::set_material_values(t_material_values const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31924
VA_CHT_1(0x0075fe00, 0xa9)
void t_player::add(t_sanctuary* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31925
VA_CHT_1(0x0075feb0, 0x81)
void t_player::remove(t_sanctuary* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31926
VA_CHT_1(0x0075ff40, 0x7)
std::list<t_counted_ptr<t_sanctuary>, std::allocator<t_counted_ptr<t_sanctuary>>> const& t_player::get_sanctuary_list(

) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31927
VA_CHT_1(0x0075ff50, 0x7)
t_material_values const& t_player::get_material_values() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31928
VA_CHT_1(0x0075ff60, 0x1c)
t_material_array t_player::get_valued_funds(t_material_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31929
VA_CHT_1(0x0075ff80, 0xe)
float t_player::get_material_value(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31930
VA_CHT_1(0x0075ff90, 0xe)
float t_player::get_weekly_creature_growth(int arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31931
VA_CHT_1(0x0075ffa0, 0xb)
float t_player::ai_get_artifact_value(t_artifact_level arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31932
VA_CHT_1(0x0075ffb0, 0x23)
void t_player::on_begin_turn()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31933
VA_CHT_1(0x0075ffe0, 0x23)
void t_player::on_end_turn()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31934
VA_CHT_1(0x00760010, 0x48)
void t_player::ai_spend_discretionary(t_material_array const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31935
VA_CHT_1(0x00760060, 0x9)
void t_player::add_lighthouse(t_lighthouse* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31936
VA_CHT_1(0x00760070, 0x9)
void t_player::remove_lighthouse(t_lighthouse* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31937
VA_CHT_1(0x00760080, 0x13)
bool t_material_array::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31938
VA_CHT_1(0x007600a0, 0x13)
bool t_material_array::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:B; align-order; retn,stable; map:31939
VA_CHT_1(0x007600c0, 0x4e)
void enemy_point_filterer(t_adv_map_point const& arg_0, bool& arg_1, t_enemy_point_filterer_data& arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:31940
VA_CHT_1(0x00760110, 0x44b)
t_town* find_nearest_town(
    t_adventure_map* arg_0,
    t_player* arg_1,
    t_adv_map_point const& arg_2,
    t_adv_map_point& arg_3,
    t_creature_array* arg_4,
    t_town const* arg_5,
    bool* arg_6,
    bool* arg_7,
    bool arg_8,
    int arg_9
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31941
VA_CHT_1(0x00760560, 0x8)
void t_player::force_elimination()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:31942
VA_CHT_1(0x00760570, 0x8)
void t_player::eliminate()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31943
VA_CHT_1(0x00760580, 0xe9)
int calculate_battle_victory_points(
    t_creature_array const& arg_0,
    t_creature_array const& arg_1,
    t_creature_array const& arg_2,
    t_creature_array const& arg_3,
    t_map_size arg_4
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63711; name:B (dyninit; see ledger)
VA_CHT_1(0x00760ef0, 0x20)
// player$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63713; name:B (dyninit; see ledger)
VA_CHT_1(0x00760f10, 0x5c)
// player$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// player$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// player$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// player$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:31944
VA_CHT_1_COMPGEN(0x0075c520, 0x1e, SCALAR_DELETING_DTOR, t_player)

// name:A; map symbol; map:31945
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_player)

// name:A; map symbol; map:31946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_values::~t_material_values()
{
    // Body unavailable.
}

// name:A; map symbol; map:31947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player::~t_player()
{
    // Body unavailable.
}

// name:A; map symbol; map:31948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_array::t_army_array()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:31949
VA_CHT_1_COMPGEN(0x0075cbc0, 0x1e, SCALAR_DELETING_DTOR, t_army_array)

// name:A; map symbol; map:31950
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army_array)

// name:A; map symbol; map:31951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_array::~t_army_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:31952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_origin_site>::~t_counted_ptr<t_quest_origin_site>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sanctuary>::~t_counted_ptr<t_sanctuary>()
{
    // Body unavailable.
}

// name:A; map symbol; map:31954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_array operator+(t_material_array arg_0, t_material_array const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_material_values& t_material_values::operator=(t_material_values const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:31956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enemy_point_filterer_data::t_enemy_point_filterer_data(t_adventure_enemy_marker& arg_0, bool* arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:31957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float& t_static_vector<float, 7>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<float, 7>::~t_static_vector<float, 7>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_static_vector<float, 7> const& t_static_vector<float, 7>::operator=(t_static_vector<float, 7> const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:32054
VA_CHT_1(0x007608f0, 0xbb)
void t_viewed_list<t_counted_ptr<t_town>>::erase(t_counted_ptr<t_town>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_garrisonable_adv_object& t_counted_ptr<t_ownable_garrisonable_adv_object>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32056
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sanctuary>::t_counted_ptr<t_sanctuary>(t_counted_ptr<t_sanctuary> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32057
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sanctuary>::t_counted_ptr<t_sanctuary>(t_sanctuary* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32058
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sanctuary& t_counted_ptr<t_sanctuary>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32059
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_town_list>::t_counted_ptr<t_town_list>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_town_list>& t_counted_ptr<t_town_list>::operator=(t_town_list* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_list* t_counted_ptr<t_town_list>::operator t_town_list*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_list& t_counted_ptr<t_town_list>::operator*() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32063
VA_CHT_1(0x0075cbe0, 0xbe)
t_viewed_list<t_counted_ptr<t_army>>::t_viewed_list<t_counted_ptr<t_army>>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32064
VA_CHT_1(0x007609f0, 0xb6)
t_viewed_list<t_counted_ptr<t_army>>::~t_viewed_list<t_counted_ptr<t_army>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:32065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_viewed_list<t_counted_ptr<t_army>>::push_back(t_counted_ptr<t_army> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_viewed_list<t_counted_ptr<t_army>>::erase(t_counted_ptr<t_army>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player_color t_random_number_generator::operator()(t_player_color arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_origin_site>::t_counted_ptr<t_quest_origin_site>(t_quest_origin_site* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>::t_counted_ptr<t_mine>(t_mine* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mine* t_counted_ptr<t_mine>::operator t_mine*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32077
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_type enum_add(t_artifact_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> function_3_handler(
    void (* arg_0)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&> add_3rd_argument(
    t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> arg_0,
    t_enemy_point_filterer_data& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::~t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>::~t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32099
VA_CHT_1_COMPGEN(0x007609d0, 0x1e, VECTOR_DELETING_DTOR, "t_viewed_list<t_counted_ptr<t_army>>")

// name:A; map symbol; map:32100
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_viewed_list<t_counted_ptr<t_army>>")

// confidence:C; align-band; retn,stable; map:32101
VA_CHT_1_COMPGEN(0x00760ab0, 0x1e, SCALAR_DELETING_DTOR, "t_counted_ptr<t_adv_dwelling>")

// name:A; map symbol; map:32102
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_sanctuary>")

// name:A; map symbol; map:32103
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_mine>")

// name:A; map symbol; map:32104
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_quest_origin_site>")

// name:A; map symbol; map:32105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float const* t_static_vector<float, 7>::end() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>* t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(
    void (* arg_0)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_enemy_point_filterer_data& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>* arg_0,
    t_enemy_point_filterer_data& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32119
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32120
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32122
VA_CHT_1_COMPGEN(0x00760af0, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32123
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::~t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::~t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:32126
VA_CHT_1(0x00760b10, 0x21)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::~t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32127
VA_CHT_1_COMPGEN(0x00760ad0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32128
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// name:A; map symbol; map:32130
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// confidence:A; align-band; retn,stable,vptr; map:32131
VA_CHT_1(0x007608a0, 0x4e)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::~t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:32135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_enemy_point_filterer_data& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_origin_site>::t_counted_ptr<t_quest_origin_site>(
    t_counted_ptr<t_quest_origin_site> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_quest_origin_site>& t_counted_ptr<t_quest_origin_site>::operator=(
    t_counted_ptr<t_quest_origin_site> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>::t_counted_ptr<t_mine>(t_counted_ptr<t_mine> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mine>& t_counted_ptr<t_mine>::operator=(t_counted_ptr<t_mine> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_type enum_incr(t_artifact_type& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:32148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>* t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>& t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32154
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// confidence:C; align-order; stable; map:32155
VA_CHT_1_COMPGEN(0x00760fd0, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// confidence:C; align-order; stable; map:32156
VA_CHT_1_COMPGEN(0x00760fe0, 0x8, VECTOR_DELETING_DTOR, t_army_array)

// confidence:C; align-order; stable; map:32157
VA_CHT_1_COMPGEN(0x00760ff0, 0x8, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>")

// === .rdata (13 symbols) ===

// confidence:A; rtti-name; map:45044
DATA_CHT_1_COMPGEN(0x008e7b8c, "const t_player::`vftable'")

// confidence:A; rtti-name; map:45045
DATA_CHT_1_COMPGEN(0x008e7b98, "const t_army_array::`vftable'{for `t_viewed_list<t_counted_ptr<t_army>>'}")

// confidence:B; rtti-order; map:45046
DATA_CHT_1_COMPGEN(0x008e7ba0, "const t_army_array::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45047
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffeaa7efa0000000000

// name:A; map symbol; map:45048
DATA_CHT_1(UNACCOUNTED)
// __real@4@3ffdaa7efa0000000000

// confidence:A; rtti-name; map:45049
DATA_CHT_1_COMPGEN(0x008e7ba8, "const t_viewed_list<t_counted_ptr<t_army>>::`vftable'")

// name:A; map symbol; map:45050
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>'}")

// name:A; map symbol; map:45051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45052
DATA_CHT_1_COMPGEN(0x008e7bd8, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:45053
DATA_CHT_1_COMPGEN(0x008e7be4, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>'}")

// name:A; map symbol; map:45055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45056
DATA_CHT_1_COMPGEN(0x008e7bcc, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`vftable'")

// === .rdata$r (36 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_player@@;bcd=51251c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53918
DATA_CHT_1_COMPGEN(0x0091251c, "t_player::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_player@@;vft=4e7b8c;col=512550;td=5b054c;chd=512540;offset=0;cdOffset=0;validated-hierarchy; map:53919
DATA_CHT_1_COMPGEN(0x00912534, "t_player::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_player@@;vft=4e7b8c;col=512550;td=5b054c;chd=512540;offset=0;cdOffset=0;validated-hierarchy; map:53920
DATA_CHT_1_COMPGEN(0x00912540, "t_player::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_player@@;vft=4e7b8c;col=512550;td=5b054c;chd=512540;offset=0;cdOffset=0;validated-hierarchy; map:53921
DATA_CHT_1_COMPGEN(0x00912550, "const t_player::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_army_array@@;vft=4e7b98;col=512644;td=5b060c;chd=512634;offset=8;cdOffset=0;validated-hierarchy; map:53922
DATA_CHT_1_COMPGEN(0x00912644, "const t_army_array::`RTTI Complete Object Locator'{for `t_viewed_list<t_counted_ptr<t_army>>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$vector@V?$t_counted_ptr@Vt_army@@@@V?$allocator@V?$t_counted_ptr@Vt_army@@@@@std@@@std@@;bcd=5125d8;pmd=12,-1,0;attributes=0;validated-hierarchy-link; map:53923
DATA_CHT_1_COMPGEN(0x009125d8, "std::vector<t_counted_ptr<t_army>, std::allocator<t_counted_ptr<t_army>>>::`RTTI Base Class Descriptor at (12, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;bcd=5125f0;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53924
DATA_CHT_1_COMPGEN(0x009125f0, "t_viewed_list<t_counted_ptr<t_army>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army_array@@;bcd=512608;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53925
DATA_CHT_1_COMPGEN(0x00912608, "t_army_array::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army_array@@;vft=4e7b98;col=512644;td=5b060c;chd=512634;offset=8;cdOffset=0;validated-hierarchy; map:53926
DATA_CHT_1_COMPGEN(0x00912620, "t_army_array::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army_array@@;vft=4e7b98;col=512644;td=5b060c;chd=512634;offset=8;cdOffset=0;validated-hierarchy; map:53927
DATA_CHT_1_COMPGEN(0x00912634, "t_army_array::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53928
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army_array::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$vector@V?$t_counted_ptr@Vt_army@@@@V?$allocator@V?$t_counted_ptr@Vt_army@@@@@std@@@std@@;bcd=512564;pmd=4,-1,0;attributes=0;validated-hierarchy-link; map:53929
DATA_CHT_1_COMPGEN(0x00912564, "std::vector<t_counted_ptr<t_army>, std::allocator<t_counted_ptr<t_army>>>::`RTTI Base Class Descriptor at (4, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;bcd=51257c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53930
DATA_CHT_1_COMPGEN(0x0091257c, "t_viewed_list<t_counted_ptr<t_army>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;vft=4e7ba8;col=5125b0;td=5b05d0;chd=5125a0;offset=0;cdOffset=0;validated-hierarchy; map:53931
DATA_CHT_1_COMPGEN(0x00912594, "t_viewed_list<t_counted_ptr<t_army>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;vft=4e7ba8;col=5125b0;td=5b05d0;chd=5125a0;offset=0;cdOffset=0;validated-hierarchy; map:53932
DATA_CHT_1_COMPGEN(0x009125a0, "t_viewed_list<t_counted_ptr<t_army>>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;vft=4e7ba8;col=5125b0;td=5b05d0;chd=5125a0;offset=0;cdOffset=0;validated-hierarchy; map:53933
DATA_CHT_1_COMPGEN(0x009125b0, "const t_viewed_list<t_counted_ptr<t_army>>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53934
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>'}")

// name:A; map symbol; map:53935
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:53936
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53937
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53938
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:53939
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53940
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bd8;col=512780;td=5b0830;chd=512770;offset=8;cdOffset=0;validated-hierarchy; map:53941
DATA_CHT_1_COMPGEN(0x00912780, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;bcd=512744;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53942
DATA_CHT_1_COMPGEN(0x00912744, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bd8;col=512780;td=5b0830;chd=512770;offset=8;cdOffset=0;validated-hierarchy; map:53943
DATA_CHT_1_COMPGEN(0x0091275c, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bd8;col=512780;td=5b0830;chd=512770;offset=8;cdOffset=0;validated-hierarchy; map:53944
DATA_CHT_1_COMPGEN(0x00912770, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53945
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53946
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>'}")

// name:A; map symbol; map:53947
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:53948
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53949
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;bcd=512658;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53950
DATA_CHT_1_COMPGEN(0x00912658, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bcc;col=512688;td=5b0690;chd=512678;offset=0;cdOffset=0;validated-hierarchy; map:53951
DATA_CHT_1_COMPGEN(0x00912670, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bcc;col=512688;td=5b0690;chd=512678;offset=0;cdOffset=0;validated-hierarchy; map:53952
DATA_CHT_1_COMPGEN(0x00912678, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;vft=4e7bcc;col=512688;td=5b0690;chd=512678;offset=0;cdOffset=0;validated-hierarchy; map:53953
DATA_CHT_1_COMPGEN(0x00912688, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&>::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_player@@;td=5b054c;validated-header; map:58956
DATA_CHT_1_COMPGEN(0x009b054c, "t_player `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$vector@V?$t_counted_ptr@Vt_army@@@@V?$allocator@V?$t_counted_ptr@Vt_army@@@@@std@@@std@@;td=5b0568;validated-header; map:58957
DATA_CHT_1_COMPGEN(0x009b0568, "std::vector<t_counted_ptr<t_army>, std::allocator<t_counted_ptr<t_army>>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_viewed_list@V?$t_counted_ptr@Vt_army@@@@@@;td=5b05d0;validated-header; map:58958
DATA_CHT_1_COMPGEN(0x009b05d0, "t_viewed_list<t_counted_ptr<t_army>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_army_array@@;td=5b060c;validated-header; map:58959
DATA_CHT_1_COMPGEN(0x009b060c, "t_army_array `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sanctuary@@;td=5b0674;validated-header; map:58960
DATA_CHT_1_COMPGEN(0x009b0674, "t_sanctuary `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;td=5b0690;validated-header; map:58961
DATA_CHT_1_COMPGEN(0x009b0690, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;td=5b0718;validated-header; map:58962
DATA_CHT_1_COMPGEN(0x009b0718, "t_handler_base_3<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> `RTTI Type Descriptor'")

// name:A; map symbol; map:58963
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_enemy_point_filterer_data&), t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_enemy_point_filterer_data@?%C:\Work\game\player.cpp180325067@@@@;td=5b0830;validated-header; map:58964
DATA_CHT_1_COMPGEN(0x009b0830, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_enemy_point_filterer_data&> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60326
DATA_CHT_1(0x009f3ae0)
t_external_string const k_player_income_text; // Initial value unavailable.
