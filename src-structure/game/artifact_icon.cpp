// artifact_icon.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/14 (A:10 B:1 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:15343
VA_CHT_1(0x00536b30, 0x136)
t_artifact_icon::t_artifact_icon(t_artifact const& arg_0, t_screen_point const& arg_1, t_window* arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:15344
VA_CHT_1(0x00536e00, 0x211)
t_artifact_icon::t_artifact_icon(t_screen_point const& arg_0, t_window* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:15345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_artifact_icon::create_image()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:15346
VA_CHT_1(0x00537020, 0x487)
void t_artifact_icon::set_artifact(t_artifact const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69475; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005374b0, 0x20, STATIC_INIT_DISPATCH, artifact_icon)

// confidence:A; align-band; retn,stable,vslot; map:15347
VA_CHT_1_COMPGEN(0x00536c70, 0x1e, VECTOR_DELETING_DTOR, t_artifact_icon)

// name:A; map symbol; map:15348
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_icon)

// name:A; map symbol; map:15349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_icon::~t_artifact_icon()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43543
DATA_CHT_1_COMPGEN(0x008d61d4, "const t_artifact_icon::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_icon@@;bcd=4fef4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49692
DATA_CHT_1_COMPGEN(0x008fef4c, "t_artifact_icon::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_icon@@;vft=4d61d4;col=4fef88;td=591d14;chd=4fef78;offset=0;cdOffset=0;validated-hierarchy; map:49693
DATA_CHT_1_COMPGEN(0x008fef64, "t_artifact_icon::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_icon@@;vft=4d61d4;col=4fef88;td=591d14;chd=4fef78;offset=0;cdOffset=0;validated-hierarchy; map:49694
DATA_CHT_1_COMPGEN(0x008fef78, "t_artifact_icon::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_icon@@;vft=4d61d4;col=4fef88;td=591d14;chd=4fef78;offset=0;cdOffset=0;validated-hierarchy; map:49695
DATA_CHT_1_COMPGEN(0x008fef88, "const t_artifact_icon::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_icon@@;td=591d14;validated-header; map:57929
DATA_CHT_1_COMPGEN(0x00991d14, "t_artifact_icon `RTTI Type Descriptor'")
