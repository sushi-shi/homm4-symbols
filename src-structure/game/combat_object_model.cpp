// combat_object_model.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 5/22 (A:0 B:0 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:21143
VA_CHT_1(0x005d51c0, 0x7)
t_combat_object_model_root::~t_combat_object_model_root()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21144
VA_CHT_1(0x005d51d0, 0x3f8)
bool t_combat_object_model_base::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_model_base::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:21146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_model_24::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21147
VA_CHT_1(0x005d55d0, 0x2a)
bool t_combat_object_model_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67743; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005d5600, 0x20, STATIC_INIT_DISPATCH, combat_object_model)

// name:A; map symbol; map:21148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_model_root::set_frames_per_second(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:21149
VA_CHT_1(0x005d55ad, 0x6)
void t_combat_object_model_root::set_combat_has_changed(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_model_root::set_height(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_model_root::set_is_underlay(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_model_base::set_footprint_rows(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_object_model_base::set_footprint_columns(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:21154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_object_model_root::get_frames_per_second() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_object_model_root::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:21156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_object_model_root::is_underlay() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// name:A; map symbol; map:43958
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_object_model_base>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43959
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_object_model_24>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43960
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_object_model_24>::extension; // Initial value unavailable.

// === .data (3 symbols) ===

// name:A; map symbol; map:58222
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_frames_per_second >= k_min_f...")

// name:A; map symbol; map:58223
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\combat_object_model...")

// name:A; map symbol; map:58224
DATA_CHT_1_COMPGEN(UNACCOUNTED, "size >= k_min_footprint_size&& ...")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60117
DATA_CHT_1(UNACCOUNTED)
bool t_combat_object_model_root::m_combat_has_changed; // Initial value unavailable.
