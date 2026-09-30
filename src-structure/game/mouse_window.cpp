// mouse_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 8/11 (A:4 B:0 C:0); unaccounted 3; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30339
VA_CHT_1(0x0072a2b0, 0x7b)
t_mouse_window::t_mouse_window(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:30340
VA_CHT_1(0x0072a350, 0xb)
t_mouse_window::~t_mouse_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:30341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_mouse_window::is_contained(t_screen_point arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:30342
VA_CHT_1(0x0072a360, 0x19)
void t_mouse_window::open()
{
    // Body unavailable.
}

// name:A; map symbol; map:30343
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_mouse_window::add_child(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:30344
VA_CHT_1_COMPGEN(0x0072a330, 0x1e, SCALAR_DELETING_DTOR, t_mouse_window)

// name:A; map symbol; map:30345
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mouse_window)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44880
DATA_CHT_1_COMPGEN(0x008e6284, "const t_mouse_window::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mouse_window@@;vft=4e6284;col=51065c;td=59ef5c;chd=51064c;offset=0;cdOffset=0;validated-hierarchy; map:53497
DATA_CHT_1_COMPGEN(0x00910638, "t_mouse_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mouse_window@@;vft=4e6284;col=51065c;td=59ef5c;chd=51064c;offset=0;cdOffset=0;validated-hierarchy; map:53498
DATA_CHT_1_COMPGEN(0x0091064c, "t_mouse_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mouse_window@@;vft=4e6284;col=51065c;td=59ef5c;chd=51064c;offset=0;cdOffset=0;validated-hierarchy; map:53499
DATA_CHT_1_COMPGEN(0x0091065c, "const t_mouse_window::`RTTI Complete Object Locator'")
