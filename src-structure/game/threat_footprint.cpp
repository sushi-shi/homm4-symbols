// threat_footprint.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\threat_footprint.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 3/9 (A:0 B:0 C:0); unaccounted 6; skipped std 91.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// name:A; map symbol; map:38798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_threat_footprint::t_threat_footprint(int arg_0, t_direction arg_1, int arg_2)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:38799
VA_CHT_1(0x007f7e00, 0x43)
bool operator<(t_key const& arg_0, t_key const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38800
VA_CHT_1(0x007f80a0, 0x5e)
t_threat_footprint const& get_threat_footprint(int arg_0, t_direction arg_1, int arg_2)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:61858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_threat_footprint$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:61859; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f8100, 0x20, STATIC_INIT_DISPATCH, threat_footprint)

namespace {

// name:A; map symbol; map:38801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_key::t_key(int arg_0, t_direction arg_1, int arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_threat_footprint::~t_threat_footprint()
{
    // Body unavailable.
}

// name:A; map symbol; map:38887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_threat_footprint::t_threat_footprint(t_threat_footprint const& arg_0)
{
    // Body unavailable.
}

// === .bss (1 symbols) ===

// name:A; map symbol; map:60396
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_key, std::pair<t_key const, t_threat_footprint>, std::map<t_key, t_threat_footprint, std::less<t_key>, std::allocator<t_threat_footprint>>::_Kfn, std::less<t_key>, std::allocator<t_threat_footprint>>::_Node*std::_Tree<t_key, std::pair<t_key const, t_threat_footprint>, std::map<t_key, t_threat_footprint, std::less<t_key>, std::allocator<t_threat_footprint>>::_Kfn, std::less<t_key>, std::allocator<t_threat_footprint>>::_Nil; // Initial value unavailable.
