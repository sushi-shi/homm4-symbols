// scroll_menu.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\scroll_menu.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 60/95 (A:33 B:2 C:0); unaccounted 35; skipped std 23.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (52 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62874; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a7e80, 0x11, STATIC_INIT_DISPATCH, "scroll_menu#1")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62875; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a7ea0, 0xd7, STATIC_CTOR, "scroll_menu#1")

// name:C; dyninit; see ledger; map:62876
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "scroll_menu#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62877; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a7f80, 0xa, STATIC_DTOR, "scroll_menu#1")

namespace {

// name:A; map symbol; map:36826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animator::t_animator(t_scroll_menu* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36827
VA_CHT_1(0x007a7f90, 0x8)
void t_animator::on_idle()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36828
VA_CHT_1(0x007a7fa0, 0x39e)
t_scroll_menu::t_scroll_menu(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36829
VA_CHT_1(0x007a8360, 0x164)
t_scroll_menu::~t_scroll_menu()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36830
VA_CHT_1(0x007a84d0, 0x49f)
void t_scroll_menu::add_item(std::string const& arg_0, t_handler arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36831
VA_CHT_1(0x007a8970, 0x99)
void t_scroll_menu::button_click(t_button* arg_0, t_handler arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36832
VA_CHT_1(0x007a8a10, 0x14c)
void t_scroll_menu::animate()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36833
VA_CHT_1(0x007a8b60, 0x177)
void t_scroll_menu::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36834
VA_CHT_1(0x007a8ce0, 0x97)
void t_scroll_menu::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36835
VA_CHT_1(0x007a8d80, 0x167)
void t_scroll_menu::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36836
VA_CHT_1(0x007a8ef0, 0x7c4)
void t_scroll_menu::open(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62878; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9a80, 0x20, STATIC_INIT_DISPATCH, scroll_menu)

// name:A; map symbol; map:36837
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_animator)

// name:A; map symbol; map:36838
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_animator)

namespace {

// name:A; map symbol; map:36839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animator::~t_animator()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36840
VA_CHT_1_COMPGEN(0x007a8340, 0x1e, SCALAR_DELETING_DTOR, t_scroll_menu)

// name:A; map symbol; map:36841
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_scroll_menu)

// name:A; map symbol; map:36859
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler> bound_handler(
    t_scroll_menu& arg_0,
    void (t_scroll_menu::*)(t_button*, t_handler)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(t_handler_2<t_button*, t_handler> arg_0, t_handler arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:36861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler>::~t_handler_2<t_button*, t_handler>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_handler>>::~t_counted_ptr<t_handler_base_2<t_button*, t_handler>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, t_handler>::t_handler_2<t_button*, t_handler>(
    t_handler_base_2<t_button*, t_handler>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler>* t_handler_2<t_button*, t_handler>::operator t_handler_base_2<t_button*, t_handler>*(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36870
VA_CHT_1(0x007a96c0, 0x5e)
t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::t_bound_handler_2<t_scroll_menu, t_button*, t_handler>(
    t_scroll_menu& arg_0,
    void (t_scroll_menu::*)(t_button*, t_handler)
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36871
VA_CHT_1(0x007a9850, 0x74)
void t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::operator()(t_button* arg_0, t_handler arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36872
VA_CHT_1(0x007a9720, 0x128)
t_add_2nd_handler_1<t_button*, t_handler>::t_add_2nd_handler_1<t_button*, t_handler>(
    t_handler_base_2<t_button*, t_handler>* arg_0,
    t_handler arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36873
VA_CHT_1(0x007a98d0, 0x93)
void t_add_2nd_handler_1<t_button*, t_handler>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36874
VA_CHT_1_COMPGEN(0x007a9970, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>")

// name:A; map symbol; map:36875
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>")

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36876
VA_CHT_1(0x007a9a00, 0x73)
t_handler_base_2<t_button*, t_handler>::t_handler_base_2<t_button*, t_handler>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36877
VA_CHT_1_COMPGEN(0x007a99b0, 0x1e, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler>")

// name:A; map symbol; map:36878
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler>")

// name:A; map symbol; map:36879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::~t_bound_handler_2<t_scroll_menu, t_button*, t_handler>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler>::~t_handler_base_2<t_button*, t_handler>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36881
VA_CHT_1(0x007a99d0, 0x21)
t_abstract_function_2<void, t_button*, t_handler>::~t_abstract_function_2<void, t_button*, t_handler>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36882
VA_CHT_1_COMPGEN(0x007a9990, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_handler>")

// name:A; map symbol; map:36883
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, t_handler>")

// name:A; map symbol; map:36884
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler>")

// name:A; map symbol; map:36885
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler>")

// name:A; map symbol; map:36886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_button*, t_handler>::t_abstract_function_2<void, t_button*, t_handler>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, t_handler>::~t_add_2nd_handler_1<t_button*, t_handler>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, t_handler>::operator()(t_button* arg_0, t_handler arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, t_handler>>::t_counted_ptr<t_handler_base_2<t_button*, t_handler>>(
    t_handler_base_2<t_button*, t_handler>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler>* t_counted_ptr<t_handler_base_2<t_button*, t_handler>>::operator t_handler_base_2<t_button*, t_handler>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36891
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, t_handler>& t_counted_ptr<t_handler_base_2<t_button*, t_handler>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>")

// name:A; map symbol; map:36893
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, t_handler>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36894
VA_CHT_1_COMPGEN(0x007a9ab0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, t_handler>")

// === .rdata (9 symbols) ===

// confidence:A; rtti-name; map:45692
DATA_CHT_1_COMPGEN(0x008ec18c, "const t_animator::`vftable'")

// confidence:A; rtti-name; map:45693
DATA_CHT_1_COMPGEN(0x008ec19c, "const t_scroll_menu::`vftable'")

// confidence:A; rtti-name; map:45694
DATA_CHT_1_COMPGEN(0x008ec208, "const t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`vftable'{for `t_abstract_function_2<void, t_button*, t_handler>'}")

// confidence:B; rtti-order; map:45695
DATA_CHT_1_COMPGEN(0x008ec214, "const t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45696
DATA_CHT_1_COMPGEN(0x008ec228, "const t_add_2nd_handler_1<t_button*, t_handler>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:45697
DATA_CHT_1_COMPGEN(0x008ec234, "const t_add_2nd_handler_1<t_button*, t_handler>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45698
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler>::`vftable'{for `t_abstract_function_2<void, t_button*, t_handler>'}")

// name:A; map symbol; map:45699
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45700
DATA_CHT_1_COMPGEN(0x008ec21c, "const t_abstract_function_2<void, t_button*, t_handler>::`vftable'")

// === .rdata$r (28 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_animator@?%C:\Work\game\scroll_menu.cpp3267211187@@;bcd=51a688;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56145
DATA_CHT_1_COMPGEN(0x0091a688, "t_animator::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_animator@?%C:\Work\game\scroll_menu.cpp3267211187@@;vft=4ec18c;col=51a6bc;td=5b90a0;chd=51a6ac;offset=0;cdOffset=0;validated-hierarchy; map:56146
DATA_CHT_1_COMPGEN(0x0091a6a0, "t_animator::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_animator@?%C:\Work\game\scroll_menu.cpp3267211187@@;vft=4ec18c;col=51a6bc;td=5b90a0;chd=51a6ac;offset=0;cdOffset=0;validated-hierarchy; map:56147
DATA_CHT_1_COMPGEN(0x0091a6ac, "t_animator::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_animator@?%C:\Work\game\scroll_menu.cpp3267211187@@;vft=4ec18c;col=51a6bc;td=5b90a0;chd=51a6ac;offset=0;cdOffset=0;validated-hierarchy; map:56148
DATA_CHT_1_COMPGEN(0x0091a6bc, "const t_animator::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scroll_menu@@;bcd=51a6d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56149
DATA_CHT_1_COMPGEN(0x0091a6d0, "t_scroll_menu::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scroll_menu@@;vft=4ec19c;col=51a70c;td=5b90e4;chd=51a6fc;offset=0;cdOffset=0;validated-hierarchy; map:56150
DATA_CHT_1_COMPGEN(0x0091a6e8, "t_scroll_menu::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scroll_menu@@;vft=4ec19c;col=51a70c;td=5b90e4;chd=51a6fc;offset=0;cdOffset=0;validated-hierarchy; map:56151
DATA_CHT_1_COMPGEN(0x0091a6fc, "t_scroll_menu::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scroll_menu@@;vft=4ec19c;col=51a70c;td=5b90e4;chd=51a6fc;offset=0;cdOffset=0;validated-hierarchy; map:56152
DATA_CHT_1_COMPGEN(0x0091a70c, "const t_scroll_menu::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_scroll_menu@@PAVt_button@@Vt_handler@@@@;vft=4ec208;col=51a7e4;td=5b91a8;chd=51a7d4;offset=8;cdOffset=0;validated-hierarchy; map:56153
DATA_CHT_1_COMPGEN(0x0091a7e4, "const t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_handler>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;bcd=51a778;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:56154
DATA_CHT_1_COMPGEN(0x0091a778, "t_abstract_function_2<void, t_button*, t_handler>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@Vt_handler@@@@;bcd=51a790;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56155
DATA_CHT_1_COMPGEN(0x0091a790, "t_handler_base_2<t_button*, t_handler>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_scroll_menu@@PAVt_button@@Vt_handler@@@@;bcd=51a7a8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56156
DATA_CHT_1_COMPGEN(0x0091a7a8, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_scroll_menu@@PAVt_button@@Vt_handler@@@@;vft=4ec208;col=51a7e4;td=5b91a8;chd=51a7d4;offset=8;cdOffset=0;validated-hierarchy; map:56157
DATA_CHT_1_COMPGEN(0x0091a7c0, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_scroll_menu@@PAVt_button@@Vt_handler@@@@;vft=4ec208;col=51a7e4;td=5b91a8;chd=51a7d4;offset=8;cdOffset=0;validated-hierarchy; map:56158
DATA_CHT_1_COMPGEN(0x0091a7d4, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56159
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_scroll_menu, t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@Vt_handler@@@@;vft=4ec228;col=51a848;td=5b91f4;chd=51a838;offset=8;cdOffset=0;validated-hierarchy; map:56160
DATA_CHT_1_COMPGEN(0x0091a848, "const t_add_2nd_handler_1<t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@Vt_handler@@@@;bcd=51a80c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56161
DATA_CHT_1_COMPGEN(0x0091a80c, "t_add_2nd_handler_1<t_button*, t_handler>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@Vt_handler@@@@;vft=4ec228;col=51a848;td=5b91f4;chd=51a838;offset=8;cdOffset=0;validated-hierarchy; map:56162
DATA_CHT_1_COMPGEN(0x0091a824, "t_add_2nd_handler_1<t_button*, t_handler>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@Vt_handler@@@@;vft=4ec228;col=51a848;td=5b91f4;chd=51a838;offset=8;cdOffset=0;validated-hierarchy; map:56163
DATA_CHT_1_COMPGEN(0x0091a838, "t_add_2nd_handler_1<t_button*, t_handler>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56164
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:56165
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, t_handler>'}")

// name:A; map symbol; map:56166
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_handler>::`RTTI Base Class Array'")

// name:A; map symbol; map:56167
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_2<t_button*, t_handler>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56168
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, t_handler>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;bcd=51a720;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56169
DATA_CHT_1_COMPGEN(0x0091a720, "t_abstract_function_2<void, t_button*, t_handler>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;vft=4ec21c;col=51a750;td=5b9128;chd=51a740;offset=0;cdOffset=0;validated-hierarchy; map:56170
DATA_CHT_1_COMPGEN(0x0091a738, "t_abstract_function_2<void, t_button*, t_handler>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;vft=4ec21c;col=51a750;td=5b9128;chd=51a740;offset=0;cdOffset=0;validated-hierarchy; map:56171
DATA_CHT_1_COMPGEN(0x0091a740, "t_abstract_function_2<void, t_button*, t_handler>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;vft=4ec21c;col=51a750;td=5b9128;chd=51a740;offset=0;cdOffset=0;validated-hierarchy; map:56172
DATA_CHT_1_COMPGEN(0x0091a750, "const t_abstract_function_2<void, t_button*, t_handler>::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_animator@?%C:\Work\game\scroll_menu.cpp3267211187@@;td=5b90a0;validated-header; map:59519
DATA_CHT_1_COMPGEN(0x009b90a0, "t_animator `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scroll_menu@@;td=5b90e4;validated-header; map:59520
DATA_CHT_1_COMPGEN(0x009b90e4, "t_scroll_menu `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@Vt_handler@@@@;td=5b9128;validated-header; map:59521
DATA_CHT_1_COMPGEN(0x009b9128, "t_abstract_function_2<void, t_button*, t_handler> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@Vt_handler@@@@;td=5b916c;validated-header; map:59522
DATA_CHT_1_COMPGEN(0x009b916c, "t_handler_base_2<t_button*, t_handler> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_scroll_menu@@PAVt_button@@Vt_handler@@@@;td=5b91a8;validated-header; map:59523
DATA_CHT_1_COMPGEN(0x009b91a8, "t_bound_handler_2<t_scroll_menu, t_button*, t_handler> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@Vt_handler@@@@;td=5b91f4;validated-header; map:59524
DATA_CHT_1_COMPGEN(0x009b91f4, "t_add_2nd_handler_1<t_button*, t_handler> `RTTI Type Descriptor'")
