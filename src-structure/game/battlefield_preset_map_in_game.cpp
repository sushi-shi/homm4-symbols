// battlefield_preset_map_in_game.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/15 (A:6 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (9 symbols) ===

// name:A; map symbol; map:17593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_preset_map_in_game::t_battlefield_preset_map_in_game()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17594
VA_CHT_1(0x005682f0, 0x68)
t_battlefield_preset_map_in_game::t_battlefield_preset_map_in_game(t_battlefield_preset_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17595
VA_CHT_1(0x00568360, 0x64)
t_battlefield_preset_map_in_game::~t_battlefield_preset_map_in_game()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17596
VA_CHT_1(0x005683d0, 0x1d)
t_counted_ptr<t_battlefield_passablity_map> t_battlefield_preset_map_in_game::get_passability_map()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17597
VA_CHT_1(0x005683f0, 0x7)
t_bitmap_layer& t_battlefield_preset_map_in_game::get_backdrop()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69031; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00568400, 0x20, STATIC_INIT_DISPATCH, battlefield_preset_map_in_game)

// name:A; map symbol; map:17598
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_battlefield_preset_map_in_game)

// name:A; map symbol; map:17599
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_battlefield_preset_map_in_game)

// name:A; map symbol; map:17600
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield_passablity_map>::t_counted_ptr<t_battlefield_passablity_map>(
    t_counted_ptr<t_battlefield_passablity_map> const& arg_0
)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43710
DATA_CHT_1_COMPGEN(0x008d74bc, "const t_battlefield_preset_map_in_game::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_battlefield_preset_map_in_game@@;bcd=5011f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50163
DATA_CHT_1_COMPGEN(0x009011f0, "t_battlefield_preset_map_in_game::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_battlefield_preset_map_in_game@@;vft=4d74bc;col=501224;td=5952d8;chd=501214;offset=0;cdOffset=0;validated-hierarchy; map:50164
DATA_CHT_1_COMPGEN(0x00901208, "t_battlefield_preset_map_in_game::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_battlefield_preset_map_in_game@@;vft=4d74bc;col=501224;td=5952d8;chd=501214;offset=0;cdOffset=0;validated-hierarchy; map:50165
DATA_CHT_1_COMPGEN(0x00901214, "t_battlefield_preset_map_in_game::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_battlefield_preset_map_in_game@@;vft=4d74bc;col=501224;td=5952d8;chd=501214;offset=0;cdOffset=0;validated-hierarchy; map:50166
DATA_CHT_1_COMPGEN(0x00901224, "const t_battlefield_preset_map_in_game::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_battlefield_preset_map_in_game@@;td=5952d8;validated-header; map:58043
DATA_CHT_1_COMPGEN(0x009952d8, "t_battlefield_preset_map_in_game `RTTI Type Descriptor'")
