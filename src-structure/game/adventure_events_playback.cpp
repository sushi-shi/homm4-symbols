// adventure_events_playback.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/28 (A:13 B:2 C:4); unaccounted 9; skipped std 13.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70601; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00492a60, 0x15, STATIC_INIT_DISPATCH, "adventure_events_playback#1")

// name:C; dyninit; see ledger; map:70602
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_playback#1")

// confidence:A; align-order; retn,stable,vptr; map:8333
VA_CHT_1(0x00492a80, 0x63)
t_adventure_event_playback::t_adventure_event_playback(
    std::list<t_counted_ptr<t_adventure_event_base>, std::allocator<t_counted_ptr<t_adventure_event_base>>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:8334
VA_CHT_1(0x00492b60, 0xa)
void t_adventure_event_playback::attach(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:8335
VA_CHT_1(0x00492b70, 0x3f)
void t_adventure_event_playback::start()
{
    // Body unavailable.
}

// name:A; map symbol; map:8336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_playback::stop()
{
    // Body unavailable.
}

// confidence:C; align-order; map:8337
VA_CHT_1(0x00492bb0, 0x2e)
void t_adventure_event_playback::set_player_turn(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:8338
VA_CHT_1(0x00492be0, 0x1f)
void t_adventure_event_playback::on_idle()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:8339
VA_CHT_1(0x00492c00, 0x65)
void t_adventure_event_playback::adventure_event_finished(t_adventure_event_base* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70603; name:B (dyninit; see ledger)
VA_CHT_1(0x00492c70, 0x20)
// adventure_events_playback$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70605; name:B (dyninit; see ledger)
VA_CHT_1(0x00492c90, 0x5c)
// adventure_events_playback$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70606
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_playback$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70607
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_playback$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_playback$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:8340
VA_CHT_1_COMPGEN(0x00492af0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_playback)

// name:A; map symbol; map:8341
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_playback)

// name:A; map symbol; map:8342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_playback::~t_adventure_event_playback()
{
    // Body unavailable.
}

// name:A; map symbol; map:8355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_base* t_counted_ptr<t_adventure_event_base>::get() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:8356
VA_CHT_1_COMPGEN(0x00492cf0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_playback)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43176
DATA_CHT_1_COMPGEN(0x008d394c, "const t_adventure_event_playback::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43177
DATA_CHT_1_COMPGEN(0x008d3944, "const t_adventure_event_playback::`vftable'{for `t_counted_object'}")

// === .rdata$r (6 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_playback@@;vft=4d394c;col=4fa654;td=58c028;chd=4fa6a8;offset=8;cdOffset=0;validated-hierarchy; map:48674
DATA_CHT_1_COMPGEN(0x008fa654, "const t_adventure_event_playback::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=4fa668;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:48675
DATA_CHT_1_COMPGEN(0x008fa668, "t_idle_processor::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_playback@@;bcd=4fa680;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48676
DATA_CHT_1_COMPGEN(0x008fa680, "t_adventure_event_playback::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_playback@@;vft=4d394c;col=4fa654;td=58c028;chd=4fa6a8;offset=8;cdOffset=0;validated-hierarchy; map:48677
DATA_CHT_1_COMPGEN(0x008fa698, "t_adventure_event_playback::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_playback@@;vft=4d394c;col=4fa654;td=58c028;chd=4fa6a8;offset=8;cdOffset=0;validated-hierarchy; map:48678
DATA_CHT_1_COMPGEN(0x008fa6a8, "t_adventure_event_playback::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48679
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_playback::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_playback@@;td=58c028;validated-header; map:57650
DATA_CHT_1_COMPGEN(0x0098c028, "t_adventure_event_playback `RTTI Type Descriptor'")
