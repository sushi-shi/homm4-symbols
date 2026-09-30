// army_list.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 8/9 (A:8 B:0 C:0); unaccounted 1; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (3 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:14481
VA_CHT_1(0x005299a0, 0x7)
t_list_viewer::~t_list_viewer()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:14482
VA_CHT_1_COMPGEN(0x005299b0, 0x20, SCALAR_DELETING_DTOR, t_list_viewer)

// name:A; map symbol; map:14483
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_list_viewer)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43453
DATA_CHT_1_COMPGEN(0x008d5804, "const t_list_viewer::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_list_viewer@@;bcd=4fd76c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49357
DATA_CHT_1_COMPGEN(0x008fd76c, "t_list_viewer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_list_viewer@@;vft=4d5804;col=4fd79c;td=5905e8;chd=4fd78c;offset=0;cdOffset=0;validated-hierarchy; map:49358
DATA_CHT_1_COMPGEN(0x008fd784, "t_list_viewer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_list_viewer@@;vft=4d5804;col=4fd79c;td=5905e8;chd=4fd78c;offset=0;cdOffset=0;validated-hierarchy; map:49359
DATA_CHT_1_COMPGEN(0x008fd78c, "t_list_viewer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_list_viewer@@;vft=4d5804;col=4fd79c;td=5905e8;chd=4fd78c;offset=0;cdOffset=0;validated-hierarchy; map:49360
DATA_CHT_1_COMPGEN(0x008fd79c, "const t_list_viewer::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_list_viewer@@;td=5905e8;validated-header; map:57850
DATA_CHT_1_COMPGEN(0x009905e8, "t_list_viewer `RTTI Type Descriptor'")
