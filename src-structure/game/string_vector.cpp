// string_vector.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 2/9 (A:1 B:0 C:1); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:C; align-order; retn,stable; map:38552
VA_CHT_1(0x007e62d0, 0x24e)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_string_vector& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool write(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_string_vector const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool write(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62304; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e6520, 0x20, STATIC_INIT_DISPATCH, string_vector)

// name:A; map symbol; map:38556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38557
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned short const& arg_1
)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:45871
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_string_vector>::prefix; // Initial value unavailable.

// name:A; map symbol; map:45872
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_string_vector>::extension; // Initial value unavailable.
