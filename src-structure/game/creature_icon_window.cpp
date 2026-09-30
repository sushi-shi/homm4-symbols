// creature_icon_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/10 (A:4 B:0 C:0); unaccounted 1; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23331
VA_CHT_1(0x006155a0, 0x2c6)
t_creature_icon_window::t_creature_icon_window(
    t_screen_rect const& arg_0,
    t_window* arg_1,
    t_abstract_creature const* arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23332
VA_CHT_1(0x00615890, 0x113)
void t_creature_icon_window::clear_creature()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23333
VA_CHT_1(0x006159b0, 0x1c4)
void t_creature_icon_window::set_creature(t_abstract_creature const* arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66970; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00615b80, 0x20, STATIC_INIT_DISPATCH, creature_icon_window)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23334
VA_CHT_1_COMPGEN(0x00615870, 0x1e, VECTOR_DELETING_DTOR, t_creature_icon_window)

// name:A; map symbol; map:23335
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_creature_icon_window)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44186
DATA_CHT_1_COMPGEN(0x008deb74, "const t_creature_icon_window::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_icon_window@@;vft=4deb74;col=507b48;td=5990bc;chd=507b38;offset=0;cdOffset=0;validated-hierarchy; map:51581
DATA_CHT_1_COMPGEN(0x00907b24, "t_creature_icon_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_icon_window@@;vft=4deb74;col=507b48;td=5990bc;chd=507b38;offset=0;cdOffset=0;validated-hierarchy; map:51582
DATA_CHT_1_COMPGEN(0x00907b38, "t_creature_icon_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_icon_window@@;vft=4deb74;col=507b48;td=5990bc;chd=507b38;offset=0;cdOffset=0;validated-hierarchy; map:51583
DATA_CHT_1_COMPGEN(0x00907b48, "const t_creature_icon_window::`RTTI Complete Object Locator'")
