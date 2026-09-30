// drag_creature.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/12 (A:5 B:0 C:0); unaccounted 1; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25808
VA_CHT_1(0x0069aa90, 0x31a)
t_drag_creature::t_drag_creature(
    t_creature_stack* arg_0,
    t_creature_array_window* arg_1,
    int arg_2,
    int arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25809
VA_CHT_1(0x0069add0, 0x171)
t_drag_creature::~t_drag_creature()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25810
VA_CHT_1(0x0069af50, 0xb0)
void t_drag_creature::accepted(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25811
VA_CHT_1(0x0069b000, 0xdd)
void t_drag_creature::swap(t_counted_ptr<t_creature_stack>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65538; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069b0e0, 0x20, STATIC_INIT_DISPATCH, drag_creature)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25812
VA_CHT_1_COMPGEN(0x0069adb0, 0x1e, SCALAR_DELETING_DTOR, t_drag_creature)

// name:A; map symbol; map:25813
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_drag_creature)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44469
DATA_CHT_1_COMPGEN(0x008e135c, "const t_drag_creature::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_drag_creature@@;bcd=50b770;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52399
DATA_CHT_1_COMPGEN(0x0090b770, "t_drag_creature::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drag_creature@@;vft=4e135c;col=50b7b4;td=58f548;chd=50b7a4;offset=0;cdOffset=0;validated-hierarchy; map:52400
DATA_CHT_1_COMPGEN(0x0090b788, "t_drag_creature::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drag_creature@@;vft=4e135c;col=50b7b4;td=58f548;chd=50b7a4;offset=0;cdOffset=0;validated-hierarchy; map:52401
DATA_CHT_1_COMPGEN(0x0090b7a4, "t_drag_creature::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drag_creature@@;vft=4e135c;col=50b7b4;td=58f548;chd=50b7a4;offset=0;cdOffset=0;validated-hierarchy; map:52402
DATA_CHT_1_COMPGEN(0x0090b7b4, "const t_drag_creature::`RTTI Complete Object Locator'")
