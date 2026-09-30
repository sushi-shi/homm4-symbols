// spell_effect_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\spell_effect_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/51 (A:9 B:2 C:0); unaccounted 23; skipped std 22.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (38 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62591; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cee50, 0x15, STATIC_INIT_DISPATCH, "spell_effect_window#1")

// name:C; dyninit; see ledger; map:62592
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62593; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cee70, 0x15, STATIC_INIT_DISPATCH, "spell_effect_window#2")

// name:C; dyninit; see ledger; map:62594
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62595; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cee90, 0x15, STATIC_INIT_DISPATCH, "spell_effect_window#3")

// name:C; dyninit; see ledger; map:62596
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62597; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ceeb0, 0x15, STATIC_INIT_DISPATCH, "spell_effect_window#4")

// name:C; dyninit; see ledger; map:62598
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62599; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ceed0, 0x10, STATIC_INIT_DISPATCH, "spell_effect_window#5")

// name:C; dyninit; see ledger; map:62600
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62601; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ceee0, 0x15, STATIC_INIT_DISPATCH, "spell_effect_window#6")

// name:C; dyninit; see ledger; map:62602
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "spell_effect_window#6")

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37986
VA_CHT_1(0x007cef00, 0x1d7)
t_spell_effect_cache::t_spell_effect_cache(double arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37987
VA_CHT_1(0x007cf150, 0x149)
t_cached_ptr<t_animation> t_spell_effect_cache::get_effect(t_spell arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37988
VA_CHT_1(0x007cf2a0, 0xc0)
t_spell_effect_window::t_spell_effect_window(
    t_combat_creature* arg_0,
    t_cached_ptr<t_animation> const& arg_1,
    t_screen_point arg_2,
    int arg_3,
    t_window* arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37989
VA_CHT_1(0x007cf4b0, 0xb5)
void t_spell_effect_window::on_animation_end()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37990
VA_CHT_1(0x007cf570, 0x166)
t_cached_ptr<t_animation> get_spell_animation(t_spell arg_0, double arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:62603
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_spell_animation$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62604; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cfbb0, 0x20, STATIC_INIT_DISPATCH, spell_effect_window)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37991
VA_CHT_1(0x007cfac0, 0x5a)
t_animation_cache::t_animation_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:37992
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_cache& t_animation_cache::operator=(t_animation_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37993
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_animation_24, t_animation>& t_conversion_cache<t_animation_24, t_animation>::operator=(
    t_conversion_cache<t_animation_24, t_animation> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37994
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_animation>& t_resource_cache<t_animation>::operator=(
    t_resource_cache<t_animation> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_animation>& t_abstract_cache<t_animation>::operator=(
    t_abstract_cache<t_animation> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37996
VA_CHT_1_COMPGEN(0x007cf360, 0x1e, VECTOR_DELETING_DTOR, t_spell_effect_window)

// name:A; map symbol; map:37997
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_effect_window)

// name:A; map symbol; map:37998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_effect_window::~t_spell_effect_window()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37999
VA_CHT_1(0x007cf730, 0x13)
double t_spell_effect_cache::get_scale() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38000
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_effect_cache::~t_spell_effect_cache()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_animation>>& t_counted_ptr<t_abstract_cache_data<t_animation>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_animation>> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38023
VA_CHT_1(0x007cfb20, 0x82)
t_spell_effect_cache& t_spell_effect_cache::operator=(t_spell_effect_cache const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38024
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_spell_effect_cache)

namespace {

// name:A; map symbol; map:38025
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_effect_cache::t_spell_effect_cache(t_spell_effect_cache const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:38026
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_cache::t_animation_cache(t_animation_cache const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38027
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_animation_24, t_animation>::t_conversion_cache<t_animation_24, t_animation>(
    t_conversion_cache<t_animation_24, t_animation> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:38028
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_animation>::t_resource_cache<t_animation>(t_resource_cache<t_animation> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38029
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_spell_effect_window)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:38030
VA_CHT_1_COMPGEN(0x007cfbe0, 0xb, VECTOR_DELETING_DTOR, t_spell_effect_window)

// === .rdata (3 symbols) ===

// confidence:B; rtti-order; map:45818
DATA_CHT_1_COMPGEN(0x008ed5c4, "const t_spell_effect_window::`vftable'")

// confidence:A; rtti-name; map:45819
DATA_CHT_1_COMPGEN(0x008ed5d4, "const t_spell_effect_window::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45820
DATA_CHT_1_COMPGEN(0x008ed5e4, "const t_spell_effect_window::`vftable'{for `t_bitmap_group_window'}")

// === .rdata$r (9 symbols) ===

// name:A; map symbol; map:56458
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_spell_effect_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_effect_window@@;vft=4ed5d4;col=51be68;td=5baccc;chd=51bf08;offset=220;cdOffset=0;validated-hierarchy; map:56459
DATA_CHT_1_COMPGEN(0x0091be68, "const t_spell_effect_window::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=51be7c;pmd=292,-1,0;attributes=11;validated-hierarchy-link; map:56460
DATA_CHT_1_COMPGEN(0x0091be7c, "t_uncopyable::`RTTI Base Class Descriptor at (292, -1, 0, 11)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_action_message_displayer@@;bcd=51be94;pmd=288,-1,0;attributes=0;validated-hierarchy-link; map:56461
DATA_CHT_1_COMPGEN(0x0091be94, "t_combat_action_message_displayer::`RTTI Base Class Descriptor at (288, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_animation@@;bcd=51beac;pmd=288,-1,0;attributes=0;validated-hierarchy-link; map:56462
DATA_CHT_1_COMPGEN(0x0091beac, "t_counted_animation::`RTTI Base Class Descriptor at (288, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_effect_window@@;bcd=51bec4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56463
DATA_CHT_1_COMPGEN(0x0091bec4, "t_spell_effect_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_effect_window@@;vft=4ed5d4;col=51be68;td=5baccc;chd=51bf08;offset=220;cdOffset=0;validated-hierarchy; map:56464
DATA_CHT_1_COMPGEN(0x0091bedc, "t_spell_effect_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_effect_window@@;vft=4ed5d4;col=51be68;td=5baccc;chd=51bf08;offset=220;cdOffset=0;validated-hierarchy; map:56465
DATA_CHT_1_COMPGEN(0x0091bf08, "t_spell_effect_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56466
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_spell_effect_window::`RTTI Complete Object Locator'{for `t_bitmap_group_window'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_spell_effect_window@@;td=5baccc;validated-header; map:59588
DATA_CHT_1_COMPGEN(0x009baccc, "t_spell_effect_window `RTTI Type Descriptor'")
