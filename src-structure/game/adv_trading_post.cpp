// adv_trading_post.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_trading_post.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 26/39 (A:13 B:3 C:0); unaccounted 13; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70732; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c1c0, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:70733
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6124
VA_CHT_1(0x0046c1e0, 0x111)
t_adv_trading_post::t_adv_trading_post(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70734; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c390, 0x11, STATIC_INIT_DISPATCH, "adv_trading_post#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70735; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c3b0, 0xd1, STATIC_CTOR, "adv_trading_post#2")

// name:C; dyninit; see ledger; map:70736
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_trading_post#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70737; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c490, 0xa, STATIC_DTOR, "adv_trading_post#2")

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6125
VA_CHT_1(0x0046c4a0, 0x230)
void t_adv_trading_post::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70738; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046c740, 0x20, STATIC_INIT_DISPATCH, adv_trading_post)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6126
VA_CHT_1_COMPGEN(0x0046c300, 0x2d, SCALAR_DELETING_DTOR, t_adv_trading_post)

// name:A; map symbol; map:6127
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_trading_post)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6128
VA_CHT_1(0x0046c330, 0x57)
// public: void t_adv_trading_post::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_trading_post::~t_adv_trading_post()
{
    // Body unavailable.
}

// name:A; map symbol; map:6130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_trading_post>::t_object_registration<t_adv_trading_post>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_trading_post>::t_object_factory<t_adv_trading_post>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=6c6d0:6132;class=t_object_factory<class t_adv_trading_post>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d2a5c,col=4f93d4,offset=0,slot=0,entry=6c6d0; map:6132
VA_CHT_1(0x0046c6d0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_trading_post>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6133
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_trading_post)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6134
VA_CHT_1_COMPGEN(0x0046c770, 0xb, VECTOR_DELETING_DTOR, t_adv_trading_post)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43069
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43070
DATA_CHT_1_COMPGEN(0x008d2a64, "const t_adv_trading_post::`vftable'")

// confidence:B; rtti-order; map:43071
DATA_CHT_1_COMPGEN(0x008d2b24, "const t_adv_trading_post::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43072
DATA_CHT_1_COMPGEN(0x008d2b2c, "const t_adv_trading_post::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43073
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43074
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43075
DATA_CHT_1_COMPGEN(0x008d2a5c, "const t_object_factory<t_adv_trading_post>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48425
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_trading_post@@;vft=4d2a64;col=4f9474;td=58b018;chd=4f9464;offset=84;cdOffset=0;validated-hierarchy; map:48426
DATA_CHT_1_COMPGEN(0x008f9474, "const t_adv_trading_post::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48427
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_trading_post@@;bcd=4f9424;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48428
DATA_CHT_1_COMPGEN(0x008f9424, "t_adv_trading_post::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_trading_post@@;vft=4d2a64;col=4f9474;td=58b018;chd=4f9464;offset=84;cdOffset=0;validated-hierarchy; map:48429
DATA_CHT_1_COMPGEN(0x008f943c, "t_adv_trading_post::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_trading_post@@;vft=4d2a64;col=4f9474;td=58b018;chd=4f9464;offset=84;cdOffset=0;validated-hierarchy; map:48430
DATA_CHT_1_COMPGEN(0x008f9464, "t_adv_trading_post::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48431
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_trading_post::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_trading_post@@@@;bcd=4f93a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48432
DATA_CHT_1_COMPGEN(0x008f93a0, "t_object_factory<t_adv_trading_post>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_trading_post@@@@;vft=4d2a5c;col=4f93d4;td=58afe0;chd=4f93c4;offset=0;cdOffset=0;validated-hierarchy; map:48433
DATA_CHT_1_COMPGEN(0x008f93b8, "t_object_factory<t_adv_trading_post>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_trading_post@@@@;vft=4d2a5c;col=4f93d4;td=58afe0;chd=4f93c4;offset=0;cdOffset=0;validated-hierarchy; map:48434
DATA_CHT_1_COMPGEN(0x008f93c4, "t_object_factory<t_adv_trading_post>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_trading_post@@@@;vft=4d2a5c;col=4f93d4;td=58afe0;chd=4f93c4;offset=0;cdOffset=0;validated-hierarchy; map:48435
DATA_CHT_1_COMPGEN(0x008f93d4, "const t_object_factory<t_adv_trading_post>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_trading_post@@;td=58b018;validated-header; map:57574
DATA_CHT_1_COMPGEN(0x0098b018, "t_adv_trading_post `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_trading_post@@@@;td=58afe0;validated-header; map:57575
DATA_CHT_1_COMPGEN(0x0098afe0, "t_object_factory<t_adv_trading_post> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59970
DATA_CHT_1(0x009cfce4)
t_object_registration<t_adv_trading_post> k_registration; // Initial value unavailable.

} // anonymous namespace
