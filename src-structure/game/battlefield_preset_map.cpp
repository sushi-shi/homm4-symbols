// battlefield_preset_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\battlefield_preset_map.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/42 (A:6 B:0 C:0); unaccounted 26; skipped std 11.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (32 symbols) ===

// name:A; map symbol; map:17518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_alpha_iterator::t_alpha_iterator(t_bitmap_layer_24 const& arg_0, t_screen_rect arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_alpha_iterator::~t_alpha_iterator()
{
    // Body unavailable.
}

// name:A; map symbol; map:17520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_alpha_iterator::check_iso_cell_invisible(unsigned char arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_alpha_iterator::check_iso_cell_alpha(unsigned char arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_alpha_iterator::clip_screen_point(t_screen_point& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char t_alpha_iterator::get_pixel_alpha(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_alpha_iterator::is_iso_cell_alpha(int arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:17525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_alpha_iterator::is_iso_cell_invisible(int arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:17526
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_alpha_iterator::check_iso_cell(int arg_0, int arg_1, int arg_2, bool (* arg_3)(unsigned char))
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17527
VA_CHT_1(0x00567680, 0xa2)
t_battlefield_preset_map::t_battlefield_preset_map()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17528
VA_CHT_1(0x00567750, 0x8a)
t_battlefield_preset_map::~t_battlefield_preset_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:17529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_battlefield_preset_map::initialize_passability_map(int arg_0, int arg_1, t_screen_point const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17530
VA_CHT_1(0x00567820, 0x59)
void t_battlefield_preset_map::initialize_backdrop(t_bitmap_layer_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17531
VA_CHT_1(0x00567880, 0x30f)
void t_battlefield_preset_map::calculate_passability_map(
    t_bitmap_layer_24 const& arg_0,
    t_bitmap_layer_24 const& arg_1,
    t_bitmap_layer_24 const& arg_2,
    t_screen_rect arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17532
VA_CHT_1(0x00567b90, 0x142)
bool t_battlefield_preset_map::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17533
VA_CHT_1(0x00567ce0, 0x182)
bool t_battlefield_preset_map::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69035; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00567e70, 0x20, STATIC_INIT_DISPATCH, battlefield_preset_map)

// name:A; map symbol; map:17534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_bitmap_layer::get_alpha_depth() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:17535
VA_CHT_1(0x005677e0, 0x32)
unsigned char* t_bitmap_layer::get_alpha_mask() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_row const* t_bitmap_layer::get_row(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17537
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned char* t_paletted_layer::get_data() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17538
VA_CHT_1_COMPGEN(0x00567730, 0x1e, VECTOR_DELETING_DTOR, t_battlefield_preset_map)

// name:A; map symbol; map:17539
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_battlefield_preset_map)

// name:A; map symbol; map:17540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_24::t_bitmap_layer_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:17541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_paletted_layer::t_paletted_layer()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17542
VA_CHT_1(0x00574e10, 0xf1)
t_bitmap_layer::t_bitmap_layer()
{
    // Body unavailable.
}

// name:A; map symbol; map:17543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_isometric_map_base_base::get_tile_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<t_bitmap_row>::t_shared_array<t_bitmap_row>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<unsigned char>::t_shared_array<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield_passablity_map>::t_counted_ptr<t_battlefield_passablity_map>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_battlefield_passablity_map>& t_counted_ptr<t_battlefield_passablity_map>::operator=(
    t_battlefield_passablity_map* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_array<unsigned char>::reset(unsigned char* arg_0)
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// name:A; map symbol; map:43700
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_battlefield_preset_map>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43701
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_battlefield_preset_map>::extension; // Initial value unavailable.

// confidence:A; rtti-name; map:43702
DATA_CHT_1_COMPGEN(0x008d7414, "const t_battlefield_preset_map::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_battlefield_preset_map@@;bcd=500fe4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50137
DATA_CHT_1_COMPGEN(0x00900fe4, "t_battlefield_preset_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_battlefield_preset_map@@;vft=4d7414;col=501014;td=595160;chd=501004;offset=0;cdOffset=0;validated-hierarchy; map:50138
DATA_CHT_1_COMPGEN(0x00900ffc, "t_battlefield_preset_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_battlefield_preset_map@@;vft=4d7414;col=501014;td=595160;chd=501004;offset=0;cdOffset=0;validated-hierarchy; map:50139
DATA_CHT_1_COMPGEN(0x00901004, "t_battlefield_preset_map::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_battlefield_preset_map@@;vft=4d7414;col=501014;td=595160;chd=501004;offset=0;cdOffset=0;validated-hierarchy; map:50140
DATA_CHT_1_COMPGEN(0x00901014, "const t_battlefield_preset_map::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

namespace {

// name:A; map symbol; map:58035
DATA_CHT_1(UNACCOUNTED)
unsigned short k_bitmap_24_version; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AVt_battlefield_preset_map@@;td=595160;validated-header; map:58036
DATA_CHT_1_COMPGEN(0x00995160, "t_battlefield_preset_map `RTTI Type Descriptor'")

// name:A; map symbol; map:58037
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_array == 0 || new_array != m...")
