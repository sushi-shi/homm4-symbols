// dialog_box.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 13/17 (A:4 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (13 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66743; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00639570, 0x1b, STATIC_INIT_DISPATCH, "dialog_box#1")

// name:C; dyninit; see ledger; map:66744
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "dialog_box#1")

// name:C; dyninit; see ledger; map:66745
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "dialog_box#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66746; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00639590, 0xa, STATIC_DTOR, "dialog_box#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:24007
VA_CHT_1(0x006395a0, 0xbf)
t_dialog_box::t_dialog_box(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:24008
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_box::t_dialog_box(t_screen_rect const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:24009
VA_CHT_1(0x00639680, 0x93)
void t_dialog_box::drag(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:24010
VA_CHT_1(0x00639720, 0x2d)
void t_dialog_box::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:24011
VA_CHT_1(0x00639750, 0x132)
void t_dialog_box::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:24012
VA_CHT_1(0x00639890, 0x1f5)
void t_dialog_box::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66747; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00639a90, 0x20, STATIC_INIT_DISPATCH, dialog_box)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:24013
VA_CHT_1_COMPGEN(0x00639660, 0x1e, SCALAR_DELETING_DTOR, t_dialog_box)

// name:A; map symbol; map:24014
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_dialog_box)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44237
DATA_CHT_1_COMPGEN(0x008df744, "const t_dialog_box::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_box@@;vft=4df744;col=5086d0;td=58b470;chd=5086c0;offset=0;cdOffset=0;validated-hierarchy; map:51729
DATA_CHT_1_COMPGEN(0x009086a8, "t_dialog_box::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_box@@;vft=4df744;col=5086d0;td=58b470;chd=5086c0;offset=0;cdOffset=0;validated-hierarchy; map:51730
DATA_CHT_1_COMPGEN(0x009086c0, "t_dialog_box::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_box@@;vft=4df744;col=5086d0;td=58b470;chd=5086c0;offset=0;cdOffset=0;validated-hierarchy; map:51731
DATA_CHT_1_COMPGEN(0x009086d0, "const t_dialog_box::`RTTI Complete Object Locator'")
