// gateway.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\gateway.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/49 (A:12 B:3 C:0); unaccounted 21; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (28 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:65361; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b50c0, 0x15, STATIC_INIT_DISPATCH, "gateway#1")

// name:C; dyninit; see ledger; map:65362
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "gateway#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65363; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b50e0, 0x1c, STATIC_INIT_DISPATCH, g_gateway_registration)

// name:B; dyninit; see ledger; map:65364
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_gateway_registration)

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:26664
VA_CHT_1(0x006b5100, 0x15e)
t_gateway::t_gateway(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26665
VA_CHT_1(0x006b5320, 0x9ea)
void t_gateway::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26666
VA_CHT_1(0x006b5d10, 0x75)
void t_gateway::destroy()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26667
VA_CHT_1(0x006b5d90, 0x81)
void t_gateway::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26668
VA_CHT_1(0x006b5e20, 0x10e)
void t_gateway::pathing_destination_query(
    t_adventure_path_point const& arg_0,
    t_adventure_path_finder& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65365; name:B (dyninit; see ledger)
VA_CHT_1(0x006b5fa0, 0x20)
// gateway$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65367; name:B (dyninit; see ledger)
VA_CHT_1(0x006b5fc0, 0x5c)
// gateway$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65368
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26669
VA_CHT_1_COMPGEN(0x006b5260, 0x2d, VECTOR_DELETING_DTOR, t_gateway)

// name:A; map symbol; map:26670
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_gateway)

// name:A; map symbol; map:26671
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_gateway::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:26672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway::~t_gateway()
{
    // Body unavailable.
}

// name:A; map symbol; map:26675
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_gateway>::t_object_registration<t_gateway>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26676
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway_base const* ai_select_gateway_exit(
    t_adventure_path const& arg_0,
    std::vector<t_counted_ptr<t_gateway>, std::allocator<t_counted_ptr<t_gateway>>>& arg_1,
    t_gateway_base const* arg_2,
    t_creature_array* arg_3,
    t_adv_map_point arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_gateway>::t_counted_ptr<t_gateway>(t_gateway* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway* t_counted_ptr<t_gateway>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26679
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway& t_counted_ptr<t_gateway>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26680
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_gateway>::t_object_factory<t_gateway>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:26681
VA_CHT_1(0x006b5f30, 0x62)
t_stationary_adventure_object* t_object_factory<t_gateway>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway* t_counted_ptr<t_gateway>::operator t_gateway*() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26683
VA_CHT_1_COMPGEN(0x006b6020, 0x8, VECTOR_DELETING_DTOR, t_gateway)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26684
VA_CHT_1_COMPGEN(0x006b6030, 0xb, VECTOR_DELETING_DTOR, t_gateway)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:44550
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:44551
DATA_CHT_1_COMPGEN(0x008e1b3c, "const t_gateway::`vftable'")

// confidence:B; rtti-order; map:44552
DATA_CHT_1_COMPGEN(0x008e1bfc, "const t_gateway::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:44553
DATA_CHT_1_COMPGEN(0x008e1c04, "const t_gateway::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44554
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:44555
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:44556
DATA_CHT_1_COMPGEN(0x008e1b34, "const t_object_factory<t_gateway>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:52640
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_gateway@@;vft=4e1b3c;col=50c7c0;td=5a7750;chd=50c7b0;offset=100;cdOffset=0;validated-hierarchy; map:52641
DATA_CHT_1_COMPGEN(0x0090c7c0, "const t_gateway::`RTTI Complete Object Locator'")

// name:A; map symbol; map:52642
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_gateway@@;bcd=50c76c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52643
DATA_CHT_1_COMPGEN(0x0090c76c, "t_gateway::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_gateway@@;vft=4e1b3c;col=50c7c0;td=5a7750;chd=50c7b0;offset=100;cdOffset=0;validated-hierarchy; map:52644
DATA_CHT_1_COMPGEN(0x0090c784, "t_gateway::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_gateway@@;vft=4e1b3c;col=50c7c0;td=5a7750;chd=50c7b0;offset=100;cdOffset=0;validated-hierarchy; map:52645
DATA_CHT_1_COMPGEN(0x0090c7b0, "t_gateway::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52646
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_gateway@@@@;bcd=50c6e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52647
DATA_CHT_1_COMPGEN(0x0090c6e8, "t_object_factory<t_gateway>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_gateway@@@@;vft=4e1b34;col=50c71c;td=5a7720;chd=50c70c;offset=0;cdOffset=0;validated-hierarchy; map:52648
DATA_CHT_1_COMPGEN(0x0090c700, "t_object_factory<t_gateway>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_gateway@@@@;vft=4e1b34;col=50c71c;td=5a7720;chd=50c70c;offset=0;cdOffset=0;validated-hierarchy; map:52649
DATA_CHT_1_COMPGEN(0x0090c70c, "t_object_factory<t_gateway>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_gateway@@@@;vft=4e1b34;col=50c71c;td=5a7720;chd=50c70c;offset=0;cdOffset=0;validated-hierarchy; map:52650
DATA_CHT_1_COMPGEN(0x0090c71c, "const t_object_factory<t_gateway>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_gateway@@;td=5a7750;validated-header; map:58646
DATA_CHT_1_COMPGEN(0x009a7750, "t_gateway `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_gateway@@@@;td=5a7720;validated-header; map:58647
DATA_CHT_1_COMPGEN(0x009a7720, "t_object_factory<t_gateway> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60231
DATA_CHT_1(0x009eed90)
t_object_registration<t_gateway> g_gateway_registration; // Initial value unavailable.

} // anonymous namespace
