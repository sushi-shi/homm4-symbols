// obelisk_data.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 7/10 (A:1 B:4 C:2); unaccounted 3; skipped std 14.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:C; align-order; retn,stable; map:30901
VA_CHT_1(0x007467c0, 0x9)
t_obelisk_data::t_obelisk_data()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30902
VA_CHT_1(0x007467d0, 0x7)
void t_obelisk_data::clear_needed_count()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30903
VA_CHT_1(0x007468f0, 0x292)
bool t_obelisk_data::read(
    t_obelisk_color arg_0,
    std::basic_streambuf<char, std::char_traits<char>>& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30904
VA_CHT_1(0x00746b90, 0x2c2)
bool t_obelisk_data::read_from_map(
    t_obelisk_color arg_0,
    std::basic_streambuf<char, std::char_traits<char>>& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30905
VA_CHT_1(0x00746e60, 0xeb)
void t_obelisk_data::set_reward_list_to_defaults(t_obelisk_color arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:30906
VA_CHT_1(0x00746f50, 0xd8)
bool t_obelisk_data::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63953; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00747030, 0x20, STATIC_INIT_DISPATCH, obelisk_data)

// name:A; map symbol; map:30917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_obelisk_reward>::t_counted_ptr<t_obelisk_reward>(t_obelisk_reward* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30918
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward* t_counted_ptr<t_obelisk_reward>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:30922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_obelisk_reward>& t_counted_ptr<t_obelisk_reward>::operator=(
    t_counted_ptr<t_obelisk_reward> const& arg_0
)
{
    // Body unavailable.
}
