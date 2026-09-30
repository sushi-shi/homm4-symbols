// placed_event_trigger.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\placed_event_trigger.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 62/115 (A:30 B:8 C:0); unaccounted 53; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (59 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63759; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759110, 0x15, STATIC_INIT_DISPATCH, "placed_event_trigger#1")

// name:C; dyninit; see ledger; map:63760
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "placed_event_trigger#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63761; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759130, 0x1c, STATIC_INIT_DISPATCH, g_placed_event_trigger_registration)

// name:B; dyninit; see ledger; map:63762
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_placed_event_trigger_registration)

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63763; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00759150, 0x1c, STATIC_INIT_DISPATCH, g_pandoras_box_registration)

// name:B; dyninit; see ledger; map:63764
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_pandoras_box_registration)

// name:A; map symbol; map:31762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_placed_event_base::get_version() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_base::is_visible_to(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_base::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_base::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_base::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31767
VA_CHT_1(0x007591e0, 0x96)
bool t_placed_event_base::trigger_event(t_army& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_trigger::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_placed_event_trigger::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_placed_event_trigger::get_shadow_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_placed_event_trigger::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_placed_event_trigger::get_subimage_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31773
VA_CHT_1(0x007592d0, 0x5)
bool t_adv_object_pandoras_box::is_triggered_by(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_object_pandoras_box::blocks_army(t_creature_array const& arg_0, t_path_search_type arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31775
VA_CHT_1(0x007592e0, 0x66)
void t_adv_object_pandoras_box::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31776
VA_CHT_1(0x007597e0, 0x2d)
bool t_adv_object_pandoras_box::is_visible_to(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63765; name:B (dyninit; see ledger)
VA_CHT_1(0x007598a0, 0x20)
// placed_event_trigger$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63767; name:B (dyninit; see ledger)
VA_CHT_1(0x007598c0, 0x5c)
// placed_event_trigger$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// placed_event_trigger$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// placed_event_trigger$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// placed_event_trigger$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_placed_event_base::get_event_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31778
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_placed_event_trigger>::t_object_registration<t_placed_event_trigger>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_object_pandoras_box>::t_object_registration<t_adv_object_pandoras_box>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_placed_event_trigger>::t_object_factory<t_placed_event_trigger>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31781
VA_CHT_1(0x00759360, 0x180)
t_stationary_adventure_object* t_object_factory<t_placed_event_trigger>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_placed_event_trigger::t_placed_event_trigger(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_placed_event_base::t_placed_event_base(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31784
VA_CHT_1_COMPGEN(0x007594e0, 0x2d, SCALAR_DELETING_DTOR, t_placed_event_base)

// name:A; map symbol; map:31785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_placed_event_base)

// name:A; map symbol; map:31786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_placed_event_base::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31787
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_placed_event_base::~t_placed_event_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31788
VA_CHT_1_COMPGEN(0x007595a0, 0x2d, VECTOR_DELETING_DTOR, t_placed_event_trigger)

// name:A; map symbol; map:31789
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_placed_event_trigger)

// name:A; map symbol; map:31790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_placed_event_trigger::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_placed_event_trigger::~t_placed_event_trigger()
{
    // Body unavailable.
}

// name:A; map symbol; map:31792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_object_pandoras_box>::t_object_factory<t_adv_object_pandoras_box>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31793
VA_CHT_1(0x00759660, 0x180)
t_stationary_adventure_object* t_object_factory<t_adv_object_pandoras_box>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_pandoras_box::t_adv_object_pandoras_box(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_pandoras_box)

// name:A; map symbol; map:31796
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_pandoras_box)

// name:A; map symbol; map:31797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_object_pandoras_box::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:31798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_pandoras_box::~t_adv_object_pandoras_box()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31799
VA_CHT_1_COMPGEN(0x00759920, 0x8, VECTOR_DELETING_DTOR, t_placed_event_base)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31800
VA_CHT_1_COMPGEN(0x00759930, 0xb, VECTOR_DELETING_DTOR, t_placed_event_base)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31801
VA_CHT_1(0x00759940, 0x8)
// [thunk]: public: virtual bool t_placed_event_base::is_visible_to`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31802
VA_CHT_1_COMPGEN(0x00759950, 0x8, VECTOR_DELETING_DTOR, t_placed_event_trigger)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31803
VA_CHT_1_COMPGEN(0x00759960, 0x8, VECTOR_DELETING_DTOR, t_placed_event_trigger)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31804
VA_CHT_1(0x00759970, 0x8)
// [thunk]: public: virtual t_screen_rect t_placed_event_trigger::get_shadow_rect`vtordisp{-4, 0}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31805
VA_CHT_1(0x00759980, 0x8)
// [thunk]: public: virtual t_screen_rect t_placed_event_trigger::get_shadow_rect`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31806
VA_CHT_1(0x00759990, 0xb)
// [thunk]: public: virtual int t_placed_event_trigger::get_subimage_count`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31807
VA_CHT_1_COMPGEN(0x007599a0, 0x8, VECTOR_DELETING_DTOR, t_adv_object_pandoras_box)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31808
VA_CHT_1_COMPGEN(0x007599b0, 0x8, VECTOR_DELETING_DTOR, t_adv_object_pandoras_box)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31809
VA_CHT_1(0x007599c0, 0xb)
// [thunk]: public: virtual bool t_adv_object_pandoras_box::is_visible_to`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (20 symbols) ===

// confidence:A; rtti-name; map:45015
DATA_CHT_1_COMPGEN(0x008e74cc, "const t_object_factory<t_placed_event_trigger>::`vftable'")

// name:A; map symbol; map:45016
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45017
DATA_CHT_1_COMPGEN(0x008e74dc, "const t_placed_event_trigger::`vftable'")

// confidence:B; rtti-order; map:45018
DATA_CHT_1_COMPGEN(0x008e759c, "const t_placed_event_trigger::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45019
DATA_CHT_1_COMPGEN(0x008e75a4, "const t_placed_event_trigger::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45020
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45021
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:45022
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45023
DATA_CHT_1_COMPGEN(0x008e765c, "const t_placed_event_base::`vftable'")

// confidence:B; rtti-order; map:45024
DATA_CHT_1_COMPGEN(0x008e771c, "const t_placed_event_base::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45025
DATA_CHT_1_COMPGEN(0x008e7724, "const t_placed_event_base::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45026
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45027
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45028
DATA_CHT_1_COMPGEN(0x008e74d4, "const t_object_factory<t_adv_object_pandoras_box>::`vftable'")

// name:A; map symbol; map:45029
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45030
DATA_CHT_1_COMPGEN(0x008e77f4, "const t_adv_object_pandoras_box::`vftable'")

// confidence:B; rtti-order; map:45031
DATA_CHT_1_COMPGEN(0x008e78b4, "const t_adv_object_pandoras_box::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45032
DATA_CHT_1_COMPGEN(0x008e78bc, "const t_adv_object_pandoras_box::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45033
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45034
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (29 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_placed_event_trigger@@@@;bcd=512118;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53871
DATA_CHT_1_COMPGEN(0x00912118, "t_object_factory<t_placed_event_trigger>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_placed_event_trigger@@@@;vft=4e74cc;col=51214c;td=5b03f8;chd=51213c;offset=0;cdOffset=0;validated-hierarchy; map:53872
DATA_CHT_1_COMPGEN(0x00912130, "t_object_factory<t_placed_event_trigger>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_placed_event_trigger@@@@;vft=4e74cc;col=51214c;td=5b03f8;chd=51213c;offset=0;cdOffset=0;validated-hierarchy; map:53873
DATA_CHT_1_COMPGEN(0x0091213c, "t_object_factory<t_placed_event_trigger>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_placed_event_trigger@@@@;vft=4e74cc;col=51214c;td=5b03f8;chd=51213c;offset=0;cdOffset=0;validated-hierarchy; map:53874
DATA_CHT_1_COMPGEN(0x0091214c, "const t_object_factory<t_placed_event_trigger>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53875
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_placed_event_trigger@@;vft=4e74dc;col=5122d8;td=5b0498;chd=5122c8;offset=100;cdOffset=0;validated-hierarchy; map:53876
DATA_CHT_1_COMPGEN(0x009122d8, "const t_placed_event_trigger::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53877
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_placed_event_base@@;bcd=51226c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53878
DATA_CHT_1_COMPGEN(0x0091226c, "t_placed_event_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_placed_event_trigger@@;bcd=512284;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53879
DATA_CHT_1_COMPGEN(0x00912284, "t_placed_event_trigger::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_placed_event_trigger@@;vft=4e74dc;col=5122d8;td=5b0498;chd=5122c8;offset=100;cdOffset=0;validated-hierarchy; map:53880
DATA_CHT_1_COMPGEN(0x0091229c, "t_placed_event_trigger::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_placed_event_trigger@@;vft=4e74dc;col=5122d8;td=5b0498;chd=5122c8;offset=100;cdOffset=0;validated-hierarchy; map:53881
DATA_CHT_1_COMPGEN(0x009122c8, "t_placed_event_trigger::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53882
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_trigger::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53883
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_placed_event_base@@;vft=4e765c;col=51221c;td=5b0474;chd=51220c;offset=100;cdOffset=0;validated-hierarchy; map:53884
DATA_CHT_1_COMPGEN(0x0091221c, "const t_placed_event_base::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53885
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_placed_event_base@@;vft=4e765c;col=51221c;td=5b0474;chd=51220c;offset=100;cdOffset=0;validated-hierarchy; map:53886
DATA_CHT_1_COMPGEN(0x009121e4, "t_placed_event_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_placed_event_base@@;vft=4e765c;col=51221c;td=5b0474;chd=51220c;offset=100;cdOffset=0;validated-hierarchy; map:53887
DATA_CHT_1_COMPGEN(0x0091220c, "t_placed_event_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53888
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_placed_event_base::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_object_pandoras_box@@@@;bcd=512160;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53889
DATA_CHT_1_COMPGEN(0x00912160, "t_object_factory<t_adv_object_pandoras_box>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_pandoras_box@@@@;vft=4e74d4;col=512194;td=5b0434;chd=512184;offset=0;cdOffset=0;validated-hierarchy; map:53890
DATA_CHT_1_COMPGEN(0x00912178, "t_object_factory<t_adv_object_pandoras_box>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_pandoras_box@@@@;vft=4e74d4;col=512194;td=5b0434;chd=512184;offset=0;cdOffset=0;validated-hierarchy; map:53891
DATA_CHT_1_COMPGEN(0x00912184, "t_object_factory<t_adv_object_pandoras_box>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_object_pandoras_box@@@@;vft=4e74d4;col=512194;td=5b0434;chd=512184;offset=0;cdOffset=0;validated-hierarchy; map:53892
DATA_CHT_1_COMPGEN(0x00912194, "const t_object_factory<t_adv_object_pandoras_box>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53893
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_pandoras_box@@;vft=4e77f4;col=51237c;td=5b04c0;chd=51236c;offset=100;cdOffset=0;validated-hierarchy; map:53894
DATA_CHT_1_COMPGEN(0x0091237c, "const t_adv_object_pandoras_box::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53895
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_pandoras_box@@;bcd=512328;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53896
DATA_CHT_1_COMPGEN(0x00912328, "t_adv_object_pandoras_box::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_pandoras_box@@;vft=4e77f4;col=51237c;td=5b04c0;chd=51236c;offset=100;cdOffset=0;validated-hierarchy; map:53897
DATA_CHT_1_COMPGEN(0x00912340, "t_adv_object_pandoras_box::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_pandoras_box@@;vft=4e77f4;col=51237c;td=5b04c0;chd=51236c;offset=100;cdOffset=0;validated-hierarchy; map:53898
DATA_CHT_1_COMPGEN(0x0091236c, "t_adv_object_pandoras_box::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53899
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_object_pandoras_box::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_placed_event_trigger@@@@;td=5b03f8;validated-header; map:58949
DATA_CHT_1_COMPGEN(0x009b03f8, "t_object_factory<t_placed_event_trigger> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_placed_event_base@@;td=5b0474;validated-header; map:58950
DATA_CHT_1_COMPGEN(0x009b0474, "t_placed_event_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_placed_event_trigger@@;td=5b0498;validated-header; map:58951
DATA_CHT_1_COMPGEN(0x009b0498, "t_placed_event_trigger `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_object_pandoras_box@@@@;td=5b0434;validated-header; map:58952
DATA_CHT_1_COMPGEN(0x009b0434, "t_object_factory<t_adv_object_pandoras_box> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_pandoras_box@@;td=5b04c0;validated-header; map:58953
DATA_CHT_1_COMPGEN(0x009b04c0, "t_adv_object_pandoras_box `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60324
DATA_CHT_1(0x009f3a38)
t_object_registration<t_placed_event_trigger> g_placed_event_trigger_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60325
DATA_CHT_1(0x009f3a3c)
t_object_registration<t_adv_object_pandoras_box> g_pandoras_box_registration; // Initial value unavailable.

} // anonymous namespace
