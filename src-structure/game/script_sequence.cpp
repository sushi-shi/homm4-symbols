// script_sequence.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/21 (A:0 B:0 C:0); unaccounted 9; skipped std 27.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62981; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a3e40, 0x15, STATIC_INIT_DISPATCH, "script_sequence#1")

// name:C; dyninit; see ledger; map:62982
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_sequence#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36271
VA_CHT_1(0x007a3e60, 0x178)
t_script_sequence::t_script_sequence(t_script_sequence const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36272
VA_CHT_1(0x007a3fe0, 0x1e1)
bool t_script_sequence::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36273
VA_CHT_1(0x007a41d0, 0x1e1)
bool t_script_sequence::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36274
VA_CHT_1(0x007a43c0, 0x93)
bool t_script_sequence::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36275
VA_CHT_1(0x007a4460, 0x5b)
void t_script_sequence::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36276
VA_CHT_1(0x007a44c0, 0x5b)
void t_script_sequence::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36277
VA_CHT_1(0x007a4520, 0x5b)
void t_script_sequence::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36278
VA_CHT_1(0x007a4580, 0x5b)
void t_script_sequence::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36279
VA_CHT_1(0x007a45e0, 0x5b)
void t_script_sequence::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62983; name:B (dyninit; see ledger)
VA_CHT_1(0x007a4640, 0x49)
// script_sequence$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62985
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<42,t_script_sequence>::k_factory")

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62986; name:B (dyninit; see ledger)
VA_CHT_1(0x007a4690, 0x5c)
// script_sequence$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_sequence$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62988
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_sequence$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_sequence$tatexit5
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action const& t_script_sequence::get_subaction(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_sequence::get_subaction_count() const
{
    // Body unavailable.
}

// === .data (2 symbols) ===

// name:A; map symbol; map:59436
DATA_CHT_1_COMPGEN(UNACCOUNTED, "num >= 0&& num < get_subaction_...")

// name:A; map symbol; map:59437
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_sequence.h")
