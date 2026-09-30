// direction.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\direction.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/17 (A:0 B:0 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25779
VA_CHT_1(0x00699a70, 0x14)
std::string const& get_direction_name(t_direction arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25780
VA_CHT_1(0x00699a90, 0x9)
t_map_point_2d const& get_direction_offset(t_direction arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65548; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00699aa0, 0x20, STATIC_INIT_DISPATCH, direction)

namespace {

// name:A; map symbol; map:25781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction_properties const& get_direction_properties(t_direction arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction_properties::t_direction_properties(std::string const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:25783
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, get_direction_properties::k_direction_properties_array)

namespace {

// name:A; map symbol; map:25784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction_properties::~t_direction_properties()
{
    // Body unavailable.
}

} // anonymous namespace

// === .data (9 symbols) ===

// name:A; map symbol; map:58581
DATA_CHT_1_COMPGEN(UNACCOUNTED, "north")

// name:A; map symbol; map:58582
DATA_CHT_1_COMPGEN(UNACCOUNTED, "northwest")

// name:A; map symbol; map:58583
DATA_CHT_1_COMPGEN(UNACCOUNTED, "west")

// name:A; map symbol; map:58584
DATA_CHT_1_COMPGEN(UNACCOUNTED, "southwest")

// name:A; map symbol; map:58585
DATA_CHT_1_COMPGEN(UNACCOUNTED, "south")

// name:A; map symbol; map:58586
DATA_CHT_1_COMPGEN(UNACCOUNTED, "southeast")

// name:A; map symbol; map:58587
DATA_CHT_1_COMPGEN(UNACCOUNTED, "east")

// name:A; map symbol; map:58588
DATA_CHT_1_COMPGEN(UNACCOUNTED, "northeast")

// name:A; map symbol; map:58589
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\direction.cpp")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60218
DATA_CHT_1(UNACCOUNTED)
// t_direction_properties const* const `t_direction_properties const& get_direction_properties(t_direction)'::`2'::k_direction_properties_array
