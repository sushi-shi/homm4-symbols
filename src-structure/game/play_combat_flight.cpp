// play_combat_flight.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/38 (A:6 B:2 C:0); unaccounted 14; skipped std 22.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (28 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63731; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a190, 0x15, STATIC_INIT_DISPATCH, "play_combat_flight#1")

// name:C; dyninit; see ledger; map:63732
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63733; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a1b0, 0x15, STATIC_INIT_DISPATCH, "play_combat_flight#2")

// name:C; dyninit; see ledger; map:63734
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63735; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a1d0, 0x15, STATIC_INIT_DISPATCH, "play_combat_flight#3")

// name:C; dyninit; see ledger; map:63736
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63737; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a1f0, 0x15, STATIC_INIT_DISPATCH, "play_combat_flight#4")

// name:C; dyninit; see ledger; map:63738
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63739; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a210, 0x10, STATIC_INIT_DISPATCH, "play_combat_flight#5")

// name:C; dyninit; see ledger; map:63740
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63741; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075a220, 0x15, STATIC_INIT_DISPATCH, "play_combat_flight#6")

// name:C; dyninit; see ledger; map:63742
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "play_combat_flight#6")

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31818
VA_CHT_1(0x0075a240, 0x280)
t_play_combat_flight::t_play_combat_flight(
    t_combat_creature& arg_0,
    t_map_point_3d const& arg_1,
    t_handler_1<t_combat_creature&> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31819
VA_CHT_1(0x0075a4e0, 0x13d)
t_play_combat_flight::~t_play_combat_flight()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31820
VA_CHT_1(0x0075a620, 0xc2)
t_map_point_3d t_play_combat_flight::advance()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31821
VA_CHT_1(0x0075a6f0, 0x570)
void t_play_combat_flight::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31822
VA_CHT_1(0x0075ac60, 0x433)
void t_play_combat_flight::compute_next_waypoint()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31823
VA_CHT_1(0x0075b0a0, 0x4b0)
void t_play_combat_flight::compute_distances(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31824
VA_CHT_1(0x0075b550, 0xef)
t_abstract_combat_object* t_play_combat_flight::get_tallest_object(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63743; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0075b640, 0x20, STATIC_INIT_DISPATCH, play_combat_flight)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31825
VA_CHT_1_COMPGEN(0x0075a4c0, 0x1e, SCALAR_DELETING_DTOR, t_play_combat_flight)

// name:A; map symbol; map:31826
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_play_combat_flight)

// name:A; map symbol; map:31827
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor::enable_shadow(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31828
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d abs(t_map_point_3d arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31829
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d sign_of(t_map_point_3d arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31830
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator!=(t_map_point_3d const& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31852
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_play_combat_flight)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31853
VA_CHT_1_COMPGEN(0x0075b670, 0x8, VECTOR_DELETING_DTOR, t_play_combat_flight)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45038
DATA_CHT_1_COMPGEN(0x008e79c4, "const t_play_combat_flight::`vftable'")

// confidence:A; rtti-name; map:45039
DATA_CHT_1_COMPGEN(0x008e79d4, "const t_play_combat_flight::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45040
DATA_CHT_1_COMPGEN(0x008e79e0, "const t_play_combat_flight::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// name:A; map symbol; map:53906
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_flight::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_play_combat_flight@@;vft=4e79d4;col=512428;td=5b04e8;chd=512474;offset=8;cdOffset=0;validated-hierarchy; map:53907
DATA_CHT_1_COMPGEN(0x00912428, "const t_play_combat_flight::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_play_combat_flight@@;bcd=51243c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53908
DATA_CHT_1_COMPGEN(0x0091243c, "t_play_combat_flight::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_play_combat_flight@@;vft=4e79d4;col=512428;td=5b04e8;chd=512474;offset=8;cdOffset=0;validated-hierarchy; map:53909
DATA_CHT_1_COMPGEN(0x00912454, "t_play_combat_flight::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_play_combat_flight@@;vft=4e79d4;col=512428;td=5b04e8;chd=512474;offset=8;cdOffset=0;validated-hierarchy; map:53910
DATA_CHT_1_COMPGEN(0x00912474, "t_play_combat_flight::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53911
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_play_combat_flight::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_play_combat_flight@@;td=5b04e8;validated-header; map:58954
DATA_CHT_1_COMPGEN(0x009b04e8, "t_play_combat_flight `RTTI Type Descriptor'")
