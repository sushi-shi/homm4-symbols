// abstract_adv_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/11 (A:5 B:0 C:0); unaccounted 6; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (11 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:343
VA_CHT_1(0x00404a60, 0x7)
t_abstract_adv_object::~t_abstract_adv_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:344
VA_CHT_1(0x00404a70, 0x33)
void t_abstract_adv_object::draw_shadow_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:345
VA_CHT_1(0x00404ab0, 0x3d)
void t_abstract_adv_object::draw_subimage_to(
    int arg_0,
    unsigned long arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:346
VA_CHT_1(0x00404af0, 0x33)
void t_abstract_adv_object::draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player_color t_abstract_adv_object::get_player_color() const
{
    // Body unavailable.
}

// name:A; map symbol; map:348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_object::is_decorative() const
{
    // Body unavailable.
}

// name:A; map symbol; map:349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_object::uses_bridge_heights() const
{
    // Body unavailable.
}

// name:A; map symbol; map:350
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_object::visible_through_obstacles(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_object::is_visible_to(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:352
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_object::can_be_hidden() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71469; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00404b50, 0x20, STATIC_INIT_DISPATCH, abstract_adv_object)
