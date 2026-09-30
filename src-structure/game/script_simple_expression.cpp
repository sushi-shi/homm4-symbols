// script_simple_expression.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 7/21 (A:3 B:4 C:0); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (21 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62935; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a60b0, 0x15, STATIC_INIT_DISPATCH, "script_simple_expression#1")

// name:C; dyninit; see ledger; map:62936
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_simple_expression#1")

// confidence:B; align-order; retn,stable; map:36557
VA_CHT_1(0x007a60d0, 0x10)
int t_script_expression_day::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36558
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_expression_day_of_week::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36559
VA_CHT_1(0x007a6100, 0x24)
int t_script_expression_week::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36560
VA_CHT_1(0x007a6130, 0x31)
int t_script_expression_week_of_month::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36561
VA_CHT_1(0x007a6170, 0x24)
int t_script_expression_month::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_expression_true::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_expression_false::evaluate(t_expression_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62937; name:B (dyninit; see ledger)
VA_CHT_1(0x007a61a0, 0x133)
// script_simple_expression$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62939
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<1,t_script_expression_day>::k_factory")

// name:C; dyninit; see ledger; map:62940
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<2,t_script_expression_day_of_week>::k_factory")

// name:C; dyninit; see ledger; map:62941
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<19,t_script_expression_week>::k_factory")

// name:C; dyninit; see ledger; map:62942
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<20,t_script_expression_week_of_month>::k_factory")

// name:C; dyninit; see ledger; map:62943
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_numeric_expression_base<9,t_script_expression_month>::k_factory")

// name:C; dyninit; see ledger; map:62944
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_boolean_expression_base<22,t_script_expression_true>::k_factory")

// name:C; dyninit; see ledger; map:62945
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_boolean_expression_base<5,t_script_expression_false>::k_factory")

// confidence:A; dyninit-tinit; owner-conf-B; map:62946; name:B (dyninit; see ledger)
VA_CHT_1(0x007a62e0, 0x5c)
// script_simple_expression$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_simple_expression$tatexit9
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_simple_expression$tatexit10
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_simple_expression$tatexit11
// Function body not reconstructed; signature retained as a comment.
