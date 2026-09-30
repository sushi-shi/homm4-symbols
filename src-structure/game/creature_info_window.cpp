// creature_info_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\creature_info_window.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/41 (A:12 B:0 C:0); unaccounted 17; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (29 symbols) ===

namespace {

// name:A; map symbol; map:23336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_portrait_window::t_portrait_window(t_screen_rect const& arg_0, t_creature_info_window* arg_1, int arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:23337
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_portrait_window::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23338
VA_CHT_1(0x00615bc0, 0x91)
void t_portrait_window::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_portrait_window::left_double_click(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_portrait_window::select()
{
    // Body unavailable.
}

// name:A; map symbol; map:23341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_portrait_window::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_portrait_window::mouse_leaving(t_window* arg_0, t_window* arg_1, t_mouse_event const& arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:23343
VA_CHT_1(0x00615c60, 0xcab)
t_creature_info_window::t_creature_info_window(
    t_screen_point const& arg_0,
    t_creature_array const* arg_1,
    t_skill_mastery arg_2,
    t_creature_info_window::t_layout arg_3,
    t_window* arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23344
VA_CHT_1(0x00616930, 0xb9)
int t_creature_info_window::get_frame_height() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23345
VA_CHT_1(0x00616b70, 0x3a)
t_creature_stack const* t_creature_info_window::get_selected_army()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23346
VA_CHT_1(0x00616bb0, 0x6d1)
void t_creature_info_window::update()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23347
VA_CHT_1(0x00617290, 0x2d)
void t_creature_info_window::set_highlight(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23348
VA_CHT_1(0x006172c0, 0xae)
void t_creature_info_window::set_army(t_creature_array const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23349
VA_CHT_1(0x00617370, 0x1c)
void t_creature_info_window::set_scouting_level(t_skill_mastery arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23350
VA_CHT_1(0x00617390, 0x98)
void t_creature_info_window::select_first()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23351
VA_CHT_1(0x00617430, 0x60)
void t_creature_info_window::select_creature(int arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66968; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00617490, 0x20, STATIC_INIT_DISPATCH, creature_info_window)

// name:A; map symbol; map:23352
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_portrait_window)

// name:A; map symbol; map:23353
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_portrait_window)

namespace {

// name:A; map symbol; map:23354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_portrait_window::~t_portrait_window()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:23355
VA_CHT_1_COMPGEN(0x00616910, 0x1e, SCALAR_DELETING_DTOR, t_creature_info_window)

// name:A; map symbol; map:23356
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_creature_info_window)

// name:A; map symbol; map:23357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_info_window::t_creature_portrait_window::t_creature_portrait_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_info_window::t_creature_portrait_window::~t_creature_portrait_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_info_window::~t_creature_info_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:23360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_info_window*, int>::t_handler_2<t_creature_info_window*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:23361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_creature_info_window*, int>::operator()(t_creature_info_window* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:23362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_info_window*, int>>::t_counted_ptr<t_handler_base_2<t_creature_info_window*, int>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:23363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_info_window*, int>& t_counted_ptr<t_handler_base_2<t_creature_info_window*, int>>::operator*(

) const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44187
DATA_CHT_1_COMPGEN(0x008deccc, "const t_portrait_window::`vftable'")

// confidence:A; rtti-name; map:44188
DATA_CHT_1_COMPGEN(0x008ded3c, "const t_creature_info_window::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_portrait_window@?%C:\Work\game\creature_info_window.cpp3027515719@@;bcd=507b5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51584
DATA_CHT_1_COMPGEN(0x00907b5c, "t_portrait_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_portrait_window@?%C:\Work\game\creature_info_window.cpp3027515719@@;vft=4deccc;col=507b98;td=59e060;chd=507b88;offset=0;cdOffset=0;validated-hierarchy; map:51585
DATA_CHT_1_COMPGEN(0x00907b74, "t_portrait_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_portrait_window@?%C:\Work\game\creature_info_window.cpp3027515719@@;vft=4deccc;col=507b98;td=59e060;chd=507b88;offset=0;cdOffset=0;validated-hierarchy; map:51586
DATA_CHT_1_COMPGEN(0x00907b88, "t_portrait_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_portrait_window@?%C:\Work\game\creature_info_window.cpp3027515719@@;vft=4deccc;col=507b98;td=59e060;chd=507b88;offset=0;cdOffset=0;validated-hierarchy; map:51587
DATA_CHT_1_COMPGEN(0x00907b98, "const t_portrait_window::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_info_window@@;bcd=507bac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51588
DATA_CHT_1_COMPGEN(0x00907bac, "t_creature_info_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_creature_info_window@@;vft=4ded3c;col=507be8;td=59e0b4;chd=507bd8;offset=0;cdOffset=0;validated-hierarchy; map:51589
DATA_CHT_1_COMPGEN(0x00907bc4, "t_creature_info_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_creature_info_window@@;vft=4ded3c;col=507be8;td=59e0b4;chd=507bd8;offset=0;cdOffset=0;validated-hierarchy; map:51590
DATA_CHT_1_COMPGEN(0x00907bd8, "t_creature_info_window::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_creature_info_window@@;vft=4ded3c;col=507be8;td=59e0b4;chd=507bd8;offset=0;cdOffset=0;validated-hierarchy; map:51591
DATA_CHT_1_COMPGEN(0x00907be8, "const t_creature_info_window::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_portrait_window@?%C:\Work\game\creature_info_window.cpp3027515719@@;td=59e060;validated-header; map:58399
DATA_CHT_1_COMPGEN(0x0099e060, "t_portrait_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_creature_info_window@@;td=59e0b4;validated-header; map:58400
DATA_CHT_1_COMPGEN(0x0099e0b4, "t_creature_info_window `RTTI Type Descriptor'")
