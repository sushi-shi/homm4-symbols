// adventure_events_set_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/25 (A:6 B:1 C:0); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70585; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004934e0, 0x15, STATIC_INIT_DISPATCH, "adventure_events_set_action#1")

// name:C; dyninit; see ledger; map:70586
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_set_action#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8368
VA_CHT_1(0x00493500, 0x22)
t_adventure_event_set_action::t_adventure_event_set_action()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8369
VA_CHT_1(0x004935c0, 0x2e)
t_adventure_event_set_action::t_adventure_event_set_action(t_actor* arg_0, t_adv_actor_action_id arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8370
VA_CHT_1(0x004935f0, 0x45)
void t_adventure_event_set_action::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_set_action::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8372
VA_CHT_1(0x00493640, 0x52)
bool t_adventure_event_set_action::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8373
VA_CHT_1(0x004936a0, 0x45)
bool t_adventure_event_set_action::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70587; name:B (dyninit; see ledger)
VA_CHT_1(0x004936f0, 0x20)
// adventure_events_set_action$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70589; name:B (dyninit; see ledger)
VA_CHT_1(0x00493710, 0x5c)
// adventure_events_set_action$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_action$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_action$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_set_action$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8374
VA_CHT_1_COMPGEN(0x00493530, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_set_action)

// name:A; map symbol; map:8375
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_set_action)

// name:A; map symbol; map:8376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_set_action::~t_adventure_event_set_action()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8377
VA_CHT_1_COMPGEN(0x00493770, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_set_action)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43180
DATA_CHT_1_COMPGEN(0x008d399c, "const t_adventure_event_set_action::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43181
DATA_CHT_1_COMPGEN(0x008d39a4, "const t_adventure_event_set_action::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_set_action@@;vft=4d399c;col=4fa780;td=58c07c;chd=4fa770;offset=8;cdOffset=0;validated-hierarchy; map:48685
DATA_CHT_1_COMPGEN(0x008fa780, "const t_adventure_event_set_action::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_set_action@@;bcd=4fa744;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48686
DATA_CHT_1_COMPGEN(0x008fa744, "t_adventure_event_set_action::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_set_action@@;vft=4d399c;col=4fa780;td=58c07c;chd=4fa770;offset=8;cdOffset=0;validated-hierarchy; map:48687
DATA_CHT_1_COMPGEN(0x008fa75c, "t_adventure_event_set_action::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_set_action@@;vft=4d399c;col=4fa780;td=58c07c;chd=4fa770;offset=8;cdOffset=0;validated-hierarchy; map:48688
DATA_CHT_1_COMPGEN(0x008fa770, "t_adventure_event_set_action::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48689
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_set_action::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_set_action@@;td=58c07c;validated-header; map:57652
DATA_CHT_1_COMPGEN(0x0098c07c, "t_adventure_event_set_action `RTTI Type Descriptor'")
