// adv_teleporter_entrance.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/50 (A:13 B:2 C:0); unaccounted 25; skipped std 10.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (30 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70758; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004694d0, 0x15, STATIC_INIT_DISPATCH, "adv_teleporter_entrance#1")

// name:C; dyninit; see ledger; map:70759
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_teleporter_entrance#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70760; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004694f0, 0x1c, STATIC_INIT_DISPATCH, "adv_teleporter_entrance#2")

// name:C; dyninit; see ledger; map:70761
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_teleporter_entrance#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:6047
VA_CHT_1(0x00469510, 0x15e)
t_adv_teleporter_entrance::t_adv_teleporter_entrance(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6048
VA_CHT_1(0x00469730, 0x8ec)
void t_adv_teleporter_entrance::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6049
VA_CHT_1(0x0046a020, 0xff)
void t_adv_teleporter_entrance::pathing_destination_query(
    t_adventure_path_point const& arg_0,
    t_adventure_path_finder& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70762; name:B (dyninit; see ledger)
VA_CHT_1(0x0046a190, 0x20)
// adv_teleporter_entrance$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70764; name:B (dyninit; see ledger)
VA_CHT_1(0x0046a1b0, 0x5c)
// adv_teleporter_entrance$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_entrance$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_entrance$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70767
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_teleporter_entrance$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:6050
VA_CHT_1_COMPGEN(0x00469670, 0x2d, VECTOR_DELETING_DTOR, t_adv_teleporter_entrance)

// name:A; map symbol; map:6051
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_teleporter_entrance)

// name:A; map symbol; map:6052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_teleporter_entrance::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6053
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_entrance::~t_adv_teleporter_entrance()
{
    // Body unavailable.
}

// name:A; map symbol; map:6054
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_gateway_base::get_identifier() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_teleporter_entrance::get_teleporter_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_teleporter_entrance>::t_object_registration<t_adv_teleporter_entrance>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway_base const* ai_select_gateway_exit(
    t_adventure_path const& arg_0,
    std::vector<t_counted_ptr<t_adv_teleporter_exit>, std::allocator<t_counted_ptr<t_adv_teleporter_exit>>>& arg_1,
    t_gateway_base const* arg_2,
    t_creature_array* arg_3,
    t_adv_map_point arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_exit* t_counted_ptr<t_adv_teleporter_exit>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_exit& t_counted_ptr<t_adv_teleporter_exit>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_teleporter_entrance>::t_object_factory<t_adv_teleporter_entrance>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=6a120:6070;class=t_object_factory<class t_adv_teleporter_entrance>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d23c4,col=4f902c,offset=0,slot=0,entry=6a120; map:6070
VA_CHT_1(0x0046a120, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_teleporter_entrance>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6071
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_adv_teleporter_exit>")

// name:A; map symbol; map:6072
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_teleporter_exit>::~t_counted_ptr<t_adv_teleporter_exit>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_exit* t_counted_ptr<t_adv_teleporter_exit>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6074
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_teleporter_exit* t_counted_ptr<t_adv_teleporter_exit>::operator t_adv_teleporter_exit*() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6075
VA_CHT_1_COMPGEN(0x0046a210, 0x8, VECTOR_DELETING_DTOR, t_adv_teleporter_entrance)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:6076
VA_CHT_1_COMPGEN(0x0046a220, 0xb, VECTOR_DELETING_DTOR, t_adv_teleporter_entrance)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43041
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43042
DATA_CHT_1_COMPGEN(0x008d23cc, "const t_adv_teleporter_entrance::`vftable'")

// confidence:B; rtti-order; map:43043
DATA_CHT_1_COMPGEN(0x008d248c, "const t_adv_teleporter_entrance::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43044
DATA_CHT_1_COMPGEN(0x008d2494, "const t_adv_teleporter_entrance::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43045
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43046
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43047
DATA_CHT_1_COMPGEN(0x008d23c4, "const t_object_factory<t_adv_teleporter_entrance>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48381
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_teleporter_entrance@@;vft=4d23cc;col=4f90d0;td=58ad68;chd=4f90c0;offset=100;cdOffset=0;validated-hierarchy; map:48382
DATA_CHT_1_COMPGEN(0x008f90d0, "const t_adv_teleporter_entrance::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48383
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_teleporter_entrance@@;bcd=4f907c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48384
DATA_CHT_1_COMPGEN(0x008f907c, "t_adv_teleporter_entrance::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_teleporter_entrance@@;vft=4d23cc;col=4f90d0;td=58ad68;chd=4f90c0;offset=100;cdOffset=0;validated-hierarchy; map:48385
DATA_CHT_1_COMPGEN(0x008f9094, "t_adv_teleporter_entrance::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_teleporter_entrance@@;vft=4d23cc;col=4f90d0;td=58ad68;chd=4f90c0;offset=100;cdOffset=0;validated-hierarchy; map:48386
DATA_CHT_1_COMPGEN(0x008f90c0, "t_adv_teleporter_entrance::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48387
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_teleporter_entrance::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_entrance@@@@;bcd=4f8ff8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48388
DATA_CHT_1_COMPGEN(0x008f8ff8, "t_object_factory<t_adv_teleporter_entrance>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_entrance@@@@;vft=4d23c4;col=4f902c;td=58ad28;chd=4f901c;offset=0;cdOffset=0;validated-hierarchy; map:48389
DATA_CHT_1_COMPGEN(0x008f9010, "t_object_factory<t_adv_teleporter_entrance>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_entrance@@@@;vft=4d23c4;col=4f902c;td=58ad28;chd=4f901c;offset=0;cdOffset=0;validated-hierarchy; map:48390
DATA_CHT_1_COMPGEN(0x008f901c, "t_object_factory<t_adv_teleporter_entrance>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_entrance@@@@;vft=4d23c4;col=4f902c;td=58ad28;chd=4f901c;offset=0;cdOffset=0;validated-hierarchy; map:48391
DATA_CHT_1_COMPGEN(0x008f902c, "const t_object_factory<t_adv_teleporter_entrance>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_teleporter_entrance@@;td=58ad68;validated-header; map:57565
DATA_CHT_1_COMPGEN(0x0098ad68, "t_adv_teleporter_entrance `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_teleporter_entrance@@@@;td=58ad28;validated-header; map:57566
DATA_CHT_1_COMPGEN(0x0098ad28, "t_object_factory<t_adv_teleporter_entrance> `RTTI Type Descriptor'")
