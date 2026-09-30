// replay_mover.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/24 (A:6 B:1 C:0); unaccounted 10; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63517; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00774c50, 0x15, STATIC_INIT_DISPATCH, "replay_mover#1")

// name:C; dyninit; see ledger; map:63518
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "replay_mover#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33061
VA_CHT_1(0x00774c70, 0x28a)
t_replay_mover::t_replay_mover(
    t_adventure_map_window* arg_0,
    t_army* arg_1,
    t_adventure_path const& arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33062
VA_CHT_1(0x00774f20, 0x12)
t_replay_mover::~t_replay_mover()
{
    // Body unavailable.
}

// name:A; map symbol; map:33063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_replay_mover::activate_trigger()
{
    // Body unavailable.
}

// name:A; map symbol; map:33064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_replay_mover::expend_movement(t_adv_map_point const& arg_0, t_direction arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_replay_mover::on_end()
{
    // Body unavailable.
}

// name:A; map symbol; map:33066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_replay_mover::trigger_event()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63519; name:B (dyninit; see ledger)
VA_CHT_1(0x00774f40, 0x20)
// replay_mover$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63521; name:B (dyninit; see ledger)
VA_CHT_1(0x00774f60, 0x5c)
// replay_mover$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// replay_mover$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// replay_mover$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// replay_mover$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33067
VA_CHT_1_COMPGEN(0x00774f00, 0x1e, VECTOR_DELETING_DTOR, t_replay_mover)

// name:A; map symbol; map:33068
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_replay_mover)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33069
VA_CHT_1_COMPGEN(0x00774fc0, 0x8, VECTOR_DELETING_DTOR, t_replay_mover)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:45200
DATA_CHT_1_COMPGEN(0x008e92dc, "const t_replay_mover::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:45201
DATA_CHT_1_COMPGEN(0x008e92e4, "const t_replay_mover::`vftable'{for `t_idle_processor_no_delay'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_replay_mover@@;vft=4e92dc;col=513f8c;td=5b1de8;chd=513f7c;offset=28;cdOffset=0;validated-hierarchy; map:54308
DATA_CHT_1_COMPGEN(0x00913f8c, "const t_replay_mover::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_replay_mover@@;bcd=513f4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54309
DATA_CHT_1_COMPGEN(0x00913f4c, "t_replay_mover::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_replay_mover@@;vft=4e92dc;col=513f8c;td=5b1de8;chd=513f7c;offset=28;cdOffset=0;validated-hierarchy; map:54310
DATA_CHT_1_COMPGEN(0x00913f64, "t_replay_mover::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_replay_mover@@;vft=4e92dc;col=513f8c;td=5b1de8;chd=513f7c;offset=28;cdOffset=0;validated-hierarchy; map:54311
DATA_CHT_1_COMPGEN(0x00913f7c, "t_replay_mover::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54312
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_replay_mover::`RTTI Complete Object Locator'{for `t_idle_processor_no_delay'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_replay_mover@@;td=5b1de8;validated-header; map:59044
DATA_CHT_1_COMPGEN(0x009b1de8, "t_replay_mover `RTTI Type Descriptor'")
