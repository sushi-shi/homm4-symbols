// adv_object_list_image.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/40 (A:5 B:5 C:6); unaccounted 24; skipped std 4.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (39 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:70989; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004450c0, 0x15, STATIC_INIT_DISPATCH, "adv_object_list_image#1")

// name:C; dyninit; see ledger; map:70990
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_object_list_image#1")

// confidence:A; dyninit-init; owner-conf-C; map:70991; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004450e0, 0x11, STATIC_INIT_DISPATCH, "adv_object_list_image#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:70992; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00445100, 0xd7, STATIC_CTOR, "adv_object_list_image#2")

// name:C; dyninit; see ledger; map:70993
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_object_list_image#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:70994; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004451e0, 0xa, STATIC_DTOR, "adv_object_list_image#2")

// confidence:B; align-order; retn,stable; map:5009
VA_CHT_1(0x004451f0, 0x122)
t_adv_object_list_image::t_adv_object_list_image(t_adv_object_list_image::t_mode arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5010
VA_CHT_1(0x00445320, 0x15a)
void t_adv_object_list_image::create_renderer(
    t_adventure_map const& arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_cached_ptr<t_bitmap_layer> arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5011
VA_CHT_1(0x00445480, 0xef)
t_micro_map_renderer& t_adv_object_list_image::get_map_renderer(
    t_adventure_map const& arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    t_cached_ptr<t_bitmap_layer> arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5012
VA_CHT_1(0x00445570, 0x293)
void t_adv_object_list_image::draw_bar(
    std::string arg_0,
    std::string arg_1,
    t_town* arg_2,
    t_town_building const* arg_3,
    int arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:5013
VA_CHT_1(0x00445810, 0x265)
t_image_buffer const& t_adv_object_list_image::get_bitmap()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:5014
VA_CHT_1(0x00445a80, 0x200)
void t_adv_object_list_image::set_dwelling(t_adv_dwelling* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:5015
VA_CHT_1(0x00445c80, 0x22b)
void t_adv_object_list_image::set_town(t_town* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70995; name:B (dyninit; see ledger)
VA_CHT_1(0x00445f70, 0x20)
// adv_object_list_image$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70997; name:B (dyninit; see ledger)
VA_CHT_1(0x00445f90, 0x5c)
// adv_object_list_image$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_list_image$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_list_image$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_object_list_image$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_micro_map_renderer>::~t_counted_ptr<t_micro_map_renderer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_rect_2d::t_map_rect_2d(t_map_point_2d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:5018
VA_CHT_1(0x00445f40, 0x2f)
bool t_abstract_town::is_legal(t_town_building arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5019
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::draw_to(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<43> const& t_abstract_town::get_buildings() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_layer::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_layer::get_width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5023
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::draw_to(t_abstract_bitmap<unsigned short>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5024
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_abstract_town::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_terrain_type t_town::get_terrain() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:5027
VA_CHT_1(0x00445eb0, 0x89)
t_cached_ptr<t_bitmap_layer>::t_cached_ptr<t_bitmap_layer>(t_cached_ptr<t_bitmap_layer> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5030
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object>::t_counted_ptr<t_adventure_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object* t_counted_ptr<t_adventure_object>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5032
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object>& t_counted_ptr<t_adventure_object>::operator=(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5033
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_group>::t_cached_ptr<t_bitmap_group>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5034
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_bitmap_group>& t_cached_ptr<t_bitmap_group>::operator=(
    t_cached_ptr<t_bitmap_group> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_micro_map_renderer>::t_counted_ptr<t_micro_map_renderer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_micro_map_renderer* t_counted_ptr<t_micro_map_renderer>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_micro_map_renderer>& t_counted_ptr<t_micro_map_renderer>::operator=(
    t_micro_map_renderer* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_micro_map_renderer& t_counted_ptr<t_micro_map_renderer>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_bitmap_group>::assign(t_bitmap_group* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_town@@;td=588f24;validated-header; map:57513
DATA_CHT_1_COMPGEN(0x00988f24, "t_town `RTTI Type Descriptor'")
