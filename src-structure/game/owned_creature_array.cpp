// owned_creature_array.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 9/25 (A:1 B:2 C:0); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63807; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00756e50, 0x15, STATIC_INIT_DISPATCH, "owned_creature_array#1")

// name:C; dyninit; see ledger; map:63808
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "owned_creature_array#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31614
VA_CHT_1(0x00756e70, 0x98)
t_owned_creature_array::t_owned_creature_array()
{
    // Body unavailable.
}

// name:A; map symbol; map:31615
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_frame* t_owned_creature_array::get_adventure_frame() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31616
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map* t_owned_creature_array::get_map() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31617
VA_CHT_1(0x00756f10, 0x14)
int t_owned_creature_array::get_owner_number() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63809; name:B (dyninit; see ledger)
VA_CHT_1(0x00756f40, 0x20)
// owned_creature_array$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63811; name:B (dyninit; see ledger)
VA_CHT_1(0x00756f60, 0x5c)
// owned_creature_array$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// owned_creature_array$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// owned_creature_array$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// owned_creature_array$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31618
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_owned_creature_array)

// name:A; map symbol; map:31619
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_owned_creature_array)

// name:A; map symbol; map:31620
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual t_adventure_frame* t_owned_creature_array::get_adventure_frame`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31621
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual t_adventure_map* t_owned_creature_array::get_map`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31622
VA_CHT_1(0x00756fc0, 0x8)
// [thunk]: public: virtual int t_owned_creature_array::get_owner_number`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:44998
DATA_CHT_1_COMPGEN(0x008e71bc, "const t_owned_creature_array::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:44999
DATA_CHT_1_COMPGEN(0x008e71fc, "const t_owned_creature_array::`vftable'{for `t_creature_array'}")

// name:A; map symbol; map:45000
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_creature_array::`vbtable'")

// === .rdata$r (5 symbols) ===

// name:A; map symbol; map:53840
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_creature_array::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:53841
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_owned_creature_array::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53842
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_owned_creature_array::`RTTI Base Class Array'")

// name:A; map symbol; map:53843
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_owned_creature_array::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53844
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_creature_array::`RTTI Complete Object Locator'{for `t_creature_array'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_owned_creature_array@@;td=5af688;validated-header; map:58944
DATA_CHT_1_COMPGEN(0x009af688, "t_owned_creature_array `RTTI Type Descriptor'")
