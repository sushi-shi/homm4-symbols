// script_action_type.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\script_action_type.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 6/17 (A:1 B:1 C:4); unaccounted 11; skipped std 74.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

namespace {

// confidence:B; align-order; retn,stable; map:33664
VA_CHT_1(0x00790520, 0x43)
std::bitset<16> build_script_context_mask(t_script_context const* arg_0, unsigned int arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:33665
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// std::string const (& get_keyword_table(void))[54]
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// $sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn,stable; map:33666
VA_CHT_1(0x00790570, 0x91)
std::map<std::string, t_script_action_type, t_string_insensitive_less, std::allocator<t_script_action_type>> const& get_type_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:63200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_type_map$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:33667
VA_CHT_1(0x00790980, 0x51)
std::string const& get_keyword(t_script_action_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33668
VA_CHT_1(0x007909e0, 0x43)
t_script_action_type get_script_action_type(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:33669
VA_CHT_1(0x00790a30, 0x158)
bool available(t_script_action_type arg_0, t_script_context arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:63201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor6
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor5
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63207; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00790b90, 0x20, STATIC_INIT_DISPATCH, script_action_type)

// name:A; map symbol; map:33734
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type enum_incr(t_script_action_type& arg_0)
{
    // Body unavailable.
}

// === .bss (1 symbols) ===

// name:A; map symbol; map:60349
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_script_action_type>, std::map<std::string, t_script_action_type, t_string_insensitive_less, std::allocator<t_script_action_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_action_type>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_script_action_type>, std::map<std::string, t_script_action_type, t_string_insensitive_less, std::allocator<t_script_action_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_action_type>>::_Nil; // Initial value unavailable.
