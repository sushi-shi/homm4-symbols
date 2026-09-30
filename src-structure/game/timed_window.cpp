// timed_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/16 (A:10 B:1 C:1); unaccounted 4; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:A; align-order; stable,vptr; map:38900
VA_CHT_1(0x007f8410, 0xd4)
t_timed_window::t_timed_window(
    t_screen_point arg_0,
    t_window* arg_1,
    int arg_2,
    t_screen_point arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:38901
VA_CHT_1(0x007f8590, 0x5)
void t_timed_window::update_size()
{
    // Body unavailable.
}

// name:A; map symbol; map:38902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_timed_window::add_child(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38903
VA_CHT_1(0x007f85a0, 0xc2)
void t_timed_window::on_idle()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:38904
VA_CHT_1_COMPGEN(0x007f84f0, 0x1e, SCALAR_DELETING_DTOR, t_timed_window)

// name:A; map symbol; map:38905
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_timed_window)

// name:A; map symbol; map:38906
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_timed_window::~t_timed_window()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:38907
VA_CHT_1_COMPGEN(0x007f8670, 0xb, VECTOR_DELETING_DTOR, t_timed_window)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:45909
DATA_CHT_1_COMPGEN(0x008ee78c, "const t_timed_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45910
DATA_CHT_1_COMPGEN(0x008ee79c, "const t_timed_window::`vftable'{for `t_window'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_timed_window@@;vft=4ee78c;col=51d138;td=5bdc3c;chd=51d128;offset=196;cdOffset=0;validated-hierarchy; map:56710
DATA_CHT_1_COMPGEN(0x0091d138, "const t_timed_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_timed_window@@;bcd=51d0f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56711
DATA_CHT_1_COMPGEN(0x0091d0f8, "t_timed_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_timed_window@@;vft=4ee78c;col=51d138;td=5bdc3c;chd=51d128;offset=196;cdOffset=0;validated-hierarchy; map:56712
DATA_CHT_1_COMPGEN(0x0091d110, "t_timed_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_timed_window@@;vft=4ee78c;col=51d138;td=5bdc3c;chd=51d128;offset=196;cdOffset=0;validated-hierarchy; map:56713
DATA_CHT_1_COMPGEN(0x0091d128, "t_timed_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56714
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_timed_window::`RTTI Complete Object Locator'{for `t_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_timed_window@@;td=5bdc3c;validated-header; map:59645
DATA_CHT_1_COMPGEN(0x009bdc3c, "t_timed_window `RTTI Type Descriptor'")
