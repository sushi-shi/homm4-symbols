// transition_mask.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/29 (A:2 B:5 C:5); unaccounted 17; skipped std 49.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (24 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:61335; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082da90, 0x15, STATIC_INIT_DISPATCH, "transition_mask#1")

// name:C; dyninit; see ledger; map:61336
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "transition_mask#1")

// name:A; map symbol; map:40290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_mask::t_transition_mask()
{
    // Body unavailable.
}

// name:A; map symbol; map:40291
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_mask::t_transition_mask(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40292
VA_CHT_1(0x0082dab0, 0x71)
t_transition_mask& t_transition_mask::operator=(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40293
VA_CHT_1(0x0082db30, 0x5f)
void t_transition_mask::copy(t_transition_mask const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:40294
VA_CHT_1(0x0082db90, 0xf)
t_transition_mask::~t_transition_mask()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40295
VA_CHT_1(0x0082dba0, 0xac)
void t_transition_mask::create(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40296
VA_CHT_1(0x0082e5b0, 0x86)
bool t_transition_mask::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_transition_mask::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:40298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_transition_set::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:40299
VA_CHT_1(0x0082e640, 0x95)
bool t_transition_set::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:40300
VA_CHT_1(0x0082e6e0, 0x8c)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_transition_set_array& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:40301
VA_CHT_1(0x0082e770, 0x143)
bool write(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_transition_set_array const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61337; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0082eb70, 0x20, STATIC_INIT_DISPATCH, transition_mask)

// name:A; map symbol; map:40302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_transition_mask::get_data_size() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:40303
VA_CHT_1(0x0082df20, 0x4b)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned char& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    unsigned char const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:40305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set::t_transition_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:40306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set::~t_transition_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:40351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set& t_transition_set::operator=(t_transition_set const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:40352
VA_CHT_1_COMPGEN(0x0082e8c0, 0x29, SCALAR_DELETING_DTOR, t_transition_mask)

// name:A; map symbol; map:40353
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_transition_set::t_transition_set(t_transition_set const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:40354
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_transition_set)

// === .rdata (5 symbols) ===

// name:A; map symbol; map:45990
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_transition_set_array>::prefix; // Initial value unavailable.

// name:A; map symbol; map:45991
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_transition_set_array>::extension; // Initial value unavailable.

// name:A; map symbol; map:45992
DATA_CHT_1(UNACCOUNTED)
// protected: static int const (* const t_transition_mask::k_offsets)[64]

// name:A; map symbol; map:45993
DATA_CHT_1(UNACCOUNTED)
int const* const t_transition_mask::k_column_start; // Initial value unavailable.

// name:A; map symbol; map:45994
DATA_CHT_1(UNACCOUNTED)
int const* const t_transition_mask::k_column_stop; // Initial value unavailable.
