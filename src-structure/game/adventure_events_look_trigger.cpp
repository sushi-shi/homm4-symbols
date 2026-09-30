// adventure_events_look_trigger.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/25 (A:15 B:1 C:1); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70625; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00491760, 0x15, STATIC_INIT_DISPATCH, "adventure_events_look_trigger#1")

// name:C; dyninit; see ledger; map:70626
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_look_trigger#1")

// confidence:A; align-order; retn,stable,vptr; map:8283
VA_CHT_1(0x00491780, 0x22)
t_adventure_event_look_trigger::t_adventure_event_look_trigger()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:8284
VA_CHT_1(0x00491840, 0x2e)
t_adventure_event_look_trigger::t_adventure_event_look_trigger(t_actor* arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8285
VA_CHT_1(0x00491870, 0x47)
void t_adventure_event_look_trigger::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_look_trigger::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8287
VA_CHT_1(0x004918c0, 0x52)
bool t_adventure_event_look_trigger::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8288
VA_CHT_1(0x00491920, 0x45)
bool t_adventure_event_look_trigger::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70627; name:B (dyninit; see ledger)
VA_CHT_1(0x00491970, 0x20)
// adventure_events_look_trigger$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70629; name:B (dyninit; see ledger)
VA_CHT_1(0x00491990, 0x5c)
// adventure_events_look_trigger$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_look_trigger$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70631
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_look_trigger$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_look_trigger$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:8289
VA_CHT_1_COMPGEN(0x004917b0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_look_trigger)

// name:A; map symbol; map:8290
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_look_trigger)

// name:A; map symbol; map:8291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_look_trigger::~t_adventure_event_look_trigger()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:8292
VA_CHT_1_COMPGEN(0x004919f0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_look_trigger)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43170
DATA_CHT_1_COMPGEN(0x008d389c, "const t_adventure_event_look_trigger::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43171
DATA_CHT_1_COMPGEN(0x008d38a4, "const t_adventure_event_look_trigger::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_look_trigger@@;vft=4d389c;col=4fa578;td=58bfa8;chd=4fa568;offset=8;cdOffset=0;validated-hierarchy; map:48659
DATA_CHT_1_COMPGEN(0x008fa578, "const t_adventure_event_look_trigger::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_look_trigger@@;bcd=4fa53c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48660
DATA_CHT_1_COMPGEN(0x008fa53c, "t_adventure_event_look_trigger::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_look_trigger@@;vft=4d389c;col=4fa578;td=58bfa8;chd=4fa568;offset=8;cdOffset=0;validated-hierarchy; map:48661
DATA_CHT_1_COMPGEN(0x008fa554, "t_adventure_event_look_trigger::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_look_trigger@@;vft=4d389c;col=4fa578;td=58bfa8;chd=4fa568;offset=8;cdOffset=0;validated-hierarchy; map:48662
DATA_CHT_1_COMPGEN(0x008fa568, "t_adventure_event_look_trigger::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48663
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_look_trigger::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_look_trigger@@;td=58bfa8;validated-header; map:57647
DATA_CHT_1_COMPGEN(0x0098bfa8, "t_adventure_event_look_trigger `RTTI Type Descriptor'")
