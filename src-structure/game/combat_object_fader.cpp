// combat_object_fader.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 29/47 (A:24 B:3 C:2); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (27 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67745; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4d60, 0x15, STATIC_INIT_DISPATCH, "combat_object_fader#1")

// name:C; dyninit; see ledger; map:67746
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#1")

// confidence:A; dyninit-init; owner-conf-C; map:67747; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4d80, 0x15, STATIC_INIT_DISPATCH, "combat_object_fader#2")

// name:C; dyninit; see ledger; map:67748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#2")

// confidence:A; dyninit-init; owner-conf-C; map:67749; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4da0, 0x15, STATIC_INIT_DISPATCH, "combat_object_fader#3")

// name:C; dyninit; see ledger; map:67750
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#3")

// confidence:A; dyninit-init; owner-conf-C; map:67751; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4dc0, 0x15, STATIC_INIT_DISPATCH, "combat_object_fader#4")

// name:C; dyninit; see ledger; map:67752
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#4")

// confidence:A; dyninit-init; owner-conf-C; map:67753; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4de0, 0x10, STATIC_INIT_DISPATCH, "combat_object_fader#5")

// name:C; dyninit; see ledger; map:67754
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#5")

// confidence:A; dyninit-init; owner-conf-C; map:67755; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4df0, 0x15, STATIC_INIT_DISPATCH, "combat_object_fader#6")

// name:C; dyninit; see ledger; map:67756
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_object_fader#6")

// confidence:A; align-order; retn,stable,vptr; map:21129
VA_CHT_1(0x005d4e10, 0xa9)
t_combat_object_fader::t_combat_object_fader(
    t_battlefield& arg_0,
    t_abstract_combat_object* arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:21130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_fader::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67757; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d5170, 0x20, STATIC_INIT_DISPATCH, combat_object_fader)

// name:A; map symbol; map:21131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_idle_processor::t_counted_idle_processor(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:21132
VA_CHT_1_COMPGEN(0x005d4ec0, 0x1e, SCALAR_DELETING_DTOR, t_counted_idle_processor)

// name:A; map symbol; map:21133
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_counted_idle_processor)

// name:A; map symbol; map:21134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_idle_processor::~t_counted_idle_processor()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:21135
VA_CHT_1_COMPGEN(0x005d4f30, 0x1e, VECTOR_DELETING_DTOR, t_combat_object_fader)

// name:A; map symbol; map:21136
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_object_fader)

// name:A; map symbol; map:21137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_fader::~t_combat_object_fader()
{
    // Body unavailable.
}

// name:A; map symbol; map:21138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_combat_object::get_maximum_alpha() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_object_fader>::t_counted_ptr<t_combat_object_fader>(t_combat_object_fader* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21140
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_object_fader)

// confidence:C; align-order; stable; map:21141
VA_CHT_1_COMPGEN(0x005d51a0, 0x8, VECTOR_DELETING_DTOR, t_combat_object_fader)

// confidence:C; align-order; stable; map:21142
VA_CHT_1_COMPGEN(0x005d51b0, 0x8, VECTOR_DELETING_DTOR, t_counted_idle_processor)

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:43953
DATA_CHT_1_COMPGEN(0x008dc734, "const t_combat_object_fader::`vftable'")

// confidence:B; rtti-order; map:43954
DATA_CHT_1_COMPGEN(0x008dc724, "const t_combat_object_fader::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43955
DATA_CHT_1_COMPGEN(0x008dc73c, "const t_combat_object_fader::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43956
DATA_CHT_1_COMPGEN(0x008dc748, "const t_counted_idle_processor::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43957
DATA_CHT_1_COMPGEN(0x008dc754, "const t_counted_idle_processor::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_object_fader@@;vft=4dc734;col=50421c;td=5992b0;chd=5042c8;offset=0;cdOffset=0;validated-hierarchy; map:50804
DATA_CHT_1_COMPGEN(0x0090421c, "const t_combat_object_fader::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50805
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_object_fader::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=504230;pmd=44,-1,0;attributes=9;validated-hierarchy-link; map:50806
DATA_CHT_1_COMPGEN(0x00904230, "t_uncopyable::`RTTI Base Class Descriptor at (44, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_action_message_displayer@@;bcd=504248;pmd=40,-1,0;attributes=0;validated-hierarchy-link; map:50807
DATA_CHT_1_COMPGEN(0x00904248, "t_combat_action_message_displayer::`RTTI Base Class Descriptor at (40, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_animation@@;bcd=504260;pmd=40,-1,0;attributes=0;validated-hierarchy-link; map:50808
DATA_CHT_1_COMPGEN(0x00904260, "t_counted_animation::`RTTI Base Class Descriptor at (40, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_idle_processor@@;bcd=504278;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50809
DATA_CHT_1_COMPGEN(0x00904278, "t_counted_idle_processor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_fader@@;bcd=504290;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50810
DATA_CHT_1_COMPGEN(0x00904290, "t_combat_object_fader::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_object_fader@@;vft=4dc734;col=50421c;td=5992b0;chd=5042c8;offset=0;cdOffset=0;validated-hierarchy; map:50811
DATA_CHT_1_COMPGEN(0x009042a8, "t_combat_object_fader::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_object_fader@@;vft=4dc734;col=50421c;td=5992b0;chd=5042c8;offset=0;cdOffset=0;validated-hierarchy; map:50812
DATA_CHT_1_COMPGEN(0x009042c8, "t_combat_object_fader::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50813
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_object_fader::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_counted_idle_processor@@;vft=4dc748;col=5041f4;td=598dc8;chd=5041e4;offset=8;cdOffset=0;validated-hierarchy; map:50814
DATA_CHT_1_COMPGEN(0x009041f4, "const t_counted_idle_processor::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_counted_idle_processor@@;vft=4dc748;col=5041f4;td=598dc8;chd=5041e4;offset=8;cdOffset=0;validated-hierarchy; map:50815
DATA_CHT_1_COMPGEN(0x009041d4, "t_counted_idle_processor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_counted_idle_processor@@;vft=4dc748;col=5041f4;td=598dc8;chd=5041e4;offset=8;cdOffset=0;validated-hierarchy; map:50816
DATA_CHT_1_COMPGEN(0x009041e4, "t_counted_idle_processor::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50817
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_counted_idle_processor::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_object_fader@@;td=5992b0;validated-header; map:58221
DATA_CHT_1_COMPGEN(0x009992b0, "t_combat_object_fader `RTTI Type Descriptor'")
