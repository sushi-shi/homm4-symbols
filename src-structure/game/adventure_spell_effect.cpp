// adventure_spell_effect.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adventure_spell_effect.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 123/201 (A:42 B:17 C:64); unaccounted 78; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (131 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:69717; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004f43d0, 0x15, STATIC_INIT_DISPATCH, "adventure_spell_effect#1")

// name:C; dyninit; see ledger; map:69718
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_spell_effect#1")

namespace {

// name:A; map symbol; map:12490
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_placer::t_object_placer(
    t_adventure_map& arg_0,
    t_adventure_object& arg_1,
    t_adv_map_point const& arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12491
VA_CHT_1(0x004f43f0, 0xc)
t_object_placer::~t_object_placer()
{
    // Body unavailable.
}

// name:A; map symbol; map:12492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_idle_processing_resumer::t_idle_processing_resumer(t_idle_processor& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:12493
VA_CHT_1(0x004f4400, 0x7)
t_idle_processing_resumer::~t_idle_processing_resumer()
{
    // Body unavailable.
}

// name:A; map symbol; map:12494
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point get_base_point(t_animation const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:12495
VA_CHT_1(0x004f4410, 0xea)
t_adventure_spell_effect::t_adventure_spell_effect(t_adventure_object const& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:12496
VA_CHT_1(0x004f4500, 0x2d)
void t_adventure_spell_effect::accept(t_abstract_adv_object_visitor& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12497
VA_CHT_1(0x004f4580, 0x14)
void t_adventure_spell_effect::accept(t_abstract_adv_object_visitor& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12498
VA_CHT_1(0x004f45d0, 0xe)
bool t_adventure_spell_effect::animates() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::auto_ptr<t_abstract_adv_object> t_adventure_spell_effect::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_spell_effect::draw_shadow_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12501
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_spell_effect::draw_subimage_to(
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

// name:A; map symbol; map:12502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_footprint const& t_adventure_spell_effect::get_footprint() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12503
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_adventure_spell_effect::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12504
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_adventure_spell_effect::get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:12505
VA_CHT_1(0x004f45e0, 0x1e)
t_screen_rect t_adventure_spell_effect::get_shadow_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_adventure_spell_effect::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_spell_effect::get_subimage_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:12508
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_spell_effect::get_subimage_depth_offset(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12509
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_adventure_spell_effect::get_subimage_rect(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12510
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_adventure_spell_effect::get_subimage_rect(int arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12511
VA_CHT_1(0x004f4600, 0x1d)
bool t_adventure_spell_effect::hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12512
VA_CHT_1(0x004f4620, 0x1d)
bool t_adventure_spell_effect::needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_spell_effect::run_modal()
{
    // Body unavailable.
}

// name:A; map symbol; map:12514
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::subimage_animates(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12515
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::subimage_is_underlay(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::subimage_needs_redrawing(
    int arg_0,
    unsigned long arg_1,
    unsigned long arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::write_object(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_adventure_spell_effect::get_size() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:12519
VA_CHT_1(0x004f4730, 0x14)
bool t_adventure_spell_effect::is_cell_flat(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12520
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::is_cell_impassable(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12521
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::is_left_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12522
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::is_right_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:12523
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_spell_effect::is_trigger_cell(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vptr; map:12524
VA_CHT_1(0x004f4780, 0x187)
t_adventure_animation_spell_effect::t_adventure_animation_spell_effect(
    t_adventure_object const& arg_0,
    bool arg_1,
    t_cached_ptr<t_animation> arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12525
VA_CHT_1(0x004f4a10, 0x100)
void t_adventure_animation_spell_effect::draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:12526
VA_CHT_1(0x004f4b10, 0xa1)
t_screen_rect t_adventure_animation_spell_effect::get_rect() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:12527
VA_CHT_1(0x004f4ca0, 0x79)
void t_adventure_animation_spell_effect::run_modal()
{
    // Body unavailable.
}

// name:A; map symbol; map:12528
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_animation_spell_effect::on_idle()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:12529
VA_CHT_1(0x004f4d20, 0xea)
t_adv_magic_resistance_effect::t_adv_magic_resistance_effect(t_army const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12530
VA_CHT_1(0x004f4e50, 0xbf)
t_cached_ptr<t_animation> t_adv_magic_resistance_effect::get_animation()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adv_magic_resistance_effect::get_animation$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; retn,stable,vptr; map:12531
VA_CHT_1(0x004f5090, 0xea)
t_adv_mire_effect::t_adv_mire_effect(t_army const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:12532
VA_CHT_1(0x004f51c0, 0xbf)
t_cached_ptr<t_animation> t_adv_mire_effect::get_animation()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:69720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_adv_mire_effect::get_animation$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69721; name:B (dyninit; see ledger)
VA_CHT_1(0x004f5480, 0x20)
// adventure_spell_effect$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:69723; name:B (dyninit; see ledger)
VA_CHT_1(0x004f54a0, 0x5c)
// adventure_spell_effect$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell_effect$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell_effect$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69726
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_spell_effect$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12533
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_spell_effect)

// name:A; map symbol; map:12534
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_spell_effect)

// name:A; map symbol; map:12535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adventure_spell_effect::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_spell_effect::~t_adventure_spell_effect()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12537
VA_CHT_1_COMPGEN(0x004f4910, 0x33, VECTOR_DELETING_DTOR, t_adventure_animation_spell_effect)

// confidence:A; align-band; retn,vslot; map:12538
VA_CHT_1_COMPGEN(0x004f4750, 0x6, SCALAR_DELETING_DTOR, t_adventure_animation_spell_effect)

// name:A; map symbol; map:12539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adventure_animation_spell_effect::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_animation_spell_effect::~t_adventure_animation_spell_effect()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:12541
VA_CHT_1(0x004f4530, 0x4e)
void t_adventure_spell_effect::finish()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12542
VA_CHT_1_COMPGEN(0x004f4e10, 0x33, VECTOR_DELETING_DTOR, t_adv_magic_resistance_effect)

// name:A; map symbol; map:12543
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_magic_resistance_effect)

// name:A; map symbol; map:12544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_magic_resistance_effect::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_magic_resistance_effect::~t_adv_magic_resistance_effect()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:12546
VA_CHT_1_COMPGEN(0x004f5180, 0x33, SCALAR_DELETING_DTOR, t_adv_mire_effect)

// name:A; map symbol; map:12547
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_mire_effect)

// name:A; map symbol; map:12548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_mire_effect::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12549
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_mire_effect::~t_adv_mire_effect()
{
    // Body unavailable.
}

// name:A; map symbol; map:12550
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_spell_effect)

// name:A; map symbol; map:12551
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_spell_effect)

// name:A; map symbol; map:12552
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_spell_effect)

// name:A; map symbol; map:12553
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual void t_adventure_spell_effect::accept`vtordisp{-4, 0}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual void t_adventure_spell_effect::accept`vtordisp{-4, 0}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual bool t_adventure_spell_effect::animates`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12556
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_spell_effect::clone`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:12557
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual void t_adventure_spell_effect::draw_shadow_to`vtordisp{-4, 0}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12558
VA_CHT_1(0x004f5500, 0x8)
// [thunk]: public: virtual void t_adventure_spell_effect::draw_subimage_to`vtordisp{-4, 0}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12559
VA_CHT_1(0x004f5510, 0x8)
// [thunk]: public: virtual t_footprint const& t_adventure_spell_effect::get_footprint`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12560
VA_CHT_1(0x004f5520, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_rect`vtordisp{-4, 0}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12561
VA_CHT_1(0x004f5530, 0xe)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_shadow_rect`vtordisp{-4, 0}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12562
VA_CHT_1(0x004f5540, 0xb)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_shadow_rect`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12563
VA_CHT_1(0x004f5550, 0xb)
// [thunk]: public: virtual int t_adventure_spell_effect::get_subimage_count`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12564
VA_CHT_1(0x004f5560, 0xb)
// [thunk]: public: virtual int t_adventure_spell_effect::get_subimage_depth_offset`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12565
VA_CHT_1(0x004f5570, 0xb)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_subimage_rect`vtordisp{-4, 0}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12566
VA_CHT_1(0x004f5580, 0xb)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_subimage_rect`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12567
VA_CHT_1(0x004f5590, 0x8)
// [thunk]: public: virtual bool t_adventure_spell_effect::hit_test`vtordisp{-4, 0}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12568
VA_CHT_1(0x004f55a0, 0xb)
// [thunk]: public: virtual bool t_adventure_spell_effect::needs_redrawing`vtordisp{-4, 0}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12569
VA_CHT_1(0x004f55b0, 0xb)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_animates`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12570
VA_CHT_1(0x004f55c0, 0x8)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_is_underlay`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12571
VA_CHT_1(0x004f55d0, 0xb)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_needs_redrawing`vtordisp{-4, 0}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12572
VA_CHT_1(0x004f55e0, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`vtordisp{-4, 16}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12573
VA_CHT_1_COMPGEN(0x004f55f0, 0xb, VECTOR_DELETING_DTOR, t_adv_magic_resistance_effect)

// confidence:C; align-order; stable; map:12574
VA_CHT_1_COMPGEN(0x004f5600, 0xb, VECTOR_DELETING_DTOR, t_adv_magic_resistance_effect)

// confidence:C; align-order; stable; map:12575
VA_CHT_1_COMPGEN(0x004f5610, 0xb, VECTOR_DELETING_DTOR, t_adv_magic_resistance_effect)

// confidence:C; align-order; stable; map:12576
VA_CHT_1_COMPGEN(0x004f5620, 0xb, VECTOR_DELETING_DTOR, t_adv_magic_resistance_effect)

// confidence:C; align-order; stable; map:12577
VA_CHT_1(0x004f5630, 0xb)
// [thunk]: public: virtual void t_adventure_spell_effect::accept`vtordisp{-4, 44}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12578
VA_CHT_1(0x004f5640, 0xb)
// [thunk]: public: virtual void t_adventure_spell_effect::accept`vtordisp{-4, 44}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12579
VA_CHT_1(0x004f5650, 0xb)
// [thunk]: public: virtual bool t_adventure_spell_effect::animates`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12580
VA_CHT_1(0x004f5660, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_spell_effect::clone`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12581
VA_CHT_1(0x004f5670, 0xb)
// [thunk]: public: virtual void t_adventure_spell_effect::draw_shadow_to`vtordisp{-4, 44}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12582
VA_CHT_1(0x004f5680, 0xb)
// [thunk]: public: virtual void t_adventure_spell_effect::draw_subimage_to`vtordisp{-4, 44}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12583
VA_CHT_1(0x004f5690, 0xb)
// [thunk]: public: virtual void t_adventure_animation_spell_effect::draw_to`vtordisp{-4, 0}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12584
VA_CHT_1(0x004f56a0, 0xb)
// [thunk]: public: virtual t_footprint const& t_adventure_spell_effect::get_footprint`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12585
VA_CHT_1(0x004f56b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_rect`vtordisp{-4, 44}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12586
VA_CHT_1(0x004f56c0, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_animation_spell_effect::get_rect`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12587
VA_CHT_1(0x004f56d0, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_shadow_rect`vtordisp{-4, 44}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12588
VA_CHT_1(0x004f56e0, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_shadow_rect`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12589
VA_CHT_1(0x004f56f0, 0xe)
// [thunk]: public: virtual int t_adventure_spell_effect::get_subimage_count`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12590
VA_CHT_1(0x004f5700, 0x8)
// [thunk]: public: virtual int t_adventure_spell_effect::get_subimage_depth_offset`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12591
VA_CHT_1(0x004f5710, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_subimage_rect`vtordisp{-4, 44}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12592
VA_CHT_1(0x004f5720, 0x8)
// [thunk]: public: virtual t_screen_rect t_adventure_spell_effect::get_subimage_rect`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12593
VA_CHT_1(0x004f5730, 0xe)
// [thunk]: public: virtual bool t_adventure_spell_effect::hit_test`vtordisp{-4, 44}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12594
VA_CHT_1(0x004f5740, 0x8)
// [thunk]: public: virtual bool t_adventure_spell_effect::needs_redrawing`vtordisp{-4, 44}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12595
VA_CHT_1(0x004f5750, 0x8)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_animates`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12596
VA_CHT_1(0x004f5760, 0xb)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_is_underlay`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12597
VA_CHT_1(0x004f5770, 0x8)
// [thunk]: public: virtual bool t_adventure_spell_effect::subimage_needs_redrawing`vtordisp{-4, 44}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12598
VA_CHT_1(0x004f5780, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12599
VA_CHT_1(0x004f5790, 0x8)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12600
VA_CHT_1(0x004f57a0, 0x8)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12601
VA_CHT_1(0x004f57b0, 0x8)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 60}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12602
VA_CHT_1(0x004f57c0, 0x8)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12603
VA_CHT_1(0x004f57d0, 0x8)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 60}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:12604
VA_CHT_1_COMPGEN(0x004f57e0, 0x8, VECTOR_DELETING_DTOR, t_adv_mire_effect)

// confidence:C; align-order; stable; map:12605
VA_CHT_1_COMPGEN(0x004f57f0, 0x8, VECTOR_DELETING_DTOR, t_adv_mire_effect)

// confidence:C; align-order; stable; map:12606
VA_CHT_1_COMPGEN(0x004f5800, 0x8, VECTOR_DELETING_DTOR, t_adv_mire_effect)

// confidence:C; align-order; stable; map:12607
VA_CHT_1_COMPGEN(0x004f5810, 0x8, VECTOR_DELETING_DTOR, t_adv_mire_effect)

// confidence:C; align-order; stable; map:12608
VA_CHT_1_COMPGEN(0x004f5820, 0x8, VECTOR_DELETING_DTOR, t_adventure_animation_spell_effect)

// confidence:C; align-order; stable; map:12609
VA_CHT_1_COMPGEN(0x004f5830, 0x8, VECTOR_DELETING_DTOR, t_adventure_animation_spell_effect)

// confidence:C; align-order; stable; map:12610
VA_CHT_1_COMPGEN(0x004f5840, 0x8, VECTOR_DELETING_DTOR, t_adventure_animation_spell_effect)

// confidence:C; align-order; stable; map:12611
VA_CHT_1_COMPGEN(0x004f5850, 0xb, VECTOR_DELETING_DTOR, t_adventure_animation_spell_effect)

// === .rdata (27 symbols) ===

// name:A; map symbol; map:43326
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`vftable'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:43327
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:43328
DATA_CHT_1_COMPGEN(0x008d4604, "const t_adventure_spell_effect::`vftable'")

// confidence:B; rtti-order; map:43329
DATA_CHT_1_COMPGEN(0x008d46f8, "const t_adventure_spell_effect::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43330
DATA_CHT_1_COMPGEN(0x008d4704, "const t_adventure_spell_effect::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43331
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`vbtable'")

// confidence:B; rtti-order; map:43332
DATA_CHT_1_COMPGEN(0x008d47bc, "const t_adventure_animation_spell_effect::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:43333
DATA_CHT_1_COMPGEN(0x008d47fc, "const t_adventure_animation_spell_effect::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:43334
DATA_CHT_1_COMPGEN(0x008d487c, "const t_adventure_animation_spell_effect::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43335
DATA_CHT_1_COMPGEN(0x008d4888, "const t_adventure_animation_spell_effect::`vftable'{for `t_adventure_spell_effect'}")

// confidence:B; rtti-order; map:43336
DATA_CHT_1_COMPGEN(0x008d48bc, "const t_adventure_animation_spell_effect::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43337
DATA_CHT_1_COMPGEN(0x008d48c4, "const t_adventure_animation_spell_effect::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43338
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`vbtable'")

// confidence:B; rtti-order; map:43339
DATA_CHT_1_COMPGEN(0x008d497c, "const t_adv_magic_resistance_effect::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:43340
DATA_CHT_1_COMPGEN(0x008d49bc, "const t_adv_magic_resistance_effect::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:43341
DATA_CHT_1_COMPGEN(0x008d4a3c, "const t_adv_magic_resistance_effect::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43342
DATA_CHT_1_COMPGEN(0x008d4a48, "const t_adv_magic_resistance_effect::`vftable'{for `t_adventure_spell_effect'}")

// confidence:B; rtti-order; map:43343
DATA_CHT_1_COMPGEN(0x008d4a7c, "const t_adv_magic_resistance_effect::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43344
DATA_CHT_1_COMPGEN(0x008d4a84, "const t_adv_magic_resistance_effect::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43345
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`vbtable'")

// confidence:B; rtti-order; map:43346
DATA_CHT_1_COMPGEN(0x008d4b3c, "const t_adv_mire_effect::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:43347
DATA_CHT_1_COMPGEN(0x008d4b7c, "const t_adv_mire_effect::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:43348
DATA_CHT_1_COMPGEN(0x008d4bfc, "const t_adv_mire_effect::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43349
DATA_CHT_1_COMPGEN(0x008d4c08, "const t_adv_mire_effect::`vftable'{for `t_adventure_spell_effect'}")

// confidence:B; rtti-order; map:43350
DATA_CHT_1_COMPGEN(0x008d4c3c, "const t_adv_mire_effect::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43351
DATA_CHT_1_COMPGEN(0x008d4c44, "const t_adv_mire_effect::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43352
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`vbtable'")

// === .rdata$r (37 symbols) ===

// name:A; map symbol; map:49127
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:49128
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_spell_effect@@;vft=4d4604;col=4fc704;td=58f1b8;chd=4fc6f4;offset=92;cdOffset=0;validated-hierarchy; map:49129
DATA_CHT_1_COMPGEN(0x008fc704, "const t_adventure_spell_effect::`RTTI Complete Object Locator'")

// name:A; map symbol; map:49130
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_footprint@@;bcd=4fc6a4;pmd=64,-1,0;attributes=9;validated-hierarchy-link; map:49131
DATA_CHT_1_COMPGEN(0x008fc6a4, "t_footprint::`RTTI Base Class Descriptor at (64, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_spell_effect@@;bcd=4fc6bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49132
DATA_CHT_1_COMPGEN(0x008fc6bc, "t_adventure_spell_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_spell_effect@@;vft=4d4604;col=4fc704;td=58f1b8;chd=4fc6f4;offset=92;cdOffset=0;validated-hierarchy; map:49133
DATA_CHT_1_COMPGEN(0x008fc6d4, "t_adventure_spell_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_spell_effect@@;vft=4d4604;col=4fc704;td=58f1b8;chd=4fc6f4;offset=92;cdOffset=0;validated-hierarchy; map:49134
DATA_CHT_1_COMPGEN(0x008fc6f4, "t_adventure_spell_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49135
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_spell_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49136
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:49137
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_animation_spell_effect@@;vft=4d487c;col=4fc754;td=58f1e0;chd=4fc7d4;offset=80;cdOffset=0;validated-hierarchy; map:49138
DATA_CHT_1_COMPGEN(0x008fc754, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// name:A; map symbol; map:49139
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_adventure_spell_effect'}")

// name:A; map symbol; map:49140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_idle_processor@@;bcd=4fc77c;pmd=80,-1,0;attributes=9;validated-hierarchy-link; map:49141
DATA_CHT_1_COMPGEN(0x008fc77c, "t_idle_processor::`RTTI Base Class Descriptor at (80, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_animation_spell_effect@@;bcd=4fc794;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49142
DATA_CHT_1_COMPGEN(0x008fc794, "t_adventure_animation_spell_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_animation_spell_effect@@;vft=4d487c;col=4fc754;td=58f1e0;chd=4fc7d4;offset=80;cdOffset=0;validated-hierarchy; map:49143
DATA_CHT_1_COMPGEN(0x008fc7ac, "t_adventure_animation_spell_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_animation_spell_effect@@;vft=4d487c;col=4fc754;td=58f1e0;chd=4fc7d4;offset=80;cdOffset=0;validated-hierarchy; map:49144
DATA_CHT_1_COMPGEN(0x008fc7d4, "t_adventure_animation_spell_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49145
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_animation_spell_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49146
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:49147
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_magic_resistance_effect@@;vft=4d4a3c;col=4fc834;td=58f214;chd=4fc8a0;offset=80;cdOffset=0;validated-hierarchy; map:49148
DATA_CHT_1_COMPGEN(0x008fc834, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// name:A; map symbol; map:49149
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_adventure_spell_effect'}")

// name:A; map symbol; map:49150
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_magic_resistance_effect@@;bcd=4fc85c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49151
DATA_CHT_1_COMPGEN(0x008fc85c, "t_adv_magic_resistance_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_magic_resistance_effect@@;vft=4d4a3c;col=4fc834;td=58f214;chd=4fc8a0;offset=80;cdOffset=0;validated-hierarchy; map:49152
DATA_CHT_1_COMPGEN(0x008fc874, "t_adv_magic_resistance_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_magic_resistance_effect@@;vft=4d4a3c;col=4fc834;td=58f214;chd=4fc8a0;offset=80;cdOffset=0;validated-hierarchy; map:49153
DATA_CHT_1_COMPGEN(0x008fc8a0, "t_adv_magic_resistance_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49154
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_magic_resistance_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49155
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:49156
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_mire_effect@@;vft=4d4bfc;col=4fc900;td=58f264;chd=4fc96c;offset=80;cdOffset=0;validated-hierarchy; map:49157
DATA_CHT_1_COMPGEN(0x008fc900, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// name:A; map symbol; map:49158
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_adventure_spell_effect'}")

// name:A; map symbol; map:49159
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_mire_effect@@;bcd=4fc928;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49160
DATA_CHT_1_COMPGEN(0x008fc928, "t_adv_mire_effect::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_mire_effect@@;vft=4d4bfc;col=4fc900;td=58f264;chd=4fc96c;offset=80;cdOffset=0;validated-hierarchy; map:49161
DATA_CHT_1_COMPGEN(0x008fc940, "t_adv_mire_effect::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_mire_effect@@;vft=4d4bfc;col=4fc900;td=58f264;chd=4fc96c;offset=80;cdOffset=0;validated-hierarchy; map:49162
DATA_CHT_1_COMPGEN(0x008fc96c, "t_adv_mire_effect::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49163
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_mire_effect::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_spell_effect@@;td=58f1b8;validated-header; map:57779
DATA_CHT_1_COMPGEN(0x0098f1b8, "t_adventure_spell_effect `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_animation_spell_effect@@;td=58f1e0;validated-header; map:57780
DATA_CHT_1_COMPGEN(0x0098f1e0, "t_adventure_animation_spell_effect `RTTI Type Descriptor'")

// name:A; map symbol; map:57781
DATA_CHT_1_COMPGEN(UNACCOUNTED, "!m_done")

// name:A; map symbol; map:57782
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\adventure_spell_eff...")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_magic_resistance_effect@@;td=58f214;validated-header; map:57783
DATA_CHT_1_COMPGEN(0x0098f214, "t_adv_magic_resistance_effect `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_mire_effect@@;td=58f264;validated-header; map:57784
DATA_CHT_1_COMPGEN(0x0098f264, "t_adv_mire_effect `RTTI Type Descriptor'")
