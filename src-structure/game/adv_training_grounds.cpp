// adv_training_grounds.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/36 (A:13 B:2 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70728; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c780, 0x1c, STATIC_INIT_DISPATCH, "adv_training_grounds#1")

// name:C; dyninit; see ledger; map:70729
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_training_grounds#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6135
VA_CHT_1(0x0046c7a0, 0x157)
t_adv_training_grounds::t_adv_training_grounds(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6136
VA_CHT_1(0x0046c990, 0x144)
std::string t_adv_training_grounds::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_training_grounds::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6138
VA_CHT_1(0x0046caf0, 0x66)
float t_adv_training_grounds::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70730; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046cbd0, 0x20, STATIC_INIT_DISPATCH, adv_training_grounds)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6139
VA_CHT_1_COMPGEN(0x0046c900, 0x2d, VECTOR_DELETING_DTOR, t_adv_training_grounds)

// name:A; map symbol; map:6140
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_training_grounds)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6141
VA_CHT_1(0x0046c930, 0x57)
// public: void t_adv_training_grounds::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_training_grounds::~t_adv_training_grounds()
{
    // Body unavailable.
}

// name:A; map symbol; map:6143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_training_grounds>::t_object_registration<t_adv_training_grounds>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_training_grounds>::t_object_factory<t_adv_training_grounds>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=6cb60:6145;class=t_object_factory<class t_adv_training_grounds>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d2c04,col=4f94bc,offset=0,slot=0,entry=6cb60; map:6145
VA_CHT_1(0x0046cb60, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_training_grounds>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6146
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_training_grounds)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6147
VA_CHT_1_COMPGEN(0x0046cc00, 0xb, VECTOR_DELETING_DTOR, t_adv_training_grounds)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43076
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43077
DATA_CHT_1_COMPGEN(0x008d2c0c, "const t_adv_training_grounds::`vftable'")

// confidence:B; rtti-order; map:43078
DATA_CHT_1_COMPGEN(0x008d2ccc, "const t_adv_training_grounds::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43079
DATA_CHT_1_COMPGEN(0x008d2cd4, "const t_adv_training_grounds::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43080
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43081
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43082
DATA_CHT_1_COMPGEN(0x008d2c04, "const t_object_factory<t_adv_training_grounds>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48436
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_training_grounds@@;vft=4d2c0c;col=4f9560;td=58b08c;chd=4f9550;offset=88;cdOffset=0;validated-hierarchy; map:48437
DATA_CHT_1_COMPGEN(0x008f9560, "const t_adv_training_grounds::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48438
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_training_grounds@@;bcd=4f950c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48439
DATA_CHT_1_COMPGEN(0x008f950c, "t_adv_training_grounds::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_training_grounds@@;vft=4d2c0c;col=4f9560;td=58b08c;chd=4f9550;offset=88;cdOffset=0;validated-hierarchy; map:48440
DATA_CHT_1_COMPGEN(0x008f9524, "t_adv_training_grounds::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_training_grounds@@;vft=4d2c0c;col=4f9560;td=58b08c;chd=4f9550;offset=88;cdOffset=0;validated-hierarchy; map:48441
DATA_CHT_1_COMPGEN(0x008f9550, "t_adv_training_grounds::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48442
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_training_grounds::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_training_grounds@@@@;bcd=4f9488;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48443
DATA_CHT_1_COMPGEN(0x008f9488, "t_object_factory<t_adv_training_grounds>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_training_grounds@@@@;vft=4d2c04;col=4f94bc;td=58b050;chd=4f94ac;offset=0;cdOffset=0;validated-hierarchy; map:48444
DATA_CHT_1_COMPGEN(0x008f94a0, "t_object_factory<t_adv_training_grounds>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_training_grounds@@@@;vft=4d2c04;col=4f94bc;td=58b050;chd=4f94ac;offset=0;cdOffset=0;validated-hierarchy; map:48445
DATA_CHT_1_COMPGEN(0x008f94ac, "t_object_factory<t_adv_training_grounds>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_training_grounds@@@@;vft=4d2c04;col=4f94bc;td=58b050;chd=4f94ac;offset=0;cdOffset=0;validated-hierarchy; map:48446
DATA_CHT_1_COMPGEN(0x008f94bc, "const t_object_factory<t_adv_training_grounds>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_training_grounds@@;td=58b08c;validated-header; map:57576
DATA_CHT_1_COMPGEN(0x0098b08c, "t_adv_training_grounds `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_training_grounds@@@@;td=58b050;validated-header; map:57577
DATA_CHT_1_COMPGEN(0x0098b050, "t_object_factory<t_adv_training_grounds> `RTTI Type Descriptor'")
