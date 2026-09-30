// dialog_magic_gem.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 31/47 (A:18 B:2 C:0); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25107
VA_CHT_1(0x00679240, 0x3b)
void add_to_spell_points(t_hero* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25108
VA_CHT_1(0x00679280, 0xc0)
void give_hero_gem_bonus(t_hero* arg_0, t_magic_gem_type arg_1, t_basic_dialog* arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25109
VA_CHT_1(0x00679350, 0x68)
t_dialog_magic_gem::t_dialog_magic_gem(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25110
VA_CHT_1(0x006794b0, 0x1353)
int t_dialog_magic_gem::init_dialog(
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_0,
    t_magic_gem_type arg_1,
    t_stationary_adventure_object& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25111
VA_CHT_1(0x0067a820, 0x6e)
void t_dialog_magic_gem::hero_selection_change(t_creature_select_window* arg_0, t_creature_stack* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25112
VA_CHT_1(0x0067a890, 0x10a)
void t_dialog_magic_gem::close_click(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_dialog_magic_gem::cancel_click(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:65888; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0067aa80, 0x20, STATIC_INIT_DISPATCH, dialog_magic_gem)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:25114
VA_CHT_1_COMPGEN(0x006793c0, 0x1e, VECTOR_DELETING_DTOR, t_dialog_magic_gem)

// name:A; map symbol; map:25115
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_dialog_magic_gem)

// name:A; map symbol; map:25116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_magic_gem::~t_dialog_magic_gem()
{
    // Body unavailable.
}

// name:A; map symbol; map:25117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_select_window*, t_creature_stack*> bound_handler(
    t_dialog_magic_gem& arg_0,
    void (t_dialog_magic_gem::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_dialog_magic_gem& arg_0, void (t_dialog_magic_gem::*)(t_button*))
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25119
VA_CHT_1(0x0067a9a0, 0x5e)
t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>(
    t_dialog_magic_gem& arg_0,
    void (t_dialog_magic_gem::*)(t_creature_select_window*, t_creature_stack*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::operator()(
    t_creature_select_window* arg_0,
    t_creature_stack* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:25121
VA_CHT_1(0x0067aa00, 0x5e)
t_bound_handler_1<t_dialog_magic_gem, t_button*>::t_bound_handler_1<t_dialog_magic_gem, t_button*>(
    t_dialog_magic_gem& arg_0,
    void (t_dialog_magic_gem::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:25122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_dialog_magic_gem, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:25123
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25124
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>")

// name:A; map symbol; map:25125
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_dialog_magic_gem, t_button*>")

// name:A; map symbol; map:25126
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_magic_gem, t_button*>")

// name:A; map symbol; map:25127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::~t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:25128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_dialog_magic_gem, t_button*>::~t_bound_handler_1<t_dialog_magic_gem, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:25129
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:25130
VA_CHT_1_COMPGEN(0x0067aab0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_dialog_magic_gem, t_button*>")

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:44369
DATA_CHT_1_COMPGEN(0x008e065c, "const t_dialog_magic_gem::`vftable'")

// confidence:A; rtti-name; map:44370
DATA_CHT_1_COMPGEN(0x008e06c8, "const t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:B; rtti-order; map:44371
DATA_CHT_1_COMPGEN(0x008e06d4, "const t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44372
DATA_CHT_1_COMPGEN(0x008e06dc, "const t_bound_handler_1<t_dialog_magic_gem, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:44373
DATA_CHT_1_COMPGEN(0x008e06e8, "const t_bound_handler_1<t_dialog_magic_gem, t_button*>::`vftable'{for `t_counted_object'}")

// === .rdata$r (14 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_dialog_magic_gem@@;bcd=50a35c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52107
DATA_CHT_1_COMPGEN(0x0090a35c, "t_dialog_magic_gem::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_dialog_magic_gem@@;vft=4e065c;col=50a398;td=5a27c8;chd=50a388;offset=0;cdOffset=0;validated-hierarchy; map:52108
DATA_CHT_1_COMPGEN(0x0090a374, "t_dialog_magic_gem::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_dialog_magic_gem@@;vft=4e065c;col=50a398;td=5a27c8;chd=50a388;offset=0;cdOffset=0;validated-hierarchy; map:52109
DATA_CHT_1_COMPGEN(0x0090a388, "t_dialog_magic_gem::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_dialog_magic_gem@@;vft=4e065c;col=50a398;td=5a27c8;chd=50a388;offset=0;cdOffset=0;validated-hierarchy; map:52110
DATA_CHT_1_COMPGEN(0x0090a398, "const t_dialog_magic_gem::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_magic_gem@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e06c8;col=50a3fc;td=5a2800;chd=50a3ec;offset=8;cdOffset=0;validated-hierarchy; map:52111
DATA_CHT_1_COMPGEN(0x0090a3fc, "const t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_select_window*, t_creature_stack*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_dialog_magic_gem@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;bcd=50a3c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52112
DATA_CHT_1_COMPGEN(0x0090a3c0, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_magic_gem@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e06c8;col=50a3fc;td=5a2800;chd=50a3ec;offset=8;cdOffset=0;validated-hierarchy; map:52113
DATA_CHT_1_COMPGEN(0x0090a3d8, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_dialog_magic_gem@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;vft=4e06c8;col=50a3fc;td=5a2800;chd=50a3ec;offset=8;cdOffset=0;validated-hierarchy; map:52114
DATA_CHT_1_COMPGEN(0x0090a3ec, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52115
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_magic_gem@@PAVt_button@@@@;vft=4e06dc;col=50a460;td=5a2870;chd=50a450;offset=8;cdOffset=0;validated-hierarchy; map:52116
DATA_CHT_1_COMPGEN(0x0090a460, "const t_bound_handler_1<t_dialog_magic_gem, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_dialog_magic_gem@@PAVt_button@@@@;bcd=50a424;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52117
DATA_CHT_1_COMPGEN(0x0090a424, "t_bound_handler_1<t_dialog_magic_gem, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_magic_gem@@PAVt_button@@@@;vft=4e06dc;col=50a460;td=5a2870;chd=50a450;offset=8;cdOffset=0;validated-hierarchy; map:52118
DATA_CHT_1_COMPGEN(0x0090a43c, "t_bound_handler_1<t_dialog_magic_gem, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_dialog_magic_gem@@PAVt_button@@@@;vft=4e06dc;col=50a460;td=5a2870;chd=50a450;offset=8;cdOffset=0;validated-hierarchy; map:52119
DATA_CHT_1_COMPGEN(0x0090a450, "t_bound_handler_1<t_dialog_magic_gem, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52120
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_dialog_magic_gem, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_dialog_magic_gem@@;td=5a27c8;validated-header; map:58516
DATA_CHT_1_COMPGEN(0x009a27c8, "t_dialog_magic_gem `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_dialog_magic_gem@@PAVt_creature_select_window@@PAVt_creature_stack@@@@;td=5a2800;validated-header; map:58517
DATA_CHT_1_COMPGEN(0x009a2800, "t_bound_handler_2<t_dialog_magic_gem, t_creature_select_window*, t_creature_stack*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_dialog_magic_gem@@PAVt_button@@@@;td=5a2870;validated-header; map:58518
DATA_CHT_1_COMPGEN(0x009a2870, "t_bound_handler_1<t_dialog_magic_gem, t_button*> `RTTI Type Descriptor'")
