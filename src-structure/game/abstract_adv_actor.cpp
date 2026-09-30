// abstract_adv_actor.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\abstract_adv_actor.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 186/361 (A:109 B:8 C:6); unaccounted 175; skipped std 17.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (251 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71471; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00402430, 0x15, STATIC_INIT_DISPATCH, "abstract_adv_actor#1")

// name:C; dyninit; see ledger; map:71472
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_adv_actor#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71473; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00402450, 0x11, STATIC_INIT_DISPATCH, "abstract_adv_actor#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:71474; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00402470, 0x138, STATIC_CTOR, "abstract_adv_actor#2")

// name:C; dyninit; see ledger; map:71475
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "abstract_adv_actor#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71476; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004025b0, 0xa, STATIC_DTOR, "abstract_adv_actor#2")

namespace {

// name:A; map symbol; map:85
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point get_base_point(t_animation const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:86
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage::t_highlight_subimage()
{
    // Body unavailable.
}

// name:A; map symbol; map:87
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_highlight_subimage::compute_frame(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=2690:88;class=?%C:\work\game\abstract_adv_actor.cpp980218401::t_highlight_subimage;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=20;checked-rtti-and-raw-slots;vft=4cb388,col=4f3ad0,offset=0,slot=6,entry=2690; map:88
VA_CHT_1(0x00402690, 0x194)
void t_highlight_subimage::draw_to(
    int arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=2830:89;class=?%C:\work\game\abstract_adv_actor.cpp980218401::t_highlight_subimage;proof=reviewed-identity-and-runtime-vftable;cleanup=12;checked-rtti-and-raw-slots;vft=4cb388,col=4f3ad0,offset=0,slot=5,entry=2830;manual-review=complete-F00007; map:89
VA_CHT_1(0x00402830, 0xbb)
void t_highlight_subimage::draw_to(
    int arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:90
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_highlight_subimage::get_depth_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:91
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_highlight_subimage::get_frame_count() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=28f0:92;class=?%C:\work\game\abstract_adv_actor.cpp980218401::t_highlight_subimage;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4cb388,col=4f3ad0,offset=0,slot=3,entry=28f0; map:92
VA_CHT_1(0x004028f0, 0x99)
t_screen_rect t_highlight_subimage::get_rect() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=2990:93;class=?%C:\work\game\abstract_adv_actor.cpp980218401::t_highlight_subimage;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4cb388,col=4f3ad0,offset=0,slot=2,entry=2990; map:93
VA_CHT_1(0x00402990, 0xa8)
t_screen_rect t_highlight_subimage::get_rect(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:94
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_highlight_subimage::hit_test(int arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:95
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_highlight_subimage::is_underlay() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:96
VA_CHT_1(0x00402a40, 0x3c)
unsigned long t_highlight_subimage::pick_time_offset() const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:97
VA_CHT_1(0x00402a80, 0x175)
abstract_adv_actor_details::t_impl::t_impl(abstract_adv_actor_details::t_impl const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:98
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl& abstract_adv_actor_details::t_impl::operator=(
    abstract_adv_actor_details::t_impl const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:99
VA_CHT_1(0x00402c20, 0xb8)
t_abstract_adv_actor::t_abstract_adv_actor()
{
    // Body unavailable.
}

// name:A; map symbol; map:100
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_actor::t_abstract_adv_actor(t_abstract_adv_actor const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:101
VA_CHT_1(0x00402d00, 0x99)
t_abstract_adv_actor::~t_abstract_adv_actor()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:102
VA_CHT_1(0x00402da0, 0x12)
void t_abstract_adv_actor::accept(t_abstract_adv_object_visitor& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:103
VA_CHT_1(0x00402dc0, 0x12)
void t_abstract_adv_actor::accept(t_abstract_adv_object_visitor& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=2de0:104;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=0;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=3,entry=4950;manual-review=complete-F00013; map:104
VA_CHT_1(0x00402de0, 0x5b)
bool t_abstract_adv_actor::animates() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:105
VA_CHT_1(0x00402e40, 0x170)
void t_abstract_adv_actor::draw_subimage_to(
    int arg_0,
    unsigned long arg_1,
    t_screen_rect const& arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    int arg_5
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:106
VA_CHT_1(0x00402fb0, 0xfd)
void t_abstract_adv_actor::draw_subimage_to(
    int arg_0,
    unsigned long arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:107
VA_CHT_1(0x004030b0, 0x17e)
void t_abstract_adv_actor::draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:108
VA_CHT_1(0x00403270, 0xfd)
void t_abstract_adv_actor::draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:109
VA_CHT_1(0x00403370, 0x181)
void t_abstract_adv_actor::enable_highlight(bool arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:110
VA_CHT_1(0x00403500, 0x16)
t_footprint const& t_abstract_adv_actor::get_footprint() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:111
VA_CHT_1(0x00403520, 0x14)
t_screen_point t_abstract_adv_actor::get_frame_offset() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3540:112;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=4;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=15,entry=49c0;manual-review=complete-F00016; map:112
VA_CHT_1(0x00403540, 0x12a)
t_screen_rect t_abstract_adv_actor::get_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:113
VA_CHT_1(0x00403670, 0x16d)
t_screen_rect t_abstract_adv_actor::get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=37e0:114;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=0;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=18,entry=49d0;manual-review=complete-F00017; map:114
VA_CHT_1(0x004037e0, 0x21)
int t_abstract_adv_actor::get_subimage_count() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3810:115;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=4;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=19,entry=49e0;manual-review=complete-F00018; map:115
VA_CHT_1(0x00403810, 0x15)
int t_abstract_adv_actor::get_subimage_depth_offset(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:116
VA_CHT_1(0x00403830, 0xd5)
t_screen_rect t_abstract_adv_actor::get_subimage_rect(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:117
VA_CHT_1(0x00403910, 0xe7)
t_screen_rect t_abstract_adv_actor::get_subimage_rect(int arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3a00:118;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=8;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=22,entry=4a10;manual-review=complete-F00019; map:118
VA_CHT_1(0x00403a00, 0x167)
bool t_abstract_adv_actor::hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:119
VA_CHT_1(0x00403b70, 0x10)
bool t_abstract_adv_actor::is_highlighted() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3b80:120;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=8;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=25,entry=4a20;manual-review=complete-F00021; map:120
VA_CHT_1(0x00403b80, 0xc3)
bool t_abstract_adv_actor::needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_actor::subimage_animates(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:122
VA_CHT_1(0x00403c50, 0x6f)
bool t_abstract_adv_actor::subimage_is_underlay(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3cc0:123;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=12;checked-rtti-and-raw-slots;vft=4cb404,col=4f3c00,offset=10,slot=28,entry=4a40;manual-review=complete-F00022; map:123
VA_CHT_1(0x00403cc0, 0xc0)
bool t_abstract_adv_actor::subimage_needs_redrawing(int arg_0, unsigned long arg_1, unsigned long arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_actor& t_abstract_adv_actor::operator=(t_abstract_adv_actor const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=3d80:125;class=t_abstract_adv_actor;proof=reviewed-identity-and-runtime-vftable;cleanup=0;checked-rtti-and-raw-slots;vft=4cb484,col=4f3ba0,offset=0,slot=2,entry=3d80;manual-review=complete-F00023; map:125
VA_CHT_1(0x00403d80, 0xfd)
void t_abstract_adv_actor::on_model_changed()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:126
VA_CHT_1(0x00403e80, 0x112)
void t_abstract_adv_actor::set_flag_color(t_player_color arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:127
VA_CHT_1(0x00403fa0, 0x28)
bool t_abstract_adv_actor::visible_through_obstacles(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_adv_actor::do_visible_through_obstacles() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71477; name:B (dyninit; see ledger)
VA_CHT_1(0x00404430, 0x20)
// abstract_adv_actor$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71479; name:B (dyninit; see ledger)
VA_CHT_1(0x00404860, 0x20)
// abstract_adv_actor$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:71480
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::g_default_body_ref")

// name:A; map symbol; map:129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point::t_screen_point(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_cache::t_animation_cache(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:131
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_animation_cache)

// name:A; map symbol; map:132
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_animation_cache)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:133
VA_CHT_1(0x007cf0e0, 0x65)
t_animation_cache::~t_animation_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_animation_24, t_animation>::~t_conversion_cache<t_animation_24, t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:135
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_animation>::~t_resource_cache<t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_animation_base::get_base_point() const
{
    // Body unavailable.
}

// name:A; map symbol; map:137
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_animation_base::x_is_valid() const
{
    // Body unavailable.
}

// name:A; map symbol; map:138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_animation_base::y_is_valid() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable,vslot;manual-review=complete-F00005:unresolved; map:139
VA_CHT_1_COMPGEN(0x004025c0, 0x1e, VECTOR_DELETING_DTOR, t_highlight_subimage)

// name:A; map symbol; map:140
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_highlight_subimage)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:141
VA_CHT_1(0x00752080, 0x1d)
t_adv_object_subimage::t_adv_object_subimage()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:142
VA_CHT_1(0x007508a0, 0x9)
t_adv_object_subimage::~t_adv_object_subimage()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:143
VA_CHT_1(0x00831d30, 0x7)
t_adv_object_subimage_base::~t_adv_object_subimage_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:144
VA_CHT_1_COMPGEN(0x004025e0, 0x20, SCALAR_DELETING_DTOR, t_adv_object_subimage_base)

// name:A; map symbol; map:145
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_subimage_base)

namespace {

// name:A; map symbol; map:146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage::~t_highlight_subimage()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_subimage)

// name:A; map symbol; map:148
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_subimage)

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:149
VA_CHT_1(0x00831e60, 0x66)
t_adv_object_subimage_base::t_adv_object_subimage_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_animation_base::get_frame_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:151
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_animation_base::get_frame_delay() const
{
    // Body unavailable.
}

// name:A; map symbol; map:152
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point operator+(t_screen_point const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point& t_screen_point::operator+=(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point operator-(t_screen_point const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point& t_screen_point::operator-=(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_screen_rect::top_left() const
{
    // Body unavailable.
}

// name:A; map symbol; map:157
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect operator-(t_screen_rect const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:158
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect& t_screen_rect::operator-=(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool intersect(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:160
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect intersection(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect::t_screen_rect(int arg_0, int arg_1, int arg_2, int arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_bitmap_layer::get_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::draw_to(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_animation::get_frame(int arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_highlight_subimage::get_offset()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; dyninit; see ledger; map:166
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, t_highlight_subimage::get_offset::k_offset)

// name:A; map symbol; map:167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::draw_to(t_abstract_bitmap<unsigned short>& arg_0, t_screen_point arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect operator+(t_screen_rect const& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect& t_screen_rect::operator+=(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_flag::t_adv_object_flag(t_adv_object_flag const& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage::t_highlight_subimage(t_highlight_subimage const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-band; retn,stable,vslot;manual-review=complete-F00010:unresolved; map:172
VA_CHT_1_COMPGEN(0x00402c00, 0x1e, SCALAR_DELETING_DTOR, t_adv_object_flag)

// name:A; map symbol; map:173
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_flag)

// name:A; map symbol; map:174
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage::t_adv_object_subimage(t_adv_object_subimage const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage_base::t_adv_object_subimage_base(t_adv_object_subimage_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object::t_abstract_adv_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:177
VA_CHT_1_COMPGEN(0x00402ce0, 0x1e, SCALAR_DELETING_DTOR, t_abstract_adv_object)

// name:A; map symbol; map:178
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_adv_object)

// name:A; map symbol; map:179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect get_extent(t_screen_rect const& arg_0, t_screen_rect const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_adv_actor_model::get_flag_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_adv_actor_model_definition::get_flag_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl const* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::get_const(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl& t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::operator*()
{
    // Body unavailable.
}

// name:A; map symbol; map:184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl const& t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::operator->()
{
    // Body unavailable.
}

// name:A; map symbol; map:186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl const* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_animation>::t_cached_ptr<t_animation>(t_cached_ptr<t_animation> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_base* t_cached_ptr_base::get_cache() const
{
    // Body unavailable.
}

// name:A; map symbol; map:190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr_base::add_reference(t_abstract_cache_base* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr_base::t_cached_ptr_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr_base::~t_cached_ptr_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_base>::~t_counted_ptr<t_abstract_cache_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr_base::~t_counted_ptr_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:197
VA_CHT_1(0x00404470, 0x5a)
void t_counted_object::remove_reference() const
{
    // Body unavailable.
}

// name:A; map symbol; map:198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl const* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>(
    t_copy_on_write_ptr<abstract_adv_actor_details::t_impl> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::~t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::get()
{
    // Body unavailable.
}

// name:A; map symbol; map:204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>& t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::operator=(
    t_copy_on_write_ptr<abstract_adv_actor_details::t_impl> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_base>::t_counted_ptr<t_abstract_cache_base>()
{
    // Body unavailable.
}

// name:A; map symbol; map:206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr_base::t_counted_ptr_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_base>& t_counted_ptr<t_abstract_cache_base>::operator=(
    t_abstract_cache_base* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr_base& t_counted_ptr_base::operator=(t_counted_object const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:209
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_counted_object::add_reference() const
{
    // Body unavailable.
}

// name:A; map symbol; map:210
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_base* t_counted_ptr<t_abstract_cache_base>::operator t_abstract_cache_base*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer* t_shared_ptr<t_bitmap_layer>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_animation>::~t_cached_ptr<t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr_base::remove_reference(t_abstract_cache_base* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:214
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation* t_cached_ptr<t_animation>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:215
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation* t_cached_ptr<t_animation>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:216
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation& t_cached_ptr<t_animation>::operator*() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:217
VA_CHT_1(0x004042a0, 0x1d)
t_abstract_cache<t_animation>::~t_abstract_cache<t_animation>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:218
VA_CHT_1(0x004040e0, 0x195)
t_cached_ptr<t_animation> t_abstract_cache<t_animation>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:219
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_counted_ptr_base::operator!=(t_counted_object const* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:220
VA_CHT_1(0x0081da30, 0x72)
t_conversion_cache<t_animation_24, t_animation>::t_conversion_cache<t_animation_24, t_animation>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:221
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_object_flag>::t_owned_ptr<t_adv_object_flag>(t_adv_object_flag* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:222
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_uncopyable::t_uncopyable()
{
    // Body unavailable.
}

// name:A; map symbol; map:223
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_adv_object_flag>::~t_owned_ptr<t_adv_object_flag>()
{
    // Body unavailable.
}

// name:A; map symbol; map:224
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_flag* t_owned_ptr<t_adv_object_flag>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:225
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_adv_object_flag>::reset(t_adv_object_flag* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:226
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_adv_object_flag>::swap(t_owned_ptr<t_adv_object_flag>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:227
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_flag& t_owned_ptr<t_adv_object_flag>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:228
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_flag* t_owned_ptr<t_adv_object_flag>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_highlight_subimage>::t_owned_ptr<t_highlight_subimage>(t_highlight_subimage* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_highlight_subimage>::~t_owned_ptr<t_highlight_subimage>()
{
    // Body unavailable.
}

// name:A; map symbol; map:231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage* t_owned_ptr<t_highlight_subimage>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:232
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_highlight_subimage>::reset(t_highlight_subimage* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:233
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_highlight_subimage>::swap(t_owned_ptr<t_highlight_subimage>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:234
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage& t_owned_ptr<t_highlight_subimage>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:235
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_highlight_subimage* t_owned_ptr<t_highlight_subimage>::operator->() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:236
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_subimage_helper(
    t_abstract_adv_actor const& arg_0,
    t_highlight_subimage const& arg_1,
    unsigned long arg_2,
    t_screen_rect const& arg_3,
    t_abstract_bitmap<unsigned short>& arg_4,
    t_screen_point const& arg_5,
    int arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:237
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_subimage_helper(
    t_abstract_adv_actor const& arg_0,
    t_adv_object_flag const& arg_1,
    unsigned long arg_2,
    t_screen_rect const& arg_3,
    t_abstract_bitmap<unsigned short>& arg_4,
    t_screen_point const& arg_5,
    int arg_6
)
{
    // Body unavailable.
}

// name:A; map symbol; map:238
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_subimage_helper(
    t_abstract_adv_actor const& arg_0,
    t_highlight_subimage const& arg_1,
    unsigned long arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:239
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void draw_subimage_helper(
    t_abstract_adv_actor const& arg_0,
    t_adv_object_flag const& arg_1,
    unsigned long arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:240
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<abstract_adv_actor_details::t_impl>")

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:241
VA_CHT_1_COMPGEN(0x00815be0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache<t_animation>")

// name:A; map symbol; map:242
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_animation>")

// name:A; map symbol; map:243
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_animation>>::~t_counted_ptr<t_abstract_cache_data<t_animation>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:244
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_conversion_cache<t_animation_24, t_animation>")

// name:A; map symbol; map:245
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_conversion_cache<t_animation_24, t_animation>")

// name:A; map symbol; map:246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<abstract_adv_actor_details::t_impl>::~t_body<abstract_adv_actor_details::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl::~t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:248
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<abstract_adv_actor_details::t_impl>* t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::get_default_body(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:249
VA_CHT_1(0x00404720, 0x86)
void t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::split()
{
    // Body unavailable.
}

// name:A; map symbol; map:250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_animation>::t_cached_ptr<t_animation>(t_animation* arg_0, t_abstract_cache_base* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:251
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_animation>>::t_counted_ptr<t_abstract_cache_data<t_animation>>(
    t_abstract_cache_data<t_animation>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:252
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr_base::t_counted_ptr_base(t_counted_object const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:253
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_animation>* t_counted_ptr<t_abstract_cache_data<t_animation>>::operator t_abstract_cache_data<t_animation>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_animation>* t_counted_ptr<t_abstract_cache_data<t_animation>>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_animation>::t_resource_cache<t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_cache<t_animation>::set(t_abstract_resource_cache_data<t_animation>* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:257
VA_CHT_1(0x004f5400, 0x80)
t_conversion_cache_data<t_animation_24, t_animation>::t_conversion_cache_data<t_animation_24, t_animation>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_animation>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:259
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_animation>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cache_base::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation* t_abstract_resource_cache_data<t_animation>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:262
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_animation>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_animation>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cache_base::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_animation>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:266
VA_CHT_1(0x00404350, 0x6)
char const* t_conversion_cache_data<t_animation_24, t_animation>::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:267
VA_CHT_1(0x00404360, 0xc8)
t_animation* t_conversion_cache_data<t_animation_24, t_animation>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_animation_24& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:271
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_resource_cache<t_animation>")

// name:A; map symbol; map:272
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_resource_cache<t_animation>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:273
VA_CHT_1_COMPGEN(0x00404450, 0x1e, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_animation_24, t_animation>")

// name:A; map symbol; map:274
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_conversion_cache_data<t_animation_24, t_animation>")

// name:A; map symbol; map:275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_24::~t_animation_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_animation_base::~t_animation_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache_data<t_animation_24, t_animation>::~t_conversion_cache_data<t_animation_24, t_animation>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:283
VA_CHT_1(0x004044d0, 0xcb)
t_abstract_resource_cache_data<t_animation>::~t_abstract_resource_cache_data<t_animation>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:284
VA_CHT_1(0x004045c0, 0x49)
t_abstract_cache_data<t_animation>::~t_abstract_cache_data<t_animation>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:285
VA_CHT_1_COMPGEN(0x00404610, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_animation>")

// name:A; map symbol; map:286
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_animation>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:287
VA_CHT_1(0x00428a20, 0x4c)
t_abstract_cache_base::~t_abstract_cache_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:288
VA_CHT_1(0x00791990, 0x10)
t_counted_object::~t_counted_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:289
VA_CHT_1_COMPGEN(0x004045a0, 0x20, SCALAR_DELETING_DTOR, t_counted_object)

// name:A; map symbol; map:290
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_counted_object)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:291
VA_CHT_1_COMPGEN(0x00404630, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_animation>")

// name:A; map symbol; map:292
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_animation>")

// name:A; map symbol; map:293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_base::~t_abstract_resource_cache_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_resource_file>::~t_counted_ptr<t_abstract_resource_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:295
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_group_24::~t_bitmap_group_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<abstract_adv_actor_details::t_impl>::t_body<abstract_adv_actor_details::t_impl>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
abstract_adv_actor_details::t_impl::t_impl()
{
    // Body unavailable.
}

// name:A; map symbol; map:302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<abstract_adv_actor_details::t_impl>::t_body<abstract_adv_actor_details::t_impl>(
    abstract_adv_actor_details::t_impl const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:304
VA_CHT_1(0x004047d0, 0x10)
t_abstract_cache<t_animation>::t_abstract_cache<t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_cache<t_animation>::set(t_abstract_cache_data<t_animation>* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:306
VA_CHT_1(0x004047e0, 0x80)
t_abstract_resource_cache_data<t_animation>::t_abstract_resource_cache_data<t_animation>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:307
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::g_default_body_ref")

// name:A; dyninit; see ledger; map:308
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_copy_on_write_ptr<abstract_adv_actor_details::t_impl>::g_default_body_ref")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:309
VA_CHT_1(0x007876b0, 0x4c)
t_abstract_cache_data<t_animation>::t_abstract_cache_data<t_animation>()
{
    // Body unavailable.
}

// name:A; map symbol; map:310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_base::t_abstract_cache_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:311
VA_CHT_1(0x00473430, 0x22)
t_counted_object::t_counted_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:312
VA_CHT_1_COMPGEN(0x00428a70, 0x1e, VECTOR_DELETING_DTOR, t_abstract_cache_base)

// name:A; map symbol; map:313
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_cache_base)

// name:A; map symbol; map:314
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_animation>>::t_counted_ptr<t_abstract_cache_data<t_animation>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_animation>>& t_counted_ptr<t_abstract_cache_data<t_animation>>::operator=(
    t_abstract_cache_data<t_animation>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_default_body_ref<abstract_adv_actor_details::t_impl>::~t_default_body_ref<abstract_adv_actor_details::t_impl>(

)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:317
VA_CHT_1_COMPGEN(0x004048e0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_animation>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:318
VA_CHT_1_COMPGEN(0x004048f0, 0x8, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_animation_24, t_animation>")

// name:A; map symbol; map:319
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_adv_actor)

// confidence:C; align-band; retn,stable,vslot;manual-review=complete-F00035:unresolved; map:320
VA_CHT_1_COMPGEN(0x00404900, 0x2d, SCALAR_DELETING_DTOR, t_abstract_adv_actor)

// name:A; map symbol; map:321
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_adv_actor)

// name:A; map symbol; map:322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_abstract_adv_actor::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 0}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:324
VA_CHT_1(0x00404930, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 0}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:325
VA_CHT_1(0x00404940, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::animates`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:326
VA_CHT_1(0x00404950, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 0}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:327
VA_CHT_1(0x00404960, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 0}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:328
VA_CHT_1(0x00404970, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 0}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:329
VA_CHT_1(0x00404980, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 0}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:330
VA_CHT_1(0x00404990, 0x8)
// [thunk]: public: virtual t_footprint const& t_abstract_adv_actor::get_footprint`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:331
VA_CHT_1(0x004049a0, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 0}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:332
VA_CHT_1(0x004049b0, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:333
VA_CHT_1(0x004049c0, 0x8)
// [thunk]: public: virtual int t_abstract_adv_actor::get_subimage_count`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:334
VA_CHT_1(0x004049d0, 0x8)
// [thunk]: public: virtual int t_abstract_adv_actor::get_subimage_depth_offset`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:335
VA_CHT_1(0x004049e0, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 0}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:336
VA_CHT_1(0x004049f0, 0x8)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:337
VA_CHT_1(0x00404a00, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::hit_test`vtordisp{-4, 0}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:338
VA_CHT_1(0x00404a10, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::needs_redrawing`vtordisp{-4, 0}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:339
VA_CHT_1(0x00404a20, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_animates`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:340
VA_CHT_1(0x00404a30, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_is_underlay`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:341
VA_CHT_1(0x00404a40, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_needs_redrawing`vtordisp{-4, 0}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:342
VA_CHT_1(0x00404a50, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::visible_through_obstacles`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (19 symbols) ===

// confidence:A; rtti-name; map:42480
DATA_CHT_1_COMPGEN(0x008cb33c, "const t_animation_cache::`vftable'")

// confidence:A; rtti-name; map:42481
DATA_CHT_1_COMPGEN(0x008cb388, "const t_highlight_subimage::`vftable'")

// confidence:A; rtti-name; map:42482
DATA_CHT_1_COMPGEN(0x008cb3a8, "const t_adv_object_subimage::`vftable'")

// confidence:A; rtti-name; map:42483
DATA_CHT_1_COMPGEN(0x008cb3c8, "const t_adv_object_subimage_base::`vftable'")

// confidence:A; rtti-name; map:42484
DATA_CHT_1_COMPGEN(0x008cb3e0, "const t_adv_object_flag::`vftable'")

// confidence:B; rtti-order; map:42485
DATA_CHT_1_COMPGEN(0x008cb404, "const t_abstract_adv_actor::`vftable'{for `t_abstract_adv_object'}")

// confidence:B; rtti-order; map:42486
DATA_CHT_1_COMPGEN(0x008cb484, "const t_abstract_adv_actor::`vftable'{for `t_abstract_adv_actor'}")

// name:A; map symbol; map:42487
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_adv_actor::`vbtable'")

// confidence:A; rtti-name; map:42488
DATA_CHT_1_COMPGEN(0x008cb4b4, "const t_abstract_adv_object::`vftable'")

// confidence:A; rtti-name; map:42489
DATA_CHT_1_COMPGEN(0x008cb380, "const t_abstract_cache<t_animation>::`vftable'")

// confidence:A; rtti-name; map:42490
DATA_CHT_1_COMPGEN(0x008cb378, "const t_conversion_cache<t_animation_24, t_animation>::`vftable'")

// name:A; map symbol; map:42491
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_animation>::`vftable'")

// confidence:A; rtti-name; map:42492
DATA_CHT_1_COMPGEN(0x008cb344, "const t_conversion_cache_data<t_animation_24, t_animation>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42493
DATA_CHT_1_COMPGEN(0x008cb35c, "const t_conversion_cache_data<t_animation_24, t_animation>::`vftable'{for `t_abstract_cache_data<t_animation>'}")

// confidence:A; rtti-name; map:42494
DATA_CHT_1_COMPGEN(0x008cb55c, "const t_abstract_resource_cache_data<t_animation>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:42495
DATA_CHT_1_COMPGEN(0x008cb574, "const t_abstract_resource_cache_data<t_animation>::`vftable'{for `t_abstract_cache_data<t_animation>'}")

// confidence:A; rtti-name; map:42496
DATA_CHT_1_COMPGEN(0x008cb544, "const t_abstract_cache_data<t_animation>::`vftable'")

// confidence:A; rtti-name; map:42497
DATA_CHT_1_COMPGEN(0x008cb53c, "const t_counted_object::`vftable'")

// confidence:A; rtti-name; map:42498
DATA_CHT_1_COMPGEN(0x008ccc78, "const t_abstract_cache_base::`vftable'")

// === .rdata$r (69 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_animation@@@@;bcd=4f3974;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47254
DATA_CHT_1_COMPGEN(0x008f3974, "t_abstract_cache<t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_resource_cache@Vt_animation@@@@;bcd=4f398c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47255
DATA_CHT_1_COMPGEN(0x008f398c, "t_resource_cache<t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache@Vt_animation_24@@Vt_animation@@@@;bcd=4f39a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47256
DATA_CHT_1_COMPGEN(0x008f39a4, "t_conversion_cache<t_animation_24, t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_animation_cache@@;bcd=4f39bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47257
DATA_CHT_1_COMPGEN(0x008f39bc, "t_animation_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_animation_cache@@;vft=4cb33c;col=4f39f8;td=58524c;chd=4f39e8;offset=0;cdOffset=0;validated-hierarchy; map:47258
DATA_CHT_1_COMPGEN(0x008f39d4, "t_animation_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_animation_cache@@;vft=4cb33c;col=4f39f8;td=58524c;chd=4f39e8;offset=0;cdOffset=0;validated-hierarchy; map:47259
DATA_CHT_1_COMPGEN(0x008f39e8, "t_animation_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_animation_cache@@;vft=4cb33c;col=4f39f8;td=58524c;chd=4f39e8;offset=0;cdOffset=0;validated-hierarchy; map:47260
DATA_CHT_1_COMPGEN(0x008f39f8, "const t_animation_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_subimage_base@@;bcd=4f3a68;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47261
DATA_CHT_1_COMPGEN(0x008f3a68, "t_adv_object_subimage_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_subimage@@;bcd=4f3a80;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47262
DATA_CHT_1_COMPGEN(0x008f3a80, "t_adv_object_subimage::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_highlight_subimage@?%C:\Work\game\abstract_adv_actor.cpp746321279@@;bcd=4f3a98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47263
DATA_CHT_1_COMPGEN(0x008f3a98, "t_highlight_subimage::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_highlight_subimage@?%C:\Work\game\abstract_adv_actor.cpp746321279@@;vft=4cb388;col=4f3ad0;td=5852d0;chd=4f3ac0;offset=0;cdOffset=0;validated-hierarchy; map:47264
DATA_CHT_1_COMPGEN(0x008f3ab0, "t_highlight_subimage::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_highlight_subimage@?%C:\Work\game\abstract_adv_actor.cpp746321279@@;vft=4cb388;col=4f3ad0;td=5852d0;chd=4f3ac0;offset=0;cdOffset=0;validated-hierarchy; map:47265
DATA_CHT_1_COMPGEN(0x008f3ac0, "t_highlight_subimage::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_highlight_subimage@?%C:\Work\game\abstract_adv_actor.cpp746321279@@;vft=4cb388;col=4f3ad0;td=5852d0;chd=4f3ac0;offset=0;cdOffset=0;validated-hierarchy; map:47266
DATA_CHT_1_COMPGEN(0x008f3ad0, "const t_highlight_subimage::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_subimage@@;vft=4cb3a8;col=4f3a54;td=5852a8;chd=4f3a44;offset=0;cdOffset=0;validated-hierarchy; map:47267
DATA_CHT_1_COMPGEN(0x008f3a38, "t_adv_object_subimage::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_subimage@@;vft=4cb3a8;col=4f3a54;td=5852a8;chd=4f3a44;offset=0;cdOffset=0;validated-hierarchy; map:47268
DATA_CHT_1_COMPGEN(0x008f3a44, "t_adv_object_subimage::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_subimage@@;vft=4cb3a8;col=4f3a54;td=5852a8;chd=4f3a44;offset=0;cdOffset=0;validated-hierarchy; map:47269
DATA_CHT_1_COMPGEN(0x008f3a54, "const t_adv_object_subimage::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_subimage_base@@;vft=4cb3c8;col=4f3afc;td=58527c;chd=4f3aec;offset=0;cdOffset=0;validated-hierarchy; map:47270
DATA_CHT_1_COMPGEN(0x008f3ae4, "t_adv_object_subimage_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_subimage_base@@;vft=4cb3c8;col=4f3afc;td=58527c;chd=4f3aec;offset=0;cdOffset=0;validated-hierarchy; map:47271
DATA_CHT_1_COMPGEN(0x008f3aec, "t_adv_object_subimage_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_subimage_base@@;vft=4cb3c8;col=4f3afc;td=58527c;chd=4f3aec;offset=0;cdOffset=0;validated-hierarchy; map:47272
DATA_CHT_1_COMPGEN(0x008f3afc, "const t_adv_object_subimage_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_flag@@;bcd=4f3b10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47273
DATA_CHT_1_COMPGEN(0x008f3b10, "t_adv_object_flag::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_flag@@;vft=4cb3e0;col=4f3b48;td=585324;chd=4f3b38;offset=0;cdOffset=0;validated-hierarchy; map:47274
DATA_CHT_1_COMPGEN(0x008f3b28, "t_adv_object_flag::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_flag@@;vft=4cb3e0;col=4f3b48;td=585324;chd=4f3b38;offset=0;cdOffset=0;validated-hierarchy; map:47275
DATA_CHT_1_COMPGEN(0x008f3b38, "t_adv_object_flag::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_flag@@;vft=4cb3e0;col=4f3b48;td=585324;chd=4f3b38;offset=0;cdOffset=0;validated-hierarchy; map:47276
DATA_CHT_1_COMPGEN(0x008f3b48, "const t_adv_object_flag::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47277
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_adv_actor::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adv_object@@;bcd=4f3bb4;pmd=0,4,4;attributes=16;validated-hierarchy-link; map:47278
DATA_CHT_1_COMPGEN(0x008f3bb4, "t_abstract_adv_object::`RTTI Base Class Descriptor at (0, 4, 4, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adv_actor@@;bcd=4f3bcc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47279
DATA_CHT_1_COMPGEN(0x008f3bcc, "t_abstract_adv_actor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:47280
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_adv_actor::`RTTI Base Class Array'")

// name:A; map symbol; map:47281
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_adv_actor::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47282
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_adv_actor::`RTTI Complete Object Locator'{for `t_abstract_adv_actor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adv_object@@;bcd=4f3b5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47283
DATA_CHT_1_COMPGEN(0x008f3b5c, "t_abstract_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_adv_object@@;vft=4cb4b4;col=4f3b8c;td=585344;chd=4f3b7c;offset=0;cdOffset=0;validated-hierarchy; map:47284
DATA_CHT_1_COMPGEN(0x008f3b74, "t_abstract_adv_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_adv_object@@;vft=4cb4b4;col=4f3b8c;td=585344;chd=4f3b7c;offset=0;cdOffset=0;validated-hierarchy; map:47285
DATA_CHT_1_COMPGEN(0x008f3b7c, "t_abstract_adv_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_adv_object@@;vft=4cb4b4;col=4f3b8c;td=585344;chd=4f3b7c;offset=0;cdOffset=0;validated-hierarchy; map:47286
DATA_CHT_1_COMPGEN(0x008f3b8c, "const t_abstract_adv_object::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_animation@@@@;vft=4cb380;col=4f3a24;td=5851a8;chd=4f3a14;offset=0;cdOffset=0;validated-hierarchy; map:47287
DATA_CHT_1_COMPGEN(0x008f3a0c, "t_abstract_cache<t_animation>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_animation@@@@;vft=4cb380;col=4f3a24;td=5851a8;chd=4f3a14;offset=0;cdOffset=0;validated-hierarchy; map:47288
DATA_CHT_1_COMPGEN(0x008f3a14, "t_abstract_cache<t_animation>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_animation@@@@;vft=4cb380;col=4f3a24;td=5851a8;chd=4f3a14;offset=0;cdOffset=0;validated-hierarchy; map:47289
DATA_CHT_1_COMPGEN(0x008f3a24, "const t_abstract_cache<t_animation>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache@Vt_animation_24@@Vt_animation@@@@;vft=4cb378;col=4f3828;td=585208;chd=4f3818;offset=0;cdOffset=0;validated-hierarchy; map:47290
DATA_CHT_1_COMPGEN(0x008f3808, "t_conversion_cache<t_animation_24, t_animation>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache@Vt_animation_24@@Vt_animation@@@@;vft=4cb378;col=4f3828;td=585208;chd=4f3818;offset=0;cdOffset=0;validated-hierarchy; map:47291
DATA_CHT_1_COMPGEN(0x008f3818, "t_conversion_cache<t_animation_24, t_animation>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache@Vt_animation_24@@Vt_animation@@@@;vft=4cb378;col=4f3828;td=585208;chd=4f3818;offset=0;cdOffset=0;validated-hierarchy; map:47292
DATA_CHT_1_COMPGEN(0x008f3828, "const t_conversion_cache<t_animation_24, t_animation>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47293
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_animation>::`RTTI Base Class Array'")

// name:A; map symbol; map:47294
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_animation>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47295
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_animation>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_animation_24@@Vt_animation@@@@;vft=4cb344;col=4f3960;td=585160;chd=4f3950;offset=16;cdOffset=0;validated-hierarchy; map:47296
DATA_CHT_1_COMPGEN(0x008f3960, "const t_conversion_cache_data<t_animation_24, t_animation>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f3850;pmd=20,-1,0;attributes=2;validated-hierarchy-link; map:47297
DATA_CHT_1_COMPGEN(0x008f3850, "t_uncopyable::`RTTI Base Class Descriptor at (20, -1, 0, 2)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_cache_base@@;bcd=4f3868;pmd=16,-1,0;attributes=0;validated-hierarchy-link; map:47298
DATA_CHT_1_COMPGEN(0x008f3868, "t_cache_base::`RTTI Base Class Descriptor at (16, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_resource_cache_base@@;bcd=4f3880;pmd=16,-1,0;attributes=0;validated-hierarchy-link; map:47299
DATA_CHT_1_COMPGEN(0x008f3880, "t_abstract_resource_cache_base::`RTTI Base Class Descriptor at (16, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f3898;pmd=8,-1,0;attributes=11;validated-hierarchy-link; map:47300
DATA_CHT_1_COMPGEN(0x008f3898, "t_uncopyable::`RTTI Base Class Descriptor at (8, -1, 0, 11)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_object@@;bcd=4f38b0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47301
DATA_CHT_1_COMPGEN(0x008f38b0, "t_counted_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_cache_base@@;bcd=4f38c8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47302
DATA_CHT_1_COMPGEN(0x008f38c8, "t_abstract_cache_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_animation@@@@;bcd=4f38e0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47303
DATA_CHT_1_COMPGEN(0x008f38e0, "t_abstract_cache_data<t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_animation@@@@;bcd=4f38f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47304
DATA_CHT_1_COMPGEN(0x008f38f8, "t_abstract_resource_cache_data<t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache_data@Vt_animation_24@@Vt_animation@@@@;bcd=4f3910;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47305
DATA_CHT_1_COMPGEN(0x008f3910, "t_conversion_cache_data<t_animation_24, t_animation>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_animation_24@@Vt_animation@@@@;vft=4cb344;col=4f3960;td=585160;chd=4f3950;offset=16;cdOffset=0;validated-hierarchy; map:47306
DATA_CHT_1_COMPGEN(0x008f3928, "t_conversion_cache_data<t_animation_24, t_animation>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_animation_24@@Vt_animation@@@@;vft=4cb344;col=4f3960;td=585160;chd=4f3950;offset=16;cdOffset=0;validated-hierarchy; map:47307
DATA_CHT_1_COMPGEN(0x008f3950, "t_conversion_cache_data<t_animation_24, t_animation>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47308
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_conversion_cache_data<t_animation_24, t_animation>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_animation>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_animation@@@@;vft=4cb55c;col=4f3c5c;td=58511c;chd=4f3c4c;offset=16;cdOffset=0;validated-hierarchy; map:47309
DATA_CHT_1_COMPGEN(0x008f3c5c, "const t_abstract_resource_cache_data<t_animation>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_animation@@@@;vft=4cb55c;col=4f3c5c;td=58511c;chd=4f3c4c;offset=16;cdOffset=0;validated-hierarchy; map:47310
DATA_CHT_1_COMPGEN(0x008f3c28, "t_abstract_resource_cache_data<t_animation>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_animation@@@@;vft=4cb55c;col=4f3c5c;td=58511c;chd=4f3c4c;offset=16;cdOffset=0;validated-hierarchy; map:47311
DATA_CHT_1_COMPGEN(0x008f3c4c, "t_abstract_resource_cache_data<t_animation>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47312
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_animation>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_animation>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f3c70;pmd=8,-1,0;attributes=9;validated-hierarchy-link; map:47313
DATA_CHT_1_COMPGEN(0x008f3c70, "t_uncopyable::`RTTI Base Class Descriptor at (8, -1, 0, 9)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_animation@@@@;vft=4cb544;col=4f3cac;td=5850e4;chd=4f3c9c;offset=0;cdOffset=0;validated-hierarchy; map:47314
DATA_CHT_1_COMPGEN(0x008f3c88, "t_abstract_cache_data<t_animation>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_animation@@@@;vft=4cb544;col=4f3cac;td=5850e4;chd=4f3c9c;offset=0;cdOffset=0;validated-hierarchy; map:47315
DATA_CHT_1_COMPGEN(0x008f3c9c, "t_abstract_cache_data<t_animation>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_animation@@@@;vft=4cb544;col=4f3cac;td=5850e4;chd=4f3c9c;offset=0;cdOffset=0;validated-hierarchy; map:47316
DATA_CHT_1_COMPGEN(0x008f3cac, "const t_abstract_cache_data<t_animation>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_counted_object@@;vft=4cb53c;col=4f3cd8;td=5850a0;chd=4f3cc8;offset=0;cdOffset=0;validated-hierarchy; map:47317
DATA_CHT_1_COMPGEN(0x008f3cc0, "t_counted_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_counted_object@@;vft=4cb53c;col=4f3cd8;td=5850a0;chd=4f3cc8;offset=0;cdOffset=0;validated-hierarchy; map:47318
DATA_CHT_1_COMPGEN(0x008f3cc8, "t_counted_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_counted_object@@;vft=4cb53c;col=4f3cd8;td=5850a0;chd=4f3cc8;offset=0;cdOffset=0;validated-hierarchy; map:47319
DATA_CHT_1_COMPGEN(0x008f3cd8, "const t_counted_object::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_cache_base@@;vft=4ccc78;col=4f5c24;td=5850c0;chd=4f5c14;offset=0;cdOffset=0;validated-hierarchy; map:47320
DATA_CHT_1_COMPGEN(0x008f5c04, "t_abstract_cache_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_cache_base@@;vft=4ccc78;col=4f5c24;td=5850c0;chd=4f5c14;offset=0;cdOffset=0;validated-hierarchy; map:47321
DATA_CHT_1_COMPGEN(0x008f5c14, "t_abstract_cache_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_cache_base@@;vft=4ccc78;col=4f5c24;td=5850c0;chd=4f5c14;offset=0;cdOffset=0;validated-hierarchy; map:47322
DATA_CHT_1_COMPGEN(0x008f5c24, "const t_abstract_cache_base::`RTTI Complete Object Locator'")

// === .data (22 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_animation@@@@;td=5851a8;validated-header; map:57259
DATA_CHT_1_COMPGEN(0x009851a8, "t_abstract_cache<t_animation> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_resource_cache@Vt_animation@@@@;td=5851d8;validated-header; map:57260
DATA_CHT_1_COMPGEN(0x009851d8, "t_resource_cache<t_animation> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache@Vt_animation_24@@Vt_animation@@@@;td=585208;validated-header; map:57261
DATA_CHT_1_COMPGEN(0x00985208, "t_conversion_cache<t_animation_24, t_animation> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_animation_cache@@;td=58524c;validated-header; map:57262
DATA_CHT_1_COMPGEN(0x0098524c, "t_animation_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_subimage_base@@;td=58527c;validated-header; map:57263
DATA_CHT_1_COMPGEN(0x0098527c, "t_adv_object_subimage_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_subimage@@;td=5852a8;validated-header; map:57264
DATA_CHT_1_COMPGEN(0x009852a8, "t_adv_object_subimage `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_highlight_subimage@?%C:\Work\game\abstract_adv_actor.cpp746321279@@;td=5852d0;validated-header; map:57265
DATA_CHT_1_COMPGEN(0x009852d0, "t_highlight_subimage `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_flag@@;td=585324;validated-header; map:57266
DATA_CHT_1_COMPGEN(0x00985324, "t_adv_object_flag `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_adv_object@@;td=585344;validated-header; map:57267
DATA_CHT_1_COMPGEN(0x00985344, "t_abstract_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_adv_actor@@;td=585368;validated-header; map:57268
DATA_CHT_1_COMPGEN(0x00985368, "t_abstract_adv_actor `RTTI Type Descriptor'")

// name:A; map symbol; map:57269
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_cache != 0")

// name:A; map symbol; map:57270
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\cached_ptr.h")

// name:A; map symbol; map:57271
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_ptr == 0 || new_ptr != m_ptr...")

// name:A; map symbol; map:57272
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\owned_ptr.h")

// confidence:A; rtti-type-name; type-name=.?AVt_cache_base@@;td=585038;validated-header; map:57273
DATA_CHT_1_COMPGEN(0x00985038, "t_cache_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_resource_cache_base@@;td=585054;validated-header; map:57274
DATA_CHT_1_COMPGEN(0x00985054, "t_abstract_resource_cache_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_uncopyable@@;td=585084;validated-header; map:57275
DATA_CHT_1_COMPGEN(0x00985084, "t_uncopyable `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_counted_object@@;td=5850a0;validated-header; map:57276
DATA_CHT_1_COMPGEN(0x009850a0, "t_counted_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_cache_base@@;td=5850c0;validated-header; map:57277
DATA_CHT_1_COMPGEN(0x009850c0, "t_abstract_cache_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_animation@@@@;td=5850e4;validated-header; map:57278
DATA_CHT_1_COMPGEN(0x009850e4, "t_abstract_cache_data<t_animation> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_animation@@@@;td=58511c;validated-header; map:57279
DATA_CHT_1_COMPGEN(0x0098511c, "t_abstract_resource_cache_data<t_animation> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache_data@Vt_animation_24@@Vt_animation@@@@;td=585160;validated-header; map:57280
DATA_CHT_1_COMPGEN(0x00985160, "t_conversion_cache_data<t_animation_24, t_animation> `RTTI Type Descriptor'")
