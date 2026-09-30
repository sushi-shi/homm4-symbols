// adventure_events_visiblity.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/26 (A:16 B:1 C:1); unaccounted 8; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70545; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00494e00, 0x15, STATIC_INIT_DISPATCH, "adventure_events_visiblity#1")

// name:C; dyninit; see ledger; map:70546
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_visiblity#1")

// confidence:A; align-order; retn,vptr; map:8430
VA_CHT_1(0x00494e20, 0x26)
t_adventure_event_visiblity::t_adventure_event_visiblity()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:8431
VA_CHT_1(0x00494ee0, 0x5e)
t_adventure_event_visiblity::t_adventure_event_visiblity(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_object* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8432
VA_CHT_1(0x00494f40, 0xa2)
void t_adventure_event_visiblity::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_visiblity::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8434
VA_CHT_1(0x00494ff0, 0x14c)
bool t_adventure_event_visiblity::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8435
VA_CHT_1(0x00495140, 0x12f)
bool t_adventure_event_visiblity::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70547; name:B (dyninit; see ledger)
VA_CHT_1(0x00495270, 0x20)
// adventure_events_visiblity$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70549; name:B (dyninit; see ledger)
VA_CHT_1(0x00495290, 0x5c)
// adventure_events_visiblity$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_visiblity$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_visiblity$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_visiblity$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:8436
VA_CHT_1_COMPGEN(0x00494e50, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_visiblity)

// name:A; map symbol; map:8437
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_visiblity)

// name:A; map symbol; map:8438
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_visiblity::~t_adventure_event_visiblity()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:8439
VA_CHT_1_COMPGEN(0x004952f0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_visiblity)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43190
DATA_CHT_1_COMPGEN(0x008d3ab4, "const t_adventure_event_visiblity::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43191
DATA_CHT_1_COMPGEN(0x008d3abc, "const t_adventure_event_visiblity::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_visiblity@@;vft=4d3ab4;col=4fa974;td=58c158;chd=4fa964;offset=8;cdOffset=0;validated-hierarchy; map:48710
DATA_CHT_1_COMPGEN(0x008fa974, "const t_adventure_event_visiblity::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_visiblity@@;bcd=4fa938;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48711
DATA_CHT_1_COMPGEN(0x008fa938, "t_adventure_event_visiblity::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_visiblity@@;vft=4d3ab4;col=4fa974;td=58c158;chd=4fa964;offset=8;cdOffset=0;validated-hierarchy; map:48712
DATA_CHT_1_COMPGEN(0x008fa950, "t_adventure_event_visiblity::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_visiblity@@;vft=4d3ab4;col=4fa974;td=58c158;chd=4fa964;offset=8;cdOffset=0;validated-hierarchy; map:48713
DATA_CHT_1_COMPGEN(0x008fa964, "t_adventure_event_visiblity::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48714
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_visiblity::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_visiblity@@;td=58c158;validated-header; map:57657
DATA_CHT_1_COMPGEN(0x0098c158, "t_adventure_event_visiblity `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_shroud_remover@@;td=58c184;validated-header; map:57658
DATA_CHT_1_COMPGEN(0x0098c184, "t_shroud_remover `RTTI Type Descriptor'")
