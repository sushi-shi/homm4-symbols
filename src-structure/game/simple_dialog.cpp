// simple_dialog.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 8/8 (A:1 B:1 C:6); unaccounted 0; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (8 symbols) ===

// confidence:C; align-order; stable; map:37224
VA_CHT_1(0x007b3580, 0x137)
void ok_dialog(std::string const& arg_0, t_screen_point arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37225
VA_CHT_1(0x007b36c0, 0x6c)
void ok_dialog(std::string const& arg_0, bool arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37226
VA_CHT_1(0x007b3730, 0x139)
bool yes_no_dialog(std::string const& arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37227
VA_CHT_1(0x007b3870, 0x60)
bool yes_no_dialog(std::string const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37228
VA_CHT_1(0x007b38d0, 0x218)
void show_popup_text(std::string arg_0, t_window* arg_1, t_screen_point arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37229
VA_CHT_1(0x007b3af0, 0x8f)
void show_popup_text(std::string arg_0, t_screen_point arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37230
VA_CHT_1(0x007b3b80, 0xe7)
void show_popup_text(std::string arg_0, t_window const* arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62795; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b3c70, 0x20, STATIC_INIT_DISPATCH, simple_dialog)
