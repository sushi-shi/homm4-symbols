// check_artifact_influence.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\check_artifact_influence.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 38/65 (A:18 B:0 C:0); unaccounted 27; skipped std 25.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (47 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68209; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a66b0, 0x15, STATIC_INIT_DISPATCH, "check_artifact_influence#1")

// name:C; dyninit; see ledger; map:68210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68211; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a66d0, 0x15, STATIC_INIT_DISPATCH, "check_artifact_influence#2")

// name:C; dyninit; see ledger; map:68212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68213; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a66f0, 0x15, STATIC_INIT_DISPATCH, "check_artifact_influence#3")

// name:C; dyninit; see ledger; map:68214
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68215; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a6710, 0x15, STATIC_INIT_DISPATCH, "check_artifact_influence#4")

// name:C; dyninit; see ledger; map:68216
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68217; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a6730, 0x10, STATIC_INIT_DISPATCH, "check_artifact_influence#5")

// name:C; dyninit; see ledger; map:68218
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68219; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a6740, 0x15, STATIC_INIT_DISPATCH, "check_artifact_influence#6")

// name:C; dyninit; see ledger; map:68220
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "check_artifact_influence#6")

namespace {

// name:A; map symbol; map:19355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_influence_visitor::t_influence_visitor(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    int arg_2,
    t_creature_influence_bonus& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19356
VA_CHT_1(0x005a6760, 0x7e)
bool t_influence_visitor::check_target(t_artifact_effect& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19357
VA_CHT_1(0x005a6800, 0xe7)
bool t_influence_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19358
VA_CHT_1(0x005a6b00, 0x30)
bool t_influence_visitor::visit_ability(t_artifact_prop::t_give_ability& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19359
VA_CHT_1(0x005a6b30, 0x1ea)
bool t_influence_visitor::visit_combat(t_artifact_prop::t_combat& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_influence_visitor::visit_spell(t_artifact_prop::t_single_spell& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19361
VA_CHT_1(0x005a6d20, 0x30)
bool t_influence_visitor::visit_spell_cost(t_artifact_prop::t_spell_cost_base& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_influence_visitor::visit_spell_list(t_artifact_prop::t_spell_list_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19363
VA_CHT_1(0x005a6e70, 0xbb)
void check_artifact_influence(
    t_combat_creature const& arg_0,
    t_combat_creature const& arg_1,
    int arg_2,
    t_creature_influence_bonus& arg_3
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_attribute_visitor::t_artifact_attribute_visitor(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19365
VA_CHT_1(0x005a6f40, 0x6b)
bool t_artifact_attribute_visitor::visit(t_artifact_effect& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19366
VA_CHT_1(0x005a6fb0, 0x2b)
bool t_artifact_attribute_visitor::visit_ability(t_artifact_prop::t_give_ability& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19367
VA_CHT_1(0x005a6fe0, 0xd2)
bool t_artifact_attribute_visitor::visit_spell(t_artifact_prop::t_single_spell& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19368
VA_CHT_1(0x005a70c0, 0x11c)
bool t_artifact_attribute_visitor::visit_spell_list(t_artifact_prop::t_spell_list_effect& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19369
VA_CHT_1(0x005a71e0, 0x71)
void check_artifacts(t_combat_creature& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_attack_visitor::t_spell_attack_visitor(t_combat_creature& arg_0, t_combat_creature& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19371
VA_CHT_1(0x005a7260, 0x1c7)
bool t_spell_attack_visitor::visit_spell_attack(t_artifact_prop::t_spell_with_attack_base& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19372
VA_CHT_1(0x005a7440, 0x83)
void check_artifact_spell_attack(t_combat_creature& arg_0, t_combat_creature& arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68221; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a7940, 0x20, STATIC_INIT_DISPATCH, check_artifact_influence)

// name:A; map symbol; map:19373
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_influence_visitor)

// name:A; map symbol; map:19374
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_influence_visitor)

namespace {

// name:A; map symbol; map:19375
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_influence_visitor::~t_influence_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_artifact_prop::t_spell_cost_base::get_percentage() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19377
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_attribute_visitor)

// name:A; map symbol; map:19378
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_artifact_attribute_visitor)

namespace {

// name:A; map symbol; map:19379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_attribute_visitor::~t_artifact_attribute_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::add_movement(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19381
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_block_chance(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_guardian_robe(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_ability(t_creature_ability arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19384
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_attack_visitor)

// name:A; map symbol; map:19385
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_spell_attack_visitor)

namespace {

// name:A; map symbol; map:19386
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_attack_visitor::~t_spell_attack_visitor()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_artifact_prop::t_attack::affects(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19412
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_artifact_spell_immunity)

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:43869
DATA_CHT_1_COMPGEN(0x008d9074, "const t_influence_visitor::`vftable'")

// confidence:A; rtti-name; map:43870
DATA_CHT_1_COMPGEN(0x008d90b4, "const t_artifact_attribute_visitor::`vftable'")

// confidence:A; rtti-name; map:43871
DATA_CHT_1_COMPGEN(0x008d90f4, "const t_spell_attack_visitor::`vftable'")

// === .rdata$r (12 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_influence_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;bcd=503204;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50595
DATA_CHT_1_COMPGEN(0x00903204, "t_influence_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_influence_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d9074;col=503238;td=598578;chd=503228;offset=0;cdOffset=0;validated-hierarchy; map:50596
DATA_CHT_1_COMPGEN(0x0090321c, "t_influence_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_influence_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d9074;col=503238;td=598578;chd=503228;offset=0;cdOffset=0;validated-hierarchy; map:50597
DATA_CHT_1_COMPGEN(0x00903228, "t_influence_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_influence_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d9074;col=503238;td=598578;chd=503228;offset=0;cdOffset=0;validated-hierarchy; map:50598
DATA_CHT_1_COMPGEN(0x00903238, "const t_influence_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_artifact_attribute_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;bcd=50324c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50599
DATA_CHT_1_COMPGEN(0x0090324c, "t_artifact_attribute_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_artifact_attribute_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90b4;col=503280;td=5985d0;chd=503270;offset=0;cdOffset=0;validated-hierarchy; map:50600
DATA_CHT_1_COMPGEN(0x00903264, "t_artifact_attribute_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_artifact_attribute_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90b4;col=503280;td=5985d0;chd=503270;offset=0;cdOffset=0;validated-hierarchy; map:50601
DATA_CHT_1_COMPGEN(0x00903270, "t_artifact_attribute_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_artifact_attribute_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90b4;col=503280;td=5985d0;chd=503270;offset=0;cdOffset=0;validated-hierarchy; map:50602
DATA_CHT_1_COMPGEN(0x00903280, "const t_artifact_attribute_visitor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_attack_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;bcd=503294;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50603
DATA_CHT_1_COMPGEN(0x00903294, "t_spell_attack_visitor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_attack_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90f4;col=5032c8;td=598638;chd=5032b8;offset=0;cdOffset=0;validated-hierarchy; map:50604
DATA_CHT_1_COMPGEN(0x009032ac, "t_spell_attack_visitor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_attack_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90f4;col=5032c8;td=598638;chd=5032b8;offset=0;cdOffset=0;validated-hierarchy; map:50605
DATA_CHT_1_COMPGEN(0x009032b8, "t_spell_attack_visitor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_attack_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;vft=4d90f4;col=5032c8;td=598638;chd=5032b8;offset=0;cdOffset=0;validated-hierarchy; map:50606
DATA_CHT_1_COMPGEN(0x009032c8, "const t_spell_attack_visitor::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_influence_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;td=598578;validated-header; map:58165
DATA_CHT_1_COMPGEN(0x00998578, "t_influence_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_artifact_attribute_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;td=5985d0;validated-header; map:58166
DATA_CHT_1_COMPGEN(0x009985d0, "t_artifact_attribute_visitor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_spell_attack_visitor@?%C:\Work\game\check_artifact_influence.cpp3111531505@@;td=598638;validated-header; map:58167
DATA_CHT_1_COMPGEN(0x00998638, "t_spell_attack_visitor `RTTI Type Descriptor'")
