// resource_file_dir.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/20 (A:0 B:0 C:0); unaccounted 9; skipped std 32.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33201
VA_CHT_1(0x00779ca0, 0x12f)
t_resource_file_dir::t_resource_file_dir()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33202
VA_CHT_1(0x00779dd0, 0x112)
void t_resource_file_dir::add(t_resource_dir_entry& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_file_dir::clear()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33204
VA_CHT_1(0x00779ef0, 0x5d9)
bool t_resource_file_dir::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33205
VA_CHT_1(0x0077a4d0, 0xd5)
void t_resource_file_dir::allocate(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33206
VA_CHT_1(0x0077a680, 0x4a)
int t_resource_file_dir::allocate(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33207
VA_CHT_1(0x0077a700, 0x1d6)
void t_resource_file_dir::dispose(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_resource_file_dir::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33209
VA_CHT_1(0x0077a980, 0x72)
void t_resource_file_dir::remove(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_file_dir::rename(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33211
VA_CHT_1(0x0077aa00, 0x77)
void t_resource_file_dir::update(t_resource_dir_entry const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_resource_file_dir::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_resource_dir_entry& arg_1,
    std::string const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63460; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0077ab50, 0x20, STATIC_INIT_DISPATCH, resource_file_dir)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33213
VA_CHT_1(0x0077a5d0, 0x14)
void t_resource_dir_entry::set_length(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_dir_entry::t_resource_dir_entry(t_resource_dir_entry const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33215
VA_CHT_1(0x0077a5f0, 0x87)
t_resource_dir_entry::t_resource_dir_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:33216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_dir_entry::set_uncompressed_size(unsigned long arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33217
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int tell(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33218
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_dir_entry& t_resource_dir_entry::operator=(t_resource_dir_entry const& arg_0)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// name:A; map symbol; map:45203
DATA_CHT_1(UNACCOUNTED)
int const t_resource_file_dir::k_version; // Initial value unavailable.
