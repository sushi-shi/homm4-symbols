// image_sequence.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\image_sequence.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/37 (A:0 B:0 C:0); unaccounted 25; skipped std 41.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (33 symbols) ===

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27643
VA_CHT_1(0x006d8810, 0x1e6)
bool parse_layer_name(char const* arg_0, t_layer_info& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string build_layer_name(t_layer_info const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void copy_frame_info_vector(
    std::vector<t_image_sequence_frame_info, std::allocator<t_image_sequence_frame_info>> const& arg_0,
    std::vector<t_image_sequence_frame_info, std::allocator<t_image_sequence_frame_info>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group_offsetter::t_bitmap_group_offsetter(t_bitmap_group_24& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27647
VA_CHT_1(0x006d8a00, 0x14)
t_bitmap_group_offsetter::~t_bitmap_group_offsetter()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:27648
VA_CHT_1(0x006d8a20, 0xbd)
t_image_sequence_base_base::~t_image_sequence_base_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:27649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence_base_base::delete_frame(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence_base_base::delete_shadow(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27651
VA_CHT_1(0x006d8ae0, 0x852)
void t_image_sequence_base_base::duplicate_frame(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27652
VA_CHT_1(0x006d9340, 0x138)
void t_image_sequence_base_base::duplicate_shadow(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence_base_base::move_frame(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence_base_base::move_shadow(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:27655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence_base_base::resync_frames()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27656
VA_CHT_1(0x006d9478, 0x6)
void t_image_sequence_base_base::caluate_frame_rect_lists()
{
    // Body unavailable.
}

// name:A; map symbol; map:27657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_image_sequence_24::set_frames(t_bitmap_group_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_image_sequence_24::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27659
VA_CHT_1(0x006d94a0, 0x239)
bool t_image_sequence_24::read_version(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    std::string* arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_image_sequence_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:27661
VA_CHT_1(0x006d96e0, 0x244)
t_image_sequence::t_image_sequence(t_image_sequence_24 const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:27662
VA_CHT_1(0x006d9930, 0x22f)
t_image_sequence::t_image_sequence(
    t_image_sequence_24 const& arg_0,
    double arg_1,
    t_screen_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:64942; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006da580, 0x20, STATIC_INIT_DISPATCH, image_sequence)

// name:A; map symbol; map:27663
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence_frame_info::t_image_sequence_frame_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:27664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::set_name(std::string const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:27665
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_layer_info::t_layer_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:27666
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_layer_info::~t_layer_info()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27667
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_image_sequence_frame_info, std::allocator<t_image_sequence_frame_info>> const& t_image_sequence_base_base::get_frame_info_vector(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27668
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group_24& t_image_sequence_24::get_frames()
{
    // Body unavailable.
}

// name:A; map symbol; map:27696
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence_base<t_bitmap_group>::t_image_sequence_base<t_bitmap_group>()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27697
VA_CHT_1(0x006d9d80, 0x343)
void compute_extents(
    t_bitmap_group_24 const& arg_0,
    std::vector<t_image_sequence_frame_info, std::allocator<t_image_sequence_frame_info>> const& arg_1,
    t_screen_rect& arg_2,
    t_screen_rect& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:27698
VA_CHT_1(0x006d9b60, 0x1e1)
void compute_extents(
    t_bitmap_group const& arg_0,
    std::vector<t_image_sequence_frame_info, std::allocator<t_image_sequence_frame_info>> const& arg_1,
    t_screen_rect& arg_2,
    t_screen_rect& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_layer_info& t_layer_info::operator=(t_layer_info const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_layer_info::t_layer_info(t_layer_info const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27714
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_layer_info)

// === .bss (4 symbols) ===

// name:A; map symbol; map:60251
DATA_CHT_1(UNACCOUNTED)
bool g_disable_base_frames_drawing; // Initial value unavailable.

// name:A; map symbol; map:60252
DATA_CHT_1(UNACCOUNTED)
bool g_disable_base_shadow_drawing; // Initial value unavailable.

// name:A; map symbol; map:60253
DATA_CHT_1(UNACCOUNTED)
bool g_disable_shadow_drawing; // Initial value unavailable.

// name:A; map symbol; map:60254
DATA_CHT_1(UNACCOUNTED)
bool g_disable_frames_drwaing; // Initial value unavailable.
