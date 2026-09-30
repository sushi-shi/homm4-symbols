// magic_mirror.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 30/43 (A:24 B:2 C:4); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (27 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64717; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4450, 0x15, STATIC_INIT_DISPATCH, "magic_mirror#1")

// name:C; dyninit; see ledger; map:64718
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#1")

// confidence:A; dyninit-init; owner-conf-C; map:64719; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4470, 0x15, STATIC_INIT_DISPATCH, "magic_mirror#2")

// name:C; dyninit; see ledger; map:64720
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#2")

// confidence:A; dyninit-init; owner-conf-C; map:64721; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4490, 0x15, STATIC_INIT_DISPATCH, "magic_mirror#3")

// name:C; dyninit; see ledger; map:64722
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#3")

// confidence:A; dyninit-init; owner-conf-C; map:64723; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f44b0, 0x15, STATIC_INIT_DISPATCH, "magic_mirror#4")

// name:C; dyninit; see ledger; map:64724
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#4")

// confidence:A; dyninit-init; owner-conf-C; map:64725; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f44d0, 0x10, STATIC_INIT_DISPATCH, "magic_mirror#5")

// name:C; dyninit; see ledger; map:64726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#5")

// confidence:A; dyninit-init; owner-conf-C; map:64727; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f44e0, 0x15, STATIC_INIT_DISPATCH, "magic_mirror#6")

// name:C; dyninit; see ledger; map:64728
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "magic_mirror#6")

// confidence:A; align-order; vptr; map:28441
VA_CHT_1(0x006f4500, 0xcb)
t_mirror_spell_action::t_mirror_spell_action(
    t_counted_ptr<t_combat_creature> arg_0,
    t_combat_spell* arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:28442
VA_CHT_1(0x006f4670, 0x1fe)
void t_mirror_spell_action::operator()()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:28443
VA_CHT_1(0x006f4890, 0x73)
t_mirror_spell_handler::t_mirror_spell_handler(
    t_counted_ptr<t_combat_creature> arg_0,
    t_combat_spell* arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:28444
VA_CHT_1(0x006f4910, 0x8b)
void t_mirror_spell_handler::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:28445
VA_CHT_1(0x006f49a0, 0x2d6)
void cast_and_mirror(t_combat_creature* arg_0, t_combat_creature* arg_1, t_spell arg_2, std::string arg_3)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:64729
VA_CHT_1(0x006f4c80, 0x12e)
static std::string get_effect_text(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64730; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006f4db0, 0x20, STATIC_INIT_DISPATCH, magic_mirror)

// confidence:A; align-band; retn,stable,vslot; map:28446
VA_CHT_1_COMPGEN(0x006f45d0, 0x1e, VECTOR_DELETING_DTOR, t_mirror_spell_action)

// name:A; map symbol; map:28447
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_mirror_spell_action)

// name:A; map symbol; map:28448
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mirror_spell_action::~t_mirror_spell_action()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28449
VA_CHT_1_COMPGEN(0x006f4870, 0x1e, VECTOR_DELETING_DTOR, t_mirror_spell_handler)

// name:A; map symbol; map:28450
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_mirror_spell_handler)

// name:A; map symbol; map:28451
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mirror_spell_handler::~t_mirror_spell_handler()
{
    // Body unavailable.
}

// name:A; map symbol; map:28452
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mirror_spell_handler)

// confidence:C; align-order; stable; map:28453
VA_CHT_1_COMPGEN(0x006f4de0, 0x8, VECTOR_DELETING_DTOR, t_mirror_spell_action)

// === .rdata (4 symbols) ===

// confidence:A; rtti-name; map:44716
DATA_CHT_1_COMPGEN(0x008e481c, "const t_mirror_spell_action::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:44717
DATA_CHT_1_COMPGEN(0x008e4828, "const t_mirror_spell_action::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44718
DATA_CHT_1_COMPGEN(0x008e4830, "const t_mirror_spell_handler::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:44719
DATA_CHT_1_COMPGEN(0x008e483c, "const t_mirror_spell_handler::`vftable'{for `t_counted_object'}")

// === .rdata$r (10 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_mirror_spell_action@@;vft=4e481c;col=50e5b8;td=5aad8c;chd=50e5a8;offset=8;cdOffset=0;validated-hierarchy; map:53052
DATA_CHT_1_COMPGEN(0x0090e5b8, "const t_mirror_spell_action::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mirror_spell_action@@;bcd=50e57c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53053
DATA_CHT_1_COMPGEN(0x0090e57c, "t_mirror_spell_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mirror_spell_action@@;vft=4e481c;col=50e5b8;td=5aad8c;chd=50e5a8;offset=8;cdOffset=0;validated-hierarchy; map:53054
DATA_CHT_1_COMPGEN(0x0090e594, "t_mirror_spell_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mirror_spell_action@@;vft=4e481c;col=50e5b8;td=5aad8c;chd=50e5a8;offset=8;cdOffset=0;validated-hierarchy; map:53055
DATA_CHT_1_COMPGEN(0x0090e5a8, "t_mirror_spell_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53056
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mirror_spell_action::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mirror_spell_handler@@;vft=4e4830;col=50e61c;td=5aadb0;chd=50e60c;offset=8;cdOffset=0;validated-hierarchy; map:53057
DATA_CHT_1_COMPGEN(0x0090e61c, "const t_mirror_spell_handler::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mirror_spell_handler@@;bcd=50e5e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53058
DATA_CHT_1_COMPGEN(0x0090e5e0, "t_mirror_spell_handler::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mirror_spell_handler@@;vft=4e4830;col=50e61c;td=5aadb0;chd=50e60c;offset=8;cdOffset=0;validated-hierarchy; map:53059
DATA_CHT_1_COMPGEN(0x0090e5f8, "t_mirror_spell_handler::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mirror_spell_handler@@;vft=4e4830;col=50e61c;td=5aadb0;chd=50e60c;offset=8;cdOffset=0;validated-hierarchy; map:53060
DATA_CHT_1_COMPGEN(0x0090e60c, "t_mirror_spell_handler::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53061
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mirror_spell_handler::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_mirror_spell_action@@;td=5aad8c;validated-header; map:58746
DATA_CHT_1_COMPGEN(0x009aad8c, "t_mirror_spell_action `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_mirror_spell_handler@@;td=5aadb0;validated-header; map:58747
DATA_CHT_1_COMPGEN(0x009aadb0, "t_mirror_spell_handler `RTTI Type Descriptor'")
