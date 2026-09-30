// ai_town_data_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/6 (A:1 B:2 C:1); unaccounted 2; skipped std 30.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:B; align-order; retn,stable; map:13534
VA_CHT_1(0x005033c0, 0x140)
void t_ai_town_data_cache::inc_threat(t_town* arg_0, t_creature_array* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:13535
VA_CHT_1(0x00503500, 0x133)
void t_ai_town_data_cache::get_threat_list(
    std::list<t_creature_array*, std::allocator<t_creature_array*>>& arg_0,
    std::list<t_creature_array*, std::allocator<t_creature_array*>>* arg_1
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69683; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00503c20, 0x20, STATIC_INIT_DISPATCH, ai_town_data_cache)

// name:A; map symbol; map:13536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_ai_army_data_cache::inc_threat(t_town* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:13537
VA_CHT_1(0x00503bf0, 0x22)
t_ai_town_data_cache::t_threat_element::t_threat_element()
{
    // Body unavailable.
}

// name:A; map symbol; map:13547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_town_data_cache::t_threat_element::t_threat_element(t_ai_town_data_cache::t_threat_element const& arg_0)
{
    // Body unavailable.
}
