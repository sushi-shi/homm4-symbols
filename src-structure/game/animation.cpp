// animation.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/8 (A:0 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (6 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13805
VA_CHT_1(0x0050a200, 0x3f)
t_animation_24::t_animation_24()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:13806
VA_CHT_1(0x0050a240, 0x377)
bool t_animation_24::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:13807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_animation_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:13808
VA_CHT_1(0x0050a5c0, 0xcb)
t_animation::t_animation(t_animation_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69669; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0050a690, 0x20, STATIC_INIT_DISPATCH, animation)

// name:A; map symbol; map:13809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_base::t_animation_base(t_animation_base const& arg_0)
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// name:A; map symbol; map:43387
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_animation_24>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43388
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_animation_24>::extension; // Initial value unavailable.
