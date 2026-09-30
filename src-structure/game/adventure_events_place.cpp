// adventure_events_place.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/29 (A:16 B:1 C:1); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70609; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00492600, 0x15, STATIC_INIT_DISPATCH, "adventure_events_place#1")

// name:C; dyninit; see ledger; map:70610
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_place#1")

// confidence:A; align-order; retn,vptr; map:8319
VA_CHT_1(0x00492620, 0xaf)
t_adventure_event_place::t_adventure_event_place()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:8320
VA_CHT_1(0x00492780, 0xb9)
t_adventure_event_place::t_adventure_event_place(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8321
VA_CHT_1(0x00492840, 0x43)
void t_adventure_event_place::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8322
VA_CHT_1(0x00492890, 0x10)
void t_adventure_event_place::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8323
VA_CHT_1(0x004928a0, 0x7a)
bool t_adventure_event_place::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8324
VA_CHT_1(0x00492920, 0xa7)
bool t_adventure_event_place::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70611; name:B (dyninit; see ledger)
VA_CHT_1(0x004929d0, 0x20)
// adventure_events_place$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70613; name:B (dyninit; see ledger)
VA_CHT_1(0x004929f0, 0x5c)
// adventure_events_place$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70614
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_place$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70615
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_place$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70616
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_place$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:8325
VA_CHT_1_COMPGEN(0x004926d0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_place)

// name:A; map symbol; map:8326
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_place)

// name:A; map symbol; map:8327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_place::~t_adventure_event_place()
{
    // Body unavailable.
}

// name:A; map symbol; map:8328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>::t_counted_ptr<t_memory_buffer_counted>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_buffer_counted* t_counted_ptr<t_memory_buffer_counted>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>& t_counted_ptr<t_memory_buffer_counted>::operator=(
    t_counted_ptr<t_memory_buffer_counted> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>& t_counted_ptr<t_memory_buffer_counted>::operator=(
    t_memory_buffer_counted* arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:8332
VA_CHT_1_COMPGEN(0x00492a50, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_place)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43174
DATA_CHT_1_COMPGEN(0x008d390c, "const t_adventure_event_place::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43175
DATA_CHT_1_COMPGEN(0x008d3914, "const t_adventure_event_place::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_place@@;vft=4d390c;col=4fa640;td=58c000;chd=4fa630;offset=8;cdOffset=0;validated-hierarchy; map:48669
DATA_CHT_1_COMPGEN(0x008fa640, "const t_adventure_event_place::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_place@@;bcd=4fa604;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48670
DATA_CHT_1_COMPGEN(0x008fa604, "t_adventure_event_place::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_place@@;vft=4d390c;col=4fa640;td=58c000;chd=4fa630;offset=8;cdOffset=0;validated-hierarchy; map:48671
DATA_CHT_1_COMPGEN(0x008fa61c, "t_adventure_event_place::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_place@@;vft=4d390c;col=4fa640;td=58c000;chd=4fa630;offset=8;cdOffset=0;validated-hierarchy; map:48672
DATA_CHT_1_COMPGEN(0x008fa630, "t_adventure_event_place::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48673
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_place::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_place@@;td=58c000;validated-header; map:57649
DATA_CHT_1_COMPGEN(0x0098c000, "t_adventure_event_place `RTTI Type Descriptor'")
