// delay_effect.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/17 (A:6 B:1 C:0); unaccounted 5; skipped std 0.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (9 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23818
VA_CHT_1(0x0062e530, 0x3b)
t_delay_effect::t_delay_effect(t_delayed_effect* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23819
VA_CHT_1(0x0062e5f0, 0x8)
void t_delay_effect::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23820
VA_CHT_1_COMPGEN(0x0062e570, 0x1e, VECTOR_DELETING_DTOR, t_delay_effect)

// name:A; map symbol; map:23821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_delay_effect)

// name:A; map symbol; map:23822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_delay_effect::~t_delay_effect()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23823
VA_CHT_1(0x0062e590, 0x58)
t_counted_ptr<t_delayed_effect>::~t_counted_ptr<t_delayed_effect>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23824
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_delayed_effect>::t_counted_ptr<t_delayed_effect>(t_delayed_effect* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_delayed_effect* t_counted_ptr<t_delayed_effect>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23826
VA_CHT_1_COMPGEN(0x0062e600, 0x8, VECTOR_DELETING_DTOR, t_delay_effect)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44201
DATA_CHT_1_COMPGEN(0x008df39c, "const t_delay_effect::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:44202
DATA_CHT_1_COMPGEN(0x008df3a8, "const t_delay_effect::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_delay_effect@@;vft=4df39c;col=507f4c;td=59e84c;chd=507f3c;offset=8;cdOffset=0;validated-hierarchy; map:51624
DATA_CHT_1_COMPGEN(0x00907f4c, "const t_delay_effect::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_delay_effect@@;bcd=507f10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51625
DATA_CHT_1_COMPGEN(0x00907f10, "t_delay_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_delay_effect@@;vft=4df39c;col=507f4c;td=59e84c;chd=507f3c;offset=8;cdOffset=0;validated-hierarchy; map:51626
DATA_CHT_1_COMPGEN(0x00907f28, "t_delay_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_delay_effect@@;vft=4df39c;col=507f4c;td=59e84c;chd=507f3c;offset=8;cdOffset=0;validated-hierarchy; map:51627
DATA_CHT_1_COMPGEN(0x00907f3c, "t_delay_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:51628
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_delay_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_delay_effect@@;td=59e84c;validated-header; map:58408
DATA_CHT_1_COMPGEN(0x0099e84c, "t_delay_effect `RTTI Type Descriptor'")
