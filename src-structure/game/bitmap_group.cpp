// bitmap_group.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\bitmap_group.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/23 (A:3 B:5 C:4); unaccounted 11; skipped std 14.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// name:A; map symbol; map:18012
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_bitmap_group_24::get_rect() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:18013
VA_CHT_1(0x00570880, 0x49)
void t_bitmap_group_24::offset(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18014
VA_CHT_1(0x005708d0, 0x2b7)
bool t_bitmap_group_24::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bitmap_group_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:18016
VA_CHT_1(0x00570b90, 0x1e4)
t_bitmap_group::t_bitmap_group(t_bitmap_group_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:18017
VA_CHT_1(0x00570de0, 0x65)
t_bitmap_group::~t_bitmap_group()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18018
VA_CHT_1(0x00570e50, 0x87)
t_screen_rect t_bitmap_group::get_rect() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:18019
VA_CHT_1(0x00570ee0, 0x49)
void t_bitmap_group::offset(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18020
VA_CHT_1(0x00570f30, 0x93)
int t_bitmap_group::get_alpha_depth() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer* t_bitmap_group::find(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18022
VA_CHT_1(0x00570fd0, 0xdb)
t_bitmap_layer const* t_bitmap_group::find(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18023
VA_CHT_1(0x005710b0, 0xdc)
t_shared_ptr<t_bitmap_layer>* t_bitmap_group::find_iterator(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18024
VA_CHT_1(0x00571270, 0x15a)
t_shared_ptr<t_bitmap_layer> const* t_bitmap_group::find_iterator(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68971; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005713d0, 0x20, STATIC_INIT_DISPATCH, bitmap_group)

// name:A; map symbol; map:18025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::offset(t_screen_point arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group_base::~t_bitmap_group_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:18027
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_bitmap_layer::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_bitmap_layer>* binary_find(
    t_shared_ptr<t_bitmap_layer>* arg_0,
    int arg_1,
    char const* arg_2,
    t_find_operator arg_3
)
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn,stable; map:18032
VA_CHT_1(0x00571190, 0x8f)
bool t_find_operator::operator()(t_shared_ptr<t_bitmap_layer> const& arg_0, char const* arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18033
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_bitmap_layer> const* binary_find(
    t_shared_ptr<t_bitmap_layer> const* arg_0,
    int arg_1,
    char const* arg_2,
    t_find_operator arg_3
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sort_by_name::operator()(t_bitmap_layer_24 const& arg_0, t_bitmap_layer_24 const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (2 symbols) ===

// name:A; map symbol; map:43738
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bitmap_group_24>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43739
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bitmap_group_24>::extension; // Initial value unavailable.
