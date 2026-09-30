// string_table.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\string_table.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/22 (A:0 B:0 C:0); unaccounted 18; skipped std 74.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// name:A; map symbol; map:38460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<unsigned int, std::allocator<unsigned int>> t_string_table::create_index_vector(
    t_table const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38461
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_string_table::t_string_table(t_string_table const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38462
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_string_table::t_string_table(t_string_table const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int const* t_string_table::do_find(std::string const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_string_table::import(t_table const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38465
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_string_table::insert(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:38466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_string_table::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38467
VA_CHT_1(0x007e5ea0, 0x1b4)
bool t_string_table::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38468
VA_CHT_1(0x007e6065, 0x30)
t_string_table& t_string_table::operator=(t_string_table const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62306; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e62b0, 0x20, STATIC_INIT_DISPATCH, string_table)

namespace {

// name:A; map symbol; map:38469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compare_keys::t_compare_keys(t_table const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_table_entry(t_string_vector const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_table::t_table(t_table const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38472
VA_CHT_1(0x007e6250, 0x23)
t_table_row::t_table_row()
{
    // Body unavailable.
}

// name:A; map symbol; map:38524
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_table_row& t_table_row::operator=(t_table_row const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38525
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_table_row::t_table_row(t_table_row const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38526
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_string_vector& t_string_vector::operator=(t_string_vector const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_string_vector::t_string_vector(t_string_vector const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:38532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_compare_keys::operator()(unsigned int arg_0, std::string const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38537
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_compare_keys::operator()(unsigned int arg_0, unsigned int arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (2 symbols) ===

// name:A; map symbol; map:45869
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_string_table>::prefix; // Initial value unavailable.

// name:A; map symbol; map:45870
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_string_table>::extension; // Initial value unavailable.
