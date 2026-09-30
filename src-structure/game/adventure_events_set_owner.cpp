// adventure_events_set_owner.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/27 (A:7 B:1 C:0); unaccounted 9; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70577; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00493780, 0x15, STATIC_INIT_DISPATCH, "adventure_events_set_owner#1")

// name:C; dyninit; see ledger; map:70578
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_set_owner#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8378
VA_CHT_1(0x004937a0, 0x22)
t_adventure_event_set_owner::t_adventure_event_set_owner()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8379
VA_CHT_1(0x00493860, 0x79)
t_adventure_event_set_owner::t_adventure_event_set_owner(t_owned_adv_object* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_set_owner::t_adventure_event_set_owner(t_army* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8381
VA_CHT_1(0x004938e0, 0x84)
void t_adventure_event_set_owner::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8382
VA_CHT_1(0x00493970, 0x74)
void t_adventure_event_set_owner::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8383
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_set_owner::set_owner(t_adventure_object* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8384
VA_CHT_1(0x004939f0, 0xb6)
bool t_adventure_event_set_owner::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=93ab0:8385;class=t_adventure_event_set_owner;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d39dc,col=4fa794,offset=0,slot=6,entry=93ab0; map:8385
VA_CHT_1(0x00493ab0, 0x99)
bool t_adventure_event_set_owner::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70579; name:B (dyninit; see ledger)
VA_CHT_1(0x00493b50, 0x20)
// adventure_events_set_owner$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70581; name:B (dyninit; see ledger)
VA_CHT_1(0x00493b70, 0x5c)
// adventure_events_set_owner$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_owner$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_owner$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_owner$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8386
VA_CHT_1_COMPGEN(0x004937d0, 0x1e, SCALAR_DELETING_DTOR, t_adventure_event_set_owner)

// name:A; map symbol; map:8387
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_event_set_owner)

// name:A; map symbol; map:8388
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_set_owner::~t_adventure_event_set_owner()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8389
VA_CHT_1_COMPGEN(0x00493bd0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_set_owner)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43182
DATA_CHT_1_COMPGEN(0x008d39d4, "const t_adventure_event_set_owner::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43183
DATA_CHT_1_COMPGEN(0x008d39dc, "const t_adventure_event_set_owner::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_set_owner@@;vft=4d39d4;col=4fa7e4;td=58c0a8;chd=4fa7d4;offset=8;cdOffset=0;validated-hierarchy; map:48690
DATA_CHT_1_COMPGEN(0x008fa7e4, "const t_adventure_event_set_owner::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_set_owner@@;bcd=4fa7a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48691
DATA_CHT_1_COMPGEN(0x008fa7a8, "t_adventure_event_set_owner::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_set_owner@@;vft=4d39d4;col=4fa7e4;td=58c0a8;chd=4fa7d4;offset=8;cdOffset=0;validated-hierarchy; map:48692
DATA_CHT_1_COMPGEN(0x008fa7c0, "t_adventure_event_set_owner::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_set_owner@@;vft=4d39d4;col=4fa7e4;td=58c0a8;chd=4fa7d4;offset=8;cdOffset=0;validated-hierarchy; map:48693
DATA_CHT_1_COMPGEN(0x008fa7d4, "t_adventure_event_set_owner::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48694
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_set_owner::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_set_owner@@;td=58c0a8;validated-header; map:57653
DATA_CHT_1_COMPGEN(0x0098c0a8, "t_adventure_event_set_owner `RTTI Type Descriptor'")
