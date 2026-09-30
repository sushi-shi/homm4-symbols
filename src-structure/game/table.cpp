// table.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/6 (A:0 B:0 C:0); unaccounted 3; skipped std 4.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (4 symbols) ===

// name:A; map symbol; map:38645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_table::get_column_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38646
VA_CHT_1(0x007e9d70, 0x17a)
bool t_table::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38647
VA_CHT_1(0x007ea370, 0x1b8)
bool t_table::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62251; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea730, 0x20, STATIC_INIT_DISPATCH, table)

// === .rdata (2 symbols) ===

// name:A; map symbol; map:45885
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_table>::prefix; // Initial value unavailable.

// name:A; map symbol; map:45886
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_table>::extension; // Initial value unavailable.
