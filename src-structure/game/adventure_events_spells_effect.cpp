// adventure_events_spells_effect.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_events_spells_effect.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/33 (A:7 B:1 C:0); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70569; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00493be0, 0x15, STATIC_INIT_DISPATCH, "adventure_events_spells_effect#1")

// name:C; dyninit; see ledger; map:70570
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_spells_effect#1")

namespace {

// name:A; map symbol; map:8390
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void play_sound(t_spell arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8391
VA_CHT_1(0x00493c00, 0x26)
t_adventure_event_spells_effect::t_adventure_event_spells_effect()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8392
VA_CHT_1(0x00493cc0, 0x3e)
t_adventure_event_spells_effect::t_adventure_event_spells_effect(
    unsigned int arg_0,
    k_spell_effects_event_id arg_1,
    bool arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8393
VA_CHT_1(0x00493d00, 0x271)
void t_adventure_event_spells_effect::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8394
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_spells_effect::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8395
VA_CHT_1(0x00493f80, 0x8e)
bool t_adventure_event_spells_effect::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=94010:8396;class=t_adventure_event_spells_effect;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d3a14,col=4fa7f8,offset=0,slot=6,entry=94010; map:8396
VA_CHT_1(0x00494010, 0x79)
bool t_adventure_event_spells_effect::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70571; name:B (dyninit; see ledger)
VA_CHT_1(0x00494090, 0x20)
// adventure_events_spells_effect$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70573; name:B (dyninit; see ledger)
VA_CHT_1(0x004940b0, 0x5c)
// adventure_events_spells_effect$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_spells_effect$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_spells_effect$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70576
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_spells_effect$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8397
VA_CHT_1_COMPGEN(0x00493c30, 0x1e, VECTOR_DELETING_DTOR, t_adventure_event_spells_effect)

// name:A; map symbol; map:8398
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_event_spells_effect)

// name:A; map symbol; map:8399
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_spells_effect::~t_adventure_event_spells_effect()
{
    // Body unavailable.
}

// name:A; map symbol; map:8400
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_magic_resistance_effect>::~t_counted_ptr<t_adv_magic_resistance_effect>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_mire_effect>::~t_counted_ptr<t_adv_mire_effect>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8402
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound* t_cached_ptr<t_sound>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8403
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_magic_resistance_effect>::t_counted_ptr<t_adv_magic_resistance_effect>(
    t_adv_magic_resistance_effect* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8404
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magic_resistance_effect* t_counted_ptr<t_adv_magic_resistance_effect>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_mire_effect>::t_counted_ptr<t_adv_mire_effect>(t_adv_mire_effect* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_mire_effect* t_counted_ptr<t_adv_mire_effect>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8407
VA_CHT_1_COMPGEN(0x00494110, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_spells_effect)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43184
DATA_CHT_1_COMPGEN(0x008d3a0c, "const t_adventure_event_spells_effect::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43185
DATA_CHT_1_COMPGEN(0x008d3a14, "const t_adventure_event_spells_effect::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_spells_effect@@;vft=4d3a0c;col=4fa848;td=58c0d4;chd=4fa838;offset=8;cdOffset=0;validated-hierarchy; map:48695
DATA_CHT_1_COMPGEN(0x008fa848, "const t_adventure_event_spells_effect::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_spells_effect@@;bcd=4fa80c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48696
DATA_CHT_1_COMPGEN(0x008fa80c, "t_adventure_event_spells_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_spells_effect@@;vft=4d3a0c;col=4fa848;td=58c0d4;chd=4fa838;offset=8;cdOffset=0;validated-hierarchy; map:48697
DATA_CHT_1_COMPGEN(0x008fa824, "t_adventure_event_spells_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_spells_effect@@;vft=4d3a0c;col=4fa848;td=58c0d4;chd=4fa838;offset=8;cdOffset=0;validated-hierarchy; map:48698
DATA_CHT_1_COMPGEN(0x008fa838, "t_adventure_event_spells_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48699
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_spells_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_spells_effect@@;td=58c0d4;validated-header; map:57654
DATA_CHT_1_COMPGEN(0x0098c0d4, "t_adventure_event_spells_effect `RTTI Type Descriptor'")
