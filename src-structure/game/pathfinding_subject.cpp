// pathfinding_subject.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 22/37 (A:13 B:4 C:5); unaccounted 15; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63771; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00758e40, 0x15, STATIC_INIT_DISPATCH, "pathfinding_subject#1")

// name:C; dyninit; see ledger; map:63772
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "pathfinding_subject#1")

// confidence:A; align-order; retn,stable,vptr; map:31740
VA_CHT_1(0x00758e60, 0xb4)
t_pathfinding_subject::t_pathfinding_subject(t_adventure_map* arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:31741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map* t_pathfinding_subject::get_map() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:31742
VA_CHT_1(0x00758f20, 0x26)
int t_pathfinding_subject::get_movement(bool arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31743
VA_CHT_1(0x00758f70, 0x6)
int t_pathfinding_subject::get_max_movement(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_pathfinding_subject::get_owner_number() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31745
VA_CHT_1(0x00758f90, 0x24)
t_adv_map_point t_pathfinding_subject::get_position() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31746
VA_CHT_1(0x00758fc0, 0x22)
bool t_pathfinding_subject::get_virtual_position(t_adv_map_point& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:31747
VA_CHT_1(0x00758ff0, 0x20)
void t_pathfinding_subject::set_position(t_adv_map_point const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63773; name:B (dyninit; see ledger)
VA_CHT_1(0x00759010, 0x20)
// pathfinding_subject$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63775; name:B (dyninit; see ledger)
VA_CHT_1(0x00759030, 0x5c)
// pathfinding_subject$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// pathfinding_subject$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// pathfinding_subject$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63778
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// pathfinding_subject$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_pathfinding_subject)

// name:A; map symbol; map:31749
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_pathfinding_subject)

// name:A; map symbol; map:31750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_pathfinding_subject::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31751
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pathfinding_subject::~t_pathfinding_subject()
{
    // Body unavailable.
}

// name:A; map symbol; map:31752
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_pathfinding_subject)

// confidence:C; align-order; stable; map:31753
VA_CHT_1(0x00759090, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`vtordisp{-4, 36}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:31754
VA_CHT_1(0x007590a0, 0x8)
// [thunk]: public: virtual t_adventure_map* t_pathfinding_subject::get_map`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:31755
VA_CHT_1(0x007590b0, 0x8)
// [thunk]: public: virtual int t_pathfinding_subject::get_owner_number`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:31756
VA_CHT_1(0x007590c0, 0x8)
// [thunk]: public: virtual t_adv_map_point t_pathfinding_subject::get_position`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:31757
VA_CHT_1(0x007590d0, 0x8)
// [thunk]: public: virtual bool t_pathfinding_subject::get_virtual_position`vtordisp{-4, 0}'(t_adv_map_point&) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (4 symbols) ===

// name:A; map symbol; map:45011
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_pathfinding_subject::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45012
DATA_CHT_1_COMPGEN(0x008e743c, "const t_pathfinding_subject::`vftable'")

// confidence:B; rtti-order; map:45013
DATA_CHT_1_COMPGEN(0x008e7484, "const t_pathfinding_subject::`vftable'{for `t_creature_array'}")

// name:A; map symbol; map:45014
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_pathfinding_subject::`vbtable'")

// === .rdata$r (7 symbols) ===

// name:A; map symbol; map:53864
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_pathfinding_subject::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_pathfinding_subject@@;vft=4e743c;col=512104;td=5b03d4;chd=5120f4;offset=112;cdOffset=0;validated-hierarchy; map:53865
DATA_CHT_1_COMPGEN(0x00912104, "const t_pathfinding_subject::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_object@@;bcd=5120ac;pmd=72,-1,0;attributes=0;validated-hierarchy-link; map:53866
DATA_CHT_1_COMPGEN(0x009120ac, "t_counted_object::`RTTI Base Class Descriptor at (72, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_pathfinding_subject@@;bcd=5120c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53867
DATA_CHT_1_COMPGEN(0x009120c4, "t_pathfinding_subject::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_pathfinding_subject@@;vft=4e743c;col=512104;td=5b03d4;chd=5120f4;offset=112;cdOffset=0;validated-hierarchy; map:53868
DATA_CHT_1_COMPGEN(0x009120dc, "t_pathfinding_subject::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_pathfinding_subject@@;vft=4e743c;col=512104;td=5b03d4;chd=5120f4;offset=112;cdOffset=0;validated-hierarchy; map:53869
DATA_CHT_1_COMPGEN(0x009120f4, "t_pathfinding_subject::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53870
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_pathfinding_subject::`RTTI Complete Object Locator'{for `t_creature_array'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_pathfinding_subject@@;td=5b03d4;validated-header; map:58948
DATA_CHT_1_COMPGEN(0x009b03d4, "t_pathfinding_subject `RTTI Type Descriptor'")
