// adventure_events_mover.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/41 (A:18 B:1 C:3); unaccounted 19; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (33 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70617; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00491a00, 0x15, STATIC_INIT_DISPATCH, "adventure_events_mover#1")

// name:C; dyninit; see ledger; map:70618
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_mover#1")

// confidence:A; align-order; retn,stable,vptr; map:8293
VA_CHT_1(0x00491a20, 0x4b)
t_adventure_event_mover::t_adventure_event_mover()
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:8294
VA_CHT_1(0x00491b50, 0x258)
t_adventure_event_mover::t_adventure_event_mover(
    t_army* arg_0,
    t_adventure_path const& arg_1,
    bool arg_2,
    t_adv_map_point arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8295
VA_CHT_1(0x00491dd0, 0x28)
void t_adventure_event_mover::cancel_event()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8296
VA_CHT_1(0x00491e00, 0xcd)
void t_adventure_event_mover::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8297
VA_CHT_1(0x00491ed0, 0x3b)
void t_adventure_event_mover::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_mover::preprocess_path(t_adventure_path const& arg_0, t_level_map_point_2d arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_mover::mover_finish()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8300
VA_CHT_1(0x00491f10, 0x65)
void t_adventure_event_mover::update()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8301
VA_CHT_1(0x00491f80, 0x220)
bool t_adventure_event_mover::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:8302
VA_CHT_1(0x004921a0, 0x1f9)
bool t_adventure_event_mover::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70619; name:B (dyninit; see ledger)
VA_CHT_1(0x00492570, 0x20)
// adventure_events_mover$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70621; name:B (dyninit; see ledger)
VA_CHT_1(0x00492590, 0x5c)
// adventure_events_mover$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_mover$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_mover$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70624
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_mover$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:8303
VA_CHT_1_COMPGEN(0x00491a70, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_mover)

// name:A; map symbol; map:8304
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_mover)

// name:A; map symbol; map:8305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_mover::~t_adventure_event_mover()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:8306
VA_CHT_1(0x00491db0, 0x1d)
t_counted_ptr<t_replay_mover>::~t_counted_ptr<t_replay_mover>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction t_actor::get_direction() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army::teleport(t_adv_map_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator==(t_level_map_point_2d const& arg_0, t_level_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator==(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_level_map_point_2d& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_map_point_2d& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adv_map_point& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:8314
VA_CHT_1(0x00491a90, 0xb7)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adv_map_point const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_replay_mover>::t_counted_ptr<t_replay_mover>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_replay_mover>& t_counted_ptr<t_replay_mover>::operator=(t_replay_mover* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_replay_mover* t_counted_ptr<t_replay_mover>::operator->() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:8318
VA_CHT_1_COMPGEN(0x004925f0, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_mover)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43172
DATA_CHT_1_COMPGEN(0x008d38d4, "const t_adventure_event_mover::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43173
DATA_CHT_1_COMPGEN(0x008d38dc, "const t_adventure_event_mover::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_mover@@;vft=4d38d4;col=4fa5dc;td=58bfd8;chd=4fa5cc;offset=8;cdOffset=0;validated-hierarchy; map:48664
DATA_CHT_1_COMPGEN(0x008fa5dc, "const t_adventure_event_mover::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_mover@@;bcd=4fa5a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48665
DATA_CHT_1_COMPGEN(0x008fa5a0, "t_adventure_event_mover::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_mover@@;vft=4d38d4;col=4fa5dc;td=58bfd8;chd=4fa5cc;offset=8;cdOffset=0;validated-hierarchy; map:48666
DATA_CHT_1_COMPGEN(0x008fa5b8, "t_adventure_event_mover::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_mover@@;vft=4d38d4;col=4fa5dc;td=58bfd8;chd=4fa5cc;offset=8;cdOffset=0;validated-hierarchy; map:48667
DATA_CHT_1_COMPGEN(0x008fa5cc, "t_adventure_event_mover::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_mover::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_mover@@;td=58bfd8;validated-header; map:57648
DATA_CHT_1_COMPGEN(0x0098bfd8, "t_adventure_event_mover `RTTI Type Descriptor'")
