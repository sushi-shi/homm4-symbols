// hero_events.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\hero_events.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/8 (A:1 B:0 C:4); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:C; align-order; retn,stable; map:27340
VA_CHT_1(0x006c90b0, 0x129)
bool read_hero_built_in_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_counted_ptr<t_ownable_built_in_event> (& arg_1)[3]
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:27341
VA_CHT_1(0x006c91e0, 0x5)
bool read_hero_timed_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>>& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:27342
VA_CHT_1(0x006c91f0, 0x5)
bool read_hero_triggerable_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>>& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:27343
VA_CHT_1(0x006c9200, 0x5)
bool read_hero_continuous_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>>& arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65247; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006c9930, 0x20, STATIC_INIT_DISPATCH, hero_events)

namespace {

// name:A; map symbol; map:27344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_timed_event>, std::allocator<t_counted_ptr<t_ownable_timed_event>>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_triggerable_event>, std::allocator<t_counted_ptr<t_ownable_triggerable_event>>>& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:27346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_events(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_ownable_continuous_event>, std::allocator<t_counted_ptr<t_ownable_continuous_event>>>& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace
