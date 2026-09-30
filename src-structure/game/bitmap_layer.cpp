// bitmap_layer.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\bitmap_layer.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 53/106 (A:12 B:0 C:0); unaccounted 53; skipped std 46.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (94 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18084
VA_CHT_1(0x005729e0, 0xcf)
t_bitmap_layer::~t_bitmap_layer()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18085
VA_CHT_1(0x00572ab0, 0x9e)
bool t_bitmap_layer::contains(t_screen_point arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_layer::get_data_size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18087
VA_CHT_1(0x00572b50, 0x151)
void t_bitmap_layer::set_block_alpha()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18088
VA_CHT_1(0x00572cb0, 0x1c4)
t_bitmap_layer_16::t_bitmap_layer_16(
    std::string const& arg_0,
    t_screen_rect const& arg_1,
    int arg_2,
    t_bitmap_row const* const arg_3,
    t_shared_array<unsigned short>& arg_4,
    t_shared_array<unsigned char>& arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18089
VA_CHT_1(0x00572fa0, 0x193)
t_bitmap_layer* t_bitmap_layer_16::adjust_brightness(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18090
VA_CHT_1(0x00573140, 0x1b7)
t_bitmap_layer* t_bitmap_layer_16::adjust_color(int arg_0, int arg_1, int arg_2, int arg_3) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18091
VA_CHT_1(0x00573300, 0x193)
t_bitmap_layer* t_bitmap_layer_16::adjust_saturation(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18092
VA_CHT_1(0x005734a0, 0x823)
t_bitmap_layer* t_bitmap_layer_16::copy(
    t_screen_point const& arg_0,
    std::vector<t_bitmap_line, std::allocator<t_bitmap_line>> const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18093
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bitmap_layer_16::data_contains(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18094
VA_CHT_1(0x00573cd0, 0x25d)
void t_bitmap_layer_16::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:68955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned short const* arg_5
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68956
VA_CHT_1(0x00573f30, 0x522)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned short const* arg_5,
    unsigned char const* arg_6,
    unsigned char const* arg_7
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18095
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_16::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:68957
VA_CHT_1(0x005746f0, 0x63)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned short const* arg_5,
    int arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68958
VA_CHT_1(0x00574760, 0x4bb)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned short const* arg_5,
    unsigned char const* arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18096
VA_CHT_1(0x00574c20, 0x15)
bool t_paletted_layer::data_contains(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18097
VA_CHT_1(0x00574c40, 0x1ac)
t_paletted_16_layer::t_paletted_16_layer(t_bitmap_layer_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:18098
VA_CHT_1(0x00574f10, 0x282)
t_paletted_16_layer::t_paletted_16_layer(
    std::string const& arg_0,
    t_screen_rect const& arg_1,
    int arg_2,
    std::vector<unsigned short, std::allocator<unsigned short>> const& arg_3,
    t_bitmap_row const* const arg_4,
    t_shared_array<unsigned char>& arg_5,
    t_shared_array<unsigned char>& arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18099
VA_CHT_1(0x005751a0, 0x132)
t_bitmap_layer* t_paletted_16_layer::adjust_brightness(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18100
VA_CHT_1(0x005752e0, 0x167)
t_bitmap_layer* t_paletted_16_layer::adjust_color(int arg_0, int arg_1, int arg_2, int arg_3) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18101
VA_CHT_1(0x00575450, 0x132)
t_bitmap_layer* t_paletted_16_layer::adjust_saturation(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18102
VA_CHT_1(0x00575590, 0x834)
t_bitmap_layer* t_paletted_16_layer::copy(
    t_screen_point const& arg_0,
    std::vector<t_bitmap_line, std::allocator<t_bitmap_line>> const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18103
VA_CHT_1(0x00575dd0, 0x467)
void t_paletted_16_layer::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:68959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:68960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw_transparent(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68961
VA_CHT_1(0x00576240, 0x9e5)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6,
    unsigned char const* arg_7,
    unsigned char const* arg_8
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_paletted_16_layer::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:68962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// name:A; map symbol; map:68963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void draw_transparent(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:68964
VA_CHT_1(0x00577110, 0x509)
static void draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    unsigned short const* arg_6,
    unsigned char const* arg_7,
    int arg_8
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_24::init(
    std::string const& arg_0,
    t_screen_rect const& arg_1,
    int arg_2,
    std::vector<t_pixel_24, std::allocator<t_pixel_24>> const& arg_3,
    t_bitmap_row const* const arg_4,
    unsigned char const* const arg_5,
    unsigned char const* const arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer_24::init(
    std::string const& arg_0,
    t_screen_rect const& arg_1,
    int arg_2,
    std::vector<t_pixel_24, std::allocator<t_pixel_24>> const& arg_3,
    t_bitmap_row const* const arg_4,
    t_shared_array<unsigned char>& arg_5,
    t_shared_array<unsigned char>& arg_6
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18107
VA_CHT_1(0x00577620, 0x152)
t_bitmap_layer* t_bitmap_layer_24::adjust_brightness(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18108
VA_CHT_1(0x00577780, 0x179)
t_bitmap_layer* t_bitmap_layer_24::adjust_color(int arg_0, int arg_1, int arg_2, int arg_3) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18109
VA_CHT_1(0x00577900, 0x152)
t_bitmap_layer* t_bitmap_layer_24::adjust_saturation(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18110
VA_CHT_1(0x00577a60, 0x92)
int read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    void* arg_1,
    unsigned long arg_2,
    t_progress_handler* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18111
VA_CHT_1(0x00577b00, 0x41c)
bool t_bitmap_layer_24::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:18112
VA_CHT_1(0x00577f20, 0x18)
bool t_bitmap_layer_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18113
VA_CHT_1(0x00577f40, 0x40f)
void t_bitmap_layer_24::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18114
VA_CHT_1(0x00578350, 0x420)
void t_bitmap_layer_24::draw(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer* t_bitmap_layer_24::copy(
    t_screen_point const& arg_0,
    std::vector<t_bitmap_line, std::allocator<t_bitmap_line>> const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68965; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00579640, 0x20, STATIC_INIT_DISPATCH, bitmap_layer)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18116
VA_CHT_1_COMPGEN(0x00572e80, 0x1e, SCALAR_DELETING_DTOR, t_bitmap_layer_16)

// name:A; map symbol; map:18117
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_bitmap_layer_16)

// name:A; map symbol; map:18118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_16::~t_bitmap_layer_16()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18119
VA_CHT_1(0x00578b20, 0x4d)
void t_hue_pixel::set_color(unsigned short arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_16::t_bitmap_layer_16(t_bitmap_layer_16 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18121
VA_CHT_1(0x00578b00, 0x12)
int multiply_alpha16(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_pixel_24, std::allocator<t_pixel_24>> const& t_bitmap_layer_24::get_palette() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:18123
VA_CHT_1_COMPGEN(0x00574df0, 0x1e, SCALAR_DELETING_DTOR, t_paletted_16_layer)

// name:A; map symbol; map:18124
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_paletted_16_layer)

// name:A; map symbol; map:18125
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_paletted_16_layer::~t_paletted_16_layer()
{
    // Body unavailable.
}

// name:A; map symbol; map:18126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_paletted_16_layer::t_paletted_16_layer(t_paletted_16_layer const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_row::get_width() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_paletted_24_source::t_paletted_24_source(t_pixel_24 const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_blended_paletted_24_source::t_blended_paletted_24_source(t_pixel_24 const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18147
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_draw<t_paletted_24_source>::t_simple_draw<t_paletted_24_source>(t_paletted_24_source arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_draw_alpha_1<t_paletted_24_source>::t_draw_alpha_1<t_paletted_24_source>(t_paletted_24_source arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_draw_alpha_4<t_paletted_24_source>::t_draw_alpha_4<t_paletted_24_source>(
    t_paletted_24_source arg_0,
    unsigned char const* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_draw<t_blended_paletted_24_source>::t_simple_draw<t_blended_paletted_24_source>(
    t_blended_paletted_24_source arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_draw_alpha_1<t_blended_paletted_24_source>::t_draw_alpha_1<t_blended_paletted_24_source>(
    t_blended_paletted_24_source arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_draw_alpha_4<t_blended_paletted_24_source>::t_draw_alpha_4<t_blended_paletted_24_source>(
    t_blended_paletted_24_source arg_0,
    unsigned char const* arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<t_bitmap_row>& t_shared_array<t_bitmap_row>::operator=(t_bitmap_row* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_row& t_shared_array<t_bitmap_row>::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<unsigned char>& t_shared_array<unsigned char>::operator=(unsigned char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char& t_shared_array<unsigned char>::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<unsigned short>::t_shared_array<unsigned short>(t_shared_array<unsigned short> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18177
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<unsigned short>::t_shared_array<unsigned short>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18178
VA_CHT_1(0x00572ea0, 0xfd)
t_shared_array<unsigned short>::~t_shared_array<unsigned short>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short* t_shared_array<unsigned short>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<unsigned short>& t_shared_array<unsigned short>::operator=(unsigned short* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short& t_shared_array<unsigned short>::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_simple_draw<t_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_draw_alpha_1<t_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_draw_alpha_4<t_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_simple_draw<t_blended_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_draw_alpha_1<t_blended_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_layer(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    t_screen_rect const& arg_3,
    t_bitmap_row const* arg_4,
    unsigned char const* arg_5,
    t_draw_alpha_4<t_blended_paletted_24_source> arg_6
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18197
VA_CHT_1(0x00579370, 0x82)
void t_simple_draw<t_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short t_paletted_24_source::get_pixel(unsigned short arg_0, unsigned char arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18199
VA_CHT_1(0x005792e0, 0x83)
void t_draw_alpha_1<t_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:18200
VA_CHT_1(0x00579400, 0x116)
void t_draw_alpha_4<t_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short t_paletted_24_source::blend_pixel(unsigned short arg_0, unsigned char arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:18202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simple_draw<t_blended_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short t_blended_paletted_24_source::get_pixel(unsigned short arg_0, unsigned char arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_draw_alpha_1<t_blended_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:18205
VA_CHT_1(0x00579520, 0x11a)
void t_draw_alpha_4<t_blended_paletted_24_source>::draw(
    int arg_0,
    unsigned short* arg_1,
    unsigned char const* arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:18206
VA_CHT_1(0x00578e50, 0xc8)
unsigned short t_blended_paletted_24_source::blend_pixel(unsigned short arg_0, unsigned char arg_1, int arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<t_bitmap_row>::construct(t_bitmap_row* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<unsigned char>::construct(unsigned char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18209
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<unsigned short>::set(unsigned short* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<unsigned short>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<unsigned short>::construct(unsigned short* arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43747
DATA_CHT_1_COMPGEN(0x008d7afc, "const t_bitmap_layer_16::`vftable'")

// confidence:A; rtti-name; map:43748
DATA_CHT_1_COMPGEN(0x008d7b24, "const t_paletted_16_layer::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_layer_16@@;bcd=501884;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50246
DATA_CHT_1_COMPGEN(0x00901884, "t_bitmap_layer_16::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_layer_16@@;vft=4d7afc;col=5018b8;td=5956a0;chd=5018a8;offset=0;cdOffset=0;validated-hierarchy; map:50247
DATA_CHT_1_COMPGEN(0x0090189c, "t_bitmap_layer_16::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_layer_16@@;vft=4d7afc;col=5018b8;td=5956a0;chd=5018a8;offset=0;cdOffset=0;validated-hierarchy; map:50248
DATA_CHT_1_COMPGEN(0x009018a8, "t_bitmap_layer_16::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_layer_16@@;vft=4d7afc;col=5018b8;td=5956a0;chd=5018a8;offset=0;cdOffset=0;validated-hierarchy; map:50249
DATA_CHT_1_COMPGEN(0x009018b8, "const t_bitmap_layer_16::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_paletted_16_layer@@;bcd=5018cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50250
DATA_CHT_1_COMPGEN(0x009018cc, "t_paletted_16_layer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_paletted_16_layer@@;vft=4d7b24;col=501904;td=5956c0;chd=5018f4;offset=0;cdOffset=0;validated-hierarchy; map:50251
DATA_CHT_1_COMPGEN(0x009018e4, "t_paletted_16_layer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_paletted_16_layer@@;vft=4d7b24;col=501904;td=5956c0;chd=5018f4;offset=0;cdOffset=0;validated-hierarchy; map:50252
DATA_CHT_1_COMPGEN(0x009018f4, "t_paletted_16_layer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_paletted_16_layer@@;vft=4d7b24;col=501904;td=5956c0;chd=5018f4;offset=0;cdOffset=0;validated-hierarchy; map:50253
DATA_CHT_1_COMPGEN(0x00901904, "const t_paletted_16_layer::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_layer_16@@;td=5956a0;validated-header; map:58077
DATA_CHT_1_COMPGEN(0x009956a0, "t_bitmap_layer_16 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_paletted_16_layer@@;td=5956c0;validated-header; map:58078
DATA_CHT_1_COMPGEN(0x009956c0, "t_paletted_16_layer `RTTI Type Descriptor'")
