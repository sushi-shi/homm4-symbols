// combat_footprint.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\combat_footprint.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 7/12 (A:0 B:0 C:0); unaccounted 5; skipped std 129.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (10 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20685
VA_CHT_1(0x005cc0c0, 0x17)
t_combat_footprint::t_combat_footprint()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20686
VA_CHT_1(0x005cc0e0, 0x10e)
t_combat_footprint::t_combat_footprint(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20687
VA_CHT_1(0x005cc1f0, 0x128)
t_combat_footprint::t_combat_footprint(t_combat_footprint const& arg_0, t_combat_footprint const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20688
VA_CHT_1(0x005cc320, 0x143)
t_combat_footprint const& get_combat_footprint(int arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_combat_footprint$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20689
VA_CHT_1(0x005cc5a0, 0xcc)
bool t_combat_footprint::overlaps(t_map_point_2d const& arg_0, t_combat_footprint const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20690
VA_CHT_1(0x005cc7f0, 0xf3)
t_combat_footprint const& get_footprint_overlap(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:67808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_footprint_overlap$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:20694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_footprint_key::t_footprint_key(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20754
VA_CHT_1(0x005ce030, 0x43)
bool operator<(t_footprint_key const& arg_0, t_footprint_key const& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// === .bss (2 symbols) ===

// name:A; map symbol; map:60107
DATA_CHT_1(UNACCOUNTED)
std::_Tree<int, std::pair<int const, t_combat_footprint>, std::map<int, t_combat_footprint, std::less<int>, std::allocator<t_combat_footprint>>::_Kfn, std::less<int>, std::allocator<t_combat_footprint>>::_Node*std::_Tree<int, std::pair<int const, t_combat_footprint>, std::map<int, t_combat_footprint, std::less<int>, std::allocator<t_combat_footprint>>::_Kfn, std::less<int>, std::allocator<t_combat_footprint>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60109
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_footprint_key, std::pair<t_footprint_key const, t_combat_footprint>, std::map<t_footprint_key, t_combat_footprint, std::less<t_footprint_key>, std::allocator<t_combat_footprint>>::_Kfn, std::less<t_footprint_key>, std::allocator<t_combat_footprint>>::_Node*std::_Tree<t_footprint_key, std::pair<t_footprint_key const, t_combat_footprint>, std::map<t_footprint_key, t_combat_footprint, std::less<t_footprint_key>, std::allocator<t_combat_footprint>>::_Kfn, std::less<t_footprint_key>, std::allocator<t_combat_footprint>>::_Nil; // Initial value unavailable.
