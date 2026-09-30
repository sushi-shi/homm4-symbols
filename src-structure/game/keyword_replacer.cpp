// keyword_replacer.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/32 (A:6 B:20 C:1); unaccounted 5; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (31 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:64918; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006dde50, 0x11, STATIC_INIT_DISPATCH, k_text_and)

// confidence:B; dyninit-ctor; owner-conf-B; map:64919; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006dde70, 0xd1, STATIC_CTOR, k_text_and)

// name:A; dyninit; see ledger; map:64920
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_text_and)

// confidence:B; dyninit-dtor; owner-conf-B; map:64921; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ddf50, 0xa, STATIC_DTOR, k_text_and)

// confidence:A; dyninit-init; owner-conf-C; map:64922; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ddf60, 0x11, STATIC_INIT_DISPATCH, "keyword_replacer#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:64923; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ddf80, 0xd1, STATIC_CTOR, "keyword_replacer#2")

// name:C; dyninit; see ledger; map:64924
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "keyword_replacer#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:64925; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006de060, 0xa, STATIC_DTOR, "keyword_replacer#2")

// confidence:A; align-order; retn,stable,vptr; map:27927
VA_CHT_1(0x006de070, 0xfa)
t_keyword_replacer::~t_keyword_replacer()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:27928
VA_CHT_1(0x006de170, 0x433)
void t_keyword_replacer::add_material(int arg_0, t_material arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27929
VA_CHT_1(0x006de5b0, 0x27)
void t_keyword_replacer::add_materials(t_material_array const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27930
VA_CHT_1(0x006de5e0, 0x514)
void t_keyword_replacer::add_creature(int arg_0, t_creature_type arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27931
VA_CHT_1(0x006deb00, 0x256)
void t_keyword_replacer::add_hero_to_creature_list(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27932
VA_CHT_1(0x006ded60, 0x22b)
void t_keyword_replacer::add_to_list(std::string const& arg_0, int arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:64926; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006def90, 0x89, STATIC_INIT_DISPATCH, "keyword_replacer#3")

// name:C; dyninit; see ledger; map:64927
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "keyword_replacer#3")

// name:C; dyninit; see ledger; map:64928
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "keyword_replacer#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:64929; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006df020, 0x44, STATIC_DTOR, "keyword_replacer#3")

// confidence:C; align-order; retn,stable; map:27933
VA_CHT_1(0x006df070, 0x1c1)
std::string capitalize_words(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27934
VA_CHT_1(0x006df240, 0x2f2)
std::string t_keyword_replacer::replace_word(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27935
VA_CHT_1(0x006df540, 0x25d)
std::string t_keyword_replacer::operator()(std::string const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:64930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static bool is_character_part_of_word(char arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27936
VA_CHT_1(0x006df7a0, 0x215)
std::string replace_keywords(std::string const& arg_0, std::string const& arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27937
VA_CHT_1(0x006df9c0, 0x1f4)
std::string replace_keywords(
    std::string const& arg_0,
    std::string const& arg_1,
    std::string const& arg_2,
    std::string const& arg_3,
    std::string const& arg_4
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27938
VA_CHT_1(0x006dfbc0, 0x256)
std::string replace_keywords(
    std::string const& arg_0,
    std::string const& arg_1,
    std::string const& arg_2,
    std::string const& arg_3,
    std::string const& arg_4,
    std::string const& arg_5,
    std::string const& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27939
VA_CHT_1(0x006dfe20, 0x207)
std::string replace_keywords(std::string const& arg_0, int arg_1, t_material arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27940
VA_CHT_1(0x006e0030, 0x20a)
std::string replace_keywords(std::string const& arg_0, t_material_array const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27941
VA_CHT_1(0x006e0240, 0x20b)
std::string replace_keywords(std::string const& arg_0, int arg_1, t_creature_type arg_2, bool arg_3)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27942
VA_CHT_1(0x006e0450, 0x33)
std::string replace_keywords(std::string const& arg_0, t_skill_type arg_1, t_skill_mastery arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27943
VA_CHT_1(0x006e0490, 0x11a)
std::string replace_keywords(std::string const& arg_0, t_skill const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64931; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006e0640, 0x20, STATIC_INIT_DISPATCH, keyword_replacer)

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60259
DATA_CHT_1(0x009f1bb4)
t_external_string const k_text_and; // Initial value unavailable.
