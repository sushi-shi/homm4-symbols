// adventure_events_update.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/25 (A:7 B:1 C:0); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70553; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00494770, 0x15, STATIC_INIT_DISPATCH, "adventure_events_update#1")

// name:C; dyninit; see ledger; map:70554
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_update#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8420
VA_CHT_1(0x00494790, 0x109)
t_adventure_event_update::t_adventure_event_update()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8421
VA_CHT_1(0x00494970, 0x15d)
t_adventure_event_update::t_adventure_event_update(
    t_adventure_object* arg_0,
    t_level_map_point_2d arg_1,
    t_counted_ptr<t_memory_buffer_counted> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8422
VA_CHT_1(0x00494ad0, 0x3c)
void t_adventure_event_update::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8423
VA_CHT_1(0x00494b10, 0x34)
void t_adventure_event_update::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8424
VA_CHT_1(0x00494b50, 0xd4)
bool t_adventure_event_update::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=94c30:8425;class=t_adventure_event_update;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d3a84,col=4fa8c0,offset=0,slot=6,entry=94c30; map:8425
VA_CHT_1(0x00494c30, 0x13f)
bool t_adventure_event_update::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70555; name:B (dyninit; see ledger)
VA_CHT_1(0x00494d70, 0x20)
// adventure_events_update$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70557; name:B (dyninit; see ledger)
VA_CHT_1(0x00494d90, 0x5c)
// adventure_events_update$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_update$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_update$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_update$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8426
VA_CHT_1_COMPGEN(0x004948a0, 0x1e, SCALAR_DELETING_DTOR, t_adventure_event_update)

// name:A; map symbol; map:8427
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_event_update)

// name:A; map symbol; map:8428
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_update::~t_adventure_event_update()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8429
VA_CHT_1_COMPGEN(0x00494df0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_update)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43188
DATA_CHT_1_COMPGEN(0x008d3a7c, "const t_adventure_event_update::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43189
DATA_CHT_1_COMPGEN(0x008d3a84, "const t_adventure_event_update::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_update@@;vft=4d3a7c;col=4fa910;td=58c130;chd=4fa900;offset=8;cdOffset=0;validated-hierarchy; map:48705
DATA_CHT_1_COMPGEN(0x008fa910, "const t_adventure_event_update::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_update@@;bcd=4fa8d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48706
DATA_CHT_1_COMPGEN(0x008fa8d4, "t_adventure_event_update::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_update@@;vft=4d3a7c;col=4fa910;td=58c130;chd=4fa900;offset=8;cdOffset=0;validated-hierarchy; map:48707
DATA_CHT_1_COMPGEN(0x008fa8ec, "t_adventure_event_update::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_update@@;vft=4d3a7c;col=4fa910;td=58c130;chd=4fa900;offset=8;cdOffset=0;validated-hierarchy; map:48708
DATA_CHT_1_COMPGEN(0x008fa900, "t_adventure_event_update::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48709
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_update::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_update@@;td=58c130;validated-header; map:57656
DATA_CHT_1_COMPGEN(0x0098c130, "t_adventure_event_update `RTTI Type Descriptor'")
