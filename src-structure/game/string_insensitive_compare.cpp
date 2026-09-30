// string_insensitive_compare.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\string_insensitive_compare.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/4 (A:1 B:0 C:2); unaccounted 1; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (4 symbols) ===

// confidence:C; align-order; retn,stable; map:38457
VA_CHT_1(0x007e5df0, 0x3e)
int string_insensitive_compare(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38458
VA_CHT_1(0x007e5e30, 0x41)
int string_insensitive_compare(std::string const& arg_0, char const* arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62308; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5e80, 0x20, STATIC_INIT_DISPATCH, string_insensitive_compare)

namespace {

// name:A; map symbol; map:38459
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int do_compare(char const* arg_0, unsigned int arg_1, char const* arg_2, unsigned int arg_3)
{
    // Body unavailable.
}

} // anonymous namespace
