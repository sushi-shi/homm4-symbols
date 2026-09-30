// caravan.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/37 (A:13 B:5 C:7); unaccounted 12; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (24 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68490; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00594a80, 0x15, STATIC_INIT_DISPATCH, "caravan#1")

// name:C; dyninit; see ledger; map:68491
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "caravan#1")

// confidence:A; align-order; stable,vptr; map:18990
VA_CHT_1(0x00594aa0, 0x1d3)
t_caravan::t_caravan(
    t_adventure_map* arg_0,
    int arg_1,
    t_adventure_object* arg_2,
    t_counted_ptr<t_town> arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18991
VA_CHT_1(0x00594d50, 0x1d2)
bool t_caravan::add_caravan_to_army(t_creature_array& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18992
VA_CHT_1(0x00594f30, 0x5)
unsigned short t_caravan::get_caravan_version()
{
    // Body unavailable.
}

// name:A; map symbol; map:18993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_map* t_caravan::get_map() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18994
VA_CHT_1(0x00594f50, 0x2a)
bool t_caravan::has_arrived() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18995
VA_CHT_1(0x00594f80, 0xb)
void t_caravan::process_new_day()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18996
VA_CHT_1(0x00594f90, 0x48d)
bool t_caravan::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, unsigned short arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18997
VA_CHT_1(0x00595420, 0xe4)
bool t_caravan::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68492; name:B (dyninit; see ledger)
VA_CHT_1(0x00595510, 0x20)
// caravan$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:68494; name:B (dyninit; see ledger)
VA_CHT_1(0x00595530, 0x5c)
// caravan$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68495
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// caravan$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68496
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// caravan$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68497
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// caravan$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:18998
VA_CHT_1_COMPGEN(0x00594c80, 0x26, SCALAR_DELETING_DTOR, t_caravan)

// name:A; map symbol; map:18999
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_caravan)

// name:A; map symbol; map:19000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_caravan::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:19001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_caravan::~t_caravan()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:19002
VA_CHT_1_COMPGEN(0x00595590, 0x8, VECTOR_DELETING_DTOR, t_caravan)

// confidence:C; align-order; stable; map:19003
VA_CHT_1(0x005955a0, 0xb)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`vtordisp{-4, 32}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19004
VA_CHT_1(0x005955b0, 0x8)
// [thunk]: public: virtual t_adventure_map* t_caravan::get_map`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:19005
VA_CHT_1(0x005955c0, 0x8)
// [thunk]: public: virtual int t_caravan::get_owner_number`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:19006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_caravan::get_owner_number() const
{
    // Body unavailable.
}

// === .rdata (4 symbols) ===

// confidence:B; rtti-order; map:43827
DATA_CHT_1_COMPGEN(0x008d8bcc, "const t_caravan::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:43828
DATA_CHT_1_COMPGEN(0x008d8c00, "const t_caravan::`vftable'{for `t_creature_array'}")

// confidence:A; rtti-name; map:43829
DATA_CHT_1_COMPGEN(0x008d8b8c, "const t_caravan::`vftable'")

// name:A; map symbol; map:43830
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_caravan::`vbtable'")

// === .rdata$r (8 symbols) ===

// name:A; map symbol; map:50489
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_caravan::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:50490
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_caravan::`RTTI Complete Object Locator'{for `t_creature_array'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_map_info@@;bcd=502adc;pmd=0,12,4;attributes=16;validated-hierarchy-link; map:50491
DATA_CHT_1_COMPGEN(0x00902adc, "t_adv_object_map_info::`RTTI Base Class Descriptor at (0, 12, 4, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array@@;bcd=502af4;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50492
DATA_CHT_1_COMPGEN(0x00902af4, "t_creature_array::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_caravan@@;bcd=502b0c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50493
DATA_CHT_1_COMPGEN(0x00902b0c, "t_caravan::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_caravan@@;vft=4d8b8c;col=502b4c;td=597990;chd=502b3c;offset=116;cdOffset=0;validated-hierarchy; map:50494
DATA_CHT_1_COMPGEN(0x00902b24, "t_caravan::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_caravan@@;vft=4d8b8c;col=502b4c;td=597990;chd=502b3c;offset=116;cdOffset=0;validated-hierarchy; map:50495
DATA_CHT_1_COMPGEN(0x00902b3c, "t_caravan::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_caravan@@;vft=4d8b8c;col=502b4c;td=597990;chd=502b3c;offset=116;cdOffset=0;validated-hierarchy; map:50496
DATA_CHT_1_COMPGEN(0x00902b4c, "const t_caravan::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_caravan@@;td=597990;validated-header; map:58139
DATA_CHT_1_COMPGEN(0x00997990, "t_caravan `RTTI Type Descriptor'")
