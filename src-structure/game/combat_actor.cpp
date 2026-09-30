// combat_actor.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 49/87 (A:4 B:1 C:0); unaccounted 38; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (81 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68166; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa00, 0x15, STATIC_INIT_DISPATCH, "combat_actor#1")

// name:C; dyninit; see ledger; map:68167
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68168; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa20, 0x15, STATIC_INIT_DISPATCH, "combat_actor#2")

// name:C; dyninit; see ledger; map:68169
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68170; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa40, 0x15, STATIC_INIT_DISPATCH, "combat_actor#3")

// name:C; dyninit; see ledger; map:68171
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68172; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa60, 0x15, STATIC_INIT_DISPATCH, "combat_actor#4")

// name:C; dyninit; see ledger; map:68173
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68174; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa80, 0x10, STATIC_INIT_DISPATCH, "combat_actor#5")

// name:C; dyninit; see ledger; map:68175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68176; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005aaa90, 0x15, STATIC_INIT_DISPATCH, "combat_actor#6")

// name:C; dyninit; see ledger; map:68177
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "combat_actor#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19583
VA_CHT_1(0x005aaab0, 0x84)
t_combat_actor::t_combat_actor(t_battlefield* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19584
VA_CHT_1(0x005aab60, 0x128)
t_combat_actor::t_combat_actor(
    t_battlefield* arg_0,
    t_cached_ptr<t_combat_actor_model> arg_1,
    t_combat_actor_action_id arg_2,
    t_direction arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_actor::initialize()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19586
VA_CHT_1(0x005aac90, 0xeb)
void t_combat_actor::set_model(t_cached_ptr<t_combat_actor_model> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19587
VA_CHT_1(0x005aad80, 0xfa)
t_combat_actor::~t_combat_actor()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19588
VA_CHT_1(0x005aae80, 0x7e)
void t_combat_actor::draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19589
VA_CHT_1(0x005aaf00, 0x78)
void t_combat_actor::draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19590
VA_CHT_1(0x005aaf80, 0x37)
void t_combat_actor::draw_shadow_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19591
VA_CHT_1(0x005aafc0, 0x32)
void t_combat_actor::draw_shadow_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19592
VA_CHT_1(0x005ab000, 0xb)
int t_combat_actor::get_footprint_size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19593
VA_CHT_1(0x005ab010, 0xf)
int t_combat_actor::get_prewalk_distance() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19594
VA_CHT_1(0x005ab020, 0xf)
int t_combat_actor::get_postwalk_distance() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19595
VA_CHT_1(0x005ab030, 0xf)
int t_combat_actor::get_walk_distance() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19596
VA_CHT_1(0x005ab040, 0x16)
int t_combat_actor::get_frame_count() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19597
VA_CHT_1(0x005ab060, 0x19)
int t_combat_actor::get_key_frame(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19598
VA_CHT_1(0x005ab080, 0x19)
int t_combat_actor::get_frame_count(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19599
VA_CHT_1(0x005ab0a0, 0x12)
int t_combat_actor::get_frames_per_second() const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:19600
VA_CHT_1(0x005ab0c0, 0xb)
int t_combat_actor::get_frames_per_second(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19601
VA_CHT_1(0x005ab0d0, 0x12)
int t_combat_actor::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19602
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model const& t_combat_actor::get_model() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19603
VA_CHT_1(0x005ab0f0, 0x23)
t_screen_rect t_combat_actor::get_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19604
VA_CHT_1(0x005ab120, 0x23)
t_screen_rect t_combat_actor::get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19605
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_combat_actor::get_shadow_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19606
VA_CHT_1(0x005ab150, 0x23)
t_screen_rect t_combat_actor::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:19607
VA_CHT_1(0x005ab180, 0xb)
bool t_combat_actor::has_action(t_combat_actor_action_id arg_0, t_direction arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19608
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19609
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::is_animated() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19610
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::is_underlay() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19611
VA_CHT_1(0x005ab190, 0x21)
bool t_combat_actor::needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19612
VA_CHT_1(0x005ab1c0, 0x11)
void t_combat_actor::set_current_action(t_combat_actor_action_id arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19613
VA_CHT_1(0x005ab1e0, 0x27)
void t_combat_actor::set_current_direction(t_direction arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19614
VA_CHT_1(0x005ab210, 0xa)
void t_combat_actor::set_current_frame_num(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19615
VA_CHT_1(0x005ab220, 0x2d)
void t_combat_actor::set_animation(t_counted_idle_processor* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19616
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::blocks_movement() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19617
VA_CHT_1(0x005ab250, 0x2b)
t_abstract_cache<t_actor_sequence> t_combat_actor::get_cache(
    t_combat_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19618
VA_CHT_1(0x005ab280, 0x176)
void t_combat_actor::set_color(int arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19619
VA_CHT_1(0x005ab400, 0x170)
void t_combat_actor::set_saturation(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19620
VA_CHT_1(0x005ab570, 0x48)
t_map_point_3d t_combat_actor::get_missile_offset() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19621
VA_CHT_1(0x005ab5c0, 0x56)
t_map_point_3d t_combat_actor::get_body_center() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19622
VA_CHT_1(0x005ab620, 0x8b)
t_map_point_3d t_combat_actor::get_spell_origin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19623
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_actor::is_permanent() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19624
VA_CHT_1(0x005ab6b0, 0x235)
bool t_combat_actor::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19625
VA_CHT_1(0x005ab8f0, 0x1ff)
bool t_combat_actor::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19626
VA_CHT_1(0x005abaf0, 0x6)
t_combat_object_type t_unsaved_combat_actor::get_object_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_unsaved_combat_actor::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_unsaved_combat_actor::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68178; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005abb00, 0x20, STATIC_INIT_DISPATCH, combat_actor)

// name:A; map symbol; map:19629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor>::~t_counted_ptr<t_counted_idle_processor>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19630
VA_CHT_1_COMPGEN(0x005aab40, 0x1e, SCALAR_DELETING_DTOR, t_combat_actor)

// name:A; map symbol; map:19631
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_actor)

// name:A; map symbol; map:19632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model::get_prewalk_distance() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19633
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model::get_postwalk_distance() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19634
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model::get_walk_distance() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19635
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model::get_key_frame(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19636
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model_definition::get_key_frame(t_combat_actor_action_id arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_combat_actor_model_definition::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d operator+(t_map_point_3d const& arg_0, t_map_point_3d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator+=(t_map_point_3d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d const& t_combat_actor_model::get_missile_offset(t_direction arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19642
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d const& t_combat_actor_model_definition::get_missile_origin(t_direction arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19643
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_actor_model& t_cached_ptr<t_combat_actor_model>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19644
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor>::t_counted_ptr<t_counted_idle_processor>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_counted_idle_processor>& t_counted_ptr<t_counted_idle_processor>::operator=(
    t_counted_idle_processor* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_bitmap_layer>::t_owned_ptr<t_bitmap_layer>(t_bitmap_layer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_bitmap_layer>::~t_owned_ptr<t_bitmap_layer>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer* t_owned_ptr<t_bitmap_layer>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_bitmap_layer>::reset(t_bitmap_layer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19651
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_actor)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43878
DATA_CHT_1_COMPGEN(0x008dbe8c, "const t_combat_actor::`vftable'{for `t_combat_object_base'}")

// confidence:B; rtti-order; map:43879
DATA_CHT_1_COMPGEN(0x008dbea4, "const t_combat_actor::`vftable'{for `t_combat_saveable_object'}")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_actor@@;vft=4dbe8c;col=5033a8;td=593fd4;chd=503398;offset=8;cdOffset=0;validated-hierarchy; map:50619
DATA_CHT_1_COMPGEN(0x009033a8, "const t_combat_actor::`RTTI Complete Object Locator'{for `t_combat_object_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_actor@@;vft=4dbe8c;col=5033a8;td=593fd4;chd=503398;offset=8;cdOffset=0;validated-hierarchy; map:50620
DATA_CHT_1_COMPGEN(0x00903380, "t_combat_actor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_actor@@;vft=4dbe8c;col=5033a8;td=593fd4;chd=503398;offset=8;cdOffset=0;validated-hierarchy; map:50621
DATA_CHT_1_COMPGEN(0x00903398, "t_combat_actor::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50622
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_combat_actor::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")
