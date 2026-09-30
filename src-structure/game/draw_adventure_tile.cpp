// draw_adventure_tile.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\draw_adventure_tile.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 35/71 (A:13 B:18 C:4); unaccounted 36; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (54 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65524; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069b160, 0x15, STATIC_INIT_DISPATCH, "draw_adventure_tile#1")

// name:C; dyninit; see ledger; map:65525
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "draw_adventure_tile#1")

// confidence:A; dyninit-init; owner-conf-C; map:65526; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069b180, 0x15, STATIC_INIT_DISPATCH, "draw_adventure_tile#2")

// name:C; dyninit; see ledger; map:65527
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "draw_adventure_tile#2")

namespace {

// name:A; map symbol; map:25823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_local_pixel_mask_viewer::t_local_pixel_mask_viewer()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:25824
VA_CHT_1(0x0069b250, 0x95)
void t_local_pixel_mask_viewer::on_pixel_masks_changed()
{
    // Body unavailable.
}

// name:A; map symbol; map:25825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_local_pixel_mask_viewer::compute_masks()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-B; map:65528; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069b2f0, 0x16, STATIC_INIT_DISPATCH, g_pixel_mask_viewer)

// name:A; dyninit; see ledger; map:65529
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_pixel_mask_viewer)

// name:A; dyninit; see ledger; map:65530
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_pixel_mask_viewer)

// confidence:B; dyninit-dtor; owner-conf-B; map:65531; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0069b310, 0xa, STATIC_DTOR, g_pixel_mask_viewer)

namespace {

// confidence:B; align-order; retn,stable; map:25826
VA_CHT_1(0x0069b320, 0x297)
void draw_adventure_tile_4_bit_mask(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_composite_tile_texture& arg_2,
    int arg_3,
    int arg_4,
    t_transition_mask const& arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25827
VA_CHT_1(0x0069b5c0, 0x2b0)
void draw_adventure_tile_4_bit_mask(
    t_composite_tile_texture const& arg_0,
    t_composite_tile_texture& arg_1,
    int arg_2,
    int arg_3,
    t_transition_mask const& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25828
VA_CHT_1(0x0069b870, 0x17af)
void draw_adventure_tile_4_bit_mask(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    t_quad<int> const& arg_5,
    t_quad<int> const& arg_6,
    t_transition_mask const& arg_7
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25829
VA_CHT_1(0x0069d130, 0x3c3)
void shade_adventure_tile_helper(
    unsigned short arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    bool arg_5,
    bool arg_6
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; stable; map:25830
VA_CHT_1(0x0069d500, 0x68)
// private: static int const (& t_composite_tile_texture::get_column_offset_array(void))[64]
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:25831
VA_CHT_1(0x0069d570, 0x41)
t_composite_tile_texture::t_composite_tile_texture()
{
    // Body unavailable.
}

// name:A; map symbol; map:25832
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_composite_transition_mask::exclude(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25833
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_composite_transition_mask& t_composite_transition_mask::operator|=(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25834
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_composite_transition_mask& t_composite_transition_mask::operator&=(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:25835
VA_CHT_1(0x0069d5c0, 0x15)
unsigned short apply_lighting(unsigned short arg_0, int arg_1, bool arg_2, bool arg_3)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25836
VA_CHT_1(0x0069dce0, 0x168)
void draw_adventure_tile(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_composite_tile_texture& arg_2,
    int arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25837
VA_CHT_1(0x0069de50, 0x202)
void draw_adventure_tile(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_composite_tile_texture& arg_2,
    int arg_3,
    int arg_4,
    t_transition_mask const& arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25838
VA_CHT_1(0x0069e060, 0x246)
void draw_adventure_tile(
    t_composite_tile_texture const& arg_0,
    t_composite_tile_texture& arg_1,
    int arg_2,
    int arg_3,
    t_transition_mask const& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25839
VA_CHT_1(0x0069e2b0, 0x14ef)
void draw_adventure_tile(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    t_quad<int> const& arg_5,
    t_quad<int> const& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25840
VA_CHT_1(0x0069f8b0, 0x1651)
void draw_adventure_tile(
    t_adventure_tile_texture const& arg_0,
    unsigned short const* arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    t_quad<int> const& arg_5,
    t_quad<int> const& arg_6,
    t_transition_mask const& arg_7
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25841
VA_CHT_1(0x006a1010, 0x14d8)
void draw_adventure_tile(
    t_composite_tile_texture const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    t_quad<int> const& arg_5,
    t_transition_mask const& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25842
VA_CHT_1(0x006a25f0, 0x12d3)
void draw_adventure_tile(
    t_composite_tile_texture const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    t_quad<int> const& arg_5,
    t_composite_transition_mask const& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25843
VA_CHT_1(0x006a39d0, 0x694)
void fill_adventure_tile_alpha_mask(
    unsigned char arg_0,
    unsigned char arg_1,
    t_abstract_bitmap<unsigned char>& arg_2,
    t_screen_point const& arg_3,
    t_screen_rect const& arg_4,
    t_quad<int> const& arg_5,
    t_transition_mask const& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25844
VA_CHT_1(0x006a40f0, 0x655)
void compose_adventure_tile_alpha_mask(
    unsigned char arg_0,
    t_abstract_bitmap<unsigned char>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    t_transition_mask const& arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25845
VA_CHT_1(0x006a47d0, 0x1b)
void shade_adventure_tile(
    unsigned short arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25846
VA_CHT_1(0x006a47f0, 0x24)
void shade_adventure_tile_half(
    unsigned short arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    bool arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:25847
VA_CHT_1(0x006a4820, 0x3cc)
void shade_adventure_tile_quarter(
    unsigned short arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    t_screen_rect const& arg_3,
    t_quad<int> const& arg_4,
    bool arg_5,
    bool arg_6
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65532; name:B (dyninit; see ledger)
VA_CHT_1(0x006a4bf0, 0x20)
// draw_adventure_tile$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:65534; name:B (dyninit; see ledger)
VA_CHT_1(0x006a4c10, 0x20)
// draw_adventure_tile$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// draw_adventure_tile$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:25848
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_local_pixel_mask_viewer)

// name:A; map symbol; map:25849
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_local_pixel_mask_viewer)

namespace {

// confidence:A; align-band; retn,stable,vptr; map:25850
VA_CHT_1(0x0069b1a0, 0xac)
t_local_pixel_mask_viewer::~t_local_pixel_mask_viewer()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:25851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short* t_composite_tile_texture::get_column_ptr(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_composite_tile_texture::get_column_offset(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char const* t_adventure_tile_texture::get_column_ptr(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:25854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short const* t_composite_tile_texture::get_column_ptr(int arg_0) const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:25855
VA_CHT_1(0x0069d5e0, 0x673)
unsigned short do_apply_lighting(unsigned short arg_0, int arg_1, bool arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:25856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short light_half(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short light_4th(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short light_8th(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25859
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short light_16th(unsigned short arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:25860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int alpha_8(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_composite_transition_mask::get_column_mask(int arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:25862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char alpha_blend_alpha(unsigned char arg_0, unsigned char arg_1, unsigned int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:25863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char alpha_half(unsigned char arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char alpha_4th(unsigned char arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char alpha_8th(unsigned char arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:44472
DATA_CHT_1_COMPGEN(0x008e1454, "const t_local_pixel_mask_viewer::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_local_pixel_mask_viewer@?%C:\Work\game\draw_adventure_tile.cpp922318917@@;bcd=50b804;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52410
DATA_CHT_1_COMPGEN(0x0090b804, "t_local_pixel_mask_viewer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_local_pixel_mask_viewer@?%C:\Work\game\draw_adventure_tile.cpp922318917@@;vft=4e1454;col=50b838;td=5a4418;chd=50b828;offset=0;cdOffset=0;validated-hierarchy; map:52411
DATA_CHT_1_COMPGEN(0x0090b81c, "t_local_pixel_mask_viewer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_local_pixel_mask_viewer@?%C:\Work\game\draw_adventure_tile.cpp922318917@@;vft=4e1454;col=50b838;td=5a4418;chd=50b828;offset=0;cdOffset=0;validated-hierarchy; map:52412
DATA_CHT_1_COMPGEN(0x0090b828, "t_local_pixel_mask_viewer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_local_pixel_mask_viewer@?%C:\Work\game\draw_adventure_tile.cpp922318917@@;vft=4e1454;col=50b838;td=5a4418;chd=50b828;offset=0;cdOffset=0;validated-hierarchy; map:52413
DATA_CHT_1_COMPGEN(0x0090b838, "const t_local_pixel_mask_viewer::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_local_pixel_mask_viewer@?%C:\Work\game\draw_adventure_tile.cpp922318917@@;td=5a4418;validated-header; map:58592
DATA_CHT_1_COMPGEN(0x009a4418, "t_local_pixel_mask_viewer `RTTI Type Descriptor'")

// name:A; map symbol; map:58593
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\draw_adventure_tile...")

// === .bss (10 symbols) ===

namespace {

// name:A; map symbol; map:60219
DATA_CHT_1(UNACCOUNTED)
int g_overflow_mask; // Initial value unavailable.

// name:A; map symbol; map:60220
DATA_CHT_1(UNACCOUNTED)
int g_red_overflow_mask; // Initial value unavailable.

// name:A; map symbol; map:60221
DATA_CHT_1(UNACCOUNTED)
int g_inverted_red_overflow_mask; // Initial value unavailable.

// name:A; map symbol; map:60222
DATA_CHT_1(UNACCOUNTED)
int g_blue_overflow_mask; // Initial value unavailable.

// name:A; map symbol; map:60223
DATA_CHT_1(UNACCOUNTED)
int g_inverted_blue_overflow_mask; // Initial value unavailable.

// name:A; map symbol; map:60224
DATA_CHT_1(UNACCOUNTED)
int g_inverted_low_bit_mask; // Initial value unavailable.

// name:A; map symbol; map:60225
DATA_CHT_1(UNACCOUNTED)
int g_low_bit_mask; // Initial value unavailable.

// name:A; map symbol; map:60226
DATA_CHT_1(UNACCOUNTED)
int g_inverted_green_overflow_mask; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60227
DATA_CHT_1(0x009ee620)
t_local_pixel_mask_viewer g_pixel_mask_viewer; // Initial value unavailable.

// name:A; map symbol; map:60228
DATA_CHT_1(UNACCOUNTED)
int g_green_overflow_mask; // Initial value unavailable.

} // anonymous namespace
