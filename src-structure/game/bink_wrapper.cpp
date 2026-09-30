// bink_wrapper.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\bink_wrapper.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 19/48 (A:10 B:3 C:6); unaccounted 29; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (36 symbols) ===

namespace {

// confidence:C; align-order; retn,stable; map:17972
VA_CHT_1(0x0056fb20, 0x3f)
int convert_voulme_to_bink_volume(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:17973
VA_CHT_1(0x0056fb60, 0xb7)
t_bink_wrapper::t_bink_wrapper()
{
    // Body unavailable.
}

// name:A; map symbol; map:17974
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bink_wrapper::t_bink_wrapper(std::string arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:17975
VA_CHT_1(0x0056fc40, 0x159)
t_bink_wrapper::~t_bink_wrapper()
{
    // Body unavailable.
}

// name:A; map symbol; map:17976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int t_bink_wrapper::get_total_time()
{
    // Body unavailable.
}

// name:A; map symbol; map:17977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bink_wrapper::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17978
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bink_wrapper::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17979
VA_CHT_1(0x0056fda0, 0x2c)
void t_bink_wrapper::pause()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17980
VA_CHT_1(0x0056fdd0, 0x11)
void t_bink_wrapper::resume()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:17981
VA_CHT_1(0x0056fdf0, 0x151)
void t_bink_wrapper::set_bink_resource_name(std::string arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bink_wrapper::draw_to(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_rect const& arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17983
VA_CHT_1(0x0056ff50, 0x47)
t_screen_rect t_bink_wrapper::get_bink_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17984
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bink_wrapper::step_bink()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17985
VA_CHT_1(0x0056ffa0, 0x8b)
void t_bink_wrapper::next_frame()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17986
VA_CHT_1(0x00570030, 0xc3)
void t_bink_wrapper::get_dirty_screen_rects(
    std::list<t_screen_rect, std::allocator<t_screen_rect>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:17987
VA_CHT_1(0x00570100, 0x340)
bool t_bink_wrapper::open_bink_stream(bool arg_0, int arg_1, bool arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:68975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static int count_mask_bits16(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17988
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bink_wrapper::cleanup()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:17989
VA_CHT_1(0x005704c0, 0x44)
void t_bink_wrapper::reset_vars()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68976; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00570510, 0x20, STATIC_INIT_DISPATCH, bink_wrapper)

// confidence:A; align-band; retn,stable,vslot; map:17990
VA_CHT_1_COMPGEN(0x0056fc20, 0x1e, VECTOR_DELETING_DTOR, t_bink_wrapper)

// name:A; map symbol; map:17991
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bink_wrapper)

// name:A; map symbol; map:17992
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_file>::~t_counted_ptr<t_abstract_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_wrapper_base>::~t_counted_ptr<t_direct_sound_wrapper_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_memory_bitmap<unsigned short>>::t_owned_ptr<t_memory_bitmap<unsigned short>>(
    t_memory_bitmap<unsigned short>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_memory_bitmap<unsigned short>>::~t_owned_ptr<t_memory_bitmap<unsigned short>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_memory_bitmap<unsigned short>>::reset(t_memory_bitmap<unsigned short>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>& t_owned_ptr<t_memory_bitmap<unsigned short>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17999
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_file>::t_counted_ptr<t_abstract_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* t_counted_ptr<t_abstract_file>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18001
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_file>& t_counted_ptr<t_abstract_file>::operator=(
    t_counted_ptr<t_abstract_file> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18002
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_file>& t_counted_ptr<t_abstract_file>::operator=(t_abstract_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18003
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* t_counted_ptr<t_abstract_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18004
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_wrapper_base>::t_counted_ptr<t_direct_sound_wrapper_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18005
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_wrapper_base>& t_counted_ptr<t_direct_sound_wrapper_base>::operator=(
    t_direct_sound_wrapper_base* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18006
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_sound_wrapper_base* t_counted_ptr<t_direct_sound_wrapper_base>::operator->() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// name:A; map symbol; map:43735
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bink_wrapper>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43736
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bink_wrapper>::extension; // Initial value unavailable.

// confidence:A; rtti-name; map:43737
DATA_CHT_1_COMPGEN(0x008d79a8, "const t_bink_wrapper::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bink_wrapper@@;bcd=5016a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50224
DATA_CHT_1_COMPGEN(0x009016a0, "t_bink_wrapper::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bink_wrapper@@;vft=4d79a8;col=5016d0;td=595590;chd=5016c0;offset=0;cdOffset=0;validated-hierarchy; map:50225
DATA_CHT_1_COMPGEN(0x009016b8, "t_bink_wrapper::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bink_wrapper@@;vft=4d79a8;col=5016d0;td=595590;chd=5016c0;offset=0;cdOffset=0;validated-hierarchy; map:50226
DATA_CHT_1_COMPGEN(0x009016c0, "t_bink_wrapper::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bink_wrapper@@;vft=4d79a8;col=5016d0;td=595590;chd=5016c0;offset=0;cdOffset=0;validated-hierarchy; map:50227
DATA_CHT_1_COMPGEN(0x009016d0, "const t_bink_wrapper::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

namespace {

// name:A; map symbol; map:58070
DATA_CHT_1(UNACCOUNTED)
int k_bink_range; // Initial value unavailable.

// name:A; map symbol; map:58071
DATA_CHT_1(UNACCOUNTED)
int k_bink_max; // Initial value unavailable.

// name:A; map symbol; map:58072
DATA_CHT_1(UNACCOUNTED)
int k_sound_vol_count; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AVt_bink_wrapper@@;td=595590;validated-header; map:58073
DATA_CHT_1_COMPGEN(0x00995590, "t_bink_wrapper `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// name:A; map symbol; map:60081
DATA_CHT_1(UNACCOUNTED)
int k_bink_min; // Initial value unavailable.

} // anonymous namespace
