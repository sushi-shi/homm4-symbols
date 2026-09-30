// drag_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/8 (A:4 B:0 C:0); unaccounted 2; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (4 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25819
VA_CHT_1(0x0069b120, 0x20)
t_drag_object::t_drag_object(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25820
VA_CHT_1(0x0069b140, 0x1e)
void t_drag_object::accepted(t_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_drag_object)

// name:A; map symbol; map:25822
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_drag_object)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44471
DATA_CHT_1_COMPGEN(0x008e13dc, "const t_drag_object::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drag_object@@;vft=4e13dc;col=50b7f0;td=58f52c;chd=50b7e0;offset=0;cdOffset=0;validated-hierarchy; map:52407
DATA_CHT_1_COMPGEN(0x0090b7c8, "t_drag_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drag_object@@;vft=4e13dc;col=50b7f0;td=58f52c;chd=50b7e0;offset=0;cdOffset=0;validated-hierarchy; map:52408
DATA_CHT_1_COMPGEN(0x0090b7e0, "t_drag_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drag_object@@;vft=4e13dc;col=50b7f0;td=58f52c;chd=50b7e0;offset=0;cdOffset=0;validated-hierarchy; map:52409
DATA_CHT_1_COMPGEN(0x0090b7f0, "const t_drag_object::`RTTI Complete Object Locator'")
