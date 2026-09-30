// creature_detail_display.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_detail_display.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 15/20 (A:3 B:8 C:4); unaccounted 5; skipped std 12.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (18 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:66972; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613ac0, 0x11, STATIC_INIT_DISPATCH, k_text_hero_level)

// confidence:B; dyninit-ctor; owner-conf-B; map:66973; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613ae0, 0xd1, STATIC_CTOR, k_text_hero_level)

// name:A; dyninit; see ledger; map:66974
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_hero_level)

// confidence:B; dyninit-dtor; owner-conf-B; map:66975; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613bc0, 0xa, STATIC_DTOR, k_text_hero_level)

// confidence:A; dyninit-init; owner-conf-B; map:66976; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613bd0, 0x11, STATIC_INIT_DISPATCH, k_text_movement)

// confidence:B; dyninit-ctor; owner-conf-B; map:66977; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613bf0, 0xd1, STATIC_CTOR, k_text_movement)

// name:A; dyninit; see ledger; map:66978
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_movement)

// confidence:B; dyninit-dtor; owner-conf-B; map:66979; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00613cd0, 0xa, STATIC_DTOR, k_text_movement)

// confidence:C; align-order; stable; map:23311
VA_CHT_1(0x00613ce0, 0x786)
void t_creature_detail_display::create(
    t_cached_ptr<t_bitmap_group> arg_0,
    t_window* arg_1,
    t_screen_point arg_2,
    t_window* arg_3,
    t_screen_point arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23312
VA_CHT_1(0x00614470, 0x83a)
void t_creature_detail_display::select_creature(t_creature_array_window* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:23313
VA_CHT_1(0x00614cb0, 0x201)
t_text_window* t_creature_detail_display::create_text(std::string arg_0, std::string arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:23314
VA_CHT_1(0x00614ec0, 0x147)
t_text_window* t_creature_detail_display::create_text(
    std::string arg_0,
    std::string arg_1,
    std::string arg_2,
    int arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:23315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_detail_display::set_skills(t_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:23316
VA_CHT_1(0x00615010, 0x18c)
void t_creature_detail_display::set_skills(t_hero const& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:66980; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006151a0, 0x20, STATIC_INIT_DISPATCH, creature_detail_display)

// name:A; map symbol; map:23317
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_text_window::set_right_justified(bool arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:23318
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sort_by_primary::t_sort_by_primary(int const* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:23325
VA_CHT_1(0x006153b0, 0x62)
bool t_sort_by_primary::operator()(t_skill const& arg_0, t_skill const& arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60188
DATA_CHT_1(0x009e6700)
t_external_string const k_text_movement; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60189
DATA_CHT_1(0x009e6714)
t_external_string const k_text_hero_level; // Initial value unavailable.
