// teleport_ability.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/30 (A:15 B:2 C:1); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62237; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea750, 0x15, STATIC_INIT_DISPATCH, "teleport_ability#1")

// name:C; dyninit; see ledger; map:62238
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#1")

// confidence:A; dyninit-init; owner-conf-C; map:62239; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea770, 0x15, STATIC_INIT_DISPATCH, "teleport_ability#2")

// name:C; dyninit; see ledger; map:62240
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#2")

// confidence:A; dyninit-init; owner-conf-C; map:62241; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea790, 0x15, STATIC_INIT_DISPATCH, "teleport_ability#3")

// name:C; dyninit; see ledger; map:62242
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#3")

// confidence:A; dyninit-init; owner-conf-C; map:62243; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea7b0, 0x15, STATIC_INIT_DISPATCH, "teleport_ability#4")

// name:C; dyninit; see ledger; map:62244
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#4")

// confidence:A; dyninit-init; owner-conf-C; map:62245; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea7d0, 0x10, STATIC_INIT_DISPATCH, "teleport_ability#5")

// name:C; dyninit; see ledger; map:62246
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#5")

// confidence:A; dyninit-init; owner-conf-C; map:62247; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ea7e0, 0x15, STATIC_INIT_DISPATCH, "teleport_ability#6")

// name:C; dyninit; see ledger; map:62248
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "teleport_ability#6")

// confidence:A; align-order; stable,vptr; map:38651
VA_CHT_1(0x007ea800, 0x17e)
t_teleport_ability::t_teleport_ability(
    t_combat_creature& arg_0,
    t_map_point_3d const& arg_1,
    t_handler_1<t_combat_creature&> arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_teleport_ability::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62249; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007eabb0, 0x20, STATIC_INIT_DISPATCH, teleport_ability)

// confidence:A; align-band; retn,stable,vslot; map:38653
VA_CHT_1_COMPGEN(0x007ea980, 0x1e, SCALAR_DELETING_DTOR, t_teleport_ability)

// name:A; map symbol; map:38654
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_teleport_ability)

// name:A; map symbol; map:38655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_teleport_ability::~t_teleport_ability()
{
    // Body unavailable.
}

// name:A; map symbol; map:38656
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_teleport_ability)

// confidence:C; align-order; stable; map:38657
VA_CHT_1_COMPGEN(0x007eabe0, 0x8, VECTOR_DELETING_DTOR, t_teleport_ability)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45887
DATA_CHT_1_COMPGEN(0x008ee3e4, "const t_teleport_ability::`vftable'")

// confidence:A; rtti-name; map:45888
DATA_CHT_1_COMPGEN(0x008ee3f4, "const t_teleport_ability::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45889
DATA_CHT_1_COMPGEN(0x008ee400, "const t_teleport_ability::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:56652
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_teleport_ability::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_teleport_ability@@;vft=4ee3f4;col=51cc70;td=5bd324;chd=51ccbc;offset=8;cdOffset=0;validated-hierarchy; map:56653
DATA_CHT_1_COMPGEN(0x0091cc70, "const t_teleport_ability::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_teleport_ability@@;bcd=51cc84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56654
DATA_CHT_1_COMPGEN(0x0091cc84, "t_teleport_ability::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_teleport_ability@@;vft=4ee3f4;col=51cc70;td=5bd324;chd=51ccbc;offset=8;cdOffset=0;validated-hierarchy; map:56655
DATA_CHT_1_COMPGEN(0x0091cc9c, "t_teleport_ability::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_teleport_ability@@;vft=4ee3f4;col=51cc70;td=5bd324;chd=51ccbc;offset=8;cdOffset=0;validated-hierarchy; map:56656
DATA_CHT_1_COMPGEN(0x0091ccbc, "t_teleport_ability::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56657
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_teleport_ability::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_teleport_ability@@;td=5bd324;validated-header; map:59631
DATA_CHT_1_COMPGEN(0x009bd324, "t_teleport_ability `RTTI Type Descriptor'")
