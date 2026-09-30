// combat_context_army.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/26 (A:17 B:0 C:0); unaccounted 9; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:67891; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ba8d0, 0x15, STATIC_INIT_DISPATCH, "combat_context_army#1")

// name:C; dyninit; see ledger; map:67892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_context_army#1")

// confidence:A; align-order; retn,vptr; map:20243
VA_CHT_1(0x005ba8f0, 0x32)
t_combat_context_army::t_combat_context_army()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:20244
VA_CHT_1(0x005baa30, 0xed)
t_combat_context_army::t_combat_context_army(t_army* arg_0, t_army* arg_1, t_adv_map_point const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:20245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_type t_combat_context_army::get_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20246
VA_CHT_1(0x005bab20, 0x109)
void t_combat_context_army::on_combat_end(t_combat_result arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20247
VA_CHT_1(0x005bac30, 0xd0)
bool t_combat_context_army::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_map& arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:20248
VA_CHT_1(0x005bad00, 0x6c)
bool t_combat_context_army::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67893; name:B (dyninit; see ledger)
VA_CHT_1(0x005bad70, 0x20)
// combat_context_army$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:67895; name:B (dyninit; see ledger)
VA_CHT_1(0x005bad90, 0x5c)
// combat_context_army$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_context_army$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_context_army$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:67898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// combat_context_army$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:20249
VA_CHT_1_COMPGEN(0x005ba930, 0x1e, VECTOR_DELETING_DTOR, t_combat_context_army)

// name:A; map symbol; map:20250
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_context_army)

// name:A; map symbol; map:20251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_adv_object::~t_combat_context_adv_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:20252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_army::~t_combat_context_army()
{
    // Body unavailable.
}

// name:A; map symbol; map:20253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool defender_won(t_combat_result arg_0)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43910
DATA_CHT_1_COMPGEN(0x008dc15c, "const t_combat_context_army::`vftable'")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_context_adv_object@@;bcd=503a08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50706
DATA_CHT_1_COMPGEN(0x00903a08, "t_combat_context_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_context_army@@;bcd=503a20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50707
DATA_CHT_1_COMPGEN(0x00903a20, "t_combat_context_army::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_context_army@@;vft=4dc15c;col=503a5c;td=598d2c;chd=503a4c;offset=0;cdOffset=0;validated-hierarchy; map:50708
DATA_CHT_1_COMPGEN(0x00903a38, "t_combat_context_army::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_context_army@@;vft=4dc15c;col=503a5c;td=598d2c;chd=503a4c;offset=0;cdOffset=0;validated-hierarchy; map:50709
DATA_CHT_1_COMPGEN(0x00903a4c, "t_combat_context_army::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_context_army@@;vft=4dc15c;col=503a5c;td=598d2c;chd=503a4c;offset=0;cdOffset=0;validated-hierarchy; map:50710
DATA_CHT_1_COMPGEN(0x00903a5c, "const t_combat_context_army::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_context_adv_object@@;td=598d00;validated-header; map:58199
DATA_CHT_1_COMPGEN(0x00998d00, "t_combat_context_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_context_army@@;td=598d2c;validated-header; map:58200
DATA_CHT_1_COMPGEN(0x00998d2c, "t_combat_context_army `RTTI Type Descriptor'")
