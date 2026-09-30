// spell_properties.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\spell_properties.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/41 (A:2 B:5 C:20); unaccounted 14; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

namespace {

// confidence:C; align-order; retn,stable; map:38040
VA_CHT_1(0x007d1240, 0xc0)
t_spell_properties::t_spell_properties()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-init; owner-conf-B; map:62564; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d1300, 0x11, STATIC_INIT_DISPATCH, g_spell_table)

// confidence:B; dyninit-ctor; owner-conf-B; map:62565; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d1320, 0x121, STATIC_CTOR, g_spell_table)

// name:B; dyninit; see ledger; map:62566
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_spell_table)

// confidence:B; dyninit-dtor; owner-conf-B; map:62567; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d1450, 0xa, STATIC_DTOR, g_spell_table)

// confidence:C; align-order; retn,stable; map:38041
VA_CHT_1(0x007d1460, 0x954)
t_spell_properties const& get_properties(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:62568
VA_CHT_1(0x007d1dc0, 0x42)
static t_enum_map<t_spell> const& get_spell_map()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:62569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_spell_map$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; retn,stable; map:62570
VA_CHT_1(0x007d1e50, 0x11b)
static t_ai_spell_type get_ai_type(std::string const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:62571
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_ai_type$sdtor1
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62572
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_ai_type$sdtor2
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:38042
VA_CHT_1(0x007d1f70, 0x36)
bool spell_is(t_spell arg_0, int arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38043
VA_CHT_1(0x007d1fb0, 0x128)
std::string get_spell_help(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38044
VA_CHT_1(0x007d20e0, 0x9)
t_town_type get_spell_alignment(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38045
VA_CHT_1(0x007d20f0, 0x9)
int get_spell_level(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38046
VA_CHT_1(0x007d2100, 0x9)
int get_spell_cost(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38047
VA_CHT_1(0x007d2110, 0x67)
std::string get_spell_keyword(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell get_spell(std::string arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38049
VA_CHT_1(0x007d2180, 0x124)
std::string get_spell_name(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38050
VA_CHT_1(0x007d22b0, 0x128)
std::string get_short_spell_name(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38051
VA_CHT_1(0x007d23e0, 0x128)
std::string get_spell_flavor_text(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38052
VA_CHT_1(0x007d2510, 0x96)
int get_basic_spell_power(t_spell arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38053
VA_CHT_1(0x007d25b0, 0x128)
std::string get_mage_guild_text(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38054
VA_CHT_1(0x007d26e0, 0x128)
std::string get_spellbook_text(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38055
VA_CHT_1(0x007d2810, 0x9)
t_creature_type get_summoned_creature(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38056
VA_CHT_1(0x007d2820, 0x14)
int get_mage_guild_spell_count(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38057
VA_CHT_1(0x007d2840, 0xc)
t_ai_spell_type get_ai_spell_type(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38058
VA_CHT_1(0x007d2850, 0xc)
int get_ai_spell_value(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38059
VA_CHT_1(0x007d2860, 0x47)
t_spell translate_spell(t_spell arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62573; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007d2a90, 0x20, STATIC_INIT_DISPATCH, spell_properties)

// confidence:C; align-band; retn,stable; map:38060
VA_CHT_1(0x007d1e30, 0x1a)
t_enum_map<t_spell>::~t_enum_map<t_spell>()
{
    // Body unavailable.
}

// name:A; map symbol; map:38061
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_ai_spell_type>::~t_enum_map<t_ai_spell_type>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:38062
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_properties::~t_spell_properties()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38063
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_spell>::t_enum_map<t_spell>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_spell arg_2,
    t_spell arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38064
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell t_enum_map<t_spell>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38065
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_enum_map<t_spell>::operator[](t_spell arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38066
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_enum_map<t_ai_spell_type>::t_enum_map<t_ai_spell_type>(
    t_char_ptr_pair const* arg_0,
    t_char_ptr_pair const* arg_1,
    t_ai_spell_type arg_2,
    t_ai_spell_type arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38067
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ai_spell_type t_enum_map<t_ai_spell_type>::operator[](std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38068
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_spell>::find(std::string arg_0, t_spell& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38069
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_enum_map<t_ai_spell_type>::find(std::string arg_0, t_ai_spell_type& arg_1) const
{
    // Body unavailable.
}

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60376
DATA_CHT_1(0x009f8e18)
t_pointer_cache<t_table> g_spell_table; // Initial value unavailable.

} // anonymous namespace
