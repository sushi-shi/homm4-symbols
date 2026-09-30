// adventure_events_teleport.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/27 (A:7 B:1 C:0); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70561; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00494120, 0x15, STATIC_INIT_DISPATCH, "adventure_events_teleport#1")

// name:C; dyninit; see ledger; map:70562
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_teleport#1")

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8408
VA_CHT_1(0x00494140, 0x2f)
t_adventure_event_teleport::t_adventure_event_teleport()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8409
VA_CHT_1(0x00494200, 0x6c)
t_adventure_event_teleport::t_adventure_event_teleport(
    t_adventure_object* arg_0,
    t_adv_map_point arg_1,
    t_level_map_point_2d arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8410
VA_CHT_1(0x00494270, 0x7a)
void t_adventure_event_teleport::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8411
VA_CHT_1(0x004942f0, 0x3b)
void t_adventure_event_teleport::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8412
VA_CHT_1(0x00494330, 0x227)
bool t_adventure_event_teleport::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=94560:8413;class=t_adventure_event_teleport;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d3a4c,col=4fa85c,offset=0,slot=6,entry=94560; map:8413
VA_CHT_1(0x00494560, 0x171)
bool t_adventure_event_teleport::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70563; name:B (dyninit; see ledger)
VA_CHT_1(0x004946e0, 0x20)
// adventure_events_teleport$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70565; name:B (dyninit; see ledger)
VA_CHT_1(0x00494700, 0x5c)
// adventure_events_teleport$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_teleport$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70567
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_teleport$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70568
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_teleport$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8414
VA_CHT_1_COMPGEN(0x00494170, 0x1e, SCALAR_DELETING_DTOR, t_adventure_event_teleport)

// name:A; map symbol; map:8415
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_event_teleport)

// name:A; map symbol; map:8416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_teleport::~t_adventure_event_teleport()
{
    // Body unavailable.
}

// name:A; map symbol; map:8417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_level_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:8418
VA_CHT_1(0x00494190, 0x68)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_point_2d const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8419
VA_CHT_1_COMPGEN(0x00494760, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_teleport)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43186
DATA_CHT_1_COMPGEN(0x008d3a44, "const t_adventure_event_teleport::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43187
DATA_CHT_1_COMPGEN(0x008d3a4c, "const t_adventure_event_teleport::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_teleport@@;vft=4d3a44;col=4fa8ac;td=58c104;chd=4fa89c;offset=8;cdOffset=0;validated-hierarchy; map:48700
DATA_CHT_1_COMPGEN(0x008fa8ac, "const t_adventure_event_teleport::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_teleport@@;bcd=4fa870;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48701
DATA_CHT_1_COMPGEN(0x008fa870, "t_adventure_event_teleport::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_teleport@@;vft=4d3a44;col=4fa8ac;td=58c104;chd=4fa89c;offset=8;cdOffset=0;validated-hierarchy; map:48702
DATA_CHT_1_COMPGEN(0x008fa888, "t_adventure_event_teleport::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_teleport@@;vft=4d3a44;col=4fa8ac;td=58c104;chd=4fa89c;offset=8;cdOffset=0;validated-hierarchy; map:48703
DATA_CHT_1_COMPGEN(0x008fa89c, "t_adventure_event_teleport::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48704
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_teleport::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_teleport@@;td=58c104;validated-header; map:57655
DATA_CHT_1_COMPGEN(0x0098c104, "t_adventure_event_teleport `RTTI Type Descriptor'")
