// drag_artifact.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 21/28 (A:10 B:0 C:0); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25791
VA_CHT_1(0x00699e30, 0x200)
t_drag_artifact_source::t_drag_artifact_source(
    t_screen_rect const& arg_0,
    t_artifact_slot arg_1,
    t_drag_artifact_source_holder* arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25792
VA_CHT_1(0x0069a200, 0xbb)
void t_drag_artifact_source::set(t_artifact const& arg_0, t_creature_stack* arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25793
VA_CHT_1(0x0069a2c0, 0xab)
bool t_drag_artifact_source::accept_drag(t_drag_object* arg_0, t_mouse_event const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25794
VA_CHT_1(0x0069a370, 0x218)
void t_drag_artifact_source::restore(t_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drag_artifact_source::drag_accepted(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25796
VA_CHT_1(0x0069a590, 0x1d)
void t_drag_artifact_source::drag_event(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_drag_artifact_source::update()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25798
VA_CHT_1(0x0069a5b0, 0x195)
t_drag_artifact::t_drag_artifact(t_artifact const& arg_0, t_drag_artifact_source* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25799
VA_CHT_1(0x0069a780, 0x19f)
t_drag_artifact::~t_drag_artifact()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25800
VA_CHT_1(0x0069a920, 0x143)
void t_drag_artifact::accepted(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65540; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069aa70, 0x20, STATIC_INIT_DISPATCH, drag_artifact)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25801
VA_CHT_1_COMPGEN(0x0069a030, 0x1e, SCALAR_DELETING_DTOR, t_drag_artifact_source)

// name:A; map symbol; map:25802
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_drag_artifact_source)

// name:A; map symbol; map:25803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drag_artifact_source::~t_drag_artifact_source()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25804
VA_CHT_1_COMPGEN(0x0069a750, 0x1e, VECTOR_DELETING_DTOR, t_drag_artifact)

// name:A; map symbol; map:25805
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_drag_artifact)

// name:A; map symbol; map:25806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_drag_object::~t_drag_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:25807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_drag_artifact_source>::t_counted_ptr<t_drag_artifact_source>(t_drag_artifact_source* arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44467
DATA_CHT_1_COMPGEN(0x008e1274, "const t_drag_artifact_source::`vftable'")

// confidence:A; rtti-name; map:44468
DATA_CHT_1_COMPGEN(0x008e12e4, "const t_drag_artifact::`vftable'")

// === .rdata$r (7 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_drag_artifact_source@@;bcd=50b6e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52392
DATA_CHT_1_COMPGEN(0x0090b6e0, "t_drag_artifact_source::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drag_artifact_source@@;vft=4e1274;col=50b71c;td=5a43ec;chd=50b70c;offset=0;cdOffset=0;validated-hierarchy; map:52393
DATA_CHT_1_COMPGEN(0x0090b6f8, "t_drag_artifact_source::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drag_artifact_source@@;vft=4e1274;col=50b71c;td=5a43ec;chd=50b70c;offset=0;cdOffset=0;validated-hierarchy; map:52394
DATA_CHT_1_COMPGEN(0x0090b70c, "t_drag_artifact_source::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drag_artifact_source@@;vft=4e1274;col=50b71c;td=5a43ec;chd=50b70c;offset=0;cdOffset=0;validated-hierarchy; map:52395
DATA_CHT_1_COMPGEN(0x0090b71c, "const t_drag_artifact_source::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drag_artifact@@;vft=4e12e4;col=50b75c;td=590168;chd=50b74c;offset=0;cdOffset=0;validated-hierarchy; map:52396
DATA_CHT_1_COMPGEN(0x0090b730, "t_drag_artifact::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drag_artifact@@;vft=4e12e4;col=50b75c;td=590168;chd=50b74c;offset=0;cdOffset=0;validated-hierarchy; map:52397
DATA_CHT_1_COMPGEN(0x0090b74c, "t_drag_artifact::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drag_artifact@@;vft=4e12e4;col=50b75c;td=590168;chd=50b74c;offset=0;cdOffset=0;validated-hierarchy; map:52398
DATA_CHT_1_COMPGEN(0x0090b75c, "const t_drag_artifact::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_drag_artifact_source@@;td=5a43ec;validated-header; map:58590
DATA_CHT_1_COMPGEN(0x009a43ec, "t_drag_artifact_source `RTTI Type Descriptor'")
