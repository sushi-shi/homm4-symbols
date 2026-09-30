// ownable_event.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\ownable_event.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/23 (A:0 B:0 C:1); unaccounted 11; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (23 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31534
VA_CHT_1(0x00752f20, 0x67)
bool t_ownable_event::ownership_test(t_player const* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31535
VA_CHT_1(0x00752f90, 0x100)
bool t_ownable_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31537
VA_CHT_1(0x00753090, 0xe5)
bool t_ownable_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31538
VA_CHT_1(0x00753180, 0x164)
bool t_ownable_built_in_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31539
VA_CHT_1(0x007532f0, 0x143)
bool t_ownable_timed_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31540
VA_CHT_1(0x00753440, 0x164)
bool t_ownable_timed_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31541
VA_CHT_1(0x007535b0, 0x128)
bool t_ownable_timed_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31542
VA_CHT_1(0x007536e0, 0x164)
bool t_ownable_triggerable_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable;manual-review=complete-R31:unresolved; map:31543
VA_CHT_1(0x00753850, 0x143)
bool t_ownable_continuous_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31544
VA_CHT_1(0x00753b30, 0x128)
bool t_ownable_continuous_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31545
VA_CHT_1(0x00753c60, 0x31)
bool t_ownable_continuous_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63831; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00753ca0, 0x20, STATIC_INIT_DISPATCH, ownable_event)

namespace {

// name:A; map symbol; map:31546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_built_in_event_special_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_built_in_event_standard_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_timed_event_special_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_timed_event_standard_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_triggerable_event_special_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_triggerable_event_standard_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_continuous_event_special_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int to_continuous_event_standard_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:31554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<7> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::bitset<7> const& arg_1)
{
    // Body unavailable.
}
