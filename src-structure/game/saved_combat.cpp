// saved_combat.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 38/56 (A:27 B:5 C:6); unaccounted 18; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (48 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63314; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007845a0, 0x15, STATIC_INIT_DISPATCH, "saved_combat#1")

// name:C; dyninit; see ledger; map:63315
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#1")

// confidence:A; dyninit-init; owner-conf-C; map:63316; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007845c0, 0x15, STATIC_INIT_DISPATCH, "saved_combat#2")

// name:C; dyninit; see ledger; map:63317
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#2")

// confidence:A; dyninit-init; owner-conf-C; map:63318; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007845e0, 0x15, STATIC_INIT_DISPATCH, "saved_combat#3")

// name:C; dyninit; see ledger; map:63319
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#3")

// confidence:A; dyninit-init; owner-conf-C; map:63320; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00784600, 0x15, STATIC_INIT_DISPATCH, "saved_combat#4")

// name:C; dyninit; see ledger; map:63321
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#4")

// confidence:A; dyninit-init; owner-conf-C; map:63322; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00784620, 0x10, STATIC_INIT_DISPATCH, "saved_combat#5")

// name:C; dyninit; see ledger; map:63323
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#5")

// confidence:A; dyninit-init; owner-conf-C; map:63324; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00784630, 0x15, STATIC_INIT_DISPATCH, "saved_combat#6")

// name:C; dyninit; see ledger; map:63325
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "saved_combat#6")

// confidence:C; align-order; retn,stable; map:33468
VA_CHT_1(0x00784650, 0xd)
t_saved_combat::t_saved_combat()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33469
VA_CHT_1(0x00784660, 0x131)
t_saved_combat::t_saved_combat(t_combat_window& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33470
VA_CHT_1(0x007847c0, 0x4)
t_combat_context* t_saved_combat::get_context() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33471
VA_CHT_1(0x007847d0, 0x1fa)
bool t_saved_combat::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_adventure_map* arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33472
VA_CHT_1(0x00784a70, 0xaf)
bool t_saved_combat::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33473
VA_CHT_1(0x00784b20, 0x1b5)
void t_saved_combat::launch(t_adventure_map* arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_terrain_map* t_saved_combat::get_terrain_map()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:33475
VA_CHT_1(0x00784cf0, 0xa0)
t_combat_context::t_combat_context(
    t_creature_array* arg_0,
    t_creature_array* arg_1,
    t_adv_map_point const& arg_2,
    t_town* arg_3,
    t_ownable_garrisonable_adv_object const* arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:33476
VA_CHT_1(0x00784d90, 0x53)
t_combat_context::~t_combat_context()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33477
VA_CHT_1(0x00784df0, 0x32)
t_adventure_map* t_combat_context::get_adventure_map() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33478
VA_CHT_1(0x00784e30, 0x32)
t_adventure_frame* t_combat_context::get_adventure_frame() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33479
VA_CHT_1(0x00784e70, 0x6)
bool const* t_combat_context::get_are_real_armies() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33480
VA_CHT_1(0x00784e80, 0x122)
bool t_combat_context::base_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_map& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33481
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context::base_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_map& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33482
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context::save_allowed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33483
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:33484
VA_CHT_1(0x00784fb0, 0x79)
t_combat_context_adv_object::t_combat_context_adv_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:33485
VA_CHT_1(0x00785050, 0xfb)
t_combat_context_adv_object::t_combat_context_adv_object(
    t_army* arg_0,
    t_creature_array* arg_1,
    t_adv_map_point const& arg_2,
    t_town* arg_3,
    t_ownable_garrisonable_adv_object const* arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33486
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_context_type t_combat_context_adv_object::get_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33487
VA_CHT_1(0x00785150, 0xa3)
void t_combat_context_adv_object::on_combat_end(t_combat_result arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33488
VA_CHT_1(0x00785200, 0x24c)
bool t_combat_context_adv_object::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adventure_map& arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:33489
VA_CHT_1(0x007854c0, 0x132)
bool t_combat_context_adv_object::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_context_adv_object::save_allowed() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63326; name:B (dyninit; see ledger)
VA_CHT_1(0x00785670, 0x20)
// saved_combat$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63328; name:B (dyninit; see ledger)
VA_CHT_1(0x00785690, 0x5c)
// saved_combat$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// saved_combat$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// saved_combat$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// saved_combat$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-band; retn,stable; map:33491
VA_CHT_1(0x00785450, 0x6e)
t_counted_ptr<t_battlefield> t_combat_window::get_battlefield()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:33492
VA_CHT_1_COMPGEN(0x00784a50, 0x1e, VECTOR_DELETING_DTOR, t_combat_context)

// name:A; map symbol; map:33493
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_context)

// confidence:A; align-band; retn,stable,vptr; map:33494
VA_CHT_1(0x007849d0, 0x73)
t_combat_context::t_combat_context()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:33495
VA_CHT_1_COMPGEN(0x00785030, 0x1e, SCALAR_DELETING_DTOR, t_combat_context_adv_object)

// name:A; map symbol; map:33496
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_context_adv_object)

// confidence:C; align-band; retn,stable; map:33497
VA_CHT_1(0x007847a0, 0x20)
t_counted_ptr<t_combat_context>& t_counted_ptr<t_combat_context>::operator=(
    t_counted_ptr<t_combat_context> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_terrain_map* t_counted_ptr<t_battlefield_terrain_map>::operator->() const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:45248
DATA_CHT_1_COMPGEN(0x008e9b08, "const t_combat_context::`vftable'")

// confidence:A; rtti-name; map:45249
DATA_CHT_1_COMPGEN(0x008e9ae8, "const t_combat_context_adv_object::`vftable'")

// === .rdata$r (6 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_context@@;vft=4e9b08;col=514920;td=58d5d4;chd=514910;offset=0;cdOffset=0;validated-hierarchy; map:54428
DATA_CHT_1_COMPGEN(0x00914904, "t_combat_context::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_context@@;vft=4e9b08;col=514920;td=58d5d4;chd=514910;offset=0;cdOffset=0;validated-hierarchy; map:54429
DATA_CHT_1_COMPGEN(0x00914910, "t_combat_context::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_context@@;vft=4e9b08;col=514920;td=58d5d4;chd=514910;offset=0;cdOffset=0;validated-hierarchy; map:54430
DATA_CHT_1_COMPGEN(0x00914920, "const t_combat_context::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_context_adv_object@@;vft=4e9ae8;col=5148f0;td=598d00;chd=5148e0;offset=0;cdOffset=0;validated-hierarchy; map:54431
DATA_CHT_1_COMPGEN(0x009148d0, "t_combat_context_adv_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_context_adv_object@@;vft=4e9ae8;col=5148f0;td=598d00;chd=5148e0;offset=0;cdOffset=0;validated-hierarchy; map:54432
DATA_CHT_1_COMPGEN(0x009148e0, "t_combat_context_adv_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_context_adv_object@@;vft=4e9ae8;col=5148f0;td=598d00;chd=5148e0;offset=0;cdOffset=0;validated-hierarchy; map:54433
DATA_CHT_1_COMPGEN(0x009148f0, "const t_combat_context_adv_object::`RTTI Complete Object Locator'")
