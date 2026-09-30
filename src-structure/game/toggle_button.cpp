// toggle_button.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 14/17 (A:13 B:1 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (11 symbols) ===

// confidence:A; align-order; stable,vptr; map:38908
VA_CHT_1(0x007f8680, 0x39)
t_toggle_button::t_toggle_button(
    t_cached_ptr<t_button_bitmaps>& arg_0,
    t_screen_point arg_1,
    t_window* arg_2,
    bool arg_3,
    std::string const& arg_4
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:38909
VA_CHT_1(0x007f88b0, 0x2f)
t_toggle_button::t_toggle_button(t_screen_point arg_0, t_window* arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:38910
VA_CHT_1(0x007f88e0, 0x103)
bool t_toggle_button::key_down(t_key_event arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38911
VA_CHT_1(0x007f89f0, 0x51)
void t_toggle_button::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_toggle_button::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:38913
VA_CHT_1(0x007f8a50, 0x2d)
void t_toggle_button::mouse_leaving(t_window* arg_0, t_window* arg_1, t_mouse_event const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38914
VA_CHT_1(0x007f8a80, 0x33)
void t_toggle_button::set_pressed(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:61854; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007f8ac0, 0x20, STATIC_INIT_DISPATCH, toggle_button)

// confidence:A; align-band; retn,stable,vslot; map:38915
VA_CHT_1_COMPGEN(0x007f86c0, 0x1e, VECTOR_DELETING_DTOR, t_toggle_button)

// name:A; map symbol; map:38916
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_toggle_button)

// name:A; map symbol; map:38917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_toggle_button::~t_toggle_button()
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45911
DATA_CHT_1_COMPGEN(0x008ee814, "const t_toggle_button::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_toggle_button@@;bcd=51d14c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56715
DATA_CHT_1_COMPGEN(0x0091d14c, "t_toggle_button::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_toggle_button@@;vft=4ee814;col=51d18c;td=5bdc5c;chd=51d17c;offset=0;cdOffset=0;validated-hierarchy; map:56716
DATA_CHT_1_COMPGEN(0x0091d164, "t_toggle_button::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_toggle_button@@;vft=4ee814;col=51d18c;td=5bdc5c;chd=51d17c;offset=0;cdOffset=0;validated-hierarchy; map:56717
DATA_CHT_1_COMPGEN(0x0091d17c, "t_toggle_button::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_toggle_button@@;vft=4ee814;col=51d18c;td=5bdc5c;chd=51d17c;offset=0;cdOffset=0;validated-hierarchy; map:56718
DATA_CHT_1_COMPGEN(0x0091d18c, "const t_toggle_button::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_toggle_button@@;td=5bdc5c;validated-header; map:59646
DATA_CHT_1_COMPGEN(0x009bdc5c, "t_toggle_button `RTTI Type Descriptor'")
