// caravan_set.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\caravan_set.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/11 (A:1 B:3 C:2); unaccounted 5; skipped std 6.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (11 symbols) ===

// confidence:B; align-order; retn,stable; map:19007
VA_CHT_1(0x005955e0, 0x81)
bool t_caravan_sorting_predicate::operator()(
    t_counted_ptr<t_caravan> const& arg_0,
    t_counted_ptr<t_caravan> const& arg_1
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19008
VA_CHT_1(0x00595ad0, 0x10a)
std::_Tree<t_counted_ptr<t_caravan>, t_counted_ptr<t_caravan>, std::multiset<t_counted_ptr<t_caravan>, t_caravan_sorting_predicate, std::allocator<t_counted_ptr<t_caravan>>>::_Kfn, t_caravan_sorting_predicate, std::allocator<t_counted_ptr<t_caravan>>>::iterator t_caravan_set::get_lower_bound_of_destination(
    t_town* arg_0
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:19009
VA_CHT_1(0x00595be0, 0x10a)
std::_Tree<t_counted_ptr<t_caravan>, t_counted_ptr<t_caravan>, std::multiset<t_counted_ptr<t_caravan>, t_caravan_sorting_predicate, std::allocator<t_counted_ptr<t_caravan>>>::_Kfn, t_caravan_sorting_predicate, std::allocator<t_counted_ptr<t_caravan>>>::const_iterator t_caravan_set::get_lower_bound_of_destination(
    t_town* arg_0
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68488; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00595cf0, 0x20, STATIC_INIT_DISPATCH, caravan_set)

namespace {

// name:A; map symbol; map:19010
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compare compare_arrivals(t_counted_ptr<t_caravan> const& arg_0, t_counted_ptr<t_caravan> const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19011
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_caravan::get_arrival_day() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19012
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compare compare_destinations(t_counted_ptr<t_caravan> const& arg_0, t_counted_ptr<t_caravan> const& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19013
VA_CHT_1(0x00595670, 0x18a)
t_compare compare_objects(t_adventure_object const* arg_0, t_adventure_object const* arg_1)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:19014
VA_CHT_1(0x00595800, 0x196)
t_compare compare_origins(t_counted_ptr<t_caravan> const& arg_0, t_counted_ptr<t_caravan> const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19015
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_caravan::get_origin_name() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19016
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compare compare_players(t_counted_ptr<t_caravan> const& arg_0, t_counted_ptr<t_caravan> const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace
