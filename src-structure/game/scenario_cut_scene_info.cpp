// scenario_cut_scene_info.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\scenario_cut_scene_info.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/12 (A:1 B:3 C:1); unaccounted 7; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

namespace {

// name:A; map symbol; map:33578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_image_id(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_scenario_cut_scene_image_id& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_voice_over_id(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_scenario_cut_scene_voice_over_id& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:33580
VA_CHT_1(0x0078a070, 0x97)
bool t_scenario_cut_scene_info::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33581
VA_CHT_1(0x0078a260, 0x157)
bool t_scenario_cut_scene_info::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:33582
VA_CHT_1(0x0078a3c0, 0x14f)
bool t_scenario_cut_scene_info::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63292; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0078a510, 0x20, STATIC_INIT_DISPATCH, scenario_cut_scene_info)

namespace {

// confidence:C; align-band; retn,stable; map:33583
VA_CHT_1(0x0078a110, 0x14f)
bool read_id(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_scenario_cut_scene_image_id arg_1,
    t_scenario_cut_scene_image_id& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_id(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_scenario_cut_scene_voice_over_id arg_1,
    t_scenario_cut_scene_voice_over_id& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:33585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scenario_cut_scene_image_id enum_incr(t_scenario_cut_scene_image_id& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scenario_cut_scene_voice_over_id enum_incr(t_scenario_cut_scene_voice_over_id& arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:45255
DATA_CHT_1(UNACCOUNTED)
t_scenario_cut_scene_image_id const t_scenario_cut_scene_info::k_image_none; // Initial value unavailable.

// name:A; map symbol; map:45256
DATA_CHT_1(UNACCOUNTED)
t_scenario_cut_scene_voice_over_id const t_scenario_cut_scene_info::k_voice_over_none; // Initial value unavailable.
