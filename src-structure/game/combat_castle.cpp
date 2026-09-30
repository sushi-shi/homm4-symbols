// combat_castle.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/8 (A:1 B:2 C:0); unaccounted 5; skipped std 17.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:B; align-order; retn,stable; map:20222
VA_CHT_1(0x005b9fa0, 0x245)
bool t_combat_castle::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:20223
VA_CHT_1(0x005ba5d0, 0x175)
bool t_combat_castle::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67899; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ba8b0, 0x20, STATIC_INIT_DISPATCH, combat_castle)

// name:A; map symbol; map:20224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle_item::t_combat_castle_item()
{
    // Body unavailable.
}

// name:A; map symbol; map:20241
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle_item& t_combat_castle_item::operator=(t_combat_castle_item const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20242
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_castle_item::t_combat_castle_item(t_combat_castle_item const& arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:43908
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_castle>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43909
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_castle>::extension; // Initial value unavailable.
