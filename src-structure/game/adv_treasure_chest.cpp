// adv_treasure_chest.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/57 (A:21 B:2 C:5); unaccounted 29; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (37 symbols) ===

// name:C; dyninit; see ledger; map:70710
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_treasure_chest#1")

// name:C; dyninit; see ledger; map:70711
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_treasure_chest#1")

// name:C; dyninit; see ledger; map:70712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_treasure_chest#1")

// name:C; dyninit; see ledger; map:70713
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_treasure_chest#1")

// name:C; dyninit; see ledger; map:70714
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_treasure_chest#2")

// name:C; dyninit; see ledger; map:70715
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_treasure_chest#2")

// name:C; dyninit; see ledger; map:70716
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_treasure_chest#2")

// name:C; dyninit; see ledger; map:70717
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_treasure_chest#2")

// confidence:A; dyninit-init; owner-conf-C; map:70718; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046cc10, 0x15, STATIC_INIT_DISPATCH, "adv_treasure_chest#3")

// name:C; dyninit; see ledger; map:70719
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_treasure_chest#3")

// confidence:A; dyninit-init; owner-conf-C; map:70720; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0046cc30, 0x1e, STATIC_INIT_DISPATCH, "adv_treasure_chest#4")

// name:C; dyninit; see ledger; map:70721
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_treasure_chest#4")

// confidence:A; align-order; retn,stable,vptr; map:6148
VA_CHT_1(0x0046cc50, 0x118)
t_adv_treasure_chest::t_adv_treasure_chest(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:6149
VA_CHT_1(0x0046ce00, 0x5ac)
void t_adv_treasure_chest::give_artifact(
    t_army* arg_0,
    t_level_map_point_2d arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:6150
VA_CHT_1(0x0046d3b0, 0x351)
void t_adv_treasure_chest::give_gold(t_player* arg_0, t_level_map_point_2d arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:6151
VA_CHT_1(0x0046d710, 0x349)
void t_adv_treasure_chest::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:6152
VA_CHT_1(0x0046da60, 0x85)
void t_adv_treasure_chest::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_treasure_chest::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:6154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_treasure_chest::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
float t_adv_treasure_chest::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70722; name:B (dyninit; see ledger)
VA_CHT_1(0x0046dcb0, 0x20)
// adv_treasure_chest$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70724; name:B (dyninit; see ledger)
VA_CHT_1(0x0046dcd0, 0x5c)
// adv_treasure_chest$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_treasure_chest$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70726
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_treasure_chest$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70727
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_treasure_chest$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:6156
VA_CHT_1_COMPGEN(0x0046cd70, 0x2d, SCALAR_DELETING_DTOR, t_adv_treasure_chest)

// name:A; map symbol; map:6157
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_treasure_chest)

// confidence:C; align-band; retn,stable; map:6158
VA_CHT_1(0x0046cda0, 0x57)
// public: void t_adv_treasure_chest::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:6159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_treasure_chest::~t_adv_treasure_chest()
{
    // Body unavailable.
}

// name:A; map symbol; map:6160
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_treasure_chest_window>::~t_counted_ptr<t_treasure_chest_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:6161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_treasure_chest>::t_object_registration<t_adv_treasure_chest>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:6162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_treasure_chest_window>::t_counted_ptr<t_treasure_chest_window>(t_treasure_chest_window* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:6163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_treasure_chest_window* t_counted_ptr<t_treasure_chest_window>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:6164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_treasure_chest>::t_object_factory<t_adv_treasure_chest>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:6165
VA_CHT_1(0x0046dc40, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_treasure_chest>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:6166
VA_CHT_1_COMPGEN(0x0046dd30, 0x8, VECTOR_DELETING_DTOR, t_adv_treasure_chest)

// confidence:C; align-order; stable; map:6167
VA_CHT_1_COMPGEN(0x0046dd40, 0xb, VECTOR_DELETING_DTOR, t_adv_treasure_chest)

// === .rdata (7 symbols) ===

// name:A; map symbol; map:43083
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43084
DATA_CHT_1_COMPGEN(0x008d2dbc, "const t_adv_treasure_chest::`vftable'")

// confidence:B; rtti-order; map:43085
DATA_CHT_1_COMPGEN(0x008d2e7c, "const t_adv_treasure_chest::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43086
DATA_CHT_1_COMPGEN(0x008d2e84, "const t_adv_treasure_chest::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43087
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43088
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43089
DATA_CHT_1_COMPGEN(0x008d2db4, "const t_object_factory<t_adv_treasure_chest>::`vftable'")

// === .rdata$r (11 symbols) ===

// name:A; map symbol; map:48447
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_treasure_chest@@;vft=4d2dbc;col=4f9648;td=58b0f8;chd=4f9638;offset=92;cdOffset=0;validated-hierarchy; map:48448
DATA_CHT_1_COMPGEN(0x008f9648, "const t_adv_treasure_chest::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48449
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_treasure_chest@@;bcd=4f95f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48450
DATA_CHT_1_COMPGEN(0x008f95f8, "t_adv_treasure_chest::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_treasure_chest@@;vft=4d2dbc;col=4f9648;td=58b0f8;chd=4f9638;offset=92;cdOffset=0;validated-hierarchy; map:48451
DATA_CHT_1_COMPGEN(0x008f9610, "t_adv_treasure_chest::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_treasure_chest@@;vft=4d2dbc;col=4f9648;td=58b0f8;chd=4f9638;offset=92;cdOffset=0;validated-hierarchy; map:48452
DATA_CHT_1_COMPGEN(0x008f9638, "t_adv_treasure_chest::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48453
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_treasure_chest::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_treasure_chest@@@@;bcd=4f9574;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48454
DATA_CHT_1_COMPGEN(0x008f9574, "t_object_factory<t_adv_treasure_chest>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_treasure_chest@@@@;vft=4d2db4;col=4f95a8;td=58b0bc;chd=4f9598;offset=0;cdOffset=0;validated-hierarchy; map:48455
DATA_CHT_1_COMPGEN(0x008f958c, "t_object_factory<t_adv_treasure_chest>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_treasure_chest@@@@;vft=4d2db4;col=4f95a8;td=58b0bc;chd=4f9598;offset=0;cdOffset=0;validated-hierarchy; map:48456
DATA_CHT_1_COMPGEN(0x008f9598, "t_object_factory<t_adv_treasure_chest>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_treasure_chest@@@@;vft=4d2db4;col=4f95a8;td=58b0bc;chd=4f9598;offset=0;cdOffset=0;validated-hierarchy; map:48457
DATA_CHT_1_COMPGEN(0x008f95a8, "const t_object_factory<t_adv_treasure_chest>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_treasure_chest@@;td=58b0f8;validated-header; map:57578
DATA_CHT_1_COMPGEN(0x0098b0f8, "t_adv_treasure_chest `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_treasure_chest@@@@;td=58b0bc;validated-header; map:57579
DATA_CHT_1_COMPGEN(0x0098b0bc, "t_object_factory<t_adv_treasure_chest> `RTTI Type Descriptor'")
