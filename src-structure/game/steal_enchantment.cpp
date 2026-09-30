// steal_enchantment.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\steal_enchantment.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 53/84 (A:30 B:1 C:0); unaccounted 31; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (52 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62324; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4300, 0x15, STATIC_INIT_DISPATCH, "steal_enchantment#1")

// name:C; dyninit; see ledger; map:62325
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62326; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4320, 0x15, STATIC_INIT_DISPATCH, "steal_enchantment#2")

// name:C; dyninit; see ledger; map:62327
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62328; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4340, 0x15, STATIC_INIT_DISPATCH, "steal_enchantment#3")

// name:C; dyninit; see ledger; map:62329
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62330; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4360, 0x15, STATIC_INIT_DISPATCH, "steal_enchantment#4")

// name:C; dyninit; see ledger; map:62331
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62332; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4380, 0x10, STATIC_INIT_DISPATCH, "steal_enchantment#5")

// name:C; dyninit; see ledger; map:62333
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62334; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e4390, 0x15, STATIC_INIT_DISPATCH, "steal_enchantment#6")

// name:C; dyninit; see ledger; map:62335
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62336; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e43b0, 0x11, STATIC_INIT_DISPATCH, "steal_enchantment#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62337; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e43d0, 0xd1, STATIC_CTOR, "steal_enchantment#7")

// name:C; dyninit; see ledger; map:62338
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "steal_enchantment#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62339; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e44b0, 0xa, STATIC_DTOR, "steal_enchantment#7")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62340; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e44c0, 0x1f, STATIC_INIT_DISPATCH, "steal_enchantment#8")

// name:C; dyninit; see ledger; map:62341
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#8")

namespace {

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38403
VA_CHT_1(0x007e44e0, 0x143)
t_receive_spell::t_receive_spell(
    t_counted_ptr<t_combat_creature> arg_0,
    t_spell arg_1,
    t_combat_action_message arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_receive_spell::operator()(t_counted_ptr<t_combat_creature> arg_0, t_map_point_2d arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_steal_enchantment::t_steal_enchantment(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38406
VA_CHT_1(0x007e4770, 0x1e)
double t_steal_enchantment::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:38407
VA_CHT_1(0x007e4830, 0x5fb)
bool t_steal_enchantment::steal(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    bool arg_2,
    t_combat_action_message& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38408
VA_CHT_1(0x007e4e50, 0x1b0)
bool t_steal_enchantment::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_steal_enchantment::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62342; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5000, 0x1f, STATIC_INIT_DISPATCH, "steal_enchantment#9")

// name:C; dyninit; see ledger; map:62343
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "steal_enchantment#9")

namespace {

// name:A; map symbol; map:38410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_steal_all::t_steal_all(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38411
VA_CHT_1(0x007e50d0, 0x23e)
void t_steal_all::execute(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38412
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_steal_all::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62344; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e5420, 0x20, STATIC_INIT_DISPATCH, steal_enchantment)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38413
VA_CHT_1_COMPGEN(0x007e4630, 0x1e, VECTOR_DELETING_DTOR, t_receive_spell)

// name:A; map symbol; map:38414
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_receive_spell)

namespace {

// name:A; map symbol; map:38415
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_receive_spell::~t_receive_spell()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38416
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_steal_enchantment)

// name:A; map symbol; map:38417
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_steal_enchantment)

// name:A; map symbol; map:38418
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_steal_enchantment::~t_steal_enchantment()
{
    // Body unavailable.
}

// name:A; map symbol; map:38419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_combat_creature> t_combat_creature::get_martyr_protector() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38420
VA_CHT_1_COMPGEN(0x007e5020, 0x1e, VECTOR_DELETING_DTOR, t_steal_all)

// name:A; map symbol; map:38421
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_steal_all)

namespace {

// name:A; map symbol; map:38422
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_steal_all::~t_steal_all()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38423
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_steal_enchantment>::~t_counted_ptr<t_steal_enchantment>()
{
    // Body unavailable.
}

// name:A; map symbol; map:38424
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_steal_enchantment>::t_combat_spell_registration<t_steal_enchantment>(
    t_spell arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38425
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_steal_all>::t_combat_spell_registration<t_steal_all>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38426
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_steal_enchantment>::t_counted_ptr<t_steal_enchantment>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:38427
VA_CHT_1(0x007e4e30, 0x20)
t_counted_ptr<t_steal_enchantment>& t_counted_ptr<t_steal_enchantment>::operator=(t_steal_enchantment* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_steal_enchantment* t_counted_ptr<t_steal_enchantment>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_steal_enchantment>::t_spell_factory<t_steal_enchantment>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38431
VA_CHT_1(0x007e5340, 0x79)
t_combat_spell* t_spell_factory<t_steal_enchantment>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_steal_all>::t_spell_factory<t_steal_all>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38433
VA_CHT_1(0x007e53c0, 0x5c)
t_combat_spell* t_spell_factory<t_steal_all>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38434
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_receive_spell)

// === .rdata (6 symbols) ===

// confidence:A; rtti-name; map:45857
DATA_CHT_1_COMPGEN(0x008ee0ec, "const t_receive_spell::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:45858
DATA_CHT_1_COMPGEN(0x008ee0f8, "const t_receive_spell::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45859
DATA_CHT_1_COMPGEN(0x008ee104, "const t_steal_enchantment::`vftable'")

// confidence:A; rtti-name; map:45860
DATA_CHT_1_COMPGEN(0x008ee154, "const t_steal_all::`vftable'")

// confidence:A; rtti-name; map:45861
DATA_CHT_1_COMPGEN(0x008ee0e4, "const t_spell_factory<t_steal_enchantment>::`vftable'")

// confidence:A; rtti-name; map:45862
DATA_CHT_1_COMPGEN(0x008ee148, "const t_spell_factory<t_steal_all>::`vftable'")

// === .rdata$r (21 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_receive_spell@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee0ec;col=51c734;td=5bce70;chd=51c724;offset=8;cdOffset=0;validated-hierarchy; map:56577
DATA_CHT_1_COMPGEN(0x0091c734, "const t_receive_spell::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_receive_spell@?%C:\Work\game\steal_enchantment.cpp435517198@@;bcd=51c6f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56578
DATA_CHT_1_COMPGEN(0x0091c6f8, "t_receive_spell::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_receive_spell@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee0ec;col=51c734;td=5bce70;chd=51c724;offset=8;cdOffset=0;validated-hierarchy; map:56579
DATA_CHT_1_COMPGEN(0x0091c710, "t_receive_spell::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_receive_spell@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee0ec;col=51c734;td=5bce70;chd=51c724;offset=8;cdOffset=0;validated-hierarchy; map:56580
DATA_CHT_1_COMPGEN(0x0091c724, "t_receive_spell::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56581
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_receive_spell::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_steal_enchantment@@;bcd=51c748;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56582
DATA_CHT_1_COMPGEN(0x0091c748, "t_steal_enchantment::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_steal_enchantment@@;vft=4ee104;col=51c784;td=5bcebc;chd=51c774;offset=0;cdOffset=0;validated-hierarchy; map:56583
DATA_CHT_1_COMPGEN(0x0091c760, "t_steal_enchantment::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_steal_enchantment@@;vft=4ee104;col=51c784;td=5bcebc;chd=51c774;offset=0;cdOffset=0;validated-hierarchy; map:56584
DATA_CHT_1_COMPGEN(0x0091c774, "t_steal_enchantment::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_steal_enchantment@@;vft=4ee104;col=51c784;td=5bcebc;chd=51c774;offset=0;cdOffset=0;validated-hierarchy; map:56585
DATA_CHT_1_COMPGEN(0x0091c784, "const t_steal_enchantment::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@;bcd=51c7e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56586
DATA_CHT_1_COMPGEN(0x0091c7e0, "t_steal_all::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee154;col=51c81c;td=5bcf40;chd=51c80c;offset=0;cdOffset=0;validated-hierarchy; map:56587
DATA_CHT_1_COMPGEN(0x0091c7f8, "t_steal_all::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee154;col=51c81c;td=5bcf40;chd=51c80c;offset=0;cdOffset=0;validated-hierarchy; map:56588
DATA_CHT_1_COMPGEN(0x0091c80c, "t_steal_all::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@;vft=4ee154;col=51c81c;td=5bcf40;chd=51c80c;offset=0;cdOffset=0;validated-hierarchy; map:56589
DATA_CHT_1_COMPGEN(0x0091c81c, "const t_steal_all::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_steal_enchantment@@@@;bcd=51c69c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56590
DATA_CHT_1_COMPGEN(0x0091c69c, "t_spell_factory<t_steal_enchantment>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_enchantment@@@@;vft=4ee0e4;col=51c6d0;td=5bce38;chd=51c6c0;offset=0;cdOffset=0;validated-hierarchy; map:56591
DATA_CHT_1_COMPGEN(0x0091c6b4, "t_spell_factory<t_steal_enchantment>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_enchantment@@@@;vft=4ee0e4;col=51c6d0;td=5bce38;chd=51c6c0;offset=0;cdOffset=0;validated-hierarchy; map:56592
DATA_CHT_1_COMPGEN(0x0091c6c0, "t_spell_factory<t_steal_enchantment>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_enchantment@@@@;vft=4ee0e4;col=51c6d0;td=5bce38;chd=51c6c0;offset=0;cdOffset=0;validated-hierarchy; map:56593
DATA_CHT_1_COMPGEN(0x0091c6d0, "const t_spell_factory<t_steal_enchantment>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@@@;bcd=51c798;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56594
DATA_CHT_1_COMPGEN(0x0091c798, "t_spell_factory<t_steal_all>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@@@;vft=4ee148;col=51c7cc;td=5bcee0;chd=51c7bc;offset=0;cdOffset=0;validated-hierarchy; map:56595
DATA_CHT_1_COMPGEN(0x0091c7b0, "t_spell_factory<t_steal_all>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@@@;vft=4ee148;col=51c7cc;td=5bcee0;chd=51c7bc;offset=0;cdOffset=0;validated-hierarchy; map:56596
DATA_CHT_1_COMPGEN(0x0091c7bc, "t_spell_factory<t_steal_all>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@@@;vft=4ee148;col=51c7cc;td=5bcee0;chd=51c7bc;offset=0;cdOffset=0;validated-hierarchy; map:56597
DATA_CHT_1_COMPGEN(0x0091c7cc, "const t_spell_factory<t_steal_all>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_receive_spell@?%C:\Work\game\steal_enchantment.cpp435517198@@;td=5bce70;validated-header; map:59614
DATA_CHT_1_COMPGEN(0x009bce70, "t_receive_spell `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_steal_enchantment@@;td=5bcebc;validated-header; map:59615
DATA_CHT_1_COMPGEN(0x009bcebc, "t_steal_enchantment `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@;td=5bcf40;validated-header; map:59616
DATA_CHT_1_COMPGEN(0x009bcf40, "t_steal_all `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_steal_enchantment@@@@;td=5bce38;validated-header; map:59617
DATA_CHT_1_COMPGEN(0x009bce38, "t_spell_factory<t_steal_enchantment> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_steal_all@?%C:\Work\game\steal_enchantment.cpp435517198@@@@;td=5bcee0;validated-header; map:59618
DATA_CHT_1_COMPGEN(0x009bcee0, "t_spell_factory<t_steal_all> `RTTI Type Descriptor'")
