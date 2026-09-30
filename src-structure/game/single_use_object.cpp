// single_use_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 18/29 (A:0 B:2 C:0); unaccounted 11; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (27 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62757; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b78d0, 0x15, STATIC_INIT_DISPATCH, "single_use_object#1")

// name:C; dyninit; see ledger; map:62758
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "single_use_object#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62759; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b78f0, 0x11, STATIC_INIT_DISPATCH, k_text_dead_heroes_ineligible)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62760; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b7910, 0xd1, STATIC_CTOR, k_text_dead_heroes_ineligible)

// name:A; dyninit; see ledger; map:62761
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_dead_heroes_ineligible)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62762; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b79f0, 0xa, STATIC_DTOR, k_text_dead_heroes_ineligible)

// name:A; map symbol; map:37355
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_single_use_object::set_use_id(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37356
VA_CHT_1(0x007b7a00, 0x22)
void t_single_use_object::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37357
VA_CHT_1(0x007b7a30, 0x127)
std::string t_single_use_object::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37358
VA_CHT_1(0x007b7b60, 0x923)
void t_single_use_object::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_single_use_object::are_all_heroes_ineligible(t_army* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37360
VA_CHT_1(0x007b8490, 0x65)
bool t_single_use_object::visited() const
{
    // Body unavailable.
}

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62763; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b8500, 0x11, STATIC_INIT_DISPATCH, k_text_visited)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62764; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b8520, 0xd1, STATIC_CTOR, k_text_visited)

// name:A; dyninit; see ledger; map:62765
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_visited)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62766; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b8600, 0xa, STATIC_DTOR, k_text_visited)

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37361
VA_CHT_1(0x007b8610, 0x1e0)
std::string t_single_use_object::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37362
VA_CHT_1(0x007b87f0, 0x257)
void t_single_use_object::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37363
VA_CHT_1(0x007b8a50, 0x28)
bool t_single_use_object::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:37364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_single_use_object::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_single_use_object::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62767; name:B (dyninit; see ledger)
VA_CHT_1(0x007b8a80, 0x20)
// single_use_object$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62769; name:B (dyninit; see ledger)
VA_CHT_1(0x007b8aa0, 0x5c)
// single_use_object$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// single_use_object$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// single_use_object$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// single_use_object$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:37366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_map::get_new_single_use_id()
{
    // Body unavailable.
}

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60358
DATA_CHT_1(0x009f554c)
t_external_string const k_text_dead_heroes_ineligible; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60359
DATA_CHT_1(0x009f5560)
t_external_string const k_text_visited; // Initial value unavailable.
