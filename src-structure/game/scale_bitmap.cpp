// scale_bitmap.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\scale_bitmap.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/8 (A:1 B:4 C:0); unaccounted 3; skipped std 26.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (7 symbols) ===

// confidence:B; align-order; retn,stable; map:33499
VA_CHT_1(0x007856f0, 0x7dc)
t_bitmap_layer* scale_bitmap_layer(t_bitmap_layer_24 const& arg_0, double arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:63309
VA_CHT_1(0x00785ed0, 0x24f)
static void draw_scan_line(
    t_bitmap_layer_24 const& arg_0,
    int arg_1,
    t_int_pixel* arg_2,
    int arg_3,
    int arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:63310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void compute_rows(
    t_bitmap_layer_24 const& arg_0,
    std::vector<t_bitmap_row, std::allocator<t_bitmap_row>>& arg_1,
    t_screen_rect& arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:63311
VA_CHT_1(0x00786120, 0x3aa)
static void convert_line(
    t_int_pixel const* arg_0,
    unsigned short* arg_1,
    unsigned char* arg_2,
    int arg_3,
    int arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33500
VA_CHT_1(0x00786520, 0x144)
void scale_group(t_bitmap_group_24 const& arg_0, t_bitmap_group& arg_1, double arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63312; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00786cb0, 0x20, STATIC_INIT_DISPATCH, scale_bitmap)

// name:A; map symbol; map:33501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short convert_pixel(t_int_pixel const* arg_0)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// name:A; map symbol; map:45250
DATA_CHT_1(UNACCOUNTED)
// __real@8@40098000000000000000
