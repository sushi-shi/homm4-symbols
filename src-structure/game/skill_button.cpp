// skill_button.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 8/9 (A:0 B:1 C:0); unaccounted 1; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62718; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007bb860, 0x11, STATIC_INIT_DISPATCH, k_skill_frames)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62719; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007bb880, 0xd7, STATIC_CTOR, k_skill_frames)

// name:B; dyninit; see ledger; map:62720
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_skill_frames)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62721; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007bb960, 0xa, STATIC_DTOR, k_skill_frames)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37413
VA_CHT_1(0x007bb970, 0x3ff)
void create_skill_button(
    t_button* arg_0,
    t_skill const& arg_1,
    t_cached_ptr<t_bitmap_group> const& arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37414
VA_CHT_1(0x007bbd70, 0x5f0)
void create_frame_button(
    t_button* arg_0,
    t_cached_ptr<t_bitmap_group> const& arg_1,
    t_cached_ptr<t_bitmap_group> const& arg_2,
    std::string const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37415
VA_CHT_1(0x007bc360, 0x21b)
void create_framed_skill(
    t_skill const& arg_0,
    t_screen_point const& arg_1,
    t_cached_ptr<t_bitmap_group> const& arg_2,
    t_window* arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62722; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007bc580, 0x20, STATIC_INIT_DISPATCH, skill_button)

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60361
DATA_CHT_1(0x009f55f4)
t_bitmap_group_cache const k_skill_frames; // Initial value unavailable.
