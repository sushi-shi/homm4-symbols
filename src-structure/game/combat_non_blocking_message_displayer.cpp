// combat_non_blocking_message_displayer.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/20 (A:13 B:2 C:0); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:21120
VA_CHT_1(0x005d4ba0, 0x63)
t_combat_non_blocking_message_displayer::t_combat_non_blocking_message_displayer(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:21121
VA_CHT_1(0x005d4c80, 0x77)
void t_combat_non_blocking_message_displayer::display_action_message(
    t_combat_action_message const& arg_0,
    unsigned long arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:21122
VA_CHT_1(0x005d4d00, 0x17)
void t_combat_non_blocking_message_displayer::erase_action_message()
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:21123
VA_CHT_1(0x005d4d20, 0x9)
void t_combat_non_blocking_message_displayer::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67759; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d4d30, 0x20, STATIC_INIT_DISPATCH, combat_non_blocking_message_displayer)

// confidence:A; align-band; retn,stable,vslot; map:21124
VA_CHT_1_COMPGEN(0x005d4c10, 0x1e, SCALAR_DELETING_DTOR, t_combat_non_blocking_message_displayer)

// name:A; map symbol; map:21125
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_non_blocking_message_displayer)

// name:A; map symbol; map:21126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_non_blocking_message_displayer::~t_combat_non_blocking_message_displayer()
{
    // Body unavailable.
}

// name:A; map symbol; map:21127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_action_message const& t_combat_action_message_displayer::get_action_message() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21128
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_non_blocking_message_displayer)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43951
DATA_CHT_1_COMPGEN(0x008dc710, "const t_combat_non_blocking_message_displayer::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43952
DATA_CHT_1_COMPGEN(0x008dc700, "const t_combat_non_blocking_message_displayer::`vftable'{for `t_combat_action_message_displayer'}")

// === .rdata$r (7 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_non_blocking_message_displayer@@;vft=4dc710;col=50412c;td=599278;chd=50419c;offset=36;cdOffset=0;validated-hierarchy; map:50797
DATA_CHT_1_COMPGEN(0x0090412c, "const t_combat_non_blocking_message_displayer::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=504140;pmd=36,-1,0;attributes=9;validated-hierarchy-link; map:50798
DATA_CHT_1_COMPGEN(0x00904140, "t_idle_processor::`RTTI Base Class Descriptor at (36, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_action_message_displayer@@;bcd=504158;pmd=0,-1,0;attributes=9;validated-hierarchy-link; map:50799
DATA_CHT_1_COMPGEN(0x00904158, "t_combat_action_message_displayer::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_non_blocking_message_displayer@@;bcd=504170;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50800
DATA_CHT_1_COMPGEN(0x00904170, "t_combat_non_blocking_message_displayer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_non_blocking_message_displayer@@;vft=4dc710;col=50412c;td=599278;chd=50419c;offset=36;cdOffset=0;validated-hierarchy; map:50801
DATA_CHT_1_COMPGEN(0x00904188, "t_combat_non_blocking_message_displayer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_non_blocking_message_displayer@@;vft=4dc710;col=50412c;td=599278;chd=50419c;offset=36;cdOffset=0;validated-hierarchy; map:50802
DATA_CHT_1_COMPGEN(0x0090419c, "t_combat_non_blocking_message_displayer::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50803
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_non_blocking_message_displayer::`RTTI Complete Object Locator'{for `t_combat_action_message_displayer'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_non_blocking_message_displayer@@;td=599278;validated-header; map:58220
DATA_CHT_1_COMPGEN(0x00999278, "t_combat_non_blocking_message_displayer `RTTI Type Descriptor'")
