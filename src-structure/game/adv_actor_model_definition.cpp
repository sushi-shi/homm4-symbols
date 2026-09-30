// adv_actor_model_definition.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/24 (A:2 B:0 C:2); unaccounted 20; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (20 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71281; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042aee0, 0x15, STATIC_INIT_DISPATCH, "adv_actor_model_definition#1")

// name:C; dyninit; see ledger; map:71282
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_actor_model_definition#1")

// confidence:C; align-order; retn,stable; map:3575
VA_CHT_1(0x0042af00, 0x3f0)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_adv_actor_model_definition& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:3576
VA_CHT_1(0x0042b2d7, 0x6)
bool write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_adv_actor_model_definition const& arg_1
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71283; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0042b2f0, 0x20, STATIC_INIT_DISPATCH, adv_actor_model_definition)

// name:A; map symbol; map:3577
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator>>(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_screen_point& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3578
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition_base::set_offset(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3579
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adv_actor_model_definition::set_flag_offset(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3581
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& operator<<(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_screen_point const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model_definition_base::get_postwalk_length() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model_definition_base::get_prewalk_length() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3584
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model_definition_base::get_walk_length() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_adv_actor_model_definition_traits>::set_footprint_size(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_adv_actor_model_definition_traits>::set_frames_per_second(
    t_adv_actor_action_id arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_action_definition::set_frames_per_second(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3588
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model_definition<t_adv_actor_model_definition_traits>::set_sequence_name(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    std::string const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3589
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_action_definition::set_sequence_name(t_direction arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3590
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string& t_static_vector<std::string, 8>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3591
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction enum_incr(t_direction& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3592
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition& t_static_vector<t_actor_action_definition, 6>::operator[](unsigned int arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:42662
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_adv_actor_model_definition>::prefix; // Initial value unavailable.

// name:A; map symbol; map:42663
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_adv_actor_model_definition>::extension; // Initial value unavailable.

// === .data (2 symbols) ===

// name:A; map symbol; map:57432
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_footprint_size >= k_min_foot...")

// name:A; map symbol; map:57433
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_frames_per_second >= 1&& ne...")
