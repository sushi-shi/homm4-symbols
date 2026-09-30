// global_event.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\global_event.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 10/20 (A:0 B:0 C:0); unaccounted 10; skipped std 11.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26838
VA_CHT_1(0x006b9310, 0x121)
bool t_global_player_filtered_event::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_global_player_filtered_event::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_global_player_filtered_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26841
VA_CHT_1(0x006b95b0, 0x10b)
bool t_global_player_filtered_event::ownership_test(t_player const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:26842
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_global_timed_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26843
VA_CHT_1(0x006b96c0, 0x61)
bool t_global_timed_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26844
VA_CHT_1(0x006b9730, 0x61)
bool t_global_timed_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26845
VA_CHT_1(0x006b98e0, 0x169)
bool t_global_triggerable_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26846
VA_CHT_1(0x006b9a50, 0x143)
bool t_global_continuous_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26847
VA_CHT_1(0x006b9ba0, 0x52)
bool t_global_placed_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26848
VA_CHT_1(0x006b9c00, 0xd5)
bool t_global_placed_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:26849
VA_CHT_1(0x006b9ce0, 0x12)
bool t_global_placed_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65335; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b9d00, 0x20, STATIC_INIT_DISPATCH, global_event)

namespace {

// name:A; map symbol; map:26850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int timed_event_details::to_timed_event_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int timed_event_details::to_player_filtered_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int triggerable_event_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int continuous_event_details::to_base_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int placed_event_details::to_discrete_event_map_format_version(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int placed_event_details::to_player_filtered_map_format_version(int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:26861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<2> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}
