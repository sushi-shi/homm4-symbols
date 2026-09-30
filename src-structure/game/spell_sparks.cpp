// spell_sparks.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\spell_sparks.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 61/89 (A:24 B:2 C:0); unaccounted 28; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (61 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62534; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3190, 0x15, STATIC_INIT_DISPATCH, "spell_sparks#1")

// name:C; dyninit; see ledger; map:62535
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62536; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d31b0, 0x15, STATIC_INIT_DISPATCH, "spell_sparks#2")

// name:C; dyninit; see ledger; map:62537
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62538; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d31d0, 0x15, STATIC_INIT_DISPATCH, "spell_sparks#3")

// name:C; dyninit; see ledger; map:62539
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62540; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d31f0, 0x15, STATIC_INIT_DISPATCH, "spell_sparks#4")

// name:C; dyninit; see ledger; map:62541
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62542; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3210, 0x10, STATIC_INIT_DISPATCH, "spell_sparks#5")

// name:C; dyninit; see ledger; map:62543
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62544; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3220, 0x15, STATIC_INIT_DISPATCH, "spell_sparks#6")

// name:C; dyninit; see ledger; map:62545
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#6")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38097
VA_CHT_1(0x007d3240, 0x306)
t_combat_creature_list get_sparks_targets(t_combat_creature* arg_0, t_direction arg_1)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38098
VA_CHT_1(0x007d3550, 0x18d)
t_sparks_damage::t_sparks_damage(
    t_counted_ptr<t_combat_creature> arg_0,
    t_combat_creature_list const& arg_1,
    int arg_2,
    t_combat_action_message const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38099
VA_CHT_1(0x007d37f0, 0x88)
void t_sparks_damage::operator()()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62546; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3880, 0x11, STATIC_INIT_DISPATCH, "spell_sparks#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62547; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d38a0, 0xd1, STATIC_CTOR, "spell_sparks#7")

// name:C; dyninit; see ledger; map:62548
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "spell_sparks#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62549; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3980, 0xa, STATIC_DTOR, "spell_sparks#7")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62550; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d3990, 0x1c, STATIC_INIT_DISPATCH, "spell_sparks#8")

// name:C; dyninit; see ledger; map:62551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_sparks#8")

// name:A; map symbol; map:38100
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_sparks::t_spell_sparks(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38101
VA_CHT_1(0x007d3a70, 0x22)
bool t_spell_sparks::begin_casting()
{
    // Body unavailable.
}

// name:A; map symbol; map:38102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_spell_sparks::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38103
VA_CHT_1(0x007d3aa0, 0x66)
bool t_spell_sparks::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38104
VA_CHT_1(0x007d3b10, 0x4c0)
void t_spell_sparks::cast(
    t_counted_ptr<t_combat_creature> arg_0,
    t_direction arg_1,
    int arg_2,
    t_combat_creature_list const& arg_3,
    bool arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38105
VA_CHT_1(0x007d3fd0, 0x1d2)
void t_spell_sparks::execute(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38106
VA_CHT_1(0x007d41b0, 0x8)
int t_spell_sparks::get_value(t_combat_creature* arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62552; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d41c0, 0x11, STATIC_INIT_DISPATCH, "spell_sparks#9")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62553; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d41e0, 0xd1, STATIC_CTOR, "spell_sparks#9")

// name:C; dyninit; see ledger; map:62554
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "spell_sparks#9")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62555; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d42c0, 0xa, STATIC_DTOR, "spell_sparks#9")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62556; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d42d0, 0x11, STATIC_INIT_DISPATCH, "spell_sparks#10")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62557; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d42f0, 0xd1, STATIC_CTOR, "spell_sparks#10")

// name:C; dyninit; see ledger; map:62558
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "spell_sparks#10")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62559; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d43d0, 0xa, STATIC_DTOR, "spell_sparks#10")

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38107
VA_CHT_1(0x007d43e0, 0x24e)
t_mouse_window* t_spell_sparks::mouse_move(t_screen_point const& arg_0, std::string& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38108
VA_CHT_1(0x007d4630, 0xf)
void t_spell_sparks::begin_attack(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38109
VA_CHT_1(0x007d4640, 0x19b)
void t_spell_sparks::move_to_attack(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38110
VA_CHT_1(0x007d47e0, 0x186)
bool t_spell_sparks::left_click(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_spell_sparks::execute_mirror_spell(t_counted_ptr<t_combat_creature> arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38112
VA_CHT_1(0x007d4970, 0x161)
std::list<t_counted_ptr<t_abstract_combat_ai_action>, std::allocator<t_counted_ptr<t_abstract_combat_ai_action>>> t_spell_sparks::generate_combat_ai_action_list(
    t_combat_ai& arg_0
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62560; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d4bc0, 0x20, STATIC_INIT_DISPATCH, spell_sparks)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38113
VA_CHT_1_COMPGEN(0x007d36e0, 0x1e, SCALAR_DELETING_DTOR, t_sparks_damage)

// name:A; map symbol; map:38114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sparks_damage)

namespace {

// name:A; map symbol; map:38115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sparks_damage::~t_sparks_damage()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38116
VA_CHT_1_COMPGEN(0x007d39b0, 0x1e, VECTOR_DELETING_DTOR, t_spell_sparks)

// name:A; map symbol; map:38117
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_sparks)

// name:A; map symbol; map:38118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_sparks::~t_spell_sparks()
{
    // Body unavailable.
}

// name:A; map symbol; map:38119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_spell_sparks>::t_combat_spell_registration<t_spell_sparks>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_spell_actor_animation>::t_counted_ptr<t_spell_actor_animation>(t_spell_actor_animation* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38121
VA_CHT_1(0x007d4b60, 0x57)
t_handler_1<t_combat_creature&> bound_handler(
    t_spell_sparks& arg_0,
    void (t_spell_sparks::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_spell_sparks>::t_spell_factory<t_spell_sparks>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38123
VA_CHT_1(0x007d4ae0, 0x7c)
t_combat_spell* t_spell_factory<t_spell_sparks>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_spell_sparks, t_combat_creature&>::t_bound_handler_1<t_spell_sparks, t_combat_creature&>(
    t_spell_sparks& arg_0,
    void (t_spell_sparks::*)(t_combat_creature&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_spell_sparks, t_combat_creature&>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38126
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>")

// name:A; map symbol; map:38127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>")

// name:A; map symbol; map:38128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_spell_sparks, t_combat_creature&>::~t_bound_handler_1<t_spell_sparks, t_combat_creature&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:38129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sparks_damage)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38130
VA_CHT_1_COMPGEN(0x007d4bf0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>")

// === .rdata (6 symbols) ===

// confidence:A; rtti-name; map:45822
DATA_CHT_1_COMPGEN(0x008ede0c, "const t_sparks_damage::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:45823
DATA_CHT_1_COMPGEN(0x008ede18, "const t_sparks_damage::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45824
DATA_CHT_1_COMPGEN(0x008ede2c, "const t_spell_sparks::`vftable'")

// confidence:A; rtti-name; map:45825
DATA_CHT_1_COMPGEN(0x008ede20, "const t_spell_factory<t_spell_sparks>::`vftable'")

// confidence:A; rtti-name; map:45826
DATA_CHT_1_COMPGEN(0x008ede70, "const t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:45827
DATA_CHT_1_COMPGEN(0x008ede7c, "const t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`vftable'{for `t_counted_object'}")

// === .rdata$r (18 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_sparks_damage@?%C:\Work\game\spell_sparks.cpp224504940@@;vft=4ede0c;col=51bfd4;td=5bc498;chd=51bfc4;offset=8;cdOffset=0;validated-hierarchy; map:56471
DATA_CHT_1_COMPGEN(0x0091bfd4, "const t_sparks_damage::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sparks_damage@?%C:\Work\game\spell_sparks.cpp224504940@@;bcd=51bf98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56472
DATA_CHT_1_COMPGEN(0x0091bf98, "t_sparks_damage::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sparks_damage@?%C:\Work\game\spell_sparks.cpp224504940@@;vft=4ede0c;col=51bfd4;td=5bc498;chd=51bfc4;offset=8;cdOffset=0;validated-hierarchy; map:56473
DATA_CHT_1_COMPGEN(0x0091bfb0, "t_sparks_damage::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sparks_damage@?%C:\Work\game\spell_sparks.cpp224504940@@;vft=4ede0c;col=51bfd4;td=5bc498;chd=51bfc4;offset=8;cdOffset=0;validated-hierarchy; map:56474
DATA_CHT_1_COMPGEN(0x0091bfc4, "t_sparks_damage::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56475
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sparks_damage::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_sparks@@;bcd=51c030;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56476
DATA_CHT_1_COMPGEN(0x0091c030, "t_spell_sparks::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_sparks@@;vft=4ede2c;col=51c068;td=5bc524;chd=51c058;offset=0;cdOffset=0;validated-hierarchy; map:56477
DATA_CHT_1_COMPGEN(0x0091c048, "t_spell_sparks::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_sparks@@;vft=4ede2c;col=51c068;td=5bc524;chd=51c058;offset=0;cdOffset=0;validated-hierarchy; map:56478
DATA_CHT_1_COMPGEN(0x0091c058, "t_spell_sparks::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_sparks@@;vft=4ede2c;col=51c068;td=5bc524;chd=51c058;offset=0;cdOffset=0;validated-hierarchy; map:56479
DATA_CHT_1_COMPGEN(0x0091c068, "const t_spell_sparks::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_spell_sparks@@@@;bcd=51bfe8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56480
DATA_CHT_1_COMPGEN(0x0091bfe8, "t_spell_factory<t_spell_sparks>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_spell_sparks@@@@;vft=4ede20;col=51c01c;td=5bc4f0;chd=51c00c;offset=0;cdOffset=0;validated-hierarchy; map:56481
DATA_CHT_1_COMPGEN(0x0091c000, "t_spell_factory<t_spell_sparks>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_spell_sparks@@@@;vft=4ede20;col=51c01c;td=5bc4f0;chd=51c00c;offset=0;cdOffset=0;validated-hierarchy; map:56482
DATA_CHT_1_COMPGEN(0x0091c00c, "t_spell_factory<t_spell_sparks>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_spell_sparks@@@@;vft=4ede20;col=51c01c;td=5bc4f0;chd=51c00c;offset=0;cdOffset=0;validated-hierarchy; map:56483
DATA_CHT_1_COMPGEN(0x0091c01c, "const t_spell_factory<t_spell_sparks>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_spell_sparks@@AAVt_combat_creature@@@@;vft=4ede70;col=51c0cc;td=5bc568;chd=51c0bc;offset=8;cdOffset=0;validated-hierarchy; map:56484
DATA_CHT_1_COMPGEN(0x0091c0cc, "const t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_spell_sparks@@AAVt_combat_creature@@@@;bcd=51c090;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56485
DATA_CHT_1_COMPGEN(0x0091c090, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_spell_sparks@@AAVt_combat_creature@@@@;vft=4ede70;col=51c0cc;td=5bc568;chd=51c0bc;offset=8;cdOffset=0;validated-hierarchy; map:56486
DATA_CHT_1_COMPGEN(0x0091c0a8, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_spell_sparks@@AAVt_combat_creature@@@@;vft=4ede70;col=51c0cc;td=5bc568;chd=51c0bc;offset=8;cdOffset=0;validated-hierarchy; map:56487
DATA_CHT_1_COMPGEN(0x0091c0bc, "t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56488
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_spell_sparks, t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_sparks_damage@?%C:\Work\game\spell_sparks.cpp224504940@@;td=5bc498;validated-header; map:59590
DATA_CHT_1_COMPGEN(0x009bc498, "t_sparks_damage `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_spell_sparks@@;td=5bc524;validated-header; map:59591
DATA_CHT_1_COMPGEN(0x009bc524, "t_spell_sparks `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_spell_sparks@@@@;td=5bc4f0;validated-header; map:59592
DATA_CHT_1_COMPGEN(0x009bc4f0, "t_spell_factory<t_spell_sparks> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_spell_sparks@@AAVt_combat_creature@@@@;td=5bc568;validated-header; map:59593
DATA_CHT_1_COMPGEN(0x009bc568, "t_bound_handler_1<t_spell_sparks, t_combat_creature&> `RTTI Type Descriptor'")
