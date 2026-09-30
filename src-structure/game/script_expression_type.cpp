// script_expression_type.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\script_expression_type.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/20 (A:1 B:0 C:10); unaccounted 9; skipped std 133.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

namespace {

// name:A; map symbol; map:34989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<16> build_script_context_mask(t_script_context const* arg_0, unsigned int arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; stable; map:34990
VA_CHT_1(0x00799f20, 0x16d)
// std::string const (& get_numeric_keyword_table(void))[21]
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63086
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// $sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn,stable; map:34991
VA_CHT_1(0x0079a0a0, 0xf3)
std::map<std::string, t_script_numeric_expression_type, t_string_insensitive_less, std::allocator<t_script_numeric_expression_type>> const& get_numeric_type_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:63087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_numeric_type_map$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:34992
VA_CHT_1(0x0079a5e0, 0x16d)
// std::string const (& get_boolean_keyword_table(void))[24]
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63088
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// $sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:C; align-order; retn,stable; map:34993
VA_CHT_1(0x0079a760, 0xf3)
std::map<std::string, t_script_boolean_expression_type, t_string_insensitive_less, std::allocator<t_script_boolean_expression_type>> const& get_boolean_type_map(

)
{
    // Body unavailable.
}

} // anonymous namespace

// name:B; dyninit; see ledger; map:63089
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_boolean_type_map$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:34994
VA_CHT_1(0x0079a910, 0x30)
std::string const& get_keyword(t_script_numeric_expression_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:34995
VA_CHT_1(0x0079a940, 0x7d)
t_script_numeric_expression_type get_script_numeric_expression_type(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:34996
VA_CHT_1(0x0079ba70, 0x91)
bool available(t_script_numeric_expression_type arg_0, t_script_context arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:63090
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:34997
VA_CHT_1(0x0079be80, 0x51)
std::string const& get_keyword(t_script_boolean_expression_type arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:34998
VA_CHT_1(0x0079bfe0, 0x51)
t_script_boolean_expression_type get_script_boolean_expression_type(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:34999
VA_CHT_1(0x0079c090, 0x43)
bool available(t_script_boolean_expression_type arg_0, t_script_context arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:63091
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// available$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63092; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0079c4e0, 0x20, STATIC_INIT_DISPATCH, script_expression_type)

// === .bss (2 symbols) ===

// name:A; map symbol; map:60351
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_script_numeric_expression_type>, std::map<std::string, t_script_numeric_expression_type, t_string_insensitive_less, std::allocator<t_script_numeric_expression_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_numeric_expression_type>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_script_numeric_expression_type>, std::map<std::string, t_script_numeric_expression_type, t_string_insensitive_less, std::allocator<t_script_numeric_expression_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_numeric_expression_type>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60353
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_script_boolean_expression_type>, std::map<std::string, t_script_boolean_expression_type, t_string_insensitive_less, std::allocator<t_script_boolean_expression_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_boolean_expression_type>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_script_boolean_expression_type>, std::map<std::string, t_script_boolean_expression_type, t_string_insensitive_less, std::allocator<t_script_boolean_expression_type>>::_Kfn, t_string_insensitive_less, std::allocator<t_script_boolean_expression_type>>::_Nil; // Initial value unavailable.
