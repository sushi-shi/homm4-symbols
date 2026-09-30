// battlefield.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\battlefield.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 884/1623 (A:310 B:32 C:0); unaccounted 739; skipped std 577.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (1207 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69068; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005458a0, 0x15, STATIC_INIT_DISPATCH, "battlefield#1")

// name:C; dyninit; see ledger; map:69069
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69070; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005458c0, 0x15, STATIC_INIT_DISPATCH, "battlefield#2")

// name:C; dyninit; see ledger; map:69071
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69072; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005458e0, 0x15, STATIC_INIT_DISPATCH, "battlefield#3")

// name:C; dyninit; see ledger; map:69073
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69074; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545900, 0x15, STATIC_INIT_DISPATCH, "battlefield#4")

// name:C; dyninit; see ledger; map:69075
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69076; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545920, 0x10, STATIC_INIT_DISPATCH, "battlefield#5")

// name:C; dyninit; see ledger; map:69077
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69078; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545930, 0x15, STATIC_INIT_DISPATCH, "battlefield#6")

// name:C; dyninit; see ledger; map:69079
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "battlefield#6")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15915
VA_CHT_1(0x00545950, 0x28)
t_attack_angle const* t_attack_angle_list::get_closest() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15916
VA_CHT_1(0x00545980, 0x28)
t_attack_angle const* t_attack_angle_list::get_farthest() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15917
VA_CHT_1(0x005459b0, 0x16d)
t_battlefield::t_missile_strike_data::t_missile_strike_data(bool arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15918
VA_CHT_1(0x00545b20, 0x3)
bool t_battlefield::t_missile_strike_data::get_is_physical_attack() const
{
    // Body unavailable.
}

// name:A; map symbol; map:15919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_action_message const& t_battlefield::t_missile_strike_data::get_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:15920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield::t_end_damage_spell_data::t_end_damage_spell_data(
    t_combat_creature* arg_0,
    t_spell arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15921
VA_CHT_1(0x00545b30, 0x4)
t_combat_creature* t_battlefield::t_end_damage_spell_data::get_creature() const
{
    // Body unavailable.
}

// name:A; map symbol; map:15922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell t_battlefield::t_end_damage_spell_data::get_spell() const
{
    // Body unavailable.
}

// name:A; map symbol; map:15923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_action_message const& t_battlefield::t_end_damage_spell_data::get_message() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69080; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545b40, 0x11, STATIC_INIT_DISPATCH, k_spell_cursor)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69081; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545b60, 0x138, STATIC_CTOR, k_spell_cursor)

// name:A; dyninit; see ledger; map:69082
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_spell_cursor)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69083; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545ca0, 0xa, STATIC_DTOR, k_spell_cursor)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69084; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545cb0, 0x11, STATIC_INIT_DISPATCH, "battlefield#8")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69085; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545cd0, 0xd7, STATIC_CTOR, "battlefield#8")

// name:C; dyninit; see ledger; map:69086
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#8")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69087; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545db0, 0xa, STATIC_DTOR, "battlefield#8")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69088; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545dc0, 0x11, STATIC_INIT_DISPATCH, "battlefield#9")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69089; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545de0, 0xd7, STATIC_CTOR, "battlefield#9")

// name:C; dyninit; see ledger; map:69090
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#9")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69091; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545ec0, 0xa, STATIC_DTOR, "battlefield#9")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69092; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545ed0, 0x11, STATIC_INIT_DISPATCH, "battlefield#10")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69093; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545ef0, 0xd7, STATIC_CTOR, "battlefield#10")

// name:C; dyninit; see ledger; map:69094
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#10")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69095; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545fd0, 0xa, STATIC_DTOR, "battlefield#10")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69096; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00545fe0, 0x11, STATIC_INIT_DISPATCH, "battlefield#11")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69097; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546000, 0xd7, STATIC_CTOR, "battlefield#11")

// name:C; dyninit; see ledger; map:69098
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#11")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69099; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005460e0, 0xa, STATIC_DTOR, "battlefield#11")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69100; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005460f0, 0x11, STATIC_INIT_DISPATCH, "battlefield#12")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69101; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546110, 0xd7, STATIC_CTOR, "battlefield#12")

// name:C; dyninit; see ledger; map:69102
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#12")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69103; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005461f0, 0xa, STATIC_DTOR, "battlefield#12")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69104; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546200, 0x11, STATIC_INIT_DISPATCH, "battlefield#13")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69105; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546220, 0xd7, STATIC_CTOR, "battlefield#13")

// name:C; dyninit; see ledger; map:69106
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#13")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69107; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546300, 0xa, STATIC_DTOR, "battlefield#13")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69108; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546310, 0x11, STATIC_INIT_DISPATCH, "battlefield#14")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69109; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546330, 0xd7, STATIC_CTOR, "battlefield#14")

// name:C; dyninit; see ledger; map:69110
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#14")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69111; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546410, 0xa, STATIC_DTOR, "battlefield#14")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69112; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546420, 0x11, STATIC_INIT_DISPATCH, "battlefield#15")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69113; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546440, 0xd7, STATIC_CTOR, "battlefield#15")

// name:C; dyninit; see ledger; map:69114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#15")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69115; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546520, 0xa, STATIC_DTOR, "battlefield#15")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69116; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546530, 0x11, STATIC_INIT_DISPATCH, "battlefield#16")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69117; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546550, 0x6c6, STATIC_CTOR, "battlefield#16")

// name:C; dyninit; see ledger; map:69118
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#16")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69119; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546c20, 0x14, STATIC_DTOR, "battlefield#16")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69120; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546c40, 0x11, STATIC_INIT_DISPATCH, "battlefield#17")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69121; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546c60, 0x121, STATIC_CTOR, "battlefield#17")

// name:C; dyninit; see ledger; map:69122
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#17")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69123; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546d90, 0xa, STATIC_DTOR, "battlefield#17")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69124; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546dc0, 0x11, STATIC_INIT_DISPATCH, "battlefield#18")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69125; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546de0, 0xd1, STATIC_CTOR, "battlefield#18")

// name:C; dyninit; see ledger; map:69126
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#18")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69127; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546ec0, 0xa, STATIC_DTOR, "battlefield#18")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69128; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546ed0, 0x11, STATIC_INIT_DISPATCH, "battlefield#19")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69129; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546ef0, 0xd1, STATIC_CTOR, "battlefield#19")

// name:C; dyninit; see ledger; map:69130
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#19")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69131; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00546fd0, 0xa, STATIC_DTOR, "battlefield#19")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:15924
VA_CHT_1(0x00546fe0, 0x441)
t_battlefield::t_battlefield(t_creature_array* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:15925
VA_CHT_1(0x00547870, 0x8b4)
t_battlefield::t_battlefield(
    t_combat_context& arg_0,
    t_screen_point const& arg_1,
    t_battlefield_terrain_map& arg_2,
    t_combat_window* arg_3,
    std::vector<t_cached_ptr<t_battlefield_preset_map_in_game>, std::allocator<t_cached_ptr<t_battlefield_preset_map_in_game>>> const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69132
VA_CHT_1(0x00548150, 0x28a)
static t_cached_ptr<t_combat_castle> get_castle(t_town const* arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69133
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_castle$sdtor
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:69134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void get_castle_objects(
    t_combat_castle& arg_0,
    std::vector<t_combat_object_model_cache, std::allocator<t_combat_object_model_cache>>& arg_1,
    double arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void flatten_castle(
    t_combat_castle const& arg_0,
    std::vector<t_cached_ptr<t_compound_object_model>, std::allocator<t_cached_ptr<t_compound_object_model>>> const& arg_1,
    t_battlefield_terrain_map& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69136
VA_CHT_1(0x00548400, 0x100)
static void flatten_area(
    t_compound_object_model const& arg_0,
    t_map_point_2d const& arg_1,
    t_battlefield_terrain_map& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69137
VA_CHT_1(0x00548500, 0x162)
static int find_castle_row(
    t_combat_castle const& arg_0,
    std::vector<t_cached_ptr<t_compound_object_model>, std::allocator<t_cached_ptr<t_compound_object_model>>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69138
VA_CHT_1(0x00548670, 0x51)
static int find_castle_inside_row(
    t_combat_castle const& arg_0,
    std::vector<t_cached_ptr<t_compound_object_model>, std::allocator<t_cached_ptr<t_compound_object_model>>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69139
VA_CHT_1(0x005486d0, 0x7e)
static void draw_moat(t_battlefield_terrain_map& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15926
VA_CHT_1(0x00548910, 0x5a6)
void t_battlefield::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:15927
VA_CHT_1(0x00548ee0, 0x5e8)
t_battlefield::~t_battlefield()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15928
VA_CHT_1(0x005494d0, 0x1b4)
void t_battlefield::clear()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15929
VA_CHT_1(0x00549690, 0x586)
void t_battlefield::place_castle(
    t_combat_castle const& arg_0,
    std::vector<t_combat_object_model_cache, std::allocator<t_combat_object_model_cache>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69140
VA_CHT_1(0x00549c60, 0x3a)
static void mark_as_grass(
    t_compound_object_model const& arg_0,
    t_map_point_2d const& arg_1,
    t_battlefield& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15930
VA_CHT_1(0x00549ca0, 0x1f6)
void t_battlefield::set_preset_passability_maps(
    std::vector<t_cached_ptr<t_battlefield_preset_map_in_game>, std::allocator<t_cached_ptr<t_battlefield_preset_map_in_game>>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15931
VA_CHT_1(0x00549eb0, 0x7d)
void t_battlefield::set_forbidden_cells()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15932
VA_CHT_1(0x00549f30, 0xe9)
void t_battlefield::add(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15933
VA_CHT_1(0x0054a020, 0x162)
void t_battlefield::set_creature_drawing_order(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15934
VA_CHT_1(0x0054a190, 0x56)
void t_battlefield::remove(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15935
VA_CHT_1(0x0054a1f0, 0xef)
bool t_battlefield::object_hit_test(
    t_abstract_combat_object const& arg_0,
    unsigned long arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield::compute_terrain_height_under_object(t_abstract_combat_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15937
VA_CHT_1(0x0054a2e0, 0x149)
int t_battlefield::compute_terrain_height(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15938
VA_CHT_1(0x0054a430, 0x39)
int t_battlefield::compute_terrain_height(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15939
VA_CHT_1(0x0054a470, 0x3e)
int t_battlefield::compute_terrain_height_under_object(
    t_abstract_combat_object const& arg_0,
    t_map_point_2d const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_battlefield_cell_vertex&> t_battlefield::get_cell_vertex_quad(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:15941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_battlefield_cell_vertex const&> t_battlefield::get_cell_vertex_quad(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_point_2d<t_rational<int>> const& t_battlefield::get_view_ratio() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15943
VA_CHT_1(0x0054a4b0, 0xb)
t_screen_point const& t_battlefield::get_view_size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15944
VA_CHT_1(0x0054a4c0, 0xc1)
void t_battlefield::initialize_cell_map(t_battlefield_terrain_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15945
VA_CHT_1(0x0054a590, 0x2ef)
void t_battlefield::initialize_cell_vertex_map(t_battlefield_terrain_map const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:15946
VA_CHT_1(0x0054a880, 0x1b3)
void t_battlefield::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15947
VA_CHT_1(0x0054aa40, 0x12)
void t_battlefield::invalidate(t_abstract_combat_object& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15948
VA_CHT_1(0x0054aa60, 0xa0)
void t_battlefield::stamp(
    t_abstract_combat_object* arg_0,
    t_combat_footprint const& arg_1,
    t_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15949
VA_CHT_1(0x0054ab00, 0xa0)
void t_battlefield::unstamp(
    t_abstract_combat_object* arg_0,
    t_combat_footprint const& arg_1,
    t_map_point_2d const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15950
VA_CHT_1(0x0054aba0, 0x144)
void t_battlefield::place_object(t_counted_ptr<t_abstract_combat_object> arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15951
VA_CHT_1(0x0054acf0, 0x182)
void t_battlefield::set_drawing_order(t_abstract_combat_object& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15952
VA_CHT_1(0x0054ae80, 0x232)
void t_battlefield::change_model(t_combat_creature& arg_0, t_cached_ptr<t_combat_actor_model> arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15953
VA_CHT_1(0x0054b0c0, 0x1c0)
void t_battlefield::move_object(t_abstract_combat_object& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15954
VA_CHT_1(0x0054b280, 0x141)
void t_battlefield::remove_object(t_counted_ptr<t_abstract_combat_object> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15955
VA_CHT_1(0x0054b3d0, 0x4c)
void t_battlefield::set_current_action(t_combat_actor& arg_0, t_combat_actor_action_id arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15956
VA_CHT_1(0x0054b420, 0x4e)
void t_battlefield::set_current_direction(t_combat_actor& arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15957
VA_CHT_1(0x0054b470, 0x71)
void t_battlefield::set_current_direction_and_action(
    t_combat_actor& arg_0,
    t_direction arg_1,
    t_combat_actor_action_id arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15958
VA_CHT_1(0x0054b4f0, 0x40)
void t_battlefield::set_current_frame_num(t_combat_actor& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15959
VA_CHT_1(0x0054b530, 0x5cd)
bool t_battlefield::raw_cell_hit_test(t_point_2d<t_rational<int>> const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_battlefield::raw_cell_hit_test$sdtor4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_battlefield::raw_cell_hit_test$sdtor3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_battlefield::raw_cell_hit_test$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_battlefield::raw_cell_hit_test$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:15960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_battlefield::cell_to_screen_point(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_battlefield::cell_to_screen_point(t_map_point_3d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15962
VA_CHT_1(0x0054bb40, 0x14)
double t_battlefield::get_model_scale() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15963
VA_CHT_1(0x0054bb60, 0x149)
t_screen_point t_battlefield::subcell_to_screen_point(t_map_point_3d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15964
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator t_battlefield::object_hit_test(
    unsigned long arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15965
VA_CHT_1(0x0054bcb0, 0x23c)
bool t_battlefield::cell_hit_test(t_screen_point const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15966
VA_CHT_1(0x0054bef0, 0x1dd)
t_abstract_combat_object* t_battlefield::attackable_hit_test(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::const_iterator t_battlefield::object_hit_test(
    unsigned long arg_0,
    t_screen_point const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15968
VA_CHT_1(0x0054c0d0, 0xec)
bool t_battlefield::off_map(int arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15969
VA_CHT_1(0x0054c1c0, 0x1f)
bool t_battlefield::off_map(t_combat_object_base const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:15970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::can_place(
    t_combat_object_base const& arg_0,
    t_map_point_2d const& arg_1,
    t_abstract_combat_object const* arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15971
VA_CHT_1(0x0054c1e0, 0xd8)
bool t_battlefield::can_place(t_combat_object_base const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15972
VA_CHT_1(0x0054c2c0, 0x156)
bool t_battlefield::can_place(t_map_point_2d const& arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15973
VA_CHT_1(0x0054c420, 0x1a8)
void t_battlefield::set_buttons()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15974
VA_CHT_1(0x0054c5d0, 0x22)
void t_battlefield::set_cursor_mode(t_combat_cursor_mode arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69145; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c600, 0x11, STATIC_INIT_DISPATCH, "battlefield#20")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69146; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c620, 0xd1, STATIC_CTOR, "battlefield#20")

// name:C; dyninit; see ledger; map:69147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#20")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69148; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c700, 0xa, STATIC_DTOR, "battlefield#20")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69149; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c710, 0x11, STATIC_INIT_DISPATCH, "battlefield#21")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69150; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c730, 0xd1, STATIC_CTOR, "battlefield#21")

// name:C; dyninit; see ledger; map:69151
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#21")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69152; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c810, 0xa, STATIC_DTOR, "battlefield#21")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69153; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c820, 0x11, STATIC_INIT_DISPATCH, "battlefield#22")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69154; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c840, 0xd1, STATIC_CTOR, "battlefield#22")

// name:C; dyninit; see ledger; map:69155
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#22")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69156; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c920, 0xa, STATIC_DTOR, "battlefield#22")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69157; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c930, 0x11, STATIC_INIT_DISPATCH, "battlefield#23")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69158; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054c950, 0xd1, STATIC_CTOR, "battlefield#23")

// name:C; dyninit; see ledger; map:69159
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#23")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69160; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054ca30, 0xa, STATIC_DTOR, "battlefield#23")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69161; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054ca40, 0x11, STATIC_INIT_DISPATCH, "battlefield#24")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69162; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054ca60, 0xd1, STATIC_CTOR, "battlefield#24")

// name:C; dyninit; see ledger; map:69163
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#24")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69164; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054cb40, 0xa, STATIC_DTOR, "battlefield#24")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15975
VA_CHT_1(0x0054cb50, 0x4c0)
void t_battlefield::cursor_mode_menu(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15976
VA_CHT_1(0x0054d010, 0x472)
void t_battlefield::add_damage_text(t_combat_creature const& arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69165
VA_CHT_1(0x0054d490, 0x21f)
static void add_message_icon(t_battlefield& arg_0, t_message_icon arg_1, t_window* arg_2, t_window* arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69166
VA_CHT_1(0x0054d6b0, 0x1f5)
static t_cached_ptr<t_bitmap_group> get_message_icon(double arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_message_icon$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_message_icon$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15977
VA_CHT_1(0x0054d930, 0x337)
void t_battlefield::add_text(
    t_abstract_combat_object& arg_0,
    std::string const& arg_1,
    t_pixel_24 const& arg_2,
    t_message_icon arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15978
VA_CHT_1(0x0054dc70, 0x2d9)
void t_battlefield::add_drift_window(t_timed_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15979
VA_CHT_1(0x0054df70, 0xa9)
void t_battlefield::add_creature_label(t_abstract_combat_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15980
VA_CHT_1(0x0054e020, 0xb4)
void t_battlefield::remove_creature_label(t_abstract_combat_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15981
VA_CHT_1(0x0054e0e0, 0x23e)
t_map_point_3d t_battlefield::compute_label_position(
    t_abstract_combat_object const* arg_0,
    t_map_point_3d const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15982
VA_CHT_1(0x0054e320, 0x56)
void t_battlefield::remove_drift_window(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15983
VA_CHT_1(0x0054e380, 0x243)
void t_battlefield::add_prompt(t_combat_creature& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69169; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054e5d0, 0x11, STATIC_INIT_DISPATCH, "battlefield#25")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69170; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054e5f0, 0xd1, STATIC_CTOR, "battlefield#25")

// name:C; dyninit; see ledger; map:69171
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#25")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69172; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054e6d0, 0xa, STATIC_DTOR, "battlefield#25")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15984
VA_CHT_1(0x0054e6e0, 0x26d)
bool t_battlefield::check_regeneration(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15985
VA_CHT_1(0x0054e950, 0x58)
void t_battlefield::animation_started(t_counted_animation* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15986
VA_CHT_1(0x0054e9b0, 0x60)
void t_battlefield::animation_ended(t_counted_animation* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15987
VA_CHT_1(0x0054ea10, 0x16)
void t_battlefield::set_acting_remote(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15988
VA_CHT_1(0x0054ea30, 0x6d6)
bool t_battlefield::set_acting(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15989
VA_CHT_1(0x0054f110, 0x5a)
t_direction get_direction(
    t_combat_object_base const& arg_0,
    t_map_point_2d arg_1,
    t_combat_object_base const& arg_2,
    t_map_point_2d arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:15990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield::get_ranged_damage(t_combat_creature const& arg_0, t_combat_creature const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69173; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f170, 0x11, STATIC_INIT_DISPATCH, "battlefield#26")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69174; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f190, 0xd1, STATIC_CTOR, "battlefield#26")

// name:C; dyninit; see ledger; map:69175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#26")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69176; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f270, 0xa, STATIC_DTOR, "battlefield#26")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69177; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f280, 0x11, STATIC_INIT_DISPATCH, "battlefield#27")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69178; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f2a0, 0xd1, STATIC_CTOR, "battlefield#27")

// name:C; dyninit; see ledger; map:69179
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#27")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69180; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0054f380, 0xa, STATIC_DTOR, "battlefield#27")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15991
VA_CHT_1(0x0054f390, 0x2df)
void t_battlefield::begin_ranged_attack(t_combat_creature& arg_0, t_map_point_3d const& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15992
VA_CHT_1(0x0054f670, 0x137)
void t_battlefield::begin_ranged_attack(t_combat_creature& arg_0, t_combat_creature& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15993
VA_CHT_1(0x0054f7b0, 0xb1)
void t_battlefield::preload_flinch(t_combat_creature& arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15994
VA_CHT_1(0x0054f870, 0x11)
void t_battlefield::preload_flinch(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15995
VA_CHT_1(0x0054f890, 0x26d)
void t_battlefield::check_ranged_retaliation(t_combat_creature* arg_0, t_combat_creature* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15996
VA_CHT_1(0x0054fb00, 0x121)
void t_battlefield::begin_action(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15997
VA_CHT_1(0x0054fc30, 0x1a0)
void t_battlefield::begin_area_effect_attack(
    t_combat_creature& arg_0,
    t_map_point_3d const& arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15998
VA_CHT_1(0x0054fdd0, 0x158)
void t_battlefield::begin_ranged_attack(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:15999
VA_CHT_1(0x0054ff30, 0x3da)
void t_battlefield::begin_ranged_attack(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16000
VA_CHT_1(0x00550310, 0x36e)
void t_battlefield::end_ranged_attack(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16001
VA_CHT_1(0x00550680, 0x152)
void t_battlefield::begin_ranged_retaliation()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16002
VA_CHT_1(0x005507e0, 0x22e)
void t_battlefield::create_missile(t_combat_creature& arg_0, t_map_point_3d arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16003
VA_CHT_1(0x00550a70, 0x335)
void t_battlefield::launch_missile(
    t_missile_type arg_0,
    t_combat_creature& arg_1,
    t_map_point_3d const& arg_2,
    t_map_point_3d const& arg_3,
    t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> arg_4,
    t_combat_action_message const& arg_5
)
{
    // Body unavailable.
}

namespace {

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=150dc0:16004;class=?%C:\work\game\battlefield.cpp19224604::t_delayed_missile_impact;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d70e4,col=5000b0,offset=8,slot=1,entry=150dc0; map:16004
VA_CHT_1(0x00550dc0, 0xa8)
void t_delayed_missile_impact::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69181; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00550e70, 0x11, STATIC_INIT_DISPATCH, "battlefield#28")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69182; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00550e90, 0xd1, STATIC_CTOR, "battlefield#28")

// name:C; dyninit; see ledger; map:69183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#28")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69184; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00550f70, 0xa, STATIC_DTOR, "battlefield#28")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16005
VA_CHT_1(0x00550f80, 0x399)
void t_battlefield::missile_impact(
    t_combat_creature& arg_0,
    t_direction arg_1,
    t_counted_ptr<t_combat_creature> arg_2,
    bool arg_3,
    t_combat_action_message arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16006
VA_CHT_1(0x005514a0, 0x2b0)
void t_battlefield::missile_strike(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_battlefield::t_missile_strike_data arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16007
VA_CHT_1(0x00551800, 0x1ff)
void t_battlefield::update_state()
{
    // Body unavailable.
}

// name:A; map symbol; map:16008
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::end_pre_action_animation(t_window* arg_0, t_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16009
VA_CHT_1(0x00551a20, 0x8)
void t_battlefield::end_spell(t_window* arg_0, t_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16010
VA_CHT_1(0x00551a30, 0xb9)
void t_battlefield::end_damage_spell(t_window* arg_0, t_battlefield::t_end_damage_spell_data arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16011
VA_CHT_1(0x00551b50, 0x27f)
void t_battlefield::start_damage_spell(
    t_counted_ptr<t_combat_creature> arg_0,
    t_combat_creature& arg_1,
    int arg_2,
    t_spell arg_3,
    t_combat_action_message const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16012
VA_CHT_1(0x00551dd0, 0x8)
void t_battlefield::end_animation(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16013
VA_CHT_1(0x00551de0, 0x240)
void t_battlefield::move_to_attack(t_abstract_combat_object* arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16014
VA_CHT_1(0x00552020, 0x7b8)
bool t_battlefield::begin_move(
    t_combat_creature& arg_0,
    t_combat_path& arg_1,
    t_map_point_2d const& arg_2,
    t_handler_1<t_combat_creature&> arg_3,
    t_combat_action_message const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool touches_gate(t_battlefield& arg_0, t_map_point_2d const& arg_1, t_combat_footprint const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69186
VA_CHT_1(0x005527e0, 0x90)
static bool crosses_gate(t_battlefield& arg_0, t_combat_path& arg_1, t_combat_footprint const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16015
VA_CHT_1(0x00552870, 0x187)
bool t_battlefield::begin_move(t_map_point_2d const& arg_0, t_handler_1<t_combat_creature&> arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16016
VA_CHT_1(0x00552a00, 0xf2)
t_map_point_2d t_battlefield::get_waypoint(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:69187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int get_next_waypoint_index(t_combat_path const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16017
VA_CHT_1(0x00552b00, 0x10d)
bool t_battlefield::begin_move(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16018
VA_CHT_1(0x00552c10, 0x1c8)
t_combat_creature* t_battlefield::creature_hit_test(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16019
VA_CHT_1(0x00552de0, 0xff)
void t_battlefield::right_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16020
VA_CHT_1(0x00552ee0, 0x88)
void t_battlefield::preload(t_combat_actor& arg_0, t_combat_actor_action_id arg_1, t_direction arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16021
VA_CHT_1(0x00552f70, 0x29a)
std::list<t_attackable_object*, std::allocator<t_attackable_object*>> t_battlefield::get_multi_attack_targets(
    t_combat_creature const& arg_0,
    t_attackable_object const& arg_1,
    t_attack_angle const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16022
VA_CHT_1(0x00553210, 0x372)
t_handler_1<t_combat_creature&> t_battlefield::multi_attack(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    bool arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16023
VA_CHT_1(0x00553690, 0x468)
t_combat_creature_list t_battlefield::get_breath_targets(
    t_combat_creature const& arg_0,
    t_attackable_object const& arg_1,
    t_map_point_2d const& arg_2,
    t_map_point_2d const& arg_3,
    bool arg_4
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69188; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00553b10, 0x11, STATIC_INIT_DISPATCH, "battlefield#29")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69189; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00553b30, 0xd1, STATIC_CTOR, "battlefield#29")

// name:C; dyninit; see ledger; map:69190
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#29")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69191; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00553c10, 0xa, STATIC_DTOR, "battlefield#29")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16024
VA_CHT_1(0x00553c20, 0x2fe)
t_combat_flinch* t_battlefield::check_breath(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    t_combat_flinch* arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16025
VA_CHT_1(0x00553f20, 0x1f8)
void t_battlefield::show_breath_targets(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16026
VA_CHT_1(0x00554120, 0x2ac)
void t_battlefield::show_multi_attack_targets(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69192; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005543d0, 0x11, STATIC_INIT_DISPATCH, "battlefield#30")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69193; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005543f0, 0xd1, STATIC_CTOR, "battlefield#30")

// name:C; dyninit; see ledger; map:69194
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#30")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69195; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005544d0, 0xa, STATIC_DTOR, "battlefield#30")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69196; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005544e0, 0x11, STATIC_INIT_DISPATCH, "battlefield#31")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69197; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00554500, 0xd1, STATIC_CTOR, "battlefield#31")

// name:C; dyninit; see ledger; map:69198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#31")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69199; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005545e0, 0xa, STATIC_DTOR, "battlefield#31")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16027
VA_CHT_1(0x005545f0, 0x448)
void t_battlefield::begin_melee_attack(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    bool arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16028
VA_CHT_1(0x00554a40, 0x5c)
void t_battlefield::end_strike_and_return(t_combat_creature& arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16029
VA_CHT_1(0x00554aa0, 0x33)
void t_battlefield::set_combat_window(t_combat_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16030
VA_CHT_1(0x00554ae0, 0x7)
t_combat_window* t_battlefield::get_combat_window() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16031
VA_CHT_1(0x00554af0, 0x3bf)
void t_battlefield::end_melee_attack(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16032
VA_CHT_1(0x00554eb0, 0x3ab)
void t_battlefield::begin_attack(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16033
VA_CHT_1(0x00555260, 0x1a1)
void t_battlefield::begin_melee_retaliation()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16034
VA_CHT_1(0x00555410, 0x17)
void t_battlefield::end_walk(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16035
VA_CHT_1(0x00555430, 0x64)
t_combat_creature* t_battlefield::select_next_creature(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::show_good_morale()
{
    // Body unavailable.
}

// name:A; map symbol; map:16037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::show_bad_morale()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16038
VA_CHT_1(0x005554a0, 0x1d4)
void t_battlefield::select_next_creature()
{
    // Body unavailable.
}

// name:A; map symbol; map:69200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void pause(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16039
VA_CHT_1(0x00555680, 0x1d6)
bool t_battlefield::get_attack_angle(
    t_screen_point arg_0,
    t_attackable_object* arg_1,
    t_attack_angle& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69201; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00555860, 0x11, STATIC_INIT_DISPATCH, "battlefield#32")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69202; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00555880, 0xd1, STATIC_CTOR, "battlefield#32")

// name:C; dyninit; see ledger; map:69203
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#32")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69204; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00555960, 0xa, STATIC_DTOR, "battlefield#32")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16040
VA_CHT_1(0x00555970, 0x31a)
t_mouse_window* t_battlefield::get_melee_cursor(
    t_screen_point arg_0,
    t_attackable_object* arg_1,
    std::string& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69205
VA_CHT_1(0x00555c90, 0x325)
static std::string damage_range_text(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16041
VA_CHT_1(0x00555fc0, 0x3ad)
t_combat_creature* t_battlefield::get_ranged_target(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1,
    t_ranged_result& arg_2,
    bool arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16042
VA_CHT_1(0x00556370, 0x1f2)
t_wall_bonus t_battlefield::crosses_wall(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_wall_bonus t_battlefield::crosses_wall(
    t_combat_creature const& arg_0,
    t_attackable_object const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::can_see_subcell(t_combat_creature const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16045
VA_CHT_1(0x00556570, 0xbe)
bool t_battlefield::can_see_subcell(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1,
    t_ranged_result& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16046
VA_CHT_1(0x00556630, 0xf0)
bool t_battlefield::can_see_cell(t_combat_creature const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16047
VA_CHT_1(0x00556720, 0xf1)
bool t_battlefield::can_see_cell(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1,
    t_ranged_result& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16048
VA_CHT_1(0x00556820, 0x71)
bool t_battlefield::can_see(t_combat_creature const& arg_0, t_combat_creature const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16049
VA_CHT_1(0x005568a0, 0x5c)
t_combat_creature* t_battlefield::get_ranged_target(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16050
VA_CHT_1(0x00556900, 0x7b)
bool t_battlefield::can_shoot(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16051
VA_CHT_1(0x00556980, 0x14d)
int t_battlefield::get_range_factor(t_combat_creature const& arg_0, t_combat_creature const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69206; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00556ad0, 0x11, STATIC_INIT_DISPATCH, "battlefield#33")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69207; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00556af0, 0xd1, STATIC_CTOR, "battlefield#33")

// name:C; dyninit; see ledger; map:69208
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#33")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69209; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00556bd0, 0xa, STATIC_DTOR, "battlefield#33")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16052
VA_CHT_1(0x00556be0, 0x308)
t_mouse_window* t_battlefield::get_ranged_cursor(
    t_combat_creature const* arg_0,
    int arg_1,
    std::string& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16053
VA_CHT_1(0x00556ef0, 0x36)
t_combat_creature* t_battlefield::get_creature(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16054
VA_CHT_1(0x00556f30, 0x1f5)
bool t_battlefield::get_area_range_target(t_combat_creature* arg_0, t_map_point_2d& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16055
VA_CHT_1(0x00557130, 0x230)
int t_battlefield::get_area_range_factor(t_combat_creature* arg_0, t_map_point_2d& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16056
VA_CHT_1(0x00557380, 0x17b)
void t_battlefield::set_cursor_frame(t_map_point_2d const& arg_0, t_bitmap_cursor& arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69210; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557500, 0x11, STATIC_INIT_DISPATCH, "battlefield#34")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69211; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557520, 0xd1, STATIC_CTOR, "battlefield#34")

// name:C; dyninit; see ledger; map:69212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#34")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69213; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557600, 0xa, STATIC_DTOR, "battlefield#34")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69214; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557610, 0x11, STATIC_INIT_DISPATCH, "battlefield#35")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69215; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557630, 0xd1, STATIC_CTOR, "battlefield#35")

// name:C; dyninit; see ledger; map:69216
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#35")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69217; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00557710, 0xa, STATIC_DTOR, "battlefield#35")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16057
VA_CHT_1(0x00557720, 0x18f)
t_mouse_window* t_battlefield::get_move_cursor(t_map_point_2d const& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16058
VA_CHT_1(0x005578b0, 0x7)
t_combat_spell* t_battlefield::get_default_spell() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16059
VA_CHT_1(0x005578c0, 0x22b)
t_mouse_window* t_battlefield::get_new_cursor(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16060
VA_CHT_1(0x00557af0, 0x1b)
void t_battlefield::left_button_down(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16061
VA_CHT_1(0x00557b10, 0x37)
void t_battlefield::left_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16062
VA_CHT_1(0x00557b50, 0xa5)
void t_battlefield::cast_default_spell(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::get_attack_angles(t_attackable_object const& arg_0, t_attack_angle_list& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16064
VA_CHT_1(0x00557c00, 0x22e)
void t_battlefield::get_attack_angles(
    t_combat_creature const& arg_0,
    t_attackable_object const& arg_1,
    t_attack_angle_list& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16065
VA_CHT_1(0x00557e30, 0x102)
void t_battlefield::add_threat(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16066
VA_CHT_1(0x00557f40, 0x102)
void t_battlefield::remove_threat(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::enemy_adjacent(t_combat_creature const& arg_0, t_map_point_2d const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::enemy_adjacent(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16069
VA_CHT_1(0x00558050, 0x2bd)
void t_battlefield::get_impeded_angles(
    t_combat_creature const& arg_0,
    t_map_point_2d const& arg_1,
    bool* arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16070
VA_CHT_1(0x00558310, 0x8c)
void t_battlefield::set_auto_combat(bool arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16071
VA_CHT_1(0x005583a0, 0x43)
void t_battlefield::cancel_spell()
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69218; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005583f0, 0x11, STATIC_INIT_DISPATCH, "battlefield#36")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69219; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558410, 0xd1, STATIC_CTOR, "battlefield#36")

// name:C; dyninit; see ledger; map:69220
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#36")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69221; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005584f0, 0xa, STATIC_DTOR, "battlefield#36")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16072
VA_CHT_1(0x00558500, 0x2f2)
void t_battlefield::open_spellbook(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69222; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558800, 0x11, STATIC_INIT_DISPATCH, "battlefield#37")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69223; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558820, 0xd1, STATIC_CTOR, "battlefield#37")

// name:C; dyninit; see ledger; map:69224
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#37")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69225; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558900, 0xa, STATIC_DTOR, "battlefield#37")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16073
VA_CHT_1(0x00558910, 0xe0)
void t_battlefield::defend()
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69226; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005589f0, 0x11, STATIC_INIT_DISPATCH, "battlefield#38")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69227; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558a10, 0xd1, STATIC_CTOR, "battlefield#38")

// name:C; dyninit; see ledger; map:69228
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#38")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69229; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00558af0, 0xa, STATIC_DTOR, "battlefield#38")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16074
VA_CHT_1(0x00558b00, 0xdc)
void t_battlefield::wait_action()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16075
VA_CHT_1(0x00558be0, 0x444)
void t_battlefield::end_combat()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69230
VA_CHT_1(0x00559030, 0x7)
static void reset_wands(t_combat_creature_list& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69231
VA_CHT_1(0x00559040, 0x6b)
static void reset_wands(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16076
VA_CHT_1(0x005590b0, 0x17e)
bool t_battlefield::is_computer_controlled(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16077
VA_CHT_1(0x00559230, 0x31)
bool t_battlefield::is_computer_controlled(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16078
VA_CHT_1(0x00559270, 0xa4)
bool t_battlefield::is_remote_controlled(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16079
VA_CHT_1(0x00559320, 0x1c2)
void t_battlefield::get_berserk_targets(t_combat_creature const& arg_0, t_combat_creature_list& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16080
VA_CHT_1(0x005594f0, 0x21c)
void t_battlefield::choose_berserk_melee_action()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16081
VA_CHT_1(0x00559710, 0x251)
void t_battlefield::choose_berserk_ranged_action()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16082
VA_CHT_1(0x00559970, 0x2ad)
void t_battlefield::choose_action()
{
    // Body unavailable.
}

// name:A; map symbol; map:16083
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::lost_remote_player()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16084
VA_CHT_1(0x00559c20, 0x20)
t_combat_creature* t_battlefield::get_acting_creature() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16085
VA_CHT_1(0x00559c40, 0x4)
t_mouse_window* t_battlefield::get_blocked_cursor() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mouse_window* t_battlefield::get_info_cursor() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16087
VA_CHT_1(0x00559c50, 0x7)
t_mouse_window* t_battlefield::get_normal_cursor() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16088
VA_CHT_1(0x00559c60, 0x7)
t_mouse_window* t_battlefield::get_spell_cursor() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16089
VA_CHT_1(0x00559c70, 0x7)
t_mouse_window* t_battlefield::get_spell_cannot_cast_cursor() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16090
VA_CHT_1(0x00559c80, 0x7)
t_mouse_window* t_battlefield::get_tower_move_cursor() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16091
VA_CHT_1(0x00559c90, 0x274)
void t_battlefield::begin_throw_potion(t_direction arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16092
VA_CHT_1(0x00559f10, 0x1e6)
void t_battlefield::begin_spell(
    t_direction arg_0,
    t_handler_1<t_combat_creature&> arg_1,
    t_handler_1<t_combat_creature&> arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16093
VA_CHT_1(0x0055a100, 0xb5)
void t_battlefield::begin_spell(
    t_combat_creature const* arg_0,
    t_handler_1<t_combat_creature&> arg_1,
    t_handler_1<t_combat_creature&> arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_direction get_spell_direction(t_combat_creature const* arg_0, t_combat_creature const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69233
VA_CHT_1(0x0055a1c0, 0xa3)
static t_direction get_spell_direction(t_combat_creature const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16094
VA_CHT_1(0x0055a270, 0x228)
void t_battlefield::begin_spell(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16095
VA_CHT_1(0x0055a500, 0x33c)
void t_battlefield::begin_spell(t_combat_creature const* arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16096
VA_CHT_1(0x0055a840, 0xec)
t_delayed_spell_animation::t_delayed_spell_animation(
    t_battlefield& arg_0,
    t_combat_creature& arg_1,
    t_spell arg_2,
    t_handler_1<t_window*> arg_3,
    t_handler_1<t_window*> arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16097
VA_CHT_1(0x0055aa40, 0xfc)
void t_delayed_spell_animation::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16098
VA_CHT_1(0x0055ab40, 0x187)
void t_delayed_spell_animation::display_action_message(t_combat_action_message const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16099
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_delayed_spell_animation::erase_action_message()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:16100
VA_CHT_1(0x0055ace0, 0x420)
void t_battlefield::start_animation(
    t_combat_creature& arg_0,
    t_spell arg_1,
    t_handler_1<t_window*> arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16101
VA_CHT_1(0x0055b140, 0xd6)
void t_battlefield::start_animation(
    t_combat_creature& arg_0,
    t_spell arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16102
VA_CHT_1(0x0055b220, 0xea)
void t_battlefield::start_pre_action_animation(
    t_combat_creature& arg_0,
    t_spell arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16103
VA_CHT_1(0x0055b310, 0x1f)
void t_battlefield::set_influences()
{
    // Body unavailable.
}

// name:A; map symbol; map:16104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::set_passability(t_battlefield_preset_map_in_game const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16105
VA_CHT_1(0x0055b330, 0xdf)
void t_battlefield::add_action(t_handler arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69234; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055b410, 0x11, STATIC_INIT_DISPATCH, "battlefield#39")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69235; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055b430, 0xd1, STATIC_CTOR, "battlefield#39")

// name:C; dyninit; see ledger; map:69236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#39")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69237; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055b510, 0xa, STATIC_DTOR, "battlefield#39")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16106
VA_CHT_1(0x0055b520, 0x16a)
bool t_battlefield::check_resistance(t_combat_creature const& arg_0, t_combat_creature& arg_1, t_spell arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16107
VA_CHT_1(0x0055b690, 0x5f)
bool t_battlefield::cast_spell(
    t_combat_creature const& arg_0,
    t_combat_creature& arg_1,
    t_spell arg_2,
    t_combat_action_message const& arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16108
VA_CHT_1(0x0055b6f0, 0x2b9)
void t_battlefield::add_attack(
    t_combat_creature* arg_0,
    t_attackable_object* arg_1,
    bool arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16109
VA_CHT_1(0x0055b9b0, 0x78)
void t_battlefield::resolve_attacks()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16110
VA_CHT_1(0x0055ba30, 0x6f)
void t_battlefield::initialize_morale()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16111
VA_CHT_1(0x0055baa0, 0x107)
void t_battlefield::update_morale()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16112
VA_CHT_1(0x0055bbb0, 0x1a6)
void t_battlefield::set_transparency()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69238
VA_CHT_1(0x0055bd60, 0xff)
static void check_transparency(
    t_abstract_combat_object& arg_0,
    t_battlefield& arg_1,
    std::vector<t_screen_rect, std::allocator<t_screen_rect>> const& arg_2,
    std::vector<int, std::allocator<int>> const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16113
VA_CHT_1(0x0055be60, 0x112)
void t_battlefield::select(t_combat_creature& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16114
VA_CHT_1(0x0055bf80, 0x13)
t_player* t_battlefield::get_player(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16115
VA_CHT_1(0x0055bfa0, 0x22)
t_player_color t_battlefield::get_player_color(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16116
VA_CHT_1(0x0055bfd0, 0x1e2)
t_combat_creature_list t_battlefield::get_area_targets(t_map_point_2d const& arg_0, int arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16117
VA_CHT_1(0x0055c1c0, 0xc7)
void t_battlefield::select_targets(t_combat_creature_list const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16118
VA_CHT_1(0x0055c290, 0x1e5)
void t_battlefield::select_targets(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16119
VA_CHT_1(0x0055c480, 0x113)
void t_battlefield::select_target(t_combat_creature* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16120
VA_CHT_1(0x0055c5a0, 0x1c6)
t_combat_creature_list t_battlefield::get_resurrection_targets(
    t_screen_point const& arg_0,
    bool arg_1,
    t_spell arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16121
VA_CHT_1(0x0055c770, 0x269)
t_map_point_2d_list t_battlefield::get_placement_points(
    t_map_point_2d const& arg_0,
    t_combat_creature& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16122
VA_CHT_1(0x0055c9e0, 0x3d)
t_combat_path_data const& t_battlefield::get_path_point(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16123
VA_CHT_1(0x0055ca20, 0x1b4)
void t_battlefield::place_obstacle(t_combat_object_model_cache const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16124
VA_CHT_1(0x0055cbe0, 0x1f)
t_town* t_battlefield::find_nearest_town(bool arg_0, bool& arg_1, bool& arg_2) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16125
VA_CHT_1(0x0055cc00, 0x190)
void t_battlefield::use_town_gate()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16126
VA_CHT_1(0x0055cd90, 0x21e)
t_combat_creature_list t_battlefield::get_creatures_with_casualties(
    t_screen_point const& arg_0,
    bool arg_1,
    bool arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16127
VA_CHT_1(0x0055cfb0, 0xa3)
t_stationary_combat_object* t_battlefield::get_tower(
    t_map_point_2d const& arg_0,
    t_combat_footprint const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16128
VA_CHT_1(0x0055d060, 0xc9)
bool t_battlefield::gate_is_blocked() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16129
VA_CHT_1(0x0055d130, 0x26)
bool t_battlefield::gate_is_open() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16130
VA_CHT_1(0x0055d160, 0xa8)
void t_battlefield::mark_gate(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::open_gate(t_handler arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16132
VA_CHT_1(0x0055d210, 0x9f)
void t_battlefield::check_gate_close()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16133
VA_CHT_1(0x0055d2b0, 0x23)
bool t_battlefield::has_gate() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16134
VA_CHT_1(0x0055d2e0, 0x2f)
t_map_point_2d t_battlefield::get_gate_position() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16135
VA_CHT_1(0x0055d310, 0x31)
t_map_rect_2d t_battlefield::get_gate_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16136
VA_CHT_1(0x0055d350, 0xaa)
void t_battlefield::added(t_attackable_obstacle* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16137
VA_CHT_1(0x0055d400, 0xbc)
void t_battlefield::removed(t_attackable_obstacle* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16138
VA_CHT_1(0x0055d4c0, 0x8)
int t_battlefield::get_retaliation_time_stamp() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::update_retaliation()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16140
VA_CHT_1(0x0055d4d0, 0x10)
t_creature_array& t_battlefield::get_army(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16141
VA_CHT_1(0x0055d4e0, 0x13)
t_abstract_grail_data_source const& t_battlefield::get_grail_data(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16142
VA_CHT_1(0x0055d500, 0x10)
long t_battlefield::get_new_battlefield_id()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16143
VA_CHT_1(0x0055d510, 0x67)
int t_battlefield::get_active_creature_count(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16144
VA_CHT_1(0x0055d580, 0x87)
t_combat_creature* t_battlefield::find_summoned_creature(t_spell arg_0, t_creature_type arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16145
VA_CHT_1(0x0055dd00, 0x232)
bool t_battlefield::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:69239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool read_cell_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_isometric_map<t_battlefield_cell>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:69240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool read_vertex_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_isometric_vertex_map<t_battlefield_cell_vertex>& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16146
VA_CHT_1(0x0055df40, 0x1c2)
bool t_battlefield::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69241
VA_CHT_1(0x0055e110, 0x50)
static bool write_cell_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_isometric_map<t_battlefield_cell> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:69242
VA_CHT_1(0x0055e730, 0xf4)
static bool write_vertex_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_isometric_vertex_map<t_battlefield_cell_vertex> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16147
VA_CHT_1(0x0055e830, 0xe)
bool t_battlefield::get_acting_side() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16148
VA_CHT_1(0x0055e840, 0x15d)
int t_battlefield::calculate_surrender_cost(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16149
VA_CHT_1(0x0055e9a0, 0x93)
void t_battlefield::surrender()
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69243; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ea40, 0x11, STATIC_INIT_DISPATCH, "battlefield#40")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69244; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ea60, 0xd1, STATIC_CTOR, "battlefield#40")

// name:C; dyninit; see ledger; map:69245
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#40")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69246; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055eb40, 0xa, STATIC_DTOR, "battlefield#40")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16150
VA_CHT_1(0x0055eb50, 0x160)
bool t_battlefield::shackles_of_war_present(std::string* arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69247; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ecb0, 0x11, STATIC_INIT_DISPATCH, "battlefield#41")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69248; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ecd0, 0xd1, STATIC_CTOR, "battlefield#41")

// name:C; dyninit; see ledger; map:69249
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#41")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69250; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055edb0, 0xa, STATIC_DTOR, "battlefield#41")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69251; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055edc0, 0x11, STATIC_INIT_DISPATCH, "battlefield#42")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69252; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ede0, 0xd1, STATIC_CTOR, "battlefield#42")

// name:C; dyninit; see ledger; map:69253
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#42")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69254; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055eec0, 0xa, STATIC_DTOR, "battlefield#42")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69255; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055eed0, 0x11, STATIC_INIT_DISPATCH, "battlefield#43")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69256; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055eef0, 0xd1, STATIC_CTOR, "battlefield#43")

// name:C; dyninit; see ledger; map:69257
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#43")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69258; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055efd0, 0xa, STATIC_DTOR, "battlefield#43")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69259; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055efe0, 0x11, STATIC_INIT_DISPATCH, "battlefield#44")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69260; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f000, 0xd1, STATIC_CTOR, "battlefield#44")

// name:C; dyninit; see ledger; map:69261
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#44")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69262; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f0e0, 0xa, STATIC_DTOR, "battlefield#44")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69263; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f0f0, 0x11, STATIC_INIT_DISPATCH, "battlefield#45")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69264; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f110, 0xd1, STATIC_CTOR, "battlefield#45")

// name:C; dyninit; see ledger; map:69265
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#45")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69266; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f1f0, 0xa, STATIC_DTOR, "battlefield#45")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69267; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f200, 0x11, STATIC_INIT_DISPATCH, "battlefield#46")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69268; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f220, 0xd1, STATIC_CTOR, "battlefield#46")

// name:C; dyninit; see ledger; map:69269
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#46")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69270; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f300, 0xa, STATIC_DTOR, "battlefield#46")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69271; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f310, 0x11, STATIC_INIT_DISPATCH, "battlefield#47")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69272; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f330, 0xd1, STATIC_CTOR, "battlefield#47")

// name:C; dyninit; see ledger; map:69273
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#47")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69274; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f410, 0xa, STATIC_DTOR, "battlefield#47")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16151
VA_CHT_1(0x0055f420, 0x4b2)
bool t_battlefield::can_retreat(bool arg_0, std::string* arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69275; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f8e0, 0x11, STATIC_INIT_DISPATCH, "battlefield#48")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69276; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f900, 0xd1, STATIC_CTOR, "battlefield#48")

// name:C; dyninit; see ledger; map:69277
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#48")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69278; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f9e0, 0xa, STATIC_DTOR, "battlefield#48")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69279; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055f9f0, 0x11, STATIC_INIT_DISPATCH, "battlefield#49")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69280; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fa10, 0xd1, STATIC_CTOR, "battlefield#49")

// name:C; dyninit; see ledger; map:69281
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#49")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69282; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055faf0, 0xa, STATIC_DTOR, "battlefield#49")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69283; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fb00, 0x11, STATIC_INIT_DISPATCH, "battlefield#50")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69284; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fb20, 0xd1, STATIC_CTOR, "battlefield#50")

// name:C; dyninit; see ledger; map:69285
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#50")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69286; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fc00, 0xa, STATIC_DTOR, "battlefield#50")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69287; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fc10, 0x11, STATIC_INIT_DISPATCH, "battlefield#51")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69288; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fc30, 0xd1, STATIC_CTOR, "battlefield#51")

// name:C; dyninit; see ledger; map:69289
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#51")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69290; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fd10, 0xa, STATIC_DTOR, "battlefield#51")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69291; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fd20, 0x11, STATIC_INIT_DISPATCH, "battlefield#52")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69292; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fd40, 0xd1, STATIC_CTOR, "battlefield#52")

// name:C; dyninit; see ledger; map:69293
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#52")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69294; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fe20, 0xa, STATIC_DTOR, "battlefield#52")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69295; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fe30, 0x11, STATIC_INIT_DISPATCH, "battlefield#53")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69296; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055fe50, 0xd1, STATIC_CTOR, "battlefield#53")

// name:C; dyninit; see ledger; map:69297
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "battlefield#53")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69298; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0055ff30, 0xa, STATIC_DTOR, "battlefield#53")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16152
VA_CHT_1(0x0055ff40, 0x496)
bool t_battlefield::can_surrender(bool arg_0, std::string* arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16153
VA_CHT_1(0x005603e0, 0x21)
bool t_battlefield::is_in_castle(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16154
VA_CHT_1(0x00560de0, 0xde)
int t_battlefield::get_wall_thickness() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16155
VA_CHT_1(0x005620c0, 0x43)
void t_battlefield::remove_gate(t_stationary_combat_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16156
VA_CHT_1(0x00563d20, 0x57)
void t_battlefield::add_gate(t_stationary_combat_object* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16157
VA_CHT_1(0x00564230, 0x35)
double t_battlefield::get_castle_wall_bonus() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16158
VA_CHT_1(0x005655f0, 0x58)
t_difficulty t_battlefield::get_difficulty() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69299; name:B (dyninit; see ledger)
VA_CHT_1(0x00565d50, 0x20)
// battlefield$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69301; name:B (dyninit; see ledger)
VA_CHT_1(0x00566060, 0x5c)
// battlefield$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// battlefield$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// battlefield$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// battlefield$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16159
VA_CHT_1(0x00563220, 0x10)
t_pointer_cache<t_combat_castle>::~t_pointer_cache<t_combat_castle>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16160
VA_CHT_1(0x00562b20, 0x2c)
t_screen_point t_screen_rect::bottom_right() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16161
VA_CHT_1(0x00565650, 0x22)
t_handler_1<t_combat_creature&>::~t_handler_1<t_combat_creature&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16162
VA_CHT_1(0x0054d8b0, 0x20)
t_counted_ptr<t_handler_base_1<t_combat_creature&>>::~t_counted_ptr<t_handler_base_1<t_combat_creature&>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_castle_gate>::~t_counted_ptr<t_castle_gate>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16164
VA_CHT_1_COMPGEN(0x00547450, 0x1e, VECTOR_DELETING_DTOR, t_battlefield)

// name:A; map symbol; map:16165
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_battlefield)

// name:A; map symbol; map:16166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_battlefield_cell>::~t_isometric_map<t_battlefield_cell>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_battlefield_cell_vertex>::~t_isometric_vertex_map<t_battlefield_cell_vertex>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_window>::~t_counted_ptr<t_combat_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>::~t_counted_ptr<t_combat_user_action>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16170
VA_CHT_1(0x005535b0, 0xd2)
t_ai_combat_data_cache::~t_ai_combat_data_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:16171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_ptr<t_cached_grail_data_source>::`default ctor closure'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:16172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sequence_loader::t_sequence_loader()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16174
VA_CHT_1_COMPGEN(0x00547850, 0x1e, VECTOR_DELETING_DTOR, t_sequence_loader)

// name:A; map symbol; map:16175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sequence_loader)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16176
VA_CHT_1(0x00564570, 0x18)
t_creature_array* t_combat_context::get_attacker() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16177
VA_CHT_1(0x005623c0, 0x19)
t_creature_array* t_combat_context::get_defender() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16178
VA_CHT_1(0x00562b50, 0x21)
t_pointer_cache<t_combat_castle>& t_pointer_cache<t_combat_castle>::operator=(
    t_pointer_cache<t_combat_castle> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16179
VA_CHT_1(0x00562810, 0x2b)
t_abstract_cache<t_combat_castle>& t_abstract_cache<t_combat_castle>::operator=(
    t_abstract_cache<t_combat_castle> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16180
VA_CHT_1(0x00566040, 0x19)
std::vector<t_combat_castle_item, std::allocator<t_combat_castle_item>> const& t_combat_castle::get_objects(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16181
VA_CHT_1(0x005d6cc0, 0x86)
t_combat_object_model_cache::~t_combat_object_model_cache()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16182
VA_CHT_1(0x00562fe0, 0x11)
t_resource_cache<t_compound_object_model>::~t_resource_cache<t_compound_object_model>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16183
VA_CHT_1(0x00561400, 0x43)
t_battlefield_cell::~t_battlefield_cell()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16184
VA_CHT_1(0x005624c0, 0x43)
t_combat_obstacle_placer::~t_combat_obstacle_placer()
{
    // Body unavailable.
}

// name:A; map symbol; map:16185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_obstacle_placer_data>::~t_isometric_map<t_obstacle_placer_data>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16186
VA_CHT_1(0x0055b100, 0x20)
t_handler_1<t_combat_creature&>& t_handler_1<t_combat_creature&>::operator=(
    t_handler_1<t_combat_creature&> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16187
VA_CHT_1(0x00549c20, 0x31)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator t_battlefield::objects_begin(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator t_battlefield::objects_end(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield::place_object(t_counted_ptr<t_abstract_combat_object> arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16190
VA_CHT_1(0x00561740, 0x21)
t_map_point_3d::t_map_point_3d(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16191
VA_CHT_1(0x005483e0, 0x14)
std::vector<t_stationary_combat_object*, std::allocator<t_stationary_combat_object*>> const& t_compound_object::get_objects(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_model_cache::t_combat_object_model_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:16193
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_object_model_cache)

// name:A; map symbol; map:16194
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_object_model_cache)

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16195
VA_CHT_1(0x00547470, 0x10)
std::vector<t_counted_ptr<t_object_segment>, std::allocator<t_counted_ptr<t_object_segment>>> const& t_compound_object_model::get_segments(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16196
VA_CHT_1(0x00553b00, 0x10)
t_obstacle_type t_compound_object_model::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_compound_object>::~t_counted_ptr<t_compound_object>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16198
VA_CHT_1(0x0055b120, 0x20)
t_combat_object_model_cache& t_combat_object_model_cache::operator=(t_combat_object_model_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_combat_object>::~t_counted_ptr<t_stationary_combat_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_compound_object_model>& t_resource_cache<t_compound_object_model>::operator=(
    t_resource_cache<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_compound_object_model>& t_abstract_cache<t_compound_object_model>::operator=(
    t_abstract_cache<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:16202
VA_CHT_1(0x0055dce0, 0x1c)
void t_battlefield_cell::set_forbidden(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield_cell::set_obstacle_allowed(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield_passablity_map>::~t_counted_ptr<t_battlefield_passablity_map>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_map_point const& t_combat_context::get_location() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield_cell_vertex::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_action_id t_combat_actor::get_current_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_animation(t_combat_actor_action_id arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16209
VA_CHT_1(0x00560fb0, 0x44)
bool operator==(t_map_point_3d const& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::set_list_position(
    std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor::get_current_frame_num() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16213
VA_CHT_1(0x00561180, 0x41)
t_battlefield_cell_vertex const& t_battlefield::get_cell_vertex(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield::raw_cell_hit_test(t_screen_point const& arg_0, t_map_point_2d& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16215
VA_CHT_1(0x005611d0, 0xa8)
t_point_2d<t_rational<int>> t_battlefield::get_logical_point(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_cursor_mode t_combat_creature::get_preferred_action() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_waiting() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16218
VA_CHT_1(0x00557360, 0x19)
void t_combat_creature::set_preferred_action(t_combat_cursor_mode arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode>::~t_handler_1<t_combat_cursor_mode>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16220
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode>& t_handler_1<t_combat_cursor_mode>::operator=(
    t_handler_1<t_combat_cursor_mode> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode>::t_handler_1<t_combat_cursor_mode>(
    t_handler_1<t_combat_cursor_mode> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::~t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::got_bad_luck() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::got_good_luck() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_screen_rect::top_right() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_timed_window::get_drift() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_timed_window::get_total_drift() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_timed_window::set_drift(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_timed_window::set_end_handler(t_handler_1<t_window*> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_timed_window>::~t_counted_ptr<t_timed_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_abstract_combat_object::get_screen_position() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::has_regenerated() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16233
VA_CHT_1(0x005643b0, 0x55)
int t_combat_creature::heal(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16234
VA_CHT_1(0x00562510, 0x13)
void t_combat_creature::set_regenerated(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16235
VA_CHT_1(0x0054df50, 0x1b)
void t_abstract_combat_creature::set_moved(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::get_plague_checked() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::get_poison_checked() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16238
VA_CHT_1(0x00547430, 0x12)
void t_combat_creature::set_defending(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_melee_action(t_counted_ptr<t_combat_ai_melee_action> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>::~t_counted_ptr<t_combat_ai_melee_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_plague_checked(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_poison_checked(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_label::set_selected(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16244
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_combat_window::get_remote_opponent_player_id() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16245
VA_CHT_1(0x00560610, 0x41)
void t_combat_creature::expend_shot()
{
    // Body unavailable.
}

// name:A; map symbol; map:16246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&>::t_handler_1<t_combat_creature&>(t_handler_1<t_combat_creature&> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_play_combat_animation::set_end_handler(t_handler_1<t_combat_creature&> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_play_combat_animation::set_key_frame_handler(t_handler_1<t_combat_creature&> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_animation>::~t_counted_ptr<t_play_combat_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction get_direction(t_combat_object_base const& arg_0, t_combat_object_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_creature::has_retaliated() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_selected(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_list& t_combat_creature_list::operator=(t_combat_creature_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator<<=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::~t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield::t_missile_strike_data::~t_missile_strike_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:16257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield::t_missile_strike_data::t_missile_strike_data(t_battlefield::t_missile_strike_data const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>& t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::operator=(
    t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(
    t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::~t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_unsaved_combat_actor::t_unsaved_combat_actor(
    t_battlefield* arg_0,
    t_cached_ptr<t_combat_actor_model> arg_1,
    t_combat_actor_action_id arg_2,
    t_direction arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16262
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_unsaved_combat_actor)

// name:A; map symbol; map:16263
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_unsaved_combat_actor)

// name:A; map symbol; map:16264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_unsaved_combat_actor::~t_unsaved_combat_actor()
{
    // Body unavailable.
}

// name:A; map symbol; map:16265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_move_missile>::~t_counted_ptr<t_move_missile>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:16266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_delayed_missile_impact::t_delayed_missile_impact(
    t_battlefield& arg_0,
    t_direction arg_1,
    t_counted_ptr<t_combat_creature> arg_2,
    bool arg_3,
    t_combat_action_message const& arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16267
VA_CHT_1(0x00700f00, 0x62)
t_handler_base_1<t_combat_creature&>::t_handler_base_1<t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_creature&>::~t_handler_base_1<t_combat_creature&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16269
VA_CHT_1_COMPGEN(0x00564d50, 0x1e, SCALAR_DELETING_DTOR, "t_handler_base_1<t_combat_creature&>")

// name:A; map symbol; map:16270
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_combat_creature&>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16271
VA_CHT_1(0x00551320, 0x1e)
t_abstract_function_1<void, t_combat_creature&>::t_abstract_function_1<void, t_combat_creature&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16272
VA_CHT_1_COMPGEN(0x00551340, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_1<void, t_combat_creature&>")

// name:A; map symbol; map:16273
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_1<void, t_combat_creature&>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16274
VA_CHT_1_COMPGEN(0x00551360, 0x1e, SCALAR_DELETING_DTOR, t_delayed_missile_impact)

// name:A; map symbol; map:16275
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_delayed_missile_impact)

namespace {

// name:A; map symbol; map:16276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_delayed_missile_impact::~t_delayed_missile_impact()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:16277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attack::~t_attack()
{
    // Body unavailable.
}

// name:A; map symbol; map:16278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield::t_end_damage_spell_data::~t_end_damage_spell_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:16279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_animation(
    t_combat_actor_action_id arg_0,
    t_handler_1<t_combat_creature&> arg_1,
    t_combat_action_message const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield::t_end_damage_spell_data::t_end_damage_spell_data(
    t_battlefield::t_end_damage_spell_data const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction get_direction(
    t_combat_object_base const& arg_0,
    t_map_point_2d const& arg_1,
    t_combat_object_base const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path_finder& t_battlefield::get_current_path_finder() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16283
VA_CHT_1(0x00551750, 0xa3)
bool t_combat_creature::is_flying() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_open_gate_animation>::~t_counted_ptr<t_open_gate_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_teleport_ability>::~t_counted_ptr<t_teleport_ability>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_flight>::~t_counted_ptr<t_play_combat_flight>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_walk>::~t_counted_ptr<t_play_combat_walk>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path::t_combat_path()
{
    // Body unavailable.
}

// name:A; map symbol; map:16289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_path::~t_combat_path()
{
    // Body unavailable.
}

// name:A; map symbol; map:16290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_window::to_screen(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_object* t_attackable_object::get_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:16292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_flinch::t_combat_flinch(
    t_combat_creature& arg_0,
    t_attackable_object& arg_1,
    t_combat_action_message const& arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16293
VA_CHT_1_COMPGEN(0x00553590, 0x1e, VECTOR_DELETING_DTOR, t_combat_flinch)

// name:A; map symbol; map:16294
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_flinch)

// name:A; map symbol; map:16295
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_flinch::~t_combat_flinch()
{
    // Body unavailable.
}

// name:A; map symbol; map:16296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d abs(t_map_point_2d arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d sign_of(t_map_point_2d arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int sign_of(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_object const* t_attackable_object::get_object() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_window::set_result(t_combat_result arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
long elapsed_time(unsigned long arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator/(t_map_point_2d const& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator/=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_battlefield_cell::is_obscured() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_edge_distance(t_combat_object_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_creature::get_range_factor(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d t_battlefield::get_cell_center(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction const* t_threat_footprint::get_angles() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature_list const& t_battlefield_cell::get_threat_list() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_waiting(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array* t_combat_context::get_losses()
{
    // Body unavailable.
}

// name:A; map symbol; map:16312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_result t_combat_window::get_result() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_artifact_prop::t_spell_charges_base::reset_spell_points()
{
    // Body unavailable.
}

// name:A; map symbol; map:16314
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_list::t_artifact_list(t_artifact_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_ai::~t_combat_ai()
{
    // Body unavailable.
}

// name:A; map symbol; map:16316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_ai_action>::~t_counted_ptr<t_abstract_combat_ai_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_type t_combat_spell::get_artifact_type() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16318
VA_CHT_1(0x005615c0, 0x38)
bool t_combat_spell::is_potion() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:16319
VA_CHT_1_COMPGEN(0x0055a930, 0x1e, SCALAR_DELETING_DTOR, t_delayed_spell_animation)

// name:A; map symbol; map:16320
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_delayed_spell_animation)

namespace {

// name:A; map symbol; map:16321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_delayed_spell_animation::~t_delayed_spell_animation()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:16322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_delayed_spell_animation>::~t_counted_ptr<t_delayed_spell_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window> t_combat_creature::get_spell_animation() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16324
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>::~t_counted_ptr<t_spell_effect_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_spell_animation(t_counted_ptr<t_spell_effect_window> arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*> t_animated_window::get_end_handler() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool can_resist(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::change_morale(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_screen_rect::contains(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_combat_object::is_fading() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_combat_object::set_maximum_alpha(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::is_selected() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield::get_row_end(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_battlefield::get_row_start(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d_list::t_map_point_2d_list(t_map_point_2d_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_combat_creature::get_salvageable_bodies() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16337
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield_cell::set_gate(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16338
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_castle_gate::get_position() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_attackable_obstacle>::~t_counted_ptr<t_attackable_obstacle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_reader::t_combat_reader(
    t_battlefield& arg_0,
    std::basic_streambuf<char, std::char_traits<char>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_battlefield_cell>& t_isometric_map<t_battlefield_cell>::operator=(
    t_isometric_map<t_battlefield_cell> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>& t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::operator=(
    t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16343
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_tile_map_base& t_isometric_tile_map_base::operator=(t_isometric_tile_map_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map_base_base& t_isometric_map_base_base::operator=(t_isometric_map_base_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_battlefield_cell_vertex>& t_isometric_vertex_map<t_battlefield_cell_vertex>::operator=(
    t_isometric_vertex_map<t_battlefield_cell_vertex> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>& t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::operator=(
    t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map_base& t_isometric_vertex_map_base::operator=(t_isometric_vertex_map_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_reader::~t_combat_reader()
{
    // Body unavailable.
}

// name:A; map symbol; map:16349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_writer::t_combat_writer(
    t_battlefield const& arg_0,
    std::basic_streambuf<char, std::char_traits<char>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_writer::~t_combat_writer()
{
    // Body unavailable.
}

// name:A; map symbol; map:16352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_garrisonable_adv_object const* t_combat_context::get_garrison() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_image_level t_battlefield::get_castle_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator<(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator>=(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int> operator+(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int> operator-(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int> operator*(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int> operator/(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16392
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model>::t_cached_ptr<t_combat_actor_model>(
    t_cached_ptr<t_combat_actor_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16393
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&>::t_handler_1<t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&>::t_handler_1<t_combat_creature&>(t_handler_base_1<t_combat_creature&>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16415
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16439
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_battlefield_cell>::t_isometric_map<t_battlefield_cell>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::~t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_battlefield_cell_vertex>::t_isometric_vertex_map<t_battlefield_cell_vertex>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::~t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16472
VA_CHT_1(0x005654d0, 0x21)
t_abstract_function_1<void, t_combat_creature&>::~t_abstract_function_1<void, t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>::~t_basic_isometric_map<t_isometric_tile_map_base, t_obstacle_placer_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_castle>::t_cached_ptr<t_combat_castle>(t_cached_ptr<t_combat_castle> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode>::t_handler_1<t_combat_cursor_mode>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16849
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int>::t_rational<int>(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int>::t_rational<int>(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int>& t_rational<int>::operator+=(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int>& t_rational<int>::operator-=(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_rational<int>& t_rational<int>::operator*=(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16854
VA_CHT_1(0x00562670, 0x87)
t_rational<int>& t_rational<int>::operator/=(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_point_2d<t_rational<int>>::t_point_2d<t_rational<int>>(
    t_rational<int> const& arg_0,
    t_rational<int> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_object* t_counted_ptr<t_abstract_combat_object>::operator t_abstract_combat_object*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_creature* t_counted_ptr<t_combat_creature>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>& t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>>::operator=(
    t_copy_on_write_ptr<std::vector<t_isometric_map_row_data, std::allocator<t_isometric_map_row_data>>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16859
VA_CHT_1(0x00560ec0, 0x89)
signed char& t_basic_isometric_map<t_isometric_tile_map_base, signed char>::get(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_passablity_map* t_counted_ptr<t_battlefield_passablity_map>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model>::t_cached_ptr<t_combat_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model>::~t_cached_ptr<t_combat_actor_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model* t_cached_ptr<t_combat_actor_model>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model* t_cached_ptr<t_combat_actor_model>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_actor_model>& t_cached_ptr<t_combat_actor_model>::operator=(
    t_cached_ptr<t_combat_actor_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_combat_actor_model>::operator!=(t_combat_actor_model const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_creature&>>::t_counted_ptr<t_handler_base_1<t_combat_creature&>>(
    t_counted_ptr<t_handler_base_1<t_combat_creature&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_creature&>>::t_counted_ptr<t_handler_base_1<t_combat_creature&>>(
    t_handler_base_1<t_combat_creature&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_creature&>>::t_counted_ptr<t_handler_base_1<t_combat_creature&>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_creature&>>& t_counted_ptr<t_handler_base_1<t_combat_creature&>>::operator=(
    t_counted_ptr<t_handler_base_1<t_combat_creature&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>::t_counted_ptr<t_combat_ai_melee_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_ai_melee_action>& t_counted_ptr<t_combat_ai_melee_action>::operator=(
    t_counted_ptr<t_combat_ai_melee_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>::t_counted_ptr<t_spell_effect_window>(
    t_counted_ptr<t_spell_effect_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>::t_counted_ptr<t_spell_effect_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>& t_counted_ptr<t_spell_effect_window>::operator=(
    t_counted_ptr<t_spell_effect_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_effect_window>& t_counted_ptr<t_spell_effect_window>::operator=(
    t_spell_effect_window* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_effect_window* t_counted_ptr<t_spell_effect_window>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation* t_cached_ptr<t_animation>::operator t_animation*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_animation>::operator==(t_animation const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_combat_object>::t_counted_ptr<t_stationary_combat_object>(
    t_stationary_combat_object* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_combat_object* t_counted_ptr<t_stationary_combat_object>::operator t_stationary_combat_object*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stationary_combat_object& t_counted_ptr<t_stationary_combat_object>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>(
    t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>& t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::operator=(
    t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>& t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell* t_counted_ptr<t_combat_spell>::operator t_combat_spell*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell& t_counted_ptr<t_combat_spell>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_attackable_obstacle>::t_counted_ptr<t_attackable_obstacle>(t_attackable_obstacle* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attackable_obstacle* t_counted_ptr<t_attackable_obstacle>::operator t_attackable_obstacle*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16891
VA_CHT_1(0x00561370, 0x89)
t_battlefield_cell const& t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::get(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16892
VA_CHT_1(0x00562700, 0x83)
t_battlefield_cell& t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::get(
    t_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::is_valid(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16894
VA_CHT_1(0x00561280, 0xe7)
t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<t_battlefield_cell>::t_isometric_map<t_battlefield_cell>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16896
VA_CHT_1(0x00562530, 0x9e)
t_battlefield_cell_vertex const& t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::get(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16897
VA_CHT_1(0x00560660, 0xa0)
t_battlefield_cell_vertex& t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::get(
    t_level_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16898
VA_CHT_1(0x00563c60, 0xbb)
t_battlefield_cell_vertex const& t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::get(
    t_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16899
VA_CHT_1(0x00563d80, 0xbb)
t_battlefield_cell_vertex& t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::get(
    t_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16900
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16901
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_vertex_map<t_battlefield_cell_vertex>::t_isometric_vertex_map<t_battlefield_cell_vertex>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_window>::t_counted_ptr<t_combat_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_window>& t_counted_ptr<t_combat_window>::operator=(t_combat_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_window* t_counted_ptr<t_combat_window>::operator t_combat_window*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_window* t_counted_ptr<t_combat_window>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16906
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>::t_counted_ptr<t_combat_user_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>& t_counted_ptr<t_combat_user_action>::operator=(
    t_counted_ptr<t_combat_user_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16908
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_user_action>& t_counted_ptr<t_combat_user_action>::operator=(
    t_combat_user_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action* t_counted_ptr<t_combat_user_action>::operator t_combat_user_action*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_user_action* t_counted_ptr<t_combat_user_action>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_non_blocking_message_displayer>::t_owned_ptr<t_combat_non_blocking_message_displayer>(
    t_combat_non_blocking_message_displayer* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_non_blocking_message_displayer>::~t_owned_ptr<t_combat_non_blocking_message_displayer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_combat_non_blocking_message_displayer>::reset(
    t_combat_non_blocking_message_displayer* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_non_blocking_message_displayer* t_owned_ptr<t_combat_non_blocking_message_displayer>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_timed_window>::t_counted_ptr<t_timed_window>(t_timed_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16916
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_timed_window* t_counted_ptr<t_timed_window>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_castle_gate>::t_counted_ptr<t_castle_gate>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16918
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_castle_gate* t_counted_ptr<t_castle_gate>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_castle_gate>& t_counted_ptr<t_castle_gate>::operator=(t_castle_gate* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_castle_gate* t_counted_ptr<t_castle_gate>::operator t_castle_gate*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_castle_gate* t_counted_ptr<t_castle_gate>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_cached_grail_data_source>::t_owned_ptr<t_cached_grail_data_source>(
    t_cached_grail_data_source* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_cached_grail_data_source>::~t_owned_ptr<t_cached_grail_data_source>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16924
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_cached_grail_data_source>::reset(t_cached_grail_data_source* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_grail_data_source& t_owned_ptr<t_cached_grail_data_source>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_compound_object_model>::t_cached_ptr<t_compound_object_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object_model& t_cached_ptr<t_compound_object_model>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_compound_object_model>& t_cached_ptr<t_compound_object_model>::operator=(
    t_cached_ptr<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16929
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield>::t_counted_ptr<t_battlefield>(t_battlefield* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_combat_ai_action* t_counted_ptr<t_abstract_combat_ai_action>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>& t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_compound_object_model>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16932
VA_CHT_1(0x00548130, 0x1d)
t_abstract_cache<t_compound_object_model>::~t_abstract_cache<t_compound_object_model>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16933
VA_CHT_1(0x00561a90, 0x174)
t_cached_ptr<t_compound_object_model> t_abstract_cache<t_compound_object_model>::get(
    t_progress_handler* arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_compound_object_model>::t_resource_cache<t_compound_object_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context* t_counted_ptr<t_combat_context>::operator t_combat_context*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_compound_object>::t_counted_ptr<t_compound_object>(t_compound_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_compound_object>::t_counted_ptr<t_compound_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_compound_object>& t_counted_ptr<t_compound_object>::operator=(t_compound_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object* t_counted_ptr<t_compound_object>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_castle>::t_cached_ptr<t_combat_castle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_castle>::~t_cached_ptr<t_combat_castle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle* t_cached_ptr<t_combat_castle>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle& t_cached_ptr<t_combat_castle>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_castle>& t_cached_ptr<t_combat_castle>::operator=(
    t_cached_ptr<t_combat_castle> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_castle>>& t_counted_ptr<t_abstract_cache_data<t_combat_castle>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_combat_castle>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:16946
VA_CHT_1(0x00546da0, 0x1d)
t_abstract_cache<t_combat_castle>::~t_abstract_cache<t_combat_castle>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16947
VA_CHT_1(0x00562e40, 0x195)
t_cached_ptr<t_combat_castle> t_abstract_cache<t_combat_castle>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:16948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_castle>::t_pointer_cache<t_combat_castle>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_combat_castle>::t_pointer_cache<t_combat_castle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_image_level enum_incr(t_town_image_level& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16951
VA_CHT_1(0x00563f10, 0xbb)
t_handler_1<t_combat_creature&> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler bound_handler(t_battlefield& arg_0, void (t_battlefield::*)(void))
{
    // Body unavailable.
}

// name:A; map symbol; map:16953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_preset_map_in_game* t_cached_ptr<t_battlefield_preset_map_in_game>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d operator&(t_map_point_2d const& arg_0, int const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d& t_map_point_2d::operator&=(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_battlefield_cell_vertex const&>::t_quad<t_battlefield_cell_vertex const&>(
    t_battlefield_cell_vertex const& arg_0,
    t_battlefield_cell_vertex const& arg_1,
    t_battlefield_cell_vertex const& arg_2,
    t_battlefield_cell_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_quad<t_battlefield_cell_vertex&>::t_quad<t_battlefield_cell_vertex&>(
    t_battlefield_cell_vertex& arg_0,
    t_battlefield_cell_vertex& arg_1,
    t_battlefield_cell_vertex& arg_2,
    t_battlefield_cell_vertex& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator next_iterator(
    std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator prior_iterator(
    std::list<t_counted_ptr<t_abstract_combat_object>, std::allocator<t_counted_ptr<t_abstract_combat_object>>>::iterator arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int round_down(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:16961
VA_CHT_1(0x00551380, 0xa2)
int round_to_nearest(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int round_toward_zero(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16964
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>(
    t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>& t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::operator=(
    t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_cursor_mode)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler add_argument(t_handler_1<t_combat_cursor_mode> arg_0, t_combat_cursor_mode arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:16969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*> bound_handler(t_battlefield& arg_0, void (t_battlefield::*)(t_window*))
{
    // Body unavailable.
}

// name:A; map symbol; map:16970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int as(t_rational<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16972
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_animation>::t_counted_ptr<t_play_combat_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16973
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_animation>& t_counted_ptr<t_play_combat_animation>::operator=(
    t_play_combat_animation* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16974
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_animation* t_counted_ptr<t_play_combat_animation>::operator t_play_combat_animation*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_animation* t_counted_ptr<t_play_combat_animation>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_map_point_3d, bool> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&, t_map_point_3d, bool)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_map_point_3d> add_3rd_argument(
    t_handler_3<t_combat_creature&, t_map_point_3d, bool> arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_map_point_3d, bool>::~t_handler_3<t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_map_point_3d>::~t_handler_2<t_combat_creature&, t_map_point_3d>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>::~t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>::~t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> add_2nd_argument(
    t_handler_2<t_combat_creature&, t_map_point_3d> arg_0,
    t_map_point_3d arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int> bound_handler(t_battlefield& arg_0, void (t_battlefield::*)(int))
{
    // Body unavailable.
}

// name:A; map symbol; map:16984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16985
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> arg_0,
    t_battlefield::t_missile_strike_data arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16986
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16988
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_move_missile>::t_counted_ptr<t_move_missile>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_move_missile>& t_counted_ptr<t_move_missile>::operator=(t_move_missile* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:16990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_move_missile* t_counted_ptr<t_move_missile>::operator t_move_missile*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16991
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_move_missile* t_counted_ptr<t_move_missile>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16992
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_window*, t_battlefield::t_end_damage_spell_data)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*> add_2nd_argument(
    t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data> arg_0,
    t_battlefield::t_end_damage_spell_data arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>::~t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>::~t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:16996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_open_gate_animation>::t_counted_ptr<t_open_gate_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:16997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_open_gate_animation* t_counted_ptr<t_open_gate_animation>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:16998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_open_gate_animation>& t_counted_ptr<t_open_gate_animation>::operator=(
    t_open_gate_animation* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:16999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_open_gate_animation* t_counted_ptr<t_open_gate_animation>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_teleport_ability>::t_counted_ptr<t_teleport_ability>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_teleport_ability>& t_counted_ptr<t_teleport_ability>::operator=(t_teleport_ability* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_teleport_ability* t_counted_ptr<t_teleport_ability>::operator t_teleport_ability*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17003
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_teleport_ability* t_counted_ptr<t_teleport_ability>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_flight>::t_counted_ptr<t_play_combat_flight>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17005
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_flight>& t_counted_ptr<t_play_combat_flight>::operator=(
    t_play_combat_flight* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_flight* t_counted_ptr<t_play_combat_flight>::operator t_play_combat_flight*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17007
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_flight* t_counted_ptr<t_play_combat_flight>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17008
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_walk>::t_counted_ptr<t_play_combat_walk>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17009
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_play_combat_walk>& t_counted_ptr<t_play_combat_walk>::operator=(t_play_combat_walk* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17010
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_walk* t_counted_ptr<t_play_combat_walk>::operator t_play_combat_walk*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17011
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_play_combat_walk* t_counted_ptr<t_play_combat_walk>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_direction> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&, t_direction)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> add_2nd_argument(
    t_handler_2<t_combat_creature&, t_direction> arg_0,
    t_direction arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_direction>::~t_handler_2<t_combat_creature&, t_direction>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17018
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>::~t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17019
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> bound_handler(
    t_combat_spell& arg_0,
    void (t_combat_spell::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler add_argument(t_handler_1<t_combat_creature&> arg_0, t_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17021
VA_CHT_1(0x00560410, 0x74)
t_handler_1<t_window*> discard_argument(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_delayed_spell_animation>::t_counted_ptr<t_delayed_spell_animation>(
    t_delayed_spell_animation* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17023
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_combat_creature&> bound_handler(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_window*, t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17024
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_window*> add_2nd_argument(
    t_handler_2<t_window*, t_combat_creature&> arg_0,
    t_combat_creature& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_combat_creature&>::~t_handler_2<t_window*, t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>::~t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17028
VA_CHT_1(0x00562790, 0x74)
bool rational_details::less_than_helper(t_rational<int> const& arg_0, t_rational<int> const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17078
VA_CHT_1_COMPGEN(0x00564590, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache<t_compound_object_model>")

// name:A; map symbol; map:17079
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_compound_object_model>")

// name:A; map symbol; map:17080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::~t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17081
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_resource_cache<t_compound_object_model>")

// name:A; map symbol; map:17082
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_resource_cache<t_compound_object_model>")

// name:A; map symbol; map:17083
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_combat_castle>")

// name:A; map symbol; map:17084
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_combat_castle>")

// name:A; map symbol; map:17085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_castle>>::~t_counted_ptr<t_abstract_cache_data<t_combat_castle>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17086
VA_CHT_1_COMPGEN(0x005645b0, 0x1e, SCALAR_DELETING_DTOR, "t_pointer_cache<t_combat_castle>")

// name:A; map symbol; map:17087
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_pointer_cache<t_combat_castle>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17088
VA_CHT_1(0x00563350, 0xbb)
t_battlefield_cell& t_battlefield_cell::operator=(t_battlefield_cell const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17089
VA_CHT_1_COMPGEN(0x005647c0, 0x1e, SCALAR_DELETING_DTOR, "t_counted_ptr<t_timed_window>")

// name:A; map symbol; map:17090
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_stationary_combat_object>")

// name:A; map symbol; map:17091
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_attackable_obstacle>")

// name:A; map symbol; map:17092
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attack::t_attack(t_attack const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17093
VA_CHT_1(0x005634d0, 0xbb)
t_battlefield_cell::t_battlefield_cell(t_battlefield_cell const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17094
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_battlefield_cell)

// name:A; map symbol; map:17095
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_handler)

// name:A; map symbol; map:17096
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_combat_saveable_object>")

// name:A; map symbol; map:17097
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_model_cache::t_combat_object_model_cache(t_combat_object_model_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17098
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_cached_ptr<t_compound_object_model>")

// name:A; map symbol; map:17099
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_attack)

// name:A; map symbol; map:17100
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_flinch::t_flincher)

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17102
VA_CHT_1(0x005d2580, 0x33)
t_bitmap_group_cache::t_bitmap_group_cache(t_bitmap_group_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_list& t_combat_object_list::operator=(t_combat_object_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_saveable_object>::~t_counted_ptr<t_combat_saveable_object>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17105
VA_CHT_1(0x005d5e50, 0x2e)
t_resource_cache<t_compound_object_model>::t_resource_cache<t_compound_object_model>(
    t_resource_cache<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_flinch::t_flincher::~t_flincher()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17108
VA_CHT_1(0x005d5da0, 0x2e)
t_abstract_cache<t_compound_object_model>::t_abstract_cache<t_compound_object_model>(
    t_abstract_cache<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_combat_saveable_object>::~t_counted_const_ptr<t_combat_saveable_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17112
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_creature&>* t_handler_1<t_combat_creature&>::operator t_handler_base_1<t_combat_creature&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(
    t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_compound_object_model>::t_cached_ptr<t_compound_object_model>(
    t_cached_ptr<t_compound_object_model> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_cursor_mode>::t_handler_1<t_combat_cursor_mode>(
    t_handler_base_1<t_combat_cursor_mode>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_cursor_mode>* t_handler_1<t_combat_cursor_mode>::operator t_handler_base_1<t_combat_cursor_mode>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_map_point_3d, bool>::t_handler_3<t_combat_creature&, t_map_point_3d, bool>(
    t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17123
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>* t_handler_3<t_combat_creature&, t_map_point_3d, bool>::operator t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_map_point_3d>::t_handler_2<t_combat_creature&, t_map_point_3d>(
    t_handler_base_2<t_combat_creature&, t_map_point_3d>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_map_point_3d>* t_handler_2<t_combat_creature&, t_map_point_3d>::operator t_handler_base_2<t_combat_creature&, t_map_point_3d>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>::t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>(
    t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>* t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>::operator t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_direction>::t_handler_2<t_combat_creature&, t_direction>(
    t_handler_base_2<t_combat_creature&, t_direction>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_direction>* t_handler_2<t_combat_creature&, t_direction>::operator t_handler_base_2<t_combat_creature&, t_direction>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_window*, t_combat_creature&>::t_handler_2<t_window*, t_combat_creature&>(
    t_handler_base_2<t_window*, t_combat_creature&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17133
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_combat_creature&>* t_handler_2<t_window*, t_combat_creature&>::operator t_handler_base_2<t_window*, t_combat_creature&>*(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17134
VA_CHT_1(0x00563230, 0x5e)
t_bound_handler_1<t_battlefield, t_combat_creature&>::t_bound_handler_1<t_battlefield, t_combat_creature&>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_battlefield, t_combat_creature&>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17136
VA_CHT_1(0x00563290, 0x5e)
t_bound_handler<t_battlefield>::t_bound_handler<t_battlefield>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(void)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler<t_battlefield>::operator()()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17138
VA_CHT_1(0x005632f0, 0x5e)
t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::t_bound_handler_1<t_battlefield, t_combat_cursor_mode>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_cursor_mode)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::operator()(t_combat_cursor_mode arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_handler<t_combat_cursor_mode>::t_add_handler<t_combat_cursor_mode>(
    t_handler_base_1<t_combat_cursor_mode>* arg_0,
    t_combat_cursor_mode arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_handler<t_combat_cursor_mode>::operator()()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17142
VA_CHT_1(0x00563410, 0x5e)
t_bound_handler_1<t_battlefield, t_window*>::t_bound_handler_1<t_battlefield, t_window*>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_window*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_battlefield, t_window*>::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17144
VA_CHT_1(0x00563470, 0x5e)
t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&, t_map_point_3d, bool)
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17145
VA_CHT_1(0x005647e0, 0x31)
void t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::operator()(
    t_combat_creature& arg_0,
    t_map_point_3d arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>(
    t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>* arg_0,
    bool arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17147
VA_CHT_1(0x00564820, 0x39)
void t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::operator()(
    t_combat_creature& arg_0,
    t_map_point_3d arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17148
VA_CHT_1(0x00563590, 0xcd)
t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>(
    t_handler_base_2<t_combat_creature&, t_map_point_3d>* arg_0,
    t_map_point_3d arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=164860:17149;class=t_add_2nd_handler_1<class t_combat_creature &, struct t_map_point_3d>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d7228,col=500748,offset=8,slot=1,entry=164860; map:17149
VA_CHT_1(0x00564860, 0x34)
void t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17150
VA_CHT_1(0x00563660, 0x5e)
t_bound_handler_1<t_battlefield, int>::t_bound_handler_1<t_battlefield, int>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_battlefield, int>::operator()(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17152
VA_CHT_1(0x005636c0, 0x5e)
t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data)
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17153
VA_CHT_1(0x005648a0, 0x112)
void t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_battlefield::t_missile_strike_data arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17154
VA_CHT_1(0x00563720, 0x166)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>* arg_0,
    t_battlefield::t_missile_strike_data arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17155
VA_CHT_1(0x005649c0, 0x162)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17156
VA_CHT_1(0x005638b0, 0x5e)
t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_window*, t_battlefield::t_end_damage_spell_data)
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17157
VA_CHT_1(0x00564b30, 0xe2)
void t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::operator()(
    t_window* arg_0,
    t_battlefield::t_end_damage_spell_data arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17158
VA_CHT_1(0x00563910, 0x167)
t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>(
    t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>* arg_0,
    t_battlefield::t_end_damage_spell_data arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=164c20:17159;class=t_add_2nd_handler_1<class t_window *, class t_battlefield::t_end_damage_spell_data>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d72c4,col=500ae0,offset=8,slot=1,entry=164c20; map:17159
VA_CHT_1(0x00564c20, 0x128)
void t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17160
VA_CHT_1(0x00563c00, 0x5e)
t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_combat_creature&, t_direction)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::operator()(
    t_combat_creature& arg_0,
    t_direction arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_combat_creature&, t_direction>::t_add_2nd_handler_1<t_combat_creature&, t_direction>(
    t_handler_base_2<t_combat_creature&, t_direction>* arg_0,
    t_direction arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_combat_creature&, t_direction>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_combat_spell, t_combat_creature&>::t_bound_handler_1<t_combat_spell, t_combat_creature&>(
    t_combat_spell& arg_0,
    void (t_combat_spell::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_combat_spell, t_combat_creature&>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_handler<t_combat_creature&>::t_add_handler<t_combat_creature&>(
    t_handler_base_1<t_combat_creature&>* arg_0,
    t_combat_creature& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_handler<t_combat_creature&>::operator()()
{
    // Body unavailable.
}

// name:A; map symbol; map:17168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_handler_1<t_window*>::t_discard_handler_1<t_window*>(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_discard_handler_1<t_window*>::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17170
VA_CHT_1(0x00563eb0, 0x5e)
t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>(
    t_battlefield& arg_0,
    void (t_battlefield::*)(t_window*, t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::operator()(
    t_window* arg_0,
    t_combat_creature& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_window*, t_combat_creature&>::t_add_2nd_handler_1<t_window*, t_combat_creature&>(
    t_handler_base_2<t_window*, t_combat_creature&>* arg_0,
    t_combat_creature& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_window*, t_combat_creature&>::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17174
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_creature&>")

// name:A; map symbol; map:17175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_creature&>")

// name:A; map symbol; map:17176
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler<t_battlefield>")

// name:A; map symbol; map:17177
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_battlefield>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17178
VA_CHT_1_COMPGEN(0x00564d90, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>")

// name:A; map symbol; map:17179
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>")

// name:A; map symbol; map:17180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_cursor_mode>::t_handler_base_1<t_combat_cursor_mode>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17181
VA_CHT_1_COMPGEN(0x00564db0, 0x1e, VECTOR_DELETING_DTOR, "t_add_handler<t_combat_cursor_mode>")

// name:A; map symbol; map:17182
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_handler<t_combat_cursor_mode>")

// name:A; map symbol; map:17183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_window*>")

// name:A; map symbol; map:17184
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_window*>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17185
VA_CHT_1_COMPGEN(0x00564dd0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17186
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17188
VA_CHT_1_COMPGEN(0x00564e10, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17189
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_map_point_3d>::t_handler_base_2<t_combat_creature&, t_map_point_3d>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_map_point_3d>::~t_handler_base_2<t_combat_creature&, t_map_point_3d>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17192
VA_CHT_1(0x00565180, 0x21)
t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::~t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17193
VA_CHT_1_COMPGEN(0x00564e30, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>")

// name:A; map symbol; map:17194
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17195
VA_CHT_1_COMPGEN(0x00564e50, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>")

// name:A; map symbol; map:17196
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>")

// name:A; map symbol; map:17197
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, int>")

// name:A; map symbol; map:17198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, int>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17199
VA_CHT_1_COMPGEN(0x00564e70, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17200
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17202
VA_CHT_1_COMPGEN(0x00564eb0, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17203
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::~t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17206
VA_CHT_1(0x00564ed0, 0x21)
t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::~t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17207
VA_CHT_1_COMPGEN(0x00563890, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>")

// name:A; map symbol; map:17208
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17209
VA_CHT_1_COMPGEN(0x00564f00, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17212
VA_CHT_1_COMPGEN(0x00564f40, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17213
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17214
VA_CHT_1_COMPGEN(0x00564f60, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>")

// name:A; map symbol; map:17215
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>")

// name:A; map symbol; map:17216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_direction>::t_handler_base_2<t_combat_creature&, t_direction>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17217
VA_CHT_1_COMPGEN(0x00564fa0, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_direction>")

// name:A; map symbol; map:17218
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_direction>")

// name:A; map symbol; map:17219
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_combat_spell, t_combat_creature&>")

// name:A; map symbol; map:17220
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_combat_spell, t_combat_creature&>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17221
VA_CHT_1_COMPGEN(0x00564fc0, 0x1e, SCALAR_DELETING_DTOR, "t_add_handler<t_combat_creature&>")

// name:A; map symbol; map:17222
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_handler<t_combat_creature&>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17223
VA_CHT_1_COMPGEN(0x00564fe0, 0x1e, SCALAR_DELETING_DTOR, "t_discard_handler_1<t_window*>")

// name:A; map symbol; map:17224
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_discard_handler_1<t_window*>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17225
VA_CHT_1_COMPGEN(0x00565000, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>")

// name:A; map symbol; map:17226
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>")

// name:A; map symbol; map:17227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_combat_creature&>::t_handler_base_2<t_window*, t_combat_creature&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17228
VA_CHT_1_COMPGEN(0x00565040, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_combat_creature&>")

// name:A; map symbol; map:17229
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_combat_creature&>")

// name:A; map symbol; map:17230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_battlefield, t_combat_creature&>::~t_bound_handler_1<t_battlefield, t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_battlefield>::~t_bound_handler<t_battlefield>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::~t_bound_handler_1<t_battlefield, t_combat_cursor_mode>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_cursor_mode>::~t_handler_base_1<t_combat_cursor_mode>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17234
VA_CHT_1(0x00565060, 0x21)
t_abstract_function_1<void, t_combat_cursor_mode>::~t_abstract_function_1<void, t_combat_cursor_mode>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17235
VA_CHT_1_COMPGEN(0x00564d70, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_1<void, t_combat_cursor_mode>")

// name:A; map symbol; map:17236
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_1<void, t_combat_cursor_mode>")

// name:A; map symbol; map:17237
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_1<t_combat_cursor_mode>")

// name:A; map symbol; map:17238
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<t_combat_cursor_mode>")

// name:A; map symbol; map:17239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_1<void, t_combat_cursor_mode>::t_abstract_function_1<void, t_combat_cursor_mode>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17240
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_handler<t_combat_cursor_mode>::~t_add_handler<t_combat_cursor_mode>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_battlefield, t_window*>::~t_bound_handler_1<t_battlefield, t_window*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::~t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::~t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17244
VA_CHT_1(0x005650f0, 0x21)
t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::~t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17245
VA_CHT_1_COMPGEN(0x00564df0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17246
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17247
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17248
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>")

// name:A; map symbol; map:17249
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::~t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17251
VA_CHT_1_COMPGEN(0x005651b0, 0x1e, SCALAR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_map_point_3d>")

// name:A; map symbol; map:17252
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_map_point_3d>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17253
VA_CHT_1(0x00565120, 0x58)
t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::~t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_battlefield, int>::~t_bound_handler_1<t_battlefield, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::~t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17258
VA_CHT_1(0x00565260, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17259
VA_CHT_1_COMPGEN(0x00564e90, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17260
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17261
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17262
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17265
VA_CHT_1_COMPGEN(0x00565340, 0x1e, VECTOR_DELETING_DTOR, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>")

// name:A; map symbol; map:17266
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17267
VA_CHT_1(0x006adf30, 0x58)
t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::~t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17269
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::~t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17270
VA_CHT_1(0x00565360, 0x21)
t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::~t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17271
VA_CHT_1_COMPGEN(0x00564f20, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17272
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17273
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17274
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::~t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::~t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_direction>::~t_handler_base_2<t_combat_creature&, t_direction>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17279
VA_CHT_1(0x00565440, 0x21)
t_abstract_function_2<void, t_combat_creature&, t_direction>::~t_abstract_function_2<void, t_combat_creature&, t_direction>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17280
VA_CHT_1_COMPGEN(0x00564f80, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_direction>")

// name:A; map symbol; map:17281
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_direction>")

// name:A; map symbol; map:17282
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_direction>")

// name:A; map symbol; map:17283
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_direction>")

// name:A; map symbol; map:17284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_combat_creature&, t_direction>::t_abstract_function_2<void, t_combat_creature&, t_direction>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_combat_creature&, t_direction>::~t_add_2nd_handler_1<t_combat_creature&, t_direction>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_combat_spell, t_combat_creature&>::~t_bound_handler_1<t_combat_spell, t_combat_creature&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_handler<t_combat_creature&>::~t_add_handler<t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_handler_1<t_window*>::~t_discard_handler_1<t_window*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::~t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_combat_creature&>::~t_handler_base_2<t_window*, t_combat_creature&>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17291
VA_CHT_1(0x005655c0, 0x21)
t_abstract_function_2<void, t_window*, t_combat_creature&>::~t_abstract_function_2<void, t_window*, t_combat_creature&>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17292
VA_CHT_1_COMPGEN(0x00565020, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, t_combat_creature&>")

// name:A; map symbol; map:17293
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_window*, t_combat_creature&>")

// name:A; map symbol; map:17294
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, t_combat_creature&>")

// name:A; map symbol; map:17295
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_window*, t_combat_creature&>")

// name:A; map symbol; map:17296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_window*, t_combat_creature&>::t_abstract_function_2<void, t_window*, t_combat_creature&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_window*, t_combat_creature&>::~t_add_2nd_handler_1<t_window*, t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_combat_creature&>::operator()(t_combat_creature& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_combat_cursor_mode>::operator()(t_combat_cursor_mode arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_combat_creature&, t_map_point_3d, bool>::operator()(
    t_combat_creature& arg_0,
    t_map_point_3d arg_1,
    bool arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_combat_creature&, t_map_point_3d>::operator()(
    t_combat_creature& arg_0,
    t_map_point_3d arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_battlefield::t_missile_strike_data arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_window*, t_battlefield::t_end_damage_spell_data>::operator()(
    t_window* arg_0,
    t_battlefield::t_end_damage_spell_data arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_combat_creature&, t_direction>::operator()(
    t_combat_creature& arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_window*, t_combat_creature&>::operator()(t_window* arg_0, t_combat_creature& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_rational<int>::denominator() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_rational<int>::numerator() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17310
VA_CHT_1(0x00561540, 0x73)
void t_rational<int>::normalize()
{
    // Body unavailable.
}

// name:A; map symbol; map:17311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int least_common_multiple(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int greatest_common_divisor(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_combat_object>& t_counted_ptr<t_abstract_combat_object>::operator=(
    t_counted_ptr<t_abstract_combat_object> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17314
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_combat_actor_model>::assign(t_combat_actor_model* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_creature&>* t_counted_ptr<t_handler_base_1<t_combat_creature&>>::operator t_handler_base_1<t_combat_creature&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_creature&>& t_counted_ptr<t_handler_base_1<t_combat_creature&>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_stationary_combat_object>::t_counted_ptr<t_stationary_combat_object>(
    t_counted_ptr<t_stationary_combat_object> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17318
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>::t_counted_ptr<t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>>(
    t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_attackable_obstacle>::t_counted_ptr<t_attackable_obstacle>(
    t_counted_ptr<t_attackable_obstacle> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_timed_window>::t_counted_ptr<t_timed_window>(t_counted_ptr<t_timed_window> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_compound_object_model>::t_cached_ptr<t_compound_object_model>(
    t_compound_object_model* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_compound_object_model>::assign(
    t_compound_object_model* arg_0,
    t_cached_ptr_base const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object_model* t_cached_ptr<t_compound_object_model>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>(
    t_counted_ptr<t_abstract_cache_data<t_compound_object_model>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>(
    t_abstract_cache_data<t_compound_object_model>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_compound_object_model>* t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::operator t_abstract_cache_data<t_compound_object_model>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_compound_object_model>* t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::operator->(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17332
VA_CHT_1(0x00564410, 0x2a)
t_abstract_cache<t_compound_object_model>::t_abstract_cache<t_compound_object_model>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_combat_castle>::t_cached_ptr<t_combat_castle>(
    t_combat_castle* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_combat_castle>::assign(t_combat_castle* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_combat_castle>>::t_counted_ptr<t_abstract_cache_data<t_combat_castle>>(
    t_abstract_cache_data<t_combat_castle>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_castle>* t_counted_ptr<t_abstract_cache_data<t_combat_castle>>::operator t_abstract_cache_data<t_combat_castle>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17337
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_combat_castle>* t_counted_ptr<t_abstract_cache_data<t_combat_castle>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17338
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_combat_castle>::t_abstract_cache<t_combat_castle>(
    t_abstract_cache_data<t_combat_castle>* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17339
VA_CHT_1(0x00565bf0, 0x80)
t_ptr_cache_data<t_combat_castle>::t_ptr_cache_data<t_combat_castle>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_combat_castle>::get_load_cost()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17341
VA_CHT_1(0x00565bc0, 0x25)
void t_abstract_resource_cache_data<t_combat_castle>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:17342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle* t_abstract_resource_cache_data<t_combat_castle>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17343
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_castle>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:17344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_combat_castle>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:17345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_combat_castle>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char const* t_ptr_cache_data<t_combat_castle>::get_prefix() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17347
VA_CHT_1(0x00565c80, 0xc3)
t_combat_castle* t_ptr_cache_data<t_combat_castle>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_combat_castle& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>(
    t_handler_base_1<t_combat_cursor_mode>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_cursor_mode>* t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::operator t_handler_base_1<t_combat_cursor_mode>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_combat_cursor_mode>& t_counted_ptr<t_handler_base_1<t_combat_cursor_mode>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>::t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>(
    t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>* t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>::operator t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>& t_counted_ptr<t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>::t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>(
    t_handler_base_2<t_combat_creature&, t_map_point_3d>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_map_point_3d>* t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>::operator t_handler_base_2<t_combat_creature&, t_map_point_3d>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_map_point_3d>& t_counted_ptr<t_handler_base_2<t_combat_creature&, t_map_point_3d>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>::t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>(
    t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>* t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>::operator t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>& t_counted_ptr<t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17367
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>::t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>(
    t_handler_base_2<t_combat_creature&, t_direction>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17368
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_direction>* t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>::operator t_handler_base_2<t_combat_creature&, t_direction>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_direction>& t_counted_ptr<t_handler_base_2<t_combat_creature&, t_direction>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>::t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>(
    t_handler_base_2<t_window*, t_combat_creature&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_combat_creature&>* t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>::operator t_handler_base_2<t_window*, t_combat_creature&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17372
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_window*, t_combat_creature&>& t_counted_ptr<t_handler_base_2<t_window*, t_combat_creature&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17373
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_castle)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17374
VA_CHT_1_COMPGEN(0x00565d90, 0x1e, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_castle>")

// name:A; map symbol; map:17375
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_combat_castle>")

// name:A; map symbol; map:17376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle::t_combat_castle()
{
    // Body unavailable.
}

// name:A; map symbol; map:17377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle::~t_combat_castle()
{
    // Body unavailable.
}

// name:A; map symbol; map:17378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_combat_castle>::~t_ptr_cache_data<t_combat_castle>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17379
VA_CHT_1(0x00565e40, 0xdd)
t_abstract_resource_cache_data<t_combat_castle>::~t_abstract_resource_cache_data<t_combat_castle>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17380
VA_CHT_1(0x00565b70, 0x49)
t_abstract_cache_data<t_combat_castle>::~t_abstract_cache_data<t_combat_castle>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17381
VA_CHT_1_COMPGEN(0x00565d70, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_combat_castle>")

// name:A; map symbol; map:17382
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_combat_castle>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17383
VA_CHT_1_COMPGEN(0x00565f20, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_castle>")

// name:A; map symbol; map:17384
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_castle>")

// name:A; map symbol; map:17393
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, t_battlefield_cell>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_vertex_map_base, t_battlefield_cell_vertex>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_battlefield_cell_vertex const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>::t_counted_ptr<t_abstract_cache_data<t_compound_object_model>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17396
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_combat_castle>::t_abstract_resource_cache_data<t_combat_castle>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17397
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_castle>::t_owned_ptr<t_combat_castle>(t_combat_castle* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17398
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_combat_castle>::~t_owned_ptr<t_combat_castle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17399
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle* t_owned_ptr<t_combat_castle>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:17400
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_combat_castle>::reset(t_combat_castle* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle& t_owned_ptr<t_combat_castle>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17403
VA_CHT_1(0x005660c0, 0x4c)
t_abstract_cache_data<t_combat_castle>::t_abstract_cache_data<t_combat_castle>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17404
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_castle_item)

// name:A; map symbol; map:17405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle_item::~t_combat_castle_item()
{
    // Body unavailable.
}

// name:A; map symbol; map:17423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: `vcall'{32, {flat}}
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:17424
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>")

// name:A; map symbol; map:17425
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_window*>")

// name:A; map symbol; map:17426
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// name:A; map symbol; map:17427
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>")

// name:A; map symbol; map:17428
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_discard_handler_1<t_window*>")

// name:A; map symbol; map:17429
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_delayed_spell_animation)

// name:A; map symbol; map:17430
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_delayed_spell_animation)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17431
VA_CHT_1_COMPGEN(0x00566600, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17432
VA_CHT_1_COMPGEN(0x00566610, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17433
VA_CHT_1_COMPGEN(0x00566620, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_window*, t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17434
VA_CHT_1_COMPGEN(0x00566630, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17435
VA_CHT_1_COMPGEN(0x00566640, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_direction>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17436
VA_CHT_1_COMPGEN(0x00566650, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17437
VA_CHT_1_COMPGEN(0x00566660, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17438
VA_CHT_1_COMPGEN(0x00566670, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_map_point_3d>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17439
VA_CHT_1_COMPGEN(0x00566680, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17440
VA_CHT_1_COMPGEN(0x00566690, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17441
VA_CHT_1_COMPGEN(0x005666a0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler<t_battlefield>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17442
VA_CHT_1_COMPGEN(0x005666b0, 0x8, VECTOR_DELETING_DTOR, t_delayed_missile_impact)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17443
VA_CHT_1_COMPGEN(0x005666c0, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_combat_castle>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17444
VA_CHT_1_COMPGEN(0x005666d0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_combat_castle>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17445
VA_CHT_1_COMPGEN(0x005666e0, 0x8, VECTOR_DELETING_DTOR, t_unsaved_combat_actor)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17446
VA_CHT_1_COMPGEN(0x005666f0, 0x8, VECTOR_DELETING_DTOR, "t_add_handler<t_combat_cursor_mode>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17447
VA_CHT_1_COMPGEN(0x00566700, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17448
VA_CHT_1_COMPGEN(0x00566710, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17449
VA_CHT_1_COMPGEN(0x00566720, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_1<t_combat_cursor_mode>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17450
VA_CHT_1_COMPGEN(0x00566730, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_1<t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17451
VA_CHT_1_COMPGEN(0x00566740, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_direction>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17452
VA_CHT_1_COMPGEN(0x00566750, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17453
VA_CHT_1_COMPGEN(0x00566760, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_combat_spell, t_combat_creature&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17454
VA_CHT_1_COMPGEN(0x00566770, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_battlefield, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17455
VA_CHT_1_COMPGEN(0x00566780, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17456
VA_CHT_1_COMPGEN(0x00566790, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17457
VA_CHT_1_COMPGEN(0x005667a0, 0x8, VECTOR_DELETING_DTOR, t_battlefield)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17458
VA_CHT_1_COMPGEN(0x005667b0, 0x8, VECTOR_DELETING_DTOR, t_combat_flinch)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17459
VA_CHT_1_COMPGEN(0x005667c0, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17460
VA_CHT_1_COMPGEN(0x005667d0, 0x8, VECTOR_DELETING_DTOR, "t_add_handler<t_combat_creature&>")

// === .rdata (93 symbols) ===

// confidence:A; rtti-name; map:43606
DATA_CHT_1_COMPGEN(0x008d6fe8, "const t_battlefield::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43607
DATA_CHT_1_COMPGEN(0x008d6ff4, "const t_battlefield::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43608
DATA_CHT_1_COMPGEN(0x008d6ffc, "const t_sequence_loader::`vftable'")

// confidence:A; rtti-name; map:43609
DATA_CHT_1_COMPGEN(0x008d701c, "const t_combat_object_model_cache::`vftable'")

// name:A; map symbol; map:43610
DATA_CHT_1(UNACCOUNTED)
// __real@8@40099380000000000000

// name:A; map symbol; map:43611
DATA_CHT_1(UNACCOUNTED)
// __real@8@4004a000000000000000

// name:A; map symbol; map:43612
DATA_CHT_1(UNACCOUNTED)
// __real@8@4003f000000000000000

// confidence:A; rtti-name; map:43613
DATA_CHT_1_COMPGEN(0x008d703c, "const t_unsaved_combat_actor::`vftable'{for `t_combat_object_base'}")

// confidence:B; rtti-order; map:43614
DATA_CHT_1_COMPGEN(0x008d7054, "const t_unsaved_combat_actor::`vftable'{for `t_combat_saveable_object'}")

// confidence:A; rtti-name; map:43615
DATA_CHT_1_COMPGEN(0x008d70e4, "const t_delayed_missile_impact::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43616
DATA_CHT_1_COMPGEN(0x008d70f0, "const t_delayed_missile_impact::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43617
DATA_CHT_1_COMPGEN(0x008d70f8, "const t_handler_base_1<t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43618
DATA_CHT_1_COMPGEN(0x008d7104, "const t_handler_base_1<t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43619
DATA_CHT_1_COMPGEN(0x008d710c, "const t_abstract_function_1<void, t_combat_creature&>::`vftable'")

// confidence:A; rtti-name; map:43620
DATA_CHT_1_COMPGEN(0x008d7118, "const t_combat_flinch::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43621
DATA_CHT_1_COMPGEN(0x008d7124, "const t_combat_flinch::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:43622
DATA_CHT_1_COMPGEN(0x008d712c, "const t_delayed_spell_animation::`vftable'")

// confidence:A; rtti-name; map:43623
DATA_CHT_1_COMPGEN(0x008d713c, "const t_delayed_spell_animation::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43624
DATA_CHT_1_COMPGEN(0x008d7148, "const t_delayed_spell_animation::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43625
DATA_CHT_1(UNACCOUNTED)
// __real@8@4005c800000000000000

// confidence:A; rtti-name; map:43626
DATA_CHT_1_COMPGEN(0x008d7014, "const t_abstract_cache<t_compound_object_model>::`vftable'")

// confidence:A; rtti-name; map:43627
DATA_CHT_1_COMPGEN(0x008d715c, "const t_resource_cache<t_compound_object_model>::`vftable'")

// confidence:A; rtti-name; map:43628
DATA_CHT_1_COMPGEN(0x008d6fe0, "const t_abstract_cache<t_combat_castle>::`vftable'")

// confidence:A; rtti-name; map:43629
DATA_CHT_1_COMPGEN(0x008d6fa4, "const t_pointer_cache<t_combat_castle>::`vftable'")

// confidence:A; rtti-name; map:43630
DATA_CHT_1_COMPGEN(0x008d7164, "const t_bound_handler_1<t_battlefield, t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43631
DATA_CHT_1_COMPGEN(0x008d7170, "const t_bound_handler_1<t_battlefield, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43632
DATA_CHT_1_COMPGEN(0x008d7178, "const t_bound_handler<t_battlefield>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43633
DATA_CHT_1_COMPGEN(0x008d7184, "const t_bound_handler<t_battlefield>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43634
DATA_CHT_1_COMPGEN(0x008d718c, "const t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`vftable'{for `t_abstract_function_1<void, t_combat_cursor_mode>'}")

// confidence:B; rtti-order; map:43635
DATA_CHT_1_COMPGEN(0x008d7198, "const t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43636
DATA_CHT_1_COMPGEN(0x008d71ac, "const t_add_handler<t_combat_cursor_mode>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43637
DATA_CHT_1_COMPGEN(0x008d71b8, "const t_add_handler<t_combat_cursor_mode>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43638
DATA_CHT_1_COMPGEN(0x008d71c0, "const t_bound_handler_1<t_battlefield, t_window*>::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43639
DATA_CHT_1_COMPGEN(0x008d71cc, "const t_bound_handler_1<t_battlefield, t_window*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43640
DATA_CHT_1_COMPGEN(0x008d71d4, "const t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>'}")

// confidence:B; rtti-order; map:43641
DATA_CHT_1_COMPGEN(0x008d71e0, "const t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43642
DATA_CHT_1_COMPGEN(0x008d71f4, "const t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>'}")

// confidence:B; rtti-order; map:43643
DATA_CHT_1_COMPGEN(0x008d7200, "const t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43644
DATA_CHT_1_COMPGEN(0x008d7228, "const t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43645
DATA_CHT_1_COMPGEN(0x008d7234, "const t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43646
DATA_CHT_1_COMPGEN(0x008d723c, "const t_bound_handler_1<t_battlefield, int>::`vftable'{for `t_abstract_function_1<void, int>'}")

// confidence:B; rtti-order; map:43647
DATA_CHT_1_COMPGEN(0x008d7248, "const t_bound_handler_1<t_battlefield, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43648
DATA_CHT_1_COMPGEN(0x008d7250, "const t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>'}")

// confidence:B; rtti-order; map:43649
DATA_CHT_1_COMPGEN(0x008d725c, "const t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43650
DATA_CHT_1_COMPGEN(0x008d7270, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:43651
DATA_CHT_1_COMPGEN(0x008d727c, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43652
DATA_CHT_1_COMPGEN(0x008d72a4, "const t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>'}")

// confidence:B; rtti-order; map:43653
DATA_CHT_1_COMPGEN(0x008d72b0, "const t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43654
DATA_CHT_1_COMPGEN(0x008d72c4, "const t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43655
DATA_CHT_1_COMPGEN(0x008d72d0, "const t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43656
DATA_CHT_1_COMPGEN(0x008d72d8, "const t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_direction>'}")

// confidence:B; rtti-order; map:43657
DATA_CHT_1_COMPGEN(0x008d72e4, "const t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43658
DATA_CHT_1_COMPGEN(0x008d72f8, "const t_add_2nd_handler_1<t_combat_creature&, t_direction>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43659
DATA_CHT_1_COMPGEN(0x008d7304, "const t_add_2nd_handler_1<t_combat_creature&, t_direction>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43660
DATA_CHT_1_COMPGEN(0x008d730c, "const t_bound_handler_1<t_combat_spell, t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43661
DATA_CHT_1_COMPGEN(0x008d7318, "const t_bound_handler_1<t_combat_spell, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43662
DATA_CHT_1_COMPGEN(0x008d7320, "const t_add_handler<t_combat_creature&>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43663
DATA_CHT_1_COMPGEN(0x008d732c, "const t_add_handler<t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43664
DATA_CHT_1_COMPGEN(0x008d7334, "const t_discard_handler_1<t_window*>::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43665
DATA_CHT_1_COMPGEN(0x008d7340, "const t_discard_handler_1<t_window*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43666
DATA_CHT_1_COMPGEN(0x008d7348, "const t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`vftable'{for `t_abstract_function_2<void, t_window*, t_combat_creature&>'}")

// confidence:B; rtti-order; map:43667
DATA_CHT_1_COMPGEN(0x008d7354, "const t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43668
DATA_CHT_1_COMPGEN(0x008d7368, "const t_add_2nd_handler_1<t_window*, t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43669
DATA_CHT_1_COMPGEN(0x008d7374, "const t_add_2nd_handler_1<t_window*, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43670
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_combat_cursor_mode>::`vftable'{for `t_abstract_function_1<void, t_combat_cursor_mode>'}")

// name:A; map symbol; map:43671
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_combat_cursor_mode>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43672
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>'}")

// name:A; map symbol; map:43673
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43674
DATA_CHT_1_COMPGEN(0x008d7208, "const t_handler_base_2<t_combat_creature&, t_map_point_3d>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>'}")

// confidence:B; rtti-order; map:43675
DATA_CHT_1_COMPGEN(0x008d7214, "const t_handler_base_2<t_combat_creature&, t_map_point_3d>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43676
DATA_CHT_1_COMPGEN(0x008d721c, "const t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`vftable'")

// name:A; map symbol; map:43677
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>'}")

// name:A; map symbol; map:43678
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43679
DATA_CHT_1_COMPGEN(0x008d7284, "const t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:43680
DATA_CHT_1_COMPGEN(0x008d7290, "const t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43681
DATA_CHT_1_COMPGEN(0x008d7298, "const t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`vftable'")

// name:A; map symbol; map:43682
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>'}")

// name:A; map symbol; map:43683
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43684
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_direction>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_direction>'}")

// name:A; map symbol; map:43685
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_direction>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43686
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_combat_creature&>::`vftable'{for `t_abstract_function_2<void, t_window*, t_combat_creature&>'}")

// name:A; map symbol; map:43687
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43688
DATA_CHT_1_COMPGEN(0x008d71a0, "const t_abstract_function_1<void, t_combat_cursor_mode>::`vftable'")

// confidence:A; rtti-name; map:43689
DATA_CHT_1_COMPGEN(0x008d71e8, "const t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`vftable'")

// confidence:A; rtti-name; map:43690
DATA_CHT_1_COMPGEN(0x008d7264, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`vftable'")

// confidence:A; rtti-name; map:43691
DATA_CHT_1_COMPGEN(0x008d72b8, "const t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`vftable'")

// confidence:A; rtti-name; map:43692
DATA_CHT_1_COMPGEN(0x008d72ec, "const t_abstract_function_2<void, t_combat_creature&, t_direction>::`vftable'")

// confidence:A; rtti-name; map:43693
DATA_CHT_1_COMPGEN(0x008d735c, "const t_abstract_function_2<void, t_window*, t_combat_creature&>::`vftable'")

// confidence:A; rtti-name; map:43694
DATA_CHT_1_COMPGEN(0x008d6fac, "const t_ptr_cache_data<t_combat_castle>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43695
DATA_CHT_1_COMPGEN(0x008d6fc4, "const t_ptr_cache_data<t_combat_castle>::`vftable'{for `t_abstract_cache_data<t_combat_castle>'}")

// confidence:A; rtti-name; map:43696
DATA_CHT_1_COMPGEN(0x008d7394, "const t_abstract_resource_cache_data<t_combat_castle>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43697
DATA_CHT_1_COMPGEN(0x008d73ac, "const t_abstract_resource_cache_data<t_combat_castle>::`vftable'{for `t_abstract_cache_data<t_combat_castle>'}")

// confidence:A; rtti-name; map:43698
DATA_CHT_1_COMPGEN(0x008d737c, "const t_abstract_cache_data<t_combat_castle>::`vftable'")

// === .rdata$r (259 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_battlefield@@;vft=4d6fe8;col=4ffef0;td=593e14;chd=4ffee0;offset=8;cdOffset=0;validated-hierarchy; map:49870
DATA_CHT_1_COMPGEN(0x008ffef0, "const t_battlefield::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4ffe9c;pmd=37,-1,0;attributes=9;validated-hierarchy-link; map:49871
DATA_CHT_1_COMPGEN(0x008ffe9c, "t_uncopyable::`RTTI Base Class Descriptor at (37, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_battlefield@@;bcd=4ffeb4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49872
DATA_CHT_1_COMPGEN(0x008ffeb4, "t_battlefield::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_battlefield@@;vft=4d6fe8;col=4ffef0;td=593e14;chd=4ffee0;offset=8;cdOffset=0;validated-hierarchy; map:49873
DATA_CHT_1_COMPGEN(0x008ffecc, "t_battlefield::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_battlefield@@;vft=4d6fe8;col=4ffef0;td=593e14;chd=4ffee0;offset=8;cdOffset=0;validated-hierarchy; map:49874
DATA_CHT_1_COMPGEN(0x008ffee0, "t_battlefield::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49875
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_battlefield::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_thread@@;bcd=4ffe28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49876
DATA_CHT_1_COMPGEN(0x008ffe28, "t_thread::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sequence_loader@@;bcd=4ffe40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49877
DATA_CHT_1_COMPGEN(0x008ffe40, "t_sequence_loader::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sequence_loader@@;vft=4d6ffc;col=4ffe74;td=593df4;chd=4ffe64;offset=0;cdOffset=0;validated-hierarchy; map:49878
DATA_CHT_1_COMPGEN(0x008ffe58, "t_sequence_loader::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sequence_loader@@;vft=4d6ffc;col=4ffe74;td=593df4;chd=4ffe64;offset=0;cdOffset=0;validated-hierarchy; map:49879
DATA_CHT_1_COMPGEN(0x008ffe64, "t_sequence_loader::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sequence_loader@@;vft=4d6ffc;col=4ffe74;td=593df4;chd=4ffe64;offset=0;cdOffset=0;validated-hierarchy; map:49880
DATA_CHT_1_COMPGEN(0x008ffe74, "const t_sequence_loader::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_compound_object_model@@@@;bcd=4fff04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49881
DATA_CHT_1_COMPGEN(0x008fff04, "t_abstract_cache<t_compound_object_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_resource_cache@Vt_compound_object_model@@@@;bcd=4fff48;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49882
DATA_CHT_1_COMPGEN(0x008fff48, "t_resource_cache<t_compound_object_model>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_model_cache@@;bcd=4fff60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49883
DATA_CHT_1_COMPGEN(0x008fff60, "t_combat_object_model_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_object_model_cache@@;vft=4d701c;col=4fff98;td=593ea8;chd=4fff88;offset=0;cdOffset=0;validated-hierarchy; map:49884
DATA_CHT_1_COMPGEN(0x008fff78, "t_combat_object_model_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_object_model_cache@@;vft=4d701c;col=4fff98;td=593ea8;chd=4fff88;offset=0;cdOffset=0;validated-hierarchy; map:49885
DATA_CHT_1_COMPGEN(0x008fff88, "t_combat_object_model_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_object_model_cache@@;vft=4d701c;col=4fff98;td=593ea8;chd=4fff88;offset=0;cdOffset=0;validated-hierarchy; map:49886
DATA_CHT_1_COMPGEN(0x008fff98, "const t_combat_object_model_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_unsaved_combat_actor@@;vft=4d703c;col=50001c;td=593ff4;chd=50000c;offset=8;cdOffset=0;validated-hierarchy; map:49887
DATA_CHT_1_COMPGEN(0x0090001c, "const t_unsaved_combat_actor::`RTTI Complete Object Locator'{for `t_combat_object_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_actor@@;bcd=4fffc0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49888
DATA_CHT_1_COMPGEN(0x008fffc0, "t_combat_actor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_unsaved_combat_actor@@;bcd=4fffd8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49889
DATA_CHT_1_COMPGEN(0x008fffd8, "t_unsaved_combat_actor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_unsaved_combat_actor@@;vft=4d703c;col=50001c;td=593ff4;chd=50000c;offset=8;cdOffset=0;validated-hierarchy; map:49890
DATA_CHT_1_COMPGEN(0x008ffff0, "t_unsaved_combat_actor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_unsaved_combat_actor@@;vft=4d703c;col=50001c;td=593ff4;chd=50000c;offset=8;cdOffset=0;validated-hierarchy; map:49891
DATA_CHT_1_COMPGEN(0x0090000c, "t_unsaved_combat_actor::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49892
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_unsaved_combat_actor::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_delayed_missile_impact@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d70e4;col=5000b0;td=5940a8;chd=5000a0;offset=8;cdOffset=0;validated-hierarchy; map:49893
DATA_CHT_1_COMPGEN(0x009000b0, "const t_delayed_missile_impact::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;bcd=500044;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49894
DATA_CHT_1_COMPGEN(0x00900044, "t_abstract_function_1<void, t_combat_creature&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_1@AAVt_combat_creature@@@@;bcd=50005c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49895
DATA_CHT_1_COMPGEN(0x0090005c, "t_handler_base_1<t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_delayed_missile_impact@?%C:\Work\game\battlefield.cpp157044527@@;bcd=500074;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49896
DATA_CHT_1_COMPGEN(0x00900074, "t_delayed_missile_impact::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_delayed_missile_impact@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d70e4;col=5000b0;td=5940a8;chd=5000a0;offset=8;cdOffset=0;validated-hierarchy; map:49897
DATA_CHT_1_COMPGEN(0x0090008c, "t_delayed_missile_impact::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_delayed_missile_impact@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d70e4;col=5000b0;td=5940a8;chd=5000a0;offset=8;cdOffset=0;validated-hierarchy; map:49898
DATA_CHT_1_COMPGEN(0x009000a0, "t_delayed_missile_impact::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49899
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_delayed_missile_impact::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_1@AAVt_combat_creature@@@@;vft=4d70f8;col=50013c;td=594070;chd=50012c;offset=8;cdOffset=0;validated-hierarchy; map:49900
DATA_CHT_1_COMPGEN(0x0090013c, "const t_handler_base_1<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_1@AAVt_combat_creature@@@@;vft=4d70f8;col=50013c;td=594070;chd=50012c;offset=8;cdOffset=0;validated-hierarchy; map:49901
DATA_CHT_1_COMPGEN(0x0090011c, "t_handler_base_1<t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_1@AAVt_combat_creature@@@@;vft=4d70f8;col=50013c;td=594070;chd=50012c;offset=8;cdOffset=0;validated-hierarchy; map:49902
DATA_CHT_1_COMPGEN(0x0090012c, "t_handler_base_1<t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49903
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;bcd=5000c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49904
DATA_CHT_1_COMPGEN(0x009000c4, "t_abstract_function_1<void, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;vft=4d710c;col=5000f4;td=594030;chd=5000e4;offset=0;cdOffset=0;validated-hierarchy; map:49905
DATA_CHT_1_COMPGEN(0x009000dc, "t_abstract_function_1<void, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;vft=4d710c;col=5000f4;td=594030;chd=5000e4;offset=0;cdOffset=0;validated-hierarchy; map:49906
DATA_CHT_1_COMPGEN(0x009000e4, "t_abstract_function_1<void, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;vft=4d710c;col=5000f4;td=594030;chd=5000e4;offset=0;cdOffset=0;validated-hierarchy; map:49907
DATA_CHT_1_COMPGEN(0x009000f4, "const t_abstract_function_1<void, t_combat_creature&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_flinch@@;vft=4d7118;col=5001a0;td=5940f8;chd=500190;offset=8;cdOffset=0;validated-hierarchy; map:49908
DATA_CHT_1_COMPGEN(0x009001a0, "const t_combat_flinch::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_flinch@@;bcd=500164;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49909
DATA_CHT_1_COMPGEN(0x00900164, "t_combat_flinch::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_flinch@@;vft=4d7118;col=5001a0;td=5940f8;chd=500190;offset=8;cdOffset=0;validated-hierarchy; map:49910
DATA_CHT_1_COMPGEN(0x0090017c, "t_combat_flinch::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_flinch@@;vft=4d7118;col=5001a0;td=5940f8;chd=500190;offset=8;cdOffset=0;validated-hierarchy; map:49911
DATA_CHT_1_COMPGEN(0x00900190, "t_combat_flinch::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49912
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_flinch::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49913
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_delayed_spell_animation::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_delayed_spell_animation@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d713c;col=5001c8;td=594270;chd=500244;offset=8;cdOffset=0;validated-hierarchy; map:49914
DATA_CHT_1_COMPGEN(0x009001c8, "const t_delayed_spell_animation::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_action_message_displayer@@;bcd=5001dc;pmd=12,-1,0;attributes=0;validated-hierarchy-link; map:49915
DATA_CHT_1_COMPGEN(0x009001dc, "t_combat_action_message_displayer::`RTTI Base Class Descriptor at (12, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_animation@@;bcd=5001f4;pmd=12,-1,0;attributes=0;validated-hierarchy-link; map:49916
DATA_CHT_1_COMPGEN(0x009001f4, "t_counted_animation::`RTTI Base Class Descriptor at (12, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_delayed_spell_animation@?%C:\Work\game\battlefield.cpp157044527@@;bcd=50020c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49917
DATA_CHT_1_COMPGEN(0x0090020c, "t_delayed_spell_animation::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_delayed_spell_animation@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d713c;col=5001c8;td=594270;chd=500244;offset=8;cdOffset=0;validated-hierarchy; map:49918
DATA_CHT_1_COMPGEN(0x00900224, "t_delayed_spell_animation::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_delayed_spell_animation@?%C:\Work\game\battlefield.cpp157044527@@;vft=4d713c;col=5001c8;td=594270;chd=500244;offset=8;cdOffset=0;validated-hierarchy; map:49919
DATA_CHT_1_COMPGEN(0x00900244, "t_delayed_spell_animation::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49920
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_delayed_spell_animation::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_compound_object_model@@@@;vft=4d7014;col=4fff34;td=593e30;chd=4fff24;offset=0;cdOffset=0;validated-hierarchy; map:49921
DATA_CHT_1_COMPGEN(0x008fff1c, "t_abstract_cache<t_compound_object_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_compound_object_model@@@@;vft=4d7014;col=4fff34;td=593e30;chd=4fff24;offset=0;cdOffset=0;validated-hierarchy; map:49922
DATA_CHT_1_COMPGEN(0x008fff24, "t_abstract_cache<t_compound_object_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_compound_object_model@@@@;vft=4d7014;col=4fff34;td=593e30;chd=4fff24;offset=0;cdOffset=0;validated-hierarchy; map:49923
DATA_CHT_1_COMPGEN(0x008fff34, "const t_abstract_cache<t_compound_object_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_resource_cache@Vt_compound_object_model@@@@;vft=4d715c;col=500284;td=593e6c;chd=500274;offset=0;cdOffset=0;validated-hierarchy; map:49924
DATA_CHT_1_COMPGEN(0x00900268, "t_resource_cache<t_compound_object_model>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_resource_cache@Vt_compound_object_model@@@@;vft=4d715c;col=500284;td=593e6c;chd=500274;offset=0;cdOffset=0;validated-hierarchy; map:49925
DATA_CHT_1_COMPGEN(0x00900274, "t_resource_cache<t_compound_object_model>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_resource_cache@Vt_compound_object_model@@@@;vft=4d715c;col=500284;td=593e6c;chd=500274;offset=0;cdOffset=0;validated-hierarchy; map:49926
DATA_CHT_1_COMPGEN(0x00900284, "const t_resource_cache<t_compound_object_model>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_combat_castle@@@@;bcd=4ffd9c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49927
DATA_CHT_1_COMPGEN(0x008ffd9c, "t_abstract_cache<t_combat_castle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_castle@@@@;vft=4d6fe0;col=4ffe14;td=593d38;chd=4ffe04;offset=0;cdOffset=0;validated-hierarchy; map:49928
DATA_CHT_1_COMPGEN(0x008ffdfc, "t_abstract_cache<t_combat_castle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_castle@@@@;vft=4d6fe0;col=4ffe14;td=593d38;chd=4ffe04;offset=0;cdOffset=0;validated-hierarchy; map:49929
DATA_CHT_1_COMPGEN(0x008ffe04, "t_abstract_cache<t_combat_castle>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_combat_castle@@@@;vft=4d6fe0;col=4ffe14;td=593d38;chd=4ffe04;offset=0;cdOffset=0;validated-hierarchy; map:49930
DATA_CHT_1_COMPGEN(0x008ffe14, "const t_abstract_cache<t_combat_castle>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_combat_castle@@@@;bcd=4ffdb4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49931
DATA_CHT_1_COMPGEN(0x008ffdb4, "t_pointer_cache<t_combat_castle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_castle@@@@;vft=4d6fa4;col=4ffde8;td=593d6c;chd=4ffdd8;offset=0;cdOffset=0;validated-hierarchy; map:49932
DATA_CHT_1_COMPGEN(0x008ffdcc, "t_pointer_cache<t_combat_castle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_castle@@@@;vft=4d6fa4;col=4ffde8;td=593d6c;chd=4ffdd8;offset=0;cdOffset=0;validated-hierarchy; map:49933
DATA_CHT_1_COMPGEN(0x008ffdd8, "t_pointer_cache<t_combat_castle>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_combat_castle@@@@;vft=4d6fa4;col=4ffde8;td=593d6c;chd=4ffdd8;offset=0;cdOffset=0;validated-hierarchy; map:49934
DATA_CHT_1_COMPGEN(0x008ffde8, "const t_pointer_cache<t_combat_castle>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@AAVt_combat_creature@@@@;vft=4d7164;col=5002e8;td=5944b0;chd=5002d8;offset=8;cdOffset=0;validated-hierarchy; map:49935
DATA_CHT_1_COMPGEN(0x009002e8, "const t_bound_handler_1<t_battlefield, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@AAVt_combat_creature@@@@;bcd=5002ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49936
DATA_CHT_1_COMPGEN(0x009002ac, "t_bound_handler_1<t_battlefield, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@AAVt_combat_creature@@@@;vft=4d7164;col=5002e8;td=5944b0;chd=5002d8;offset=8;cdOffset=0;validated-hierarchy; map:49937
DATA_CHT_1_COMPGEN(0x009002c4, "t_bound_handler_1<t_battlefield, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@AAVt_combat_creature@@@@;vft=4d7164;col=5002e8;td=5944b0;chd=5002d8;offset=8;cdOffset=0;validated-hierarchy; map:49938
DATA_CHT_1_COMPGEN(0x009002d8, "t_bound_handler_1<t_battlefield, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49939
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_battlefield, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler@Vt_battlefield@@@@;vft=4d7178;col=50034c;td=5944fc;chd=50033c;offset=8;cdOffset=0;validated-hierarchy; map:49940
DATA_CHT_1_COMPGEN(0x0090034c, "const t_bound_handler<t_battlefield>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler@Vt_battlefield@@@@;bcd=500310;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49941
DATA_CHT_1_COMPGEN(0x00900310, "t_bound_handler<t_battlefield>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler@Vt_battlefield@@@@;vft=4d7178;col=50034c;td=5944fc;chd=50033c;offset=8;cdOffset=0;validated-hierarchy; map:49942
DATA_CHT_1_COMPGEN(0x00900328, "t_bound_handler<t_battlefield>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler@Vt_battlefield@@@@;vft=4d7178;col=50034c;td=5944fc;chd=50033c;offset=8;cdOffset=0;validated-hierarchy; map:49943
DATA_CHT_1_COMPGEN(0x0090033c, "t_bound_handler<t_battlefield>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49944
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler<t_battlefield>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@W4t_combat_cursor_mode@@@@;vft=4d718c;col=500424;td=5945b0;chd=500414;offset=8;cdOffset=0;validated-hierarchy; map:49945
DATA_CHT_1_COMPGEN(0x00900424, "const t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_cursor_mode>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;bcd=5003b8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49946
DATA_CHT_1_COMPGEN(0x009003b8, "t_abstract_function_1<void, t_combat_cursor_mode>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_1@W4t_combat_cursor_mode@@@@;bcd=5003d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49947
DATA_CHT_1_COMPGEN(0x009003d0, "t_handler_base_1<t_combat_cursor_mode>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@W4t_combat_cursor_mode@@@@;bcd=5003e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49948
DATA_CHT_1_COMPGEN(0x009003e8, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@W4t_combat_cursor_mode@@@@;vft=4d718c;col=500424;td=5945b0;chd=500414;offset=8;cdOffset=0;validated-hierarchy; map:49949
DATA_CHT_1_COMPGEN(0x00900400, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@W4t_combat_cursor_mode@@@@;vft=4d718c;col=500424;td=5945b0;chd=500414;offset=8;cdOffset=0;validated-hierarchy; map:49950
DATA_CHT_1_COMPGEN(0x00900414, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49951
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_battlefield, t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_handler@W4t_combat_cursor_mode@@@@;vft=4d71ac;col=500488;td=5945fc;chd=500478;offset=8;cdOffset=0;validated-hierarchy; map:49952
DATA_CHT_1_COMPGEN(0x00900488, "const t_add_handler<t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_handler@W4t_combat_cursor_mode@@@@;bcd=50044c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49953
DATA_CHT_1_COMPGEN(0x0090044c, "t_add_handler<t_combat_cursor_mode>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_handler@W4t_combat_cursor_mode@@@@;vft=4d71ac;col=500488;td=5945fc;chd=500478;offset=8;cdOffset=0;validated-hierarchy; map:49954
DATA_CHT_1_COMPGEN(0x00900464, "t_add_handler<t_combat_cursor_mode>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_handler@W4t_combat_cursor_mode@@@@;vft=4d71ac;col=500488;td=5945fc;chd=500478;offset=8;cdOffset=0;validated-hierarchy; map:49955
DATA_CHT_1_COMPGEN(0x00900478, "t_add_handler<t_combat_cursor_mode>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49956
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_handler<t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@PAVt_window@@@@;vft=4d71c0;col=5004ec;td=594638;chd=5004dc;offset=8;cdOffset=0;validated-hierarchy; map:49957
DATA_CHT_1_COMPGEN(0x009004ec, "const t_bound_handler_1<t_battlefield, t_window*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@PAVt_window@@@@;bcd=5004b0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49958
DATA_CHT_1_COMPGEN(0x009004b0, "t_bound_handler_1<t_battlefield, t_window*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@PAVt_window@@@@;vft=4d71c0;col=5004ec;td=594638;chd=5004dc;offset=8;cdOffset=0;validated-hierarchy; map:49959
DATA_CHT_1_COMPGEN(0x009004c8, "t_bound_handler_1<t_battlefield, t_window*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@PAVt_window@@@@;vft=4d71c0;col=5004ec;td=594638;chd=5004dc;offset=8;cdOffset=0;validated-hierarchy; map:49960
DATA_CHT_1_COMPGEN(0x009004dc, "t_bound_handler_1<t_battlefield, t_window*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49961
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_battlefield, t_window*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71d4;col=5005c4;td=594720;chd=5005b4;offset=8;cdOffset=0;validated-hierarchy; map:49962
DATA_CHT_1_COMPGEN(0x009005c4, "const t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;bcd=500558;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49963
DATA_CHT_1_COMPGEN(0x00900558, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;bcd=500570;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49964
DATA_CHT_1_COMPGEN(0x00900570, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;bcd=500588;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49965
DATA_CHT_1_COMPGEN(0x00900588, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71d4;col=5005c4;td=594720;chd=5005b4;offset=8;cdOffset=0;validated-hierarchy; map:49966
DATA_CHT_1_COMPGEN(0x009005a0, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71d4;col=5005c4;td=594720;chd=5005b4;offset=8;cdOffset=0;validated-hierarchy; map:49967
DATA_CHT_1_COMPGEN(0x009005b4, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49968
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71f4;col=5006e4;td=594820;chd=5006d4;offset=8;cdOffset=0;validated-hierarchy; map:49969
DATA_CHT_1_COMPGEN(0x009006e4, "const t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;bcd=500678;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49970
DATA_CHT_1_COMPGEN(0x00900678, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@Ut_map_point_3d@@@@;bcd=500690;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49971
DATA_CHT_1_COMPGEN(0x00900690, "t_handler_base_2<t_combat_creature&, t_map_point_3d>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;bcd=5006a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49972
DATA_CHT_1_COMPGEN(0x009006a8, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71f4;col=5006e4;td=594820;chd=5006d4;offset=8;cdOffset=0;validated-hierarchy; map:49973
DATA_CHT_1_COMPGEN(0x009006c0, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71f4;col=5006e4;td=594820;chd=5006d4;offset=8;cdOffset=0;validated-hierarchy; map:49974
DATA_CHT_1_COMPGEN(0x009006d4, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49975
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7228;col=500748;td=594870;chd=500738;offset=8;cdOffset=0;validated-hierarchy; map:49976
DATA_CHT_1_COMPGEN(0x00900748, "const t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@Ut_map_point_3d@@@@;bcd=50070c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49977
DATA_CHT_1_COMPGEN(0x0090070c, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7228;col=500748;td=594870;chd=500738;offset=8;cdOffset=0;validated-hierarchy; map:49978
DATA_CHT_1_COMPGEN(0x00900724, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7228;col=500748;td=594870;chd=500738;offset=8;cdOffset=0;validated-hierarchy; map:49979
DATA_CHT_1_COMPGEN(0x00900738, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49980
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@H@@;vft=4d723c;col=5007ac;td=5948bc;chd=50079c;offset=8;cdOffset=0;validated-hierarchy; map:49981
DATA_CHT_1_COMPGEN(0x009007ac, "const t_bound_handler_1<t_battlefield, int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@H@@;bcd=500770;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49982
DATA_CHT_1_COMPGEN(0x00900770, "t_bound_handler_1<t_battlefield, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@H@@;vft=4d723c;col=5007ac;td=5948bc;chd=50079c;offset=8;cdOffset=0;validated-hierarchy; map:49983
DATA_CHT_1_COMPGEN(0x00900788, "t_bound_handler_1<t_battlefield, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@H@@;vft=4d723c;col=5007ac;td=5948bc;chd=50079c;offset=8;cdOffset=0;validated-hierarchy; map:49984
DATA_CHT_1_COMPGEN(0x0090079c, "t_bound_handler_1<t_battlefield, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49985
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_battlefield, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@1@@@;vft=4d7250;col=500884;td=5949f8;chd=500874;offset=8;cdOffset=0;validated-hierarchy; map:49986
DATA_CHT_1_COMPGEN(0x00900884, "const t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;bcd=500818;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49987
DATA_CHT_1_COMPGEN(0x00900818, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;bcd=500830;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49988
DATA_CHT_1_COMPGEN(0x00900830, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@1@@@;bcd=500848;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49989
DATA_CHT_1_COMPGEN(0x00900848, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@1@@@;vft=4d7250;col=500884;td=5949f8;chd=500874;offset=8;cdOffset=0;validated-hierarchy; map:49990
DATA_CHT_1_COMPGEN(0x00900860, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@1@@@;vft=4d7250;col=500884;td=5949f8;chd=500874;offset=8;cdOffset=0;validated-hierarchy; map:49991
DATA_CHT_1_COMPGEN(0x00900874, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49992
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7270;col=5009a4;td=594b40;chd=500994;offset=8;cdOffset=0;validated-hierarchy; map:49993
DATA_CHT_1_COMPGEN(0x009009a4, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;bcd=500938;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49994
DATA_CHT_1_COMPGEN(0x00900938, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;bcd=500950;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49995
DATA_CHT_1_COMPGEN(0x00900950, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;bcd=500968;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49996
DATA_CHT_1_COMPGEN(0x00900968, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7270;col=5009a4;td=594b40;chd=500994;offset=8;cdOffset=0;validated-hierarchy; map:49997
DATA_CHT_1_COMPGEN(0x00900980, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7270;col=5009a4;td=594b40;chd=500994;offset=8;cdOffset=0;validated-hierarchy; map:49998
DATA_CHT_1_COMPGEN(0x00900994, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49999
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@Vt_end_damage_spell_data@1@@@;vft=4d72a4;col=500a7c;td=594c80;chd=500a6c;offset=8;cdOffset=0;validated-hierarchy; map:50000
DATA_CHT_1_COMPGEN(0x00900a7c, "const t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;bcd=500a10;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50001
DATA_CHT_1_COMPGEN(0x00900a10, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;bcd=500a28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50002
DATA_CHT_1_COMPGEN(0x00900a28, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@Vt_end_damage_spell_data@1@@@;bcd=500a40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50003
DATA_CHT_1_COMPGEN(0x00900a40, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@Vt_end_damage_spell_data@1@@@;vft=4d72a4;col=500a7c;td=594c80;chd=500a6c;offset=8;cdOffset=0;validated-hierarchy; map:50004
DATA_CHT_1_COMPGEN(0x00900a58, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@Vt_end_damage_spell_data@1@@@;vft=4d72a4;col=500a7c;td=594c80;chd=500a6c;offset=8;cdOffset=0;validated-hierarchy; map:50005
DATA_CHT_1_COMPGEN(0x00900a6c, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50006
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72c4;col=500ae0;td=594ce0;chd=500ad0;offset=8;cdOffset=0;validated-hierarchy; map:50007
DATA_CHT_1_COMPGEN(0x00900ae0, "const t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;bcd=500aa4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50008
DATA_CHT_1_COMPGEN(0x00900aa4, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72c4;col=500ae0;td=594ce0;chd=500ad0;offset=8;cdOffset=0;validated-hierarchy; map:50009
DATA_CHT_1_COMPGEN(0x00900abc, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72c4;col=500ae0;td=594ce0;chd=500ad0;offset=8;cdOffset=0;validated-hierarchy; map:50010
DATA_CHT_1_COMPGEN(0x00900ad0, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50011
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72d8;col=500bb8;td=594dd8;chd=500ba8;offset=8;cdOffset=0;validated-hierarchy; map:50012
DATA_CHT_1_COMPGEN(0x00900bb8, "const t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_direction>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;bcd=500b4c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50013
DATA_CHT_1_COMPGEN(0x00900b4c, "t_abstract_function_2<void, t_combat_creature&, t_direction>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@W4t_direction@@@@;bcd=500b64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50014
DATA_CHT_1_COMPGEN(0x00900b64, "t_handler_base_2<t_combat_creature&, t_direction>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@AAVt_combat_creature@@W4t_direction@@@@;bcd=500b7c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50015
DATA_CHT_1_COMPGEN(0x00900b7c, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72d8;col=500bb8;td=594dd8;chd=500ba8;offset=8;cdOffset=0;validated-hierarchy; map:50016
DATA_CHT_1_COMPGEN(0x00900b94, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72d8;col=500bb8;td=594dd8;chd=500ba8;offset=8;cdOffset=0;validated-hierarchy; map:50017
DATA_CHT_1_COMPGEN(0x00900ba8, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50018
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72f8;col=500c1c;td=594e30;chd=500c0c;offset=8;cdOffset=0;validated-hierarchy; map:50019
DATA_CHT_1_COMPGEN(0x00900c1c, "const t_add_2nd_handler_1<t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@W4t_direction@@@@;bcd=500be0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50020
DATA_CHT_1_COMPGEN(0x00900be0, "t_add_2nd_handler_1<t_combat_creature&, t_direction>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72f8;col=500c1c;td=594e30;chd=500c0c;offset=8;cdOffset=0;validated-hierarchy; map:50021
DATA_CHT_1_COMPGEN(0x00900bf8, "t_add_2nd_handler_1<t_combat_creature&, t_direction>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@W4t_direction@@@@;vft=4d72f8;col=500c1c;td=594e30;chd=500c0c;offset=8;cdOffset=0;validated-hierarchy; map:50022
DATA_CHT_1_COMPGEN(0x00900c0c, "t_add_2nd_handler_1<t_combat_creature&, t_direction>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50023
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_spell@@AAVt_combat_creature@@@@;vft=4d730c;col=500c80;td=594e80;chd=500c70;offset=8;cdOffset=0;validated-hierarchy; map:50024
DATA_CHT_1_COMPGEN(0x00900c80, "const t_bound_handler_1<t_combat_spell, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_combat_spell@@AAVt_combat_creature@@@@;bcd=500c44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50025
DATA_CHT_1_COMPGEN(0x00900c44, "t_bound_handler_1<t_combat_spell, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_spell@@AAVt_combat_creature@@@@;vft=4d730c;col=500c80;td=594e80;chd=500c70;offset=8;cdOffset=0;validated-hierarchy; map:50026
DATA_CHT_1_COMPGEN(0x00900c5c, "t_bound_handler_1<t_combat_spell, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_combat_spell@@AAVt_combat_creature@@@@;vft=4d730c;col=500c80;td=594e80;chd=500c70;offset=8;cdOffset=0;validated-hierarchy; map:50027
DATA_CHT_1_COMPGEN(0x00900c70, "t_bound_handler_1<t_combat_spell, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50028
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_combat_spell, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_handler@AAVt_combat_creature@@@@;vft=4d7320;col=500ce4;td=594ecc;chd=500cd4;offset=8;cdOffset=0;validated-hierarchy; map:50029
DATA_CHT_1_COMPGEN(0x00900ce4, "const t_add_handler<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_handler@AAVt_combat_creature@@@@;bcd=500ca8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50030
DATA_CHT_1_COMPGEN(0x00900ca8, "t_add_handler<t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_handler@AAVt_combat_creature@@@@;vft=4d7320;col=500ce4;td=594ecc;chd=500cd4;offset=8;cdOffset=0;validated-hierarchy; map:50031
DATA_CHT_1_COMPGEN(0x00900cc0, "t_add_handler<t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_handler@AAVt_combat_creature@@@@;vft=4d7320;col=500ce4;td=594ecc;chd=500cd4;offset=8;cdOffset=0;validated-hierarchy; map:50032
DATA_CHT_1_COMPGEN(0x00900cd4, "t_add_handler<t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50033
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_handler<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_discard_handler_1@PAVt_window@@@@;vft=4d7334;col=500d48;td=594f04;chd=500d38;offset=8;cdOffset=0;validated-hierarchy; map:50034
DATA_CHT_1_COMPGEN(0x00900d48, "const t_discard_handler_1<t_window*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_discard_handler_1@PAVt_window@@@@;bcd=500d0c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50035
DATA_CHT_1_COMPGEN(0x00900d0c, "t_discard_handler_1<t_window*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_discard_handler_1@PAVt_window@@@@;vft=4d7334;col=500d48;td=594f04;chd=500d38;offset=8;cdOffset=0;validated-hierarchy; map:50036
DATA_CHT_1_COMPGEN(0x00900d24, "t_discard_handler_1<t_window*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_discard_handler_1@PAVt_window@@@@;vft=4d7334;col=500d48;td=594f04;chd=500d38;offset=8;cdOffset=0;validated-hierarchy; map:50037
DATA_CHT_1_COMPGEN(0x00900d38, "t_discard_handler_1<t_window*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50038
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_discard_handler_1<t_window*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7348;col=500e20;td=594fd0;chd=500e10;offset=8;cdOffset=0;validated-hierarchy; map:50039
DATA_CHT_1_COMPGEN(0x00900e20, "const t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;bcd=500db4;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50040
DATA_CHT_1_COMPGEN(0x00900db4, "t_abstract_function_2<void, t_window*, t_combat_creature&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_window@@AAVt_combat_creature@@@@;bcd=500dcc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50041
DATA_CHT_1_COMPGEN(0x00900dcc, "t_handler_base_2<t_window*, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@AAVt_combat_creature@@@@;bcd=500de4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50042
DATA_CHT_1_COMPGEN(0x00900de4, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7348;col=500e20;td=594fd0;chd=500e10;offset=8;cdOffset=0;validated-hierarchy; map:50043
DATA_CHT_1_COMPGEN(0x00900dfc, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7348;col=500e20;td=594fd0;chd=500e10;offset=8;cdOffset=0;validated-hierarchy; map:50044
DATA_CHT_1_COMPGEN(0x00900e10, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50045
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7368;col=500e84;td=595028;chd=500e74;offset=8;cdOffset=0;validated-hierarchy; map:50046
DATA_CHT_1_COMPGEN(0x00900e84, "const t_add_2nd_handler_1<t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@AAVt_combat_creature@@@@;bcd=500e48;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50047
DATA_CHT_1_COMPGEN(0x00900e48, "t_add_2nd_handler_1<t_window*, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7368;col=500e84;td=595028;chd=500e74;offset=8;cdOffset=0;validated-hierarchy; map:50048
DATA_CHT_1_COMPGEN(0x00900e60, "t_add_2nd_handler_1<t_window*, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@AAVt_combat_creature@@@@;vft=4d7368;col=500e84;td=595028;chd=500e74;offset=8;cdOffset=0;validated-hierarchy; map:50049
DATA_CHT_1_COMPGEN(0x00900e74, "t_add_2nd_handler_1<t_window*, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50050
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50051
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_cursor_mode>'}")

// name:A; map symbol; map:50052
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_combat_cursor_mode>::`RTTI Base Class Array'")

// name:A; map symbol; map:50053
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_1<t_combat_cursor_mode>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50054
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<t_combat_cursor_mode>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50055
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>'}")

// name:A; map symbol; map:50056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Array'")

// name:A; map symbol; map:50057
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50058
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7208;col=500650;td=5947d0;chd=500640;offset=8;cdOffset=0;validated-hierarchy; map:50059
DATA_CHT_1_COMPGEN(0x00900650, "const t_handler_base_2<t_combat_creature&, t_map_point_3d>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7208;col=500650;td=5947d0;chd=500640;offset=8;cdOffset=0;validated-hierarchy; map:50060
DATA_CHT_1_COMPGEN(0x00900630, "t_handler_base_2<t_combat_creature&, t_map_point_3d>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d7208;col=500650;td=5947d0;chd=500640;offset=8;cdOffset=0;validated-hierarchy; map:50061
DATA_CHT_1_COMPGEN(0x00900640, "t_handler_base_2<t_combat_creature&, t_map_point_3d>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50062
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_map_point_3d>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;bcd=5005d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50063
DATA_CHT_1_COMPGEN(0x009005d8, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d721c;col=500608;td=594780;chd=5005f8;offset=0;cdOffset=0;validated-hierarchy; map:50064
DATA_CHT_1_COMPGEN(0x009005f0, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d721c;col=500608;td=594780;chd=5005f8;offset=0;cdOffset=0;validated-hierarchy; map:50065
DATA_CHT_1_COMPGEN(0x009005f8, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;vft=4d721c;col=500608;td=594780;chd=5005f8;offset=0;cdOffset=0;validated-hierarchy; map:50066
DATA_CHT_1_COMPGEN(0x00900608, "const t_abstract_function_2<void, t_combat_creature&, t_map_point_3d>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50067
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>'}")

// name:A; map symbol; map:50068
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Array'")

// name:A; map symbol; map:50069
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50070
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7284;col=500910;td=594ae0;chd=500900;offset=8;cdOffset=0;validated-hierarchy; map:50071
DATA_CHT_1_COMPGEN(0x00900910, "const t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7284;col=500910;td=594ae0;chd=500900;offset=8;cdOffset=0;validated-hierarchy; map:50072
DATA_CHT_1_COMPGEN(0x009008f0, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7284;col=500910;td=594ae0;chd=500900;offset=8;cdOffset=0;validated-hierarchy; map:50073
DATA_CHT_1_COMPGEN(0x00900900, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50074
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;bcd=500898;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50075
DATA_CHT_1_COMPGEN(0x00900898, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7298;col=5008c8;td=594a80;chd=5008b8;offset=0;cdOffset=0;validated-hierarchy; map:50076
DATA_CHT_1_COMPGEN(0x009008b0, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7298;col=5008c8;td=594a80;chd=5008b8;offset=0;cdOffset=0;validated-hierarchy; map:50077
DATA_CHT_1_COMPGEN(0x009008b8, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;vft=4d7298;col=5008c8;td=594a80;chd=5008b8;offset=0;cdOffset=0;validated-hierarchy; map:50078
DATA_CHT_1_COMPGEN(0x009008c8, "const t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50079
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>'}")

// name:A; map symbol; map:50080
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Array'")

// name:A; map symbol; map:50081
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50082
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50083
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_direction>'}")

// name:A; map symbol; map:50084
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_combat_creature&, t_direction>::`RTTI Base Class Array'")

// name:A; map symbol; map:50085
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_combat_creature&, t_direction>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50086
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_direction>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50087
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_window*, t_combat_creature&>'}")

// name:A; map symbol; map:50088
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, t_combat_creature&>::`RTTI Base Class Array'")

// name:A; map symbol; map:50089
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_window*, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50090
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_window*, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;bcd=500360;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50091
DATA_CHT_1_COMPGEN(0x00900360, "t_abstract_function_1<void, t_combat_cursor_mode>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;vft=4d71a0;col=500390;td=594530;chd=500380;offset=0;cdOffset=0;validated-hierarchy; map:50092
DATA_CHT_1_COMPGEN(0x00900378, "t_abstract_function_1<void, t_combat_cursor_mode>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;vft=4d71a0;col=500390;td=594530;chd=500380;offset=0;cdOffset=0;validated-hierarchy; map:50093
DATA_CHT_1_COMPGEN(0x00900380, "t_abstract_function_1<void, t_combat_cursor_mode>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;vft=4d71a0;col=500390;td=594530;chd=500380;offset=0;cdOffset=0;validated-hierarchy; map:50094
DATA_CHT_1_COMPGEN(0x00900390, "const t_abstract_function_1<void, t_combat_cursor_mode>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;bcd=500500;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50095
DATA_CHT_1_COMPGEN(0x00900500, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71e8;col=500530;td=594678;chd=500520;offset=0;cdOffset=0;validated-hierarchy; map:50096
DATA_CHT_1_COMPGEN(0x00900518, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71e8;col=500530;td=594678;chd=500520;offset=0;cdOffset=0;validated-hierarchy; map:50097
DATA_CHT_1_COMPGEN(0x00900520, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;vft=4d71e8;col=500530;td=594678;chd=500520;offset=0;cdOffset=0;validated-hierarchy; map:50098
DATA_CHT_1_COMPGEN(0x00900530, "const t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;bcd=5007c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50099
DATA_CHT_1_COMPGEN(0x009007c0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7264;col=5007f0;td=5948f0;chd=5007e0;offset=0;cdOffset=0;validated-hierarchy; map:50100
DATA_CHT_1_COMPGEN(0x009007d8, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7264;col=5007f0;td=5948f0;chd=5007e0;offset=0;cdOffset=0;validated-hierarchy; map:50101
DATA_CHT_1_COMPGEN(0x009007e0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;vft=4d7264;col=5007f0;td=5948f0;chd=5007e0;offset=0;cdOffset=0;validated-hierarchy; map:50102
DATA_CHT_1_COMPGEN(0x009007f0, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;bcd=5009b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50103
DATA_CHT_1_COMPGEN(0x009009b8, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72b8;col=5009e8;td=594bc8;chd=5009d8;offset=0;cdOffset=0;validated-hierarchy; map:50104
DATA_CHT_1_COMPGEN(0x009009d0, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72b8;col=5009e8;td=594bc8;chd=5009d8;offset=0;cdOffset=0;validated-hierarchy; map:50105
DATA_CHT_1_COMPGEN(0x009009d8, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;vft=4d72b8;col=5009e8;td=594bc8;chd=5009d8;offset=0;cdOffset=0;validated-hierarchy; map:50106
DATA_CHT_1_COMPGEN(0x009009e8, "const t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;bcd=500af4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50107
DATA_CHT_1_COMPGEN(0x00900af4, "t_abstract_function_2<void, t_combat_creature&, t_direction>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;vft=4d72ec;col=500b24;td=594d40;chd=500b14;offset=0;cdOffset=0;validated-hierarchy; map:50108
DATA_CHT_1_COMPGEN(0x00900b0c, "t_abstract_function_2<void, t_combat_creature&, t_direction>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;vft=4d72ec;col=500b24;td=594d40;chd=500b14;offset=0;cdOffset=0;validated-hierarchy; map:50109
DATA_CHT_1_COMPGEN(0x00900b14, "t_abstract_function_2<void, t_combat_creature&, t_direction>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;vft=4d72ec;col=500b24;td=594d40;chd=500b14;offset=0;cdOffset=0;validated-hierarchy; map:50110
DATA_CHT_1_COMPGEN(0x00900b24, "const t_abstract_function_2<void, t_combat_creature&, t_direction>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;bcd=500d5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50111
DATA_CHT_1_COMPGEN(0x00900d5c, "t_abstract_function_2<void, t_window*, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;vft=4d735c;col=500d8c;td=594f38;chd=500d7c;offset=0;cdOffset=0;validated-hierarchy; map:50112
DATA_CHT_1_COMPGEN(0x00900d74, "t_abstract_function_2<void, t_window*, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;vft=4d735c;col=500d8c;td=594f38;chd=500d7c;offset=0;cdOffset=0;validated-hierarchy; map:50113
DATA_CHT_1_COMPGEN(0x00900d7c, "t_abstract_function_2<void, t_window*, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;vft=4d735c;col=500d8c;td=594f38;chd=500d7c;offset=0;cdOffset=0;validated-hierarchy; map:50114
DATA_CHT_1_COMPGEN(0x00900d8c, "const t_abstract_function_2<void, t_window*, t_combat_creature&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_castle@@@@;vft=4d6fac;col=4ffd88;td=593d04;chd=4ffd78;offset=16;cdOffset=0;validated-hierarchy; map:50115
DATA_CHT_1_COMPGEN(0x008ffd88, "const t_ptr_cache_data<t_combat_castle>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_combat_castle@@@@;bcd=4ffd08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50116
DATA_CHT_1_COMPGEN(0x008ffd08, "t_abstract_cache_data<t_combat_castle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_castle@@@@;bcd=4ffd20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50117
DATA_CHT_1_COMPGEN(0x008ffd20, "t_abstract_resource_cache_data<t_combat_castle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_combat_castle@@@@;bcd=4ffd38;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50118
DATA_CHT_1_COMPGEN(0x008ffd38, "t_ptr_cache_data<t_combat_castle>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_castle@@@@;vft=4d6fac;col=4ffd88;td=593d04;chd=4ffd78;offset=16;cdOffset=0;validated-hierarchy; map:50119
DATA_CHT_1_COMPGEN(0x008ffd50, "t_ptr_cache_data<t_combat_castle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_combat_castle@@@@;vft=4d6fac;col=4ffd88;td=593d04;chd=4ffd78;offset=16;cdOffset=0;validated-hierarchy; map:50120
DATA_CHT_1_COMPGEN(0x008ffd78, "t_ptr_cache_data<t_combat_castle>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50121
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_combat_castle>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_castle>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_castle@@@@;vft=4d7394;col=500f18;td=593cc0;chd=500f08;offset=16;cdOffset=0;validated-hierarchy; map:50122
DATA_CHT_1_COMPGEN(0x00900f18, "const t_abstract_resource_cache_data<t_combat_castle>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_castle@@@@;vft=4d7394;col=500f18;td=593cc0;chd=500f08;offset=16;cdOffset=0;validated-hierarchy; map:50123
DATA_CHT_1_COMPGEN(0x00900ee4, "t_abstract_resource_cache_data<t_combat_castle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_castle@@@@;vft=4d7394;col=500f18;td=593cc0;chd=500f08;offset=16;cdOffset=0;validated-hierarchy; map:50124
DATA_CHT_1_COMPGEN(0x00900f08, "t_abstract_resource_cache_data<t_combat_castle>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50125
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_combat_castle>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_combat_castle>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_castle@@@@;vft=4d737c;col=500ebc;td=593c84;chd=500eac;offset=0;cdOffset=0;validated-hierarchy; map:50126
DATA_CHT_1_COMPGEN(0x00900e98, "t_abstract_cache_data<t_combat_castle>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_castle@@@@;vft=4d737c;col=500ebc;td=593c84;chd=500eac;offset=0;cdOffset=0;validated-hierarchy; map:50127
DATA_CHT_1_COMPGEN(0x00900eac, "t_abstract_cache_data<t_combat_castle>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_combat_castle@@@@;vft=4d737c;col=500ebc;td=593c84;chd=500eac;offset=0;cdOffset=0;validated-hierarchy; map:50128
DATA_CHT_1_COMPGEN(0x00900ebc, "const t_abstract_cache_data<t_combat_castle>::`RTTI Complete Object Locator'")

// === .data (62 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_battlefield@@;td=593e14;validated-header; map:57967
DATA_CHT_1_COMPGEN(0x00993e14, "t_battlefield `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_thread@@;td=593ddc;validated-header; map:57968
DATA_CHT_1_COMPGEN(0x00993ddc, "t_thread `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sequence_loader@@;td=593df4;validated-header; map:57969
DATA_CHT_1_COMPGEN(0x00993df4, "t_sequence_loader `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_compound_object_model@@@@;td=593e30;validated-header; map:57970
DATA_CHT_1_COMPGEN(0x00993e30, "t_abstract_cache<t_compound_object_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_resource_cache@Vt_compound_object_model@@@@;td=593e6c;validated-header; map:57971
DATA_CHT_1_COMPGEN(0x00993e6c, "t_resource_cache<t_compound_object_model> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_object_model_cache@@;td=593ea8;validated-header; map:57972
DATA_CHT_1_COMPGEN(0x00993ea8, "t_combat_object_model_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_stationary_combat_object@@;td=593ed4;validated-header; map:57973
DATA_CHT_1_COMPGEN(0x00993ed4, "t_stationary_combat_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_actor@@;td=593fd4;validated-header; map:57974
DATA_CHT_1_COMPGEN(0x00993fd4, "t_combat_actor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_unsaved_combat_actor@@;td=593ff4;validated-header; map:57975
DATA_CHT_1_COMPGEN(0x00993ff4, "t_unsaved_combat_actor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_1@XAAVt_combat_creature@@@@;td=594030;validated-header; map:57976
DATA_CHT_1_COMPGEN(0x00994030, "t_abstract_function_1<void, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_1@AAVt_combat_creature@@@@;td=594070;validated-header; map:57977
DATA_CHT_1_COMPGEN(0x00994070, "t_handler_base_1<t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_delayed_missile_impact@?%C:\Work\game\battlefield.cpp157044527@@;td=5940a8;validated-header; map:57978
DATA_CHT_1_COMPGEN(0x009940a8, "t_delayed_missile_impact `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_flinch@@;td=5940f8;validated-header; map:57979
DATA_CHT_1_COMPGEN(0x009940f8, "t_combat_flinch `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_action_message_displayer@@;td=59421c;validated-header; map:57980
DATA_CHT_1_COMPGEN(0x0099421c, "t_combat_action_message_displayer `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_counted_animation@@;td=59424c;validated-header; map:57981
DATA_CHT_1_COMPGEN(0x0099424c, "t_counted_animation `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_delayed_spell_animation@?%C:\Work\game\battlefield.cpp157044527@@;td=594270;validated-header; map:57982
DATA_CHT_1_COMPGEN(0x00994270, "t_delayed_spell_animation `RTTI Type Descriptor'")

// name:A; map symbol; map:57983
DATA_CHT_1_COMPGEN(UNACCOUNTED, "other.m_numerator != 0")

// name:A; map symbol; map:57984
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\rational.h")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_combat_castle@@@@;td=593d38;validated-header; map:57985
DATA_CHT_1_COMPGEN(0x00993d38, "t_abstract_cache<t_combat_castle> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_combat_castle@@@@;td=593d6c;validated-header; map:57986
DATA_CHT_1_COMPGEN(0x00993d6c, "t_pointer_cache<t_combat_castle> `RTTI Type Descriptor'")

// name:A; map symbol; map:57987
DATA_CHT_1_COMPGEN(UNACCOUNTED, "remainder <= 0")

// name:A; map symbol; map:57988
DATA_CHT_1_COMPGEN(UNACCOUNTED, "remainder >= 0")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@AAVt_combat_creature@@@@;td=5944b0;validated-header; map:57989
DATA_CHT_1_COMPGEN(0x009944b0, "t_bound_handler_1<t_battlefield, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler@Vt_battlefield@@@@;td=5944fc;validated-header; map:57990
DATA_CHT_1_COMPGEN(0x009944fc, "t_bound_handler<t_battlefield> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_1@XW4t_combat_cursor_mode@@@@;td=594530;validated-header; map:57991
DATA_CHT_1_COMPGEN(0x00994530, "t_abstract_function_1<void, t_combat_cursor_mode> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_1@W4t_combat_cursor_mode@@@@;td=594570;validated-header; map:57992
DATA_CHT_1_COMPGEN(0x00994570, "t_handler_base_1<t_combat_cursor_mode> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@W4t_combat_cursor_mode@@@@;td=5945b0;validated-header; map:57993
DATA_CHT_1_COMPGEN(0x009945b0, "t_bound_handler_1<t_battlefield, t_combat_cursor_mode> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_handler@W4t_combat_cursor_mode@@@@;td=5945fc;validated-header; map:57994
DATA_CHT_1_COMPGEN(0x009945fc, "t_add_handler<t_combat_cursor_mode> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@PAVt_window@@@@;td=594638;validated-header; map:57995
DATA_CHT_1_COMPGEN(0x00994638, "t_bound_handler_1<t_battlefield, t_window*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@Ut_map_point_3d@@_N@@;td=594678;validated-header; map:57996
DATA_CHT_1_COMPGEN(0x00994678, "t_abstract_function_3<void, t_combat_creature&, t_map_point_3d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;td=5946d0;validated-header; map:57997
DATA_CHT_1_COMPGEN(0x009946d0, "t_handler_base_3<t_combat_creature&, t_map_point_3d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;td=594720;validated-header; map:57998
DATA_CHT_1_COMPGEN(0x00994720, "t_bound_handler_3<t_battlefield, t_combat_creature&, t_map_point_3d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@Ut_map_point_3d@@@@;td=594780;validated-header; map:57999
DATA_CHT_1_COMPGEN(0x00994780, "t_abstract_function_2<void, t_combat_creature&, t_map_point_3d> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@Ut_map_point_3d@@@@;td=5947d0;validated-header; map:58000
DATA_CHT_1_COMPGEN(0x009947d0, "t_handler_base_2<t_combat_creature&, t_map_point_3d> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@Ut_map_point_3d@@_N@@;td=594820;validated-header; map:58001
DATA_CHT_1_COMPGEN(0x00994820, "t_add_3rd_handler_2<t_combat_creature&, t_map_point_3d, bool> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@Ut_map_point_3d@@@@;td=594870;validated-header; map:58002
DATA_CHT_1_COMPGEN(0x00994870, "t_add_2nd_handler_1<t_combat_creature&, t_map_point_3d> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_battlefield@@H@@;td=5948bc;validated-header; map:58003
DATA_CHT_1_COMPGEN(0x009948bc, "t_bound_handler_1<t_battlefield, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;td=5948f0;validated-header; map:58004
DATA_CHT_1_COMPGEN(0x009948f0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;td=594978;validated-header; map:58005
DATA_CHT_1_COMPGEN(0x00994978, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_battlefield@@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@1@@@;td=5949f8;validated-header; map:58006
DATA_CHT_1_COMPGEN(0x009949f8, "t_bound_handler_3<t_battlefield, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;td=594a80;validated-header; map:58007
DATA_CHT_1_COMPGEN(0x00994a80, "t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@@@;td=594ae0;validated-header; map:58008
DATA_CHT_1_COMPGEN(0x00994ae0, "t_handler_base_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_missile_strike_data@t_battlefield@@@@;td=594b40;validated-header; map:58009
DATA_CHT_1_COMPGEN(0x00994b40, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_battlefield::t_missile_strike_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;td=594bc8;validated-header; map:58010
DATA_CHT_1_COMPGEN(0x00994bc8, "t_abstract_function_2<void, t_window*, t_battlefield::t_end_damage_spell_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;td=594c28;validated-header; map:58011
DATA_CHT_1_COMPGEN(0x00994c28, "t_handler_base_2<t_window*, t_battlefield::t_end_damage_spell_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@Vt_end_damage_spell_data@1@@@;td=594c80;validated-header; map:58012
DATA_CHT_1_COMPGEN(0x00994c80, "t_bound_handler_2<t_battlefield, t_window*, t_battlefield::t_end_damage_spell_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@Vt_end_damage_spell_data@t_battlefield@@@@;td=594ce0;validated-header; map:58013
DATA_CHT_1_COMPGEN(0x00994ce0, "t_add_2nd_handler_1<t_window*, t_battlefield::t_end_damage_spell_data> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@W4t_direction@@@@;td=594d40;validated-header; map:58014
DATA_CHT_1_COMPGEN(0x00994d40, "t_abstract_function_2<void, t_combat_creature&, t_direction> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@W4t_direction@@@@;td=594d90;validated-header; map:58015
DATA_CHT_1_COMPGEN(0x00994d90, "t_handler_base_2<t_combat_creature&, t_direction> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@AAVt_combat_creature@@W4t_direction@@@@;td=594dd8;validated-header; map:58016
DATA_CHT_1_COMPGEN(0x00994dd8, "t_bound_handler_2<t_battlefield, t_combat_creature&, t_direction> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@W4t_direction@@@@;td=594e30;validated-header; map:58017
DATA_CHT_1_COMPGEN(0x00994e30, "t_add_2nd_handler_1<t_combat_creature&, t_direction> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_combat_spell@@AAVt_combat_creature@@@@;td=594e80;validated-header; map:58018
DATA_CHT_1_COMPGEN(0x00994e80, "t_bound_handler_1<t_combat_spell, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_handler@AAVt_combat_creature@@@@;td=594ecc;validated-header; map:58019
DATA_CHT_1_COMPGEN(0x00994ecc, "t_add_handler<t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_discard_handler_1@PAVt_window@@@@;td=594f04;validated-header; map:58020
DATA_CHT_1_COMPGEN(0x00994f04, "t_discard_handler_1<t_window*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_window@@AAVt_combat_creature@@@@;td=594f38;validated-header; map:58021
DATA_CHT_1_COMPGEN(0x00994f38, "t_abstract_function_2<void, t_window*, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_window@@AAVt_combat_creature@@@@;td=594f88;validated-header; map:58022
DATA_CHT_1_COMPGEN(0x00994f88, "t_handler_base_2<t_window*, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_battlefield@@PAVt_window@@AAVt_combat_creature@@@@;td=594fd0;validated-header; map:58023
DATA_CHT_1_COMPGEN(0x00994fd0, "t_bound_handler_2<t_battlefield, t_window*, t_combat_creature&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_window@@AAVt_combat_creature@@@@;td=595028;validated-header; map:58024
DATA_CHT_1_COMPGEN(0x00995028, "t_add_2nd_handler_1<t_window*, t_combat_creature&> `RTTI Type Descriptor'")

// name:A; map symbol; map:58025
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_denominator != 0")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_combat_castle@@@@;td=593c84;validated-header; map:58026
DATA_CHT_1_COMPGEN(0x00993c84, "t_abstract_cache_data<t_combat_castle> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_combat_castle@@@@;td=593cc0;validated-header; map:58027
DATA_CHT_1_COMPGEN(0x00993cc0, "t_abstract_resource_cache_data<t_combat_castle> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_combat_castle@@@@;td=593d04;validated-header; map:58028
DATA_CHT_1_COMPGEN(0x00993d04, "t_ptr_cache_data<t_combat_castle> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60076
DATA_CHT_1(0x009d7c4c)
t_animation_cache const k_spell_cursor; // Initial value unavailable.

// name:A; map symbol; map:60077
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_counted_const_ptr<t_combat_saveable_object>, std::pair<t_counted_const_ptr<t_combat_saveable_object> const, int>, std::map<t_counted_const_ptr<t_combat_saveable_object>, int, std::less<t_counted_const_ptr<t_combat_saveable_object>>, std::allocator<int>>::_Kfn, std::less<t_counted_const_ptr<t_combat_saveable_object>>, std::allocator<int>>::_Node*std::_Tree<t_counted_const_ptr<t_combat_saveable_object>, std::pair<t_counted_const_ptr<t_combat_saveable_object> const, int>, std::map<t_counted_const_ptr<t_combat_saveable_object>, int, std::less<t_counted_const_ptr<t_combat_saveable_object>>, std::allocator<int>>::_Kfn, std::less<t_counted_const_ptr<t_combat_saveable_object>>, std::allocator<int>>::_Nil; // Initial value unavailable.
