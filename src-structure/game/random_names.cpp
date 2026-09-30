// random_names.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\random_names.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/16 (A:3 B:5 C:3); unaccounted 5; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:63565; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076e250, 0x11, STATIC_INIT_DISPATCH, g_random_names_table)

// confidence:B; dyninit-ctor; owner-conf-B; map:63566; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076e270, 0x121, STATIC_CTOR, g_random_names_table)

// name:B; dyninit; see ledger; map:63567
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_random_names_table)

// confidence:B; dyninit-dtor; owner-conf-B; map:63568; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076e3a0, 0xa, STATIC_DTOR, g_random_names_table)

// confidence:A; dyninit-init; owner-conf-C; map:63569; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076e3b0, 0x11, STATIC_INIT_DISPATCH, "random_names#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:63570; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076e3d0, 0x52c, STATIC_CTOR, "random_names#2")

// name:C; dyninit; see ledger; map:63571
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "random_names#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:63572; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076ea40, 0x14, STATIC_DTOR, "random_names#2")

// confidence:C; align-order; retn,stable; map:32969
VA_CHT_1(0x0076ea60, 0x3d)
int get_random_name_list_index(t_qualified_adv_object_type const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:32970
VA_CHT_1(0x0076ec20, 0x1bd)
t_string_vector const& get_random_name_list(int arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:63573
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_random_name_list$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63574; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076ee00, 0x20, STATIC_INIT_DISPATCH, random_names)

namespace {

// name:A; map symbol; map:32971
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_type_string::t_type_string(t_adv_object_type arg_0, int arg_1, std::string arg_2)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:32972
VA_CHT_1(0x0076ebe0, 0x33)
t_type_string::~t_type_string()
{
    // Body unavailable.
}

// name:A; map symbol; map:32973
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_type_string::t_type_string(t_type_string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60335
DATA_CHT_1(0x009f3f58)
t_pointer_cache<t_table> g_random_names_table; // Initial value unavailable.

} // anonymous namespace
