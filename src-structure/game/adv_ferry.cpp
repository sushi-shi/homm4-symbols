// adv_ferry.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_ferry.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 74/122 (A:30 B:5 C:39); unaccounted 48; skipped std 60.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (87 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71146; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00439c50, 0x15, STATIC_INIT_DISPATCH, "adv_ferry#1")

// name:C; dyninit; see ledger; map:71147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_ferry#1")

// confidence:A; dyninit-init; owner-conf-B; map:71148; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00439c70, 0x1c, STATIC_INIT_DISPATCH, g_adv_ferry_registration)

// name:B; dyninit; see ledger; map:71149
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_adv_ferry_registration)

// confidence:A; align-order; retn,stable,vptr; map:4451
VA_CHT_1(0x00439c90, 0x15e)
t_adv_ferry::t_adv_ferry(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4452
VA_CHT_1(0x00439f70, 0xa75)
void t_adv_ferry::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4453
VA_CHT_1(0x0043aab0, 0x81)
void t_adv_ferry::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4454
VA_CHT_1(0x0043ab40, 0x75)
void t_adv_ferry::destroy()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:4455
VA_CHT_1(0x0043abc0, 0x10a)
void t_adv_ferry::pathing_destination_query(
    t_adventure_path_point const& arg_0,
    t_adventure_path_finder& arg_1
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71150; name:B (dyninit; see ledger)
VA_CHT_1(0x0043b320, 0x20)
// adv_ferry$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71152; name:B (dyninit; see ledger)
VA_CHT_1(0x0043b340, 0x5c)
// adv_ferry$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_ferry$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_ferry$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_ferry$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4456
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway_base::t_gateway_base(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4457
VA_CHT_1_COMPGEN(0x00439df0, 0x2d, SCALAR_DELETING_DTOR, t_gateway_base)

// name:A; map symbol; map:4458
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_gateway_base)

// confidence:C; align-band; retn,stable; map:4459
VA_CHT_1(0x0043a9f0, 0x30)
// public: void t_gateway_base::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4460
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway_base::~t_gateway_base()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4461
VA_CHT_1_COMPGEN(0x00439eb0, 0x2d, VECTOR_DELETING_DTOR, t_adv_ferry)

// name:A; map symbol; map:4462
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_ferry)

// name:A; map symbol; map:4463
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_ferry::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:4464
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ferry::~t_adv_ferry()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4465
VA_CHT_1(0x0043aa20, 0x89)
t_adv_map_point operator+(t_adv_map_point const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:4466
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_map_point& t_adv_map_point::operator+=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4467
VA_CHT_1(0x0043b2f0, 0x21)
t_handler_1<t_army*>::~t_handler_1<t_army*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_army*>>::~t_counted_ptr<t_handler_base_1<t_army*>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d_list::t_level_map_point_2d_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:4470
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d_list::~t_level_map_point_2d_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:4471
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_teleporter_entrance>::~t_counted_ptr<t_dialog_teleporter_entrance>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4472
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_level_map_point_2d_list::t_level_map_point_2d_list(t_level_map_point_2d_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4473
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_ferry>::~t_counted_const_ptr<t_adv_ferry>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4474
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array* t_adventure_enemy_marker::get_army()
{
    // Body unavailable.
}

// name:A; map symbol; map:4475
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&>::t_handler_2<t_adv_map_point const&, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4476
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_army*>::t_handler_1<t_army*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4526
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:4527
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_army*>>::t_counted_ptr<t_handler_base_1<t_army*>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4528
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_ferry>::t_counted_const_ptr<t_adv_ferry>(t_adv_ferry const* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4529
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ferry const* t_counted_const_ptr<t_adv_ferry>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4530
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ferry const* t_counted_const_ptr<t_adv_ferry>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4531
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ferry const& t_counted_const_ptr<t_adv_ferry>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4532
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_ferry>::t_object_registration<t_adv_ferry>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:4533
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gateway_base const* ai_select_gateway_exit(
    t_adventure_path const& arg_0,
    std::vector<t_counted_const_ptr<t_adv_ferry>, std::allocator<t_counted_const_ptr<t_adv_ferry>>>& arg_1,
    t_gateway_base const* arg_2,
    t_creature_array* arg_3,
    t_adv_map_point arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4534
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_teleporter_entrance>::t_counted_ptr<t_dialog_teleporter_entrance>()
{
    // Body unavailable.
}

// name:A; map symbol; map:4535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_teleporter_entrance>& t_counted_ptr<t_dialog_teleporter_entrance>::operator=(
    t_dialog_teleporter_entrance* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_teleporter_entrance* t_counted_ptr<t_dialog_teleporter_entrance>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:4544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_ferry>::t_object_factory<t_adv_ferry>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:4545
VA_CHT_1(0x0043afd0, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_ferry>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:4546
VA_CHT_1_COMPGEN(0x0043ad70, 0x52, SCALAR_DELETING_DTOR, "t_counted_const_ptr<t_adv_ferry>")

// name:A; map symbol; map:4550
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_ferry>::t_counted_const_ptr<t_adv_ferry>(
    t_counted_const_ptr<t_adv_ferry> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4551
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_const_ptr<t_adv_ferry>& t_counted_const_ptr<t_adv_ferry>::operator=(
    t_counted_const_ptr<t_adv_ferry> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:4552
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_ferry const* t_counted_const_ptr<t_adv_ferry>::operator t_adv_ferry const*() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:4553
VA_CHT_1_COMPGEN(0x0043b3a0, 0x8, VECTOR_DELETING_DTOR, t_adv_ferry)

// confidence:C; align-order; stable; map:4554
VA_CHT_1_COMPGEN(0x0043b3b0, 0xb, VECTOR_DELETING_DTOR, t_adv_ferry)

// confidence:C; align-order; stable; map:4555
VA_CHT_1(0x0043b3c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 16}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4556
VA_CHT_1(0x0043b3d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 16}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4557
VA_CHT_1(0x0043b3e0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4558
VA_CHT_1(0x0043b3f0, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4559
VA_CHT_1(0x0043b400, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 16}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4560
VA_CHT_1(0x0043b410, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 16}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4561
VA_CHT_1(0x0043b420, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 16}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4562
VA_CHT_1(0x0043b430, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 16}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4563
VA_CHT_1(0x0043b440, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 16}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4564
VA_CHT_1(0x0043b450, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 16}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4565
VA_CHT_1(0x0043b460, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4566
VA_CHT_1(0x0043b470, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 16}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4567
VA_CHT_1(0x0043b480, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4568
VA_CHT_1(0x0043b490, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 16}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4569
VA_CHT_1(0x0043b4a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4570
VA_CHT_1(0x0043b4b0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4571
VA_CHT_1(0x0043b4c0, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 16}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4572
VA_CHT_1(0x0043b4d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 16}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4573
VA_CHT_1(0x0043b4e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 16}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4574
VA_CHT_1(0x0043b4f0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 16}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4575
VA_CHT_1(0x0043b500, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4576
VA_CHT_1(0x0043b510, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 16}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4577
VA_CHT_1(0x0043b520, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 16}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4578
VA_CHT_1(0x0043b530, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 16}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4579
VA_CHT_1(0x0043b540, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 16}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4580
VA_CHT_1(0x0043b550, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4581
VA_CHT_1(0x0043b560, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4582
VA_CHT_1(0x0043b570, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4583
VA_CHT_1(0x0043b580, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 24}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4584
VA_CHT_1(0x0043b590, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4585
VA_CHT_1(0x0043b5a0, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 24}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4586
VA_CHT_1_COMPGEN(0x0043b5b0, 0x8, VECTOR_DELETING_DTOR, t_gateway_base)

// confidence:C; align-order; stable; map:4587
VA_CHT_1_COMPGEN(0x0043b5c0, 0xb, VECTOR_DELETING_DTOR, t_gateway_base)

// === .rdata (13 symbols) ===

// name:A; map symbol; map:42802
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42803
DATA_CHT_1_COMPGEN(0x008cf014, "const t_adv_ferry::`vftable'")

// confidence:B; rtti-order; map:42804
DATA_CHT_1_COMPGEN(0x008cf0d4, "const t_adv_ferry::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42805
DATA_CHT_1_COMPGEN(0x008cf0dc, "const t_adv_ferry::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42806
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42807
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42808
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42809
DATA_CHT_1_COMPGEN(0x008cf194, "const t_gateway_base::`vftable'")

// confidence:B; rtti-order; map:42810
DATA_CHT_1_COMPGEN(0x008cf254, "const t_gateway_base::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42811
DATA_CHT_1_COMPGEN(0x008cf25c, "const t_gateway_base::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42812
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42813
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42814
DATA_CHT_1_COMPGEN(0x008cf00c, "const t_object_factory<t_adv_ferry>::`vftable'")

// === .rdata$r (18 symbols) ===

// name:A; map symbol; map:47986
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_ferry@@;vft=4cf014;col=4f7218;td=5887e0;chd=4f7208;offset=100;cdOffset=0;validated-hierarchy; map:47987
DATA_CHT_1_COMPGEN(0x008f7218, "const t_adv_ferry::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47988
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_gateway_base@@;bcd=4f71ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47989
DATA_CHT_1_COMPGEN(0x008f71ac, "t_gateway_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_ferry@@;bcd=4f71c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47990
DATA_CHT_1_COMPGEN(0x008f71c4, "t_adv_ferry::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_ferry@@;vft=4cf014;col=4f7218;td=5887e0;chd=4f7208;offset=100;cdOffset=0;validated-hierarchy; map:47991
DATA_CHT_1_COMPGEN(0x008f71dc, "t_adv_ferry::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_ferry@@;vft=4cf014;col=4f7218;td=5887e0;chd=4f7208;offset=100;cdOffset=0;validated-hierarchy; map:47992
DATA_CHT_1_COMPGEN(0x008f7208, "t_adv_ferry::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47993
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_ferry::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47994
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_gateway_base@@;vft=4cf194;col=4f715c;td=5887c0;chd=4f714c;offset=100;cdOffset=0;validated-hierarchy; map:47995
DATA_CHT_1_COMPGEN(0x008f715c, "const t_gateway_base::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47996
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_gateway_base@@;vft=4cf194;col=4f715c;td=5887c0;chd=4f714c;offset=100;cdOffset=0;validated-hierarchy; map:47997
DATA_CHT_1_COMPGEN(0x008f7124, "t_gateway_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_gateway_base@@;vft=4cf194;col=4f715c;td=5887c0;chd=4f714c;offset=100;cdOffset=0;validated-hierarchy; map:47998
DATA_CHT_1_COMPGEN(0x008f714c, "t_gateway_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47999
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_gateway_base::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_ferry@@@@;bcd=4f70a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48000
DATA_CHT_1_COMPGEN(0x008f70a0, "t_object_factory<t_adv_ferry>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ferry@@@@;vft=4cf00c;col=4f70d4;td=588790;chd=4f70c4;offset=0;cdOffset=0;validated-hierarchy; map:48001
DATA_CHT_1_COMPGEN(0x008f70b8, "t_object_factory<t_adv_ferry>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ferry@@@@;vft=4cf00c;col=4f70d4;td=588790;chd=4f70c4;offset=0;cdOffset=0;validated-hierarchy; map:48002
DATA_CHT_1_COMPGEN(0x008f70c4, "t_object_factory<t_adv_ferry>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_ferry@@@@;vft=4cf00c;col=4f70d4;td=588790;chd=4f70c4;offset=0;cdOffset=0;validated-hierarchy; map:48003
DATA_CHT_1_COMPGEN(0x008f70d4, "const t_object_factory<t_adv_ferry>::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_gateway_base@@;td=5887c0;validated-header; map:57477
DATA_CHT_1_COMPGEN(0x009887c0, "t_gateway_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_ferry@@;td=5887e0;validated-header; map:57478
DATA_CHT_1_COMPGEN(0x009887e0, "t_adv_ferry `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_ferry@@@@;td=588790;validated-header; map:57479
DATA_CHT_1_COMPGEN(0x00988790, "t_object_factory<t_adv_ferry> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59950
DATA_CHT_1(0x009c73e8)
t_object_registration<t_adv_ferry> g_adv_ferry_registration; // Initial value unavailable.

} // anonymous namespace
