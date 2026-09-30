// adventure_events_remove.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/26 (A:7 B:1 C:0); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70593; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00492d00, 0x15, STATIC_INIT_DISPATCH, "adventure_events_remove#1")

// name:C; dyninit; see ledger; map:70594
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_remove#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8357
VA_CHT_1(0x00492d20, 0x10c)
t_adventure_event_remove::t_adventure_event_remove()
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8358
VA_CHT_1(0x00492f00, 0xd9)
t_adventure_event_remove::t_adventure_event_remove(t_adventure_object* arg_0, t_level_map_point_2d arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8359
VA_CHT_1(0x00492fe0, 0x15d)
t_adventure_event_remove::t_adventure_event_remove(
    t_adventure_object* arg_0,
    t_level_map_point_2d arg_1,
    t_counted_ptr<t_memory_buffer_counted> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8360
VA_CHT_1(0x00493140, 0x2f)
void t_adventure_event_remove::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8361
VA_CHT_1(0x00493170, 0x67)
void t_adventure_event_remove::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8362
VA_CHT_1(0x004931e0, 0xfa)
bool t_adventure_event_remove::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=932e0:8363;class=t_adventure_event_remove;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d396c,col=4fa6cc,offset=0,slot=6,entry=932e0; map:8363
VA_CHT_1(0x004932e0, 0x169)
bool t_adventure_event_remove::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70595; name:B (dyninit; see ledger)
VA_CHT_1(0x00493450, 0x20)
// adventure_events_remove$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70597; name:B (dyninit; see ledger)
VA_CHT_1(0x00493470, 0x5c)
// adventure_events_remove$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_remove$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_remove$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70600
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_remove$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8364
VA_CHT_1_COMPGEN(0x00492e30, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_remove)

// name:A; map symbol; map:8365
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_remove)

// name:A; map symbol; map:8366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_remove::~t_adventure_event_remove()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8367
VA_CHT_1_COMPGEN(0x004934d0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_remove)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43178
DATA_CHT_1_COMPGEN(0x008d3964, "const t_adventure_event_remove::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43179
DATA_CHT_1_COMPGEN(0x008d396c, "const t_adventure_event_remove::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_remove@@;vft=4d3964;col=4fa71c;td=58c054;chd=4fa70c;offset=8;cdOffset=0;validated-hierarchy; map:48680
DATA_CHT_1_COMPGEN(0x008fa71c, "const t_adventure_event_remove::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_remove@@;bcd=4fa6e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48681
DATA_CHT_1_COMPGEN(0x008fa6e0, "t_adventure_event_remove::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_remove@@;vft=4d3964;col=4fa71c;td=58c054;chd=4fa70c;offset=8;cdOffset=0;validated-hierarchy; map:48682
DATA_CHT_1_COMPGEN(0x008fa6f8, "t_adventure_event_remove::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_remove@@;vft=4d3964;col=4fa71c;td=58c054;chd=4fa70c;offset=8;cdOffset=0;validated-hierarchy; map:48683
DATA_CHT_1_COMPGEN(0x008fa70c, "t_adventure_event_remove::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48684
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_remove::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_remove@@;td=58c054;validated-header; map:57651
DATA_CHT_1_COMPGEN(0x0098c054, "t_adventure_event_remove `RTTI Type Descriptor'")
