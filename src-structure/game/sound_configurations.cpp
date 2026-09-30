// sound_configurations.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 4/7 (A:0 B:0 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (5 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37879
VA_CHT_1(0x007cc180, 0x6)
int get_sound_volume()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37880
VA_CHT_1(0x007cc190, 0x15)
void set_sound_volume(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get_bink_volume()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37882
VA_CHT_1(0x007cc1b0, 0x28)
void set_bink_volume(int arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62644; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc1e0, 0x20, STATIC_INIT_DISPATCH, sound_configurations)

// === .bss (2 symbols) ===

// name:A; map symbol; map:60374
DATA_CHT_1(UNACCOUNTED)
int g_sound_volume; // Initial value unavailable.

// name:A; map symbol; map:60375
DATA_CHT_1(UNACCOUNTED)
int g_bink_volume; // Initial value unavailable.
