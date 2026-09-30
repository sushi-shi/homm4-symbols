// script_adjust_luck_or_morale.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 95/256 (A:91 B:3 C:1); unaccounted 161; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (135 symbols) ===

// confidence:C; align-order; stable; map:34017
VA_CHT_1(0x00791e50, 0xb)
bool t_script_adjust_attribute::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34018
VA_CHT_1(0x00791ee0, 0x6c)
void t_script_adjust_attribute::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34019
VA_CHT_1(0x00791f80, 0x54)
void t_script_adjust_attribute::make_adjustment(t_creature_stack* arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34020
VA_CHT_1(0x00791fe0, 0x6c)
void t_script_adjust_attribute::make_adjustment(t_creature_array* arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63179; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00792190, 0xbe, STATIC_INIT_DISPATCH, script_adjust_luck_or_morale)

// confidence:A; align-order; atexit,stable; map:63181; name:C (dyninit; see ledger)
VA_CHT_1(0x00792250, 0x1f)
// t_script_action_base<10,t_script_decrease_luck>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63182; name:C (dyninit; see ledger)
VA_CHT_1(0x00792270, 0x1f)
// t_script_action_base<30,t_script_increase_luck>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63183; name:C (dyninit; see ledger)
VA_CHT_1(0x00792290, 0x1f)
// t_script_action_base<13,t_script_decrease_morale>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:63184; name:C (dyninit; see ledger)
VA_CHT_1(0x007922b0, 0x1f)
// t_script_action_base<33,t_script_increase_morale>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34021
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::get_adjustment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34022
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34023
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_stack_target>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34024
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_script_target_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_script_stack_target& arg_2
)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34025
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<10,t_script_decrease_luck>::k_factory")

// name:A; dyninit; see ledger; map:34026
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<30,t_script_increase_luck>::k_factory")

// name:A; dyninit; see ledger; map:34027
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<13,t_script_decrease_morale>::k_factory")

// name:A; dyninit; see ledger; map:34028
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<33,t_script_increase_morale>::k_factory")

// name:A; dyninit; see ledger; map:34029
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<33,t_script_increase_morale>::k_factory")

// name:A; dyninit; see ledger; map:34030
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<13,t_script_decrease_morale>::k_factory")

// name:A; dyninit; see ledger; map:34031
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<30,t_script_increase_luck>::k_factory")

// name:A; dyninit; see ledger; map:34032
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<10,t_script_decrease_luck>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:34033
VA_CHT_1(0x007922d0, 0x14)
t_script_action_factory<10>::~t_script_action_factory<10>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34034
VA_CHT_1(0x00792670, 0x14)
t_script_action_factory<30>::~t_script_action_factory<30>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34035
VA_CHT_1(0x00792760, 0x14)
t_script_action_factory<13>::~t_script_action_factory<13>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34036
VA_CHT_1(0x00792860, 0x14)
t_script_action_factory<33>::~t_script_action_factory<33>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_read_script_target_from_map_helper<t_script_stack_target>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_script_stack_target& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<10>::t_script_action_factory<10>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34039
VA_CHT_1(0x007922f0, 0x77)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<10>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<10>::t_script_action<10>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34042
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_stack_target>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_stack_target>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_adjustment_action<unsigned char>::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34046
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_adjustment_action<unsigned char>::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34047
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_adjustment_action<unsigned char>::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_adjustment_action<unsigned char>::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34049
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_stack_adjustment_action<unsigned char>::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:34050
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<10, t_script_decrease_luck>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34051
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<10, t_script_decrease_luck>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34052
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<10>::t_script_action<10>(t_script_action<10> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:34053
VA_CHT_1_COMPGEN(0x00792480, 0x94, VECTOR_DELETING_DTOR, "t_script_action<10>")

// name:A; map symbol; map:34054
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<10>")

// name:A; map symbol; map:34055
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<10, t_script_decrease_luck>::t_script_action_base<10, t_script_decrease_luck>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34056
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_luck::t_script_decrease_luck()
{
    // Body unavailable.
}

// name:A; map symbol; map:34057
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_attribute::t_script_adjust_attribute(t_stat_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:34058
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_adjust_attribute)

// name:A; map symbol; map:34059
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_adjust_attribute)

// name:A; map symbol; map:34060
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_adjustment_action<unsigned char>::t_script_stack_adjustment_action<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_attribute::~t_script_adjust_attribute()
{
    // Body unavailable.
}

// name:A; map symbol; map:34062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_adjustment_action<unsigned char>::~t_script_stack_adjustment_action<unsigned char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34063
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_stack_adjustment_action<unsigned char>")

// name:A; map symbol; map:34064
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_stack_adjustment_action<unsigned char>")

// name:A; map symbol; map:34065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::~t_script_simple_adjustment_action<t_script_stack_target, unsigned char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_stack_target>::~t_script_targeted_action<t_script_stack_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34067
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_decrease_luck)

// name:A; map symbol; map:34068
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_decrease_luck)

// name:A; map symbol; map:34069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_luck::~t_script_decrease_luck()
{
    // Body unavailable.
}

// name:A; map symbol; map:34070
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::t_script_simple_adjustment_action<t_script_stack_target, unsigned char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34071
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char>")

// name:A; map symbol; map:34072
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char>")

// name:A; map symbol; map:34073
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<10, t_script_decrease_luck>::t_script_action_base<10, t_script_decrease_luck>(
    t_script_action_base<10, t_script_decrease_luck> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34074
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<10>::~t_script_action<10>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34075
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<10, t_script_decrease_luck>::~t_script_action_base<10, t_script_decrease_luck>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34076
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<10, t_script_decrease_luck>")

// name:A; map symbol; map:34077
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<10, t_script_decrease_luck>")

// name:A; map symbol; map:34078
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_luck::t_script_decrease_luck(t_script_decrease_luck const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_attribute::t_script_adjust_attribute(t_script_adjust_attribute const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_adjustment_action<unsigned char>::t_script_stack_adjustment_action<unsigned char>(
    t_script_stack_adjustment_action<unsigned char> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::t_script_simple_adjustment_action<t_script_stack_target, unsigned char>(
    t_script_simple_adjustment_action<t_script_stack_target, unsigned char> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_stack_target>::t_script_targeted_action<t_script_stack_target>(
    t_script_targeted_action<t_script_stack_target> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34083
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_targeted_action<t_script_stack_target>")

// name:A; map symbol; map:34084
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_targeted_action<t_script_stack_target>")

// name:A; map symbol; map:34085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_stack_target>::t_script_targeted_action<t_script_stack_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_target t_script_targeted_action<t_script_stack_target>::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_stack_target get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_script_stack_target const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:34089
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<30>::t_script_action_factory<30>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34090
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<30>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34091
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<30>::t_script_action<30>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34092
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<30, t_script_increase_luck>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34093
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<30, t_script_increase_luck>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34094
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<30>::t_script_action<30>(t_script_action<30> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34095
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<30>")

// name:A; map symbol; map:34096
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<30>")

// name:A; map symbol; map:34097
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<30, t_script_increase_luck>::t_script_action_base<30, t_script_increase_luck>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34098
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_luck::t_script_increase_luck()
{
    // Body unavailable.
}

// name:A; map symbol; map:34099
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_luck)

// name:A; map symbol; map:34100
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_luck)

// name:A; map symbol; map:34101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_luck::~t_script_increase_luck()
{
    // Body unavailable.
}

// name:A; map symbol; map:34102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<30, t_script_increase_luck>::t_script_action_base<30, t_script_increase_luck>(
    t_script_action_base<30, t_script_increase_luck> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<30>::~t_script_action<30>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<30, t_script_increase_luck>::~t_script_action_base<30, t_script_increase_luck>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34105
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<30, t_script_increase_luck>")

// name:A; map symbol; map:34106
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<30, t_script_increase_luck>")

// name:A; map symbol; map:34107
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_luck::t_script_increase_luck(t_script_increase_luck const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<13>::t_script_action_factory<13>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<13>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34110
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<13>::t_script_action<13>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<13, t_script_decrease_morale>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34112
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<13, t_script_decrease_morale>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<13>::t_script_action<13>(t_script_action<13> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<13>")

// name:A; map symbol; map:34115
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<13>")

// name:A; map symbol; map:34116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<13, t_script_decrease_morale>::t_script_action_base<13, t_script_decrease_morale>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_morale::t_script_decrease_morale()
{
    // Body unavailable.
}

// name:A; map symbol; map:34118
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_decrease_morale)

// name:A; map symbol; map:34119
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_decrease_morale)

// name:A; map symbol; map:34120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_morale::~t_script_decrease_morale()
{
    // Body unavailable.
}

// name:A; map symbol; map:34121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<13, t_script_decrease_morale>::t_script_action_base<13, t_script_decrease_morale>(
    t_script_action_base<13, t_script_decrease_morale> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<13>::~t_script_action<13>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34123
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<13, t_script_decrease_morale>::~t_script_action_base<13, t_script_decrease_morale>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34124
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<13, t_script_decrease_morale>")

// name:A; map symbol; map:34125
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<13, t_script_decrease_morale>")

// name:A; map symbol; map:34126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_morale::t_script_decrease_morale(t_script_decrease_morale const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<33>::t_script_action_factory<33>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<33>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<33>::t_script_action<33>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<33, t_script_increase_morale>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<33, t_script_increase_morale>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<33>::t_script_action<33>(t_script_action<33> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34133
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<33>")

// name:A; map symbol; map:34134
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<33>")

// name:A; map symbol; map:34135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<33, t_script_increase_morale>::t_script_action_base<33, t_script_increase_morale>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_morale::t_script_increase_morale()
{
    // Body unavailable.
}

// name:A; map symbol; map:34137
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_morale)

// name:A; map symbol; map:34138
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_morale)

// name:A; map symbol; map:34139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_morale::~t_script_increase_morale()
{
    // Body unavailable.
}

// name:A; map symbol; map:34140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<33, t_script_increase_morale>::t_script_action_base<33, t_script_increase_morale>(
    t_script_action_base<33, t_script_increase_morale> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<33>::~t_script_action<33>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<33, t_script_increase_morale>::~t_script_action_base<33, t_script_increase_morale>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34143
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<33, t_script_increase_morale>")

// name:A; map symbol; map:34144
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<33, t_script_increase_morale>")

// name:A; map symbol; map:34145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_morale::t_script_increase_morale(t_script_increase_morale const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_script_target_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_script_stack_target& arg_1
)
{
    // Body unavailable.
}

// === .rdata (20 symbols) ===

// confidence:A; rtti-name; map:45319
DATA_CHT_1_COMPGEN(0x008ea53c, "const t_script_action_factory<10>::`vftable'")

// confidence:A; rtti-name; map:45320
DATA_CHT_1_COMPGEN(0x008ea544, "const t_script_action<10>::`vftable'")

// name:A; map symbol; map:45321
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<10, t_script_decrease_luck>::`vftable'")

// name:A; map symbol; map:45322
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_luck::`vftable'")

// name:A; map symbol; map:45323
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_adjust_attribute::`vftable'")

// confidence:A; rtti-name; map:45324
DATA_CHT_1_COMPGEN(0x008ea580, "const t_script_stack_adjustment_action<unsigned char>::`vftable'")

// name:A; map symbol; map:45325
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::`vftable'")

// confidence:A; rtti-name; map:45326
DATA_CHT_1_COMPGEN(0x008ea5bc, "const t_script_targeted_action<t_script_stack_target>::`vftable'")

// confidence:A; rtti-name; map:45327
DATA_CHT_1_COMPGEN(0x008ea5f0, "const t_script_action_factory<30>::`vftable'")

// confidence:A; rtti-name; map:45328
DATA_CHT_1_COMPGEN(0x008ea5f8, "const t_script_action<30>::`vftable'")

// name:A; map symbol; map:45329
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<30, t_script_increase_luck>::`vftable'")

// name:A; map symbol; map:45330
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_luck::`vftable'")

// confidence:A; rtti-name; map:45331
DATA_CHT_1_COMPGEN(0x008ea634, "const t_script_action_factory<13>::`vftable'")

// confidence:A; rtti-name; map:45332
DATA_CHT_1_COMPGEN(0x008ea63c, "const t_script_action<13>::`vftable'")

// name:A; map symbol; map:45333
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<13, t_script_decrease_morale>::`vftable'")

// name:A; map symbol; map:45334
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_morale::`vftable'")

// confidence:A; rtti-name; map:45335
DATA_CHT_1_COMPGEN(0x008ea678, "const t_script_action_factory<33>::`vftable'")

// confidence:A; rtti-name; map:45336
DATA_CHT_1_COMPGEN(0x008ea680, "const t_script_action<33>::`vftable'")

// name:A; map symbol; map:45337
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<33, t_script_increase_morale>::`vftable'")

// name:A; map symbol; map:45338
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_morale::`vftable'")

// === .rdata$r (80 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$09@@;bcd=5156a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54654
DATA_CHT_1_COMPGEN(0x009156a0, "t_script_action_factory<10>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$09@@;vft=4ea53c;col=5156d8;td=5b3c8c;chd=5156c8;offset=0;cdOffset=0;validated-hierarchy; map:54655
DATA_CHT_1_COMPGEN(0x009156b8, "t_script_action_factory<10>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$09@@;vft=4ea53c;col=5156d8;td=5b3c8c;chd=5156c8;offset=0;cdOffset=0;validated-hierarchy; map:54656
DATA_CHT_1_COMPGEN(0x009156c8, "t_script_action_factory<10>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$09@@;vft=4ea53c;col=5156d8;td=5b3c8c;chd=5156c8;offset=0;cdOffset=0;validated-hierarchy; map:54657
DATA_CHT_1_COMPGEN(0x009156d8, "const t_script_action_factory<10>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_targeted_action@W4t_script_stack_target@@@@;bcd=5156ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54658
DATA_CHT_1_COMPGEN(0x009156ec, "t_script_targeted_action<t_script_stack_target>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_stack_target@@E@@;bcd=515704;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54659
DATA_CHT_1_COMPGEN(0x00915704, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_stack_adjustment_action@E@@;bcd=51571c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54660
DATA_CHT_1_COMPGEN(0x0091571c, "t_script_stack_adjustment_action<unsigned char>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_adjust_attribute@@;bcd=515734;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54661
DATA_CHT_1_COMPGEN(0x00915734, "t_script_adjust_attribute::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_decrease_luck@@;bcd=51574c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54662
DATA_CHT_1_COMPGEN(0x0091574c, "t_script_decrease_luck::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$09Vt_script_decrease_luck@@@@;bcd=515764;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54663
DATA_CHT_1_COMPGEN(0x00915764, "t_script_action_base<10, t_script_decrease_luck>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$09@@;bcd=51577c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54664
DATA_CHT_1_COMPGEN(0x0091577c, "t_script_action<10>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$09@@;vft=4ea544;col=5157cc;td=5b3e1c;chd=5157bc;offset=0;cdOffset=0;validated-hierarchy; map:54665
DATA_CHT_1_COMPGEN(0x00915794, "t_script_action<10>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$09@@;vft=4ea544;col=5157cc;td=5b3e1c;chd=5157bc;offset=0;cdOffset=0;validated-hierarchy; map:54666
DATA_CHT_1_COMPGEN(0x009157bc, "t_script_action<10>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$09@@;vft=4ea544;col=5157cc;td=5b3e1c;chd=5157bc;offset=0;cdOffset=0;validated-hierarchy; map:54667
DATA_CHT_1_COMPGEN(0x009157cc, "const t_script_action<10>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54668
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<10, t_script_decrease_luck>::`RTTI Base Class Array'")

// name:A; map symbol; map:54669
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<10, t_script_decrease_luck>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54670
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<10, t_script_decrease_luck>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54671
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_luck::`RTTI Base Class Array'")

// name:A; map symbol; map:54672
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_luck::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54673
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_luck::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54674
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_adjust_attribute::`RTTI Base Class Array'")

// name:A; map symbol; map:54675
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_adjust_attribute::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54676
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_adjust_attribute::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_stack_adjustment_action@E@@;vft=4ea580;col=51583c;td=5b3d50;chd=51582c;offset=0;cdOffset=0;validated-hierarchy; map:54677
DATA_CHT_1_COMPGEN(0x00915814, "t_script_stack_adjustment_action<unsigned char>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_stack_adjustment_action@E@@;vft=4ea580;col=51583c;td=5b3d50;chd=51582c;offset=0;cdOffset=0;validated-hierarchy; map:54678
DATA_CHT_1_COMPGEN(0x0091582c, "t_script_stack_adjustment_action<unsigned char>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_stack_adjustment_action@E@@;vft=4ea580;col=51583c;td=5b3d50;chd=51582c;offset=0;cdOffset=0;validated-hierarchy; map:54679
DATA_CHT_1_COMPGEN(0x0091583c, "const t_script_stack_adjustment_action<unsigned char>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54680
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::`RTTI Base Class Array'")

// name:A; map symbol; map:54681
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54682
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_stack_target, unsigned char>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_stack_target@@@@;vft=4ea5bc;col=515800;td=5b3cb8;chd=5157f0;offset=0;cdOffset=0;validated-hierarchy; map:54683
DATA_CHT_1_COMPGEN(0x009157e0, "t_script_targeted_action<t_script_stack_target>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_stack_target@@@@;vft=4ea5bc;col=515800;td=5b3cb8;chd=5157f0;offset=0;cdOffset=0;validated-hierarchy; map:54684
DATA_CHT_1_COMPGEN(0x009157f0, "t_script_targeted_action<t_script_stack_target>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_stack_target@@@@;vft=4ea5bc;col=515800;td=5b3cb8;chd=5157f0;offset=0;cdOffset=0;validated-hierarchy; map:54685
DATA_CHT_1_COMPGEN(0x00915800, "const t_script_targeted_action<t_script_stack_target>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BO@@@;bcd=515850;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54686
DATA_CHT_1_COMPGEN(0x00915850, "t_script_action_factory<30>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BO@@@;vft=4ea5f0;col=515888;td=5b3e40;chd=515878;offset=0;cdOffset=0;validated-hierarchy; map:54687
DATA_CHT_1_COMPGEN(0x00915868, "t_script_action_factory<30>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BO@@@;vft=4ea5f0;col=515888;td=5b3e40;chd=515878;offset=0;cdOffset=0;validated-hierarchy; map:54688
DATA_CHT_1_COMPGEN(0x00915878, "t_script_action_factory<30>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BO@@@;vft=4ea5f0;col=515888;td=5b3e40;chd=515878;offset=0;cdOffset=0;validated-hierarchy; map:54689
DATA_CHT_1_COMPGEN(0x00915888, "const t_script_action_factory<30>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_luck@@;bcd=51589c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54690
DATA_CHT_1_COMPGEN(0x0091589c, "t_script_increase_luck::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BO@Vt_script_increase_luck@@@@;bcd=5158b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54691
DATA_CHT_1_COMPGEN(0x009158b4, "t_script_action_base<30, t_script_increase_luck>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BO@@@;bcd=5158cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54692
DATA_CHT_1_COMPGEN(0x009158cc, "t_script_action<30>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BO@@@;vft=4ea5f8;col=51591c;td=5b3edc;chd=51590c;offset=0;cdOffset=0;validated-hierarchy; map:54693
DATA_CHT_1_COMPGEN(0x009158e4, "t_script_action<30>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BO@@@;vft=4ea5f8;col=51591c;td=5b3edc;chd=51590c;offset=0;cdOffset=0;validated-hierarchy; map:54694
DATA_CHT_1_COMPGEN(0x0091590c, "t_script_action<30>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BO@@@;vft=4ea5f8;col=51591c;td=5b3edc;chd=51590c;offset=0;cdOffset=0;validated-hierarchy; map:54695
DATA_CHT_1_COMPGEN(0x0091591c, "const t_script_action<30>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54696
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<30, t_script_increase_luck>::`RTTI Base Class Array'")

// name:A; map symbol; map:54697
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<30, t_script_increase_luck>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54698
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<30, t_script_increase_luck>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54699
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_luck::`RTTI Base Class Array'")

// name:A; map symbol; map:54700
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_luck::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54701
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_luck::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0N@@@;bcd=515930;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54702
DATA_CHT_1_COMPGEN(0x00915930, "t_script_action_factory<13>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0N@@@;vft=4ea634;col=515968;td=5b3f04;chd=515958;offset=0;cdOffset=0;validated-hierarchy; map:54703
DATA_CHT_1_COMPGEN(0x00915948, "t_script_action_factory<13>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0N@@@;vft=4ea634;col=515968;td=5b3f04;chd=515958;offset=0;cdOffset=0;validated-hierarchy; map:54704
DATA_CHT_1_COMPGEN(0x00915958, "t_script_action_factory<13>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0N@@@;vft=4ea634;col=515968;td=5b3f04;chd=515958;offset=0;cdOffset=0;validated-hierarchy; map:54705
DATA_CHT_1_COMPGEN(0x00915968, "const t_script_action_factory<13>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_decrease_morale@@;bcd=51597c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54706
DATA_CHT_1_COMPGEN(0x0091597c, "t_script_decrease_morale::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0N@Vt_script_decrease_morale@@@@;bcd=515994;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54707
DATA_CHT_1_COMPGEN(0x00915994, "t_script_action_base<13, t_script_decrease_morale>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0N@@@;bcd=5159ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54708
DATA_CHT_1_COMPGEN(0x009159ac, "t_script_action<13>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0N@@@;vft=4ea63c;col=5159fc;td=5b3fa8;chd=5159ec;offset=0;cdOffset=0;validated-hierarchy; map:54709
DATA_CHT_1_COMPGEN(0x009159c4, "t_script_action<13>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0N@@@;vft=4ea63c;col=5159fc;td=5b3fa8;chd=5159ec;offset=0;cdOffset=0;validated-hierarchy; map:54710
DATA_CHT_1_COMPGEN(0x009159ec, "t_script_action<13>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0N@@@;vft=4ea63c;col=5159fc;td=5b3fa8;chd=5159ec;offset=0;cdOffset=0;validated-hierarchy; map:54711
DATA_CHT_1_COMPGEN(0x009159fc, "const t_script_action<13>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54712
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<13, t_script_decrease_morale>::`RTTI Base Class Array'")

// name:A; map symbol; map:54713
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<13, t_script_decrease_morale>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54714
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<13, t_script_decrease_morale>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54715
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_morale::`RTTI Base Class Array'")

// name:A; map symbol; map:54716
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_morale::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54717
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_morale::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CB@@@;bcd=515a10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54718
DATA_CHT_1_COMPGEN(0x00915a10, "t_script_action_factory<33>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CB@@@;vft=4ea678;col=515a48;td=5b3fd0;chd=515a38;offset=0;cdOffset=0;validated-hierarchy; map:54719
DATA_CHT_1_COMPGEN(0x00915a28, "t_script_action_factory<33>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CB@@@;vft=4ea678;col=515a48;td=5b3fd0;chd=515a38;offset=0;cdOffset=0;validated-hierarchy; map:54720
DATA_CHT_1_COMPGEN(0x00915a38, "t_script_action_factory<33>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CB@@@;vft=4ea678;col=515a48;td=5b3fd0;chd=515a38;offset=0;cdOffset=0;validated-hierarchy; map:54721
DATA_CHT_1_COMPGEN(0x00915a48, "const t_script_action_factory<33>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_morale@@;bcd=515a5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54722
DATA_CHT_1_COMPGEN(0x00915a5c, "t_script_increase_morale::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CB@Vt_script_increase_morale@@@@;bcd=515a74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54723
DATA_CHT_1_COMPGEN(0x00915a74, "t_script_action_base<33, t_script_increase_morale>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CB@@@;bcd=515a8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54724
DATA_CHT_1_COMPGEN(0x00915a8c, "t_script_action<33>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CB@@@;vft=4ea680;col=515adc;td=5b4070;chd=515acc;offset=0;cdOffset=0;validated-hierarchy; map:54725
DATA_CHT_1_COMPGEN(0x00915aa4, "t_script_action<33>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CB@@@;vft=4ea680;col=515adc;td=5b4070;chd=515acc;offset=0;cdOffset=0;validated-hierarchy; map:54726
DATA_CHT_1_COMPGEN(0x00915acc, "t_script_action<33>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CB@@@;vft=4ea680;col=515adc;td=5b4070;chd=515acc;offset=0;cdOffset=0;validated-hierarchy; map:54727
DATA_CHT_1_COMPGEN(0x00915adc, "const t_script_action<33>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54728
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<33, t_script_increase_morale>::`RTTI Base Class Array'")

// name:A; map symbol; map:54729
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<33, t_script_increase_morale>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54730
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<33, t_script_increase_morale>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54731
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_morale::`RTTI Base Class Array'")

// name:A; map symbol; map:54732
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_morale::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54733
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_morale::`RTTI Complete Object Locator'")

// === .data (21 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$09@@;td=5b3c8c;validated-header; map:59127
DATA_CHT_1_COMPGEN(0x009b3c8c, "t_script_action_factory<10> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_targeted_action@W4t_script_stack_target@@@@;td=5b3cb8;validated-header; map:59128
DATA_CHT_1_COMPGEN(0x009b3cb8, "t_script_targeted_action<t_script_stack_target> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_stack_target@@E@@;td=5b3d00;validated-header; map:59129
DATA_CHT_1_COMPGEN(0x009b3d00, "t_script_simple_adjustment_action<t_script_stack_target, unsigned char> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_stack_adjustment_action@E@@;td=5b3d50;validated-header; map:59130
DATA_CHT_1_COMPGEN(0x009b3d50, "t_script_stack_adjustment_action<unsigned char> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_adjust_attribute@@;td=5b3d84;validated-header; map:59131
DATA_CHT_1_COMPGEN(0x009b3d84, "t_script_adjust_attribute `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_decrease_luck@@;td=5b3dac;validated-header; map:59132
DATA_CHT_1_COMPGEN(0x009b3dac, "t_script_decrease_luck `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$09Vt_script_decrease_luck@@@@;td=5b3dd8;validated-header; map:59133
DATA_CHT_1_COMPGEN(0x009b3dd8, "t_script_action_base<10, t_script_decrease_luck> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$09@@;td=5b3e1c;validated-header; map:59134
DATA_CHT_1_COMPGEN(0x009b3e1c, "t_script_action<10> `RTTI Type Descriptor'")

// name:A; map symbol; map:59135
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_stack_adjust...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BO@@@;td=5b3e40;validated-header; map:59136
DATA_CHT_1_COMPGEN(0x009b3e40, "t_script_action_factory<30> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_luck@@;td=5b3e70;validated-header; map:59137
DATA_CHT_1_COMPGEN(0x009b3e70, "t_script_increase_luck `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BO@Vt_script_increase_luck@@@@;td=5b3e98;validated-header; map:59138
DATA_CHT_1_COMPGEN(0x009b3e98, "t_script_action_base<30, t_script_increase_luck> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BO@@@;td=5b3edc;validated-header; map:59139
DATA_CHT_1_COMPGEN(0x009b3edc, "t_script_action<30> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0N@@@;td=5b3f04;validated-header; map:59140
DATA_CHT_1_COMPGEN(0x009b3f04, "t_script_action_factory<13> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_decrease_morale@@;td=5b3f34;validated-header; map:59141
DATA_CHT_1_COMPGEN(0x009b3f34, "t_script_decrease_morale `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0N@Vt_script_decrease_morale@@@@;td=5b3f60;validated-header; map:59142
DATA_CHT_1_COMPGEN(0x009b3f60, "t_script_action_base<13, t_script_decrease_morale> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0N@@@;td=5b3fa8;validated-header; map:59143
DATA_CHT_1_COMPGEN(0x009b3fa8, "t_script_action<13> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CB@@@;td=5b3fd0;validated-header; map:59144
DATA_CHT_1_COMPGEN(0x009b3fd0, "t_script_action_factory<33> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_morale@@;td=5b4000;validated-header; map:59145
DATA_CHT_1_COMPGEN(0x009b4000, "t_script_increase_morale `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CB@Vt_script_increase_morale@@@@;td=5b4028;validated-header; map:59146
DATA_CHT_1_COMPGEN(0x009b4028, "t_script_action_base<33, t_script_increase_morale> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CB@@@;td=5b4070;validated-header; map:59147
DATA_CHT_1_COMPGEN(0x009b4070, "t_script_action<33> `RTTI Type Descriptor'")
