// combat_actor_model_definition.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/27 (A:7 B:0 C:2); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (23 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68111; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b1fe0, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_definition#1")

// name:C; dyninit; see ledger; map:68112
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#1")

// confidence:A; dyninit-init; owner-conf-C; map:68113; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2000, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_definition#2")

// name:C; dyninit; see ledger; map:68114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#2")

// confidence:A; dyninit-init; owner-conf-C; map:68115; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2020, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_definition#3")

// name:C; dyninit; see ledger; map:68116
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#3")

// confidence:A; dyninit-init; owner-conf-C; map:68117; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2040, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_definition#4")

// name:C; dyninit; see ledger; map:68118
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#4")

// confidence:A; dyninit-init; owner-conf-C; map:68119; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2060, 0x10, STATIC_INIT_DISPATCH, "combat_actor_model_definition#5")

// name:C; dyninit; see ledger; map:68120
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#5")

// confidence:A; dyninit-init; owner-conf-C; map:68121; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b2070, 0x15, STATIC_INIT_DISPATCH, "combat_actor_model_definition#6")

// name:C; dyninit; see ledger; map:68122
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor_model_definition#6")

// confidence:C; align-order; retn,stable; map:19991
VA_CHT_1(0x005b2090, 0x544)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_combat_actor_model_definition& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:19992
VA_CHT_1(0x005b25bb, 0x6)
bool write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_combat_actor_model_definition const& arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68123; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005b25e0, 0x20, STATIC_INIT_DISPATCH, combat_actor_model_definition)

// name:A; map symbol; map:19993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor_model_definition::set_key_frame(t_combat_actor_action_id arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor_model_definition::set_height(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor_model_definition::set_missile_origin(t_direction arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_combat_actor_model_definition_traits>::set_footprint_size(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_combat_actor_model_definition_traits>::set_frames_per_second(
    t_combat_actor_action_id arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_combat_actor_model_definition_traits>::set_sequence_name(
    t_combat_actor_action_id arg_0,
    t_direction arg_1,
    std::string const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_action_id enum_incr(t_combat_actor_action_id& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition& t_static_vector<t_actor_action_definition, 14>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:43896
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_actor_model_definition>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43897
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_actor_model_definition>::extension; // Initial value unavailable.

// === .data (2 symbols) ===

// name:A; map symbol; map:58184
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_height >= k_min_height&& ne...")

// name:A; map symbol; map:58185
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\combat_actor_model_...")
