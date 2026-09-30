// actor.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 81/119 (A:35 B:10 C:36); unaccounted 38; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (93 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71327; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00419500, 0x15, STATIC_INIT_DISPATCH, "actor#1")

// name:C; dyninit; see ledger; map:71328
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "actor#1")

// confidence:A; align-order; retn,stable,vptr; map:2371
VA_CHT_1(0x00419520, 0x10a)
t_actor::t_actor()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2372
VA_CHT_1(0x00419720, 0x1f)
bool t_actor::do_animates() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2373
VA_CHT_1(0x00419740, 0x1c)
bool t_actor::has_action(t_adv_actor_action_id arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2374
VA_CHT_1(0x00419760, 0x1a2)
void t_actor::set_action(t_adv_actor_action_id arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2375
VA_CHT_1(0x00419910, 0x1c)
void t_actor::on_model_changed()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2376
VA_CHT_1(0x00419930, 0x17e)
void t_actor::set_direction(t_direction arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_actor::do_visible_through_obstacles() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2378
VA_CHT_1(0x00419ab0, 0xac)
void t_actor::draw_shadow_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2379
VA_CHT_1(0x00419b60, 0x72)
void t_actor::draw_shadow_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2380
VA_CHT_1(0x00419be0, 0xa0)
void t_actor::do_draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2381
VA_CHT_1(0x00419c80, 0x67)
void t_actor::do_draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2382
VA_CHT_1(0x00419cf0, 0x5d)
t_screen_rect t_actor::do_get_rect() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2383
VA_CHT_1(0x00419d50, 0x7a)
t_screen_rect t_actor::do_get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2384
VA_CHT_1(0x00419dd0, 0x61)
t_screen_rect t_actor::get_shadow_rect() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2385
VA_CHT_1(0x00419e40, 0x83)
t_screen_rect t_actor::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2386
VA_CHT_1(0x00419ed0, 0x60)
bool t_actor::do_hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_actor::do_needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2388
VA_CHT_1(0x00419f90, 0x2e)
int t_actor::get_frame(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2389
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor::turn_to(t_direction arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2390
VA_CHT_1(0x00419fc0, 0x17d)
bool t_actor::write_object(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2391
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_actor::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2392
VA_CHT_1(0x0041a340, 0x29)
void t_actor::set_frame_offset(t_screen_point const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:2393
VA_CHT_1(0x0041a370, 0x21)
void t_actor::set_frame(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:2394
VA_CHT_1(0x0041a3a0, 0x12)
t_screen_point t_actor::get_frame_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2395
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_actor::is_actor() const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71329; name:B (dyninit; see ledger)
VA_CHT_1(0x0041a600, 0x20)
// actor$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71331; name:B (dyninit; see ledger)
VA_CHT_1(0x0041a620, 0x5c)
// actor$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// actor$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// actor$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// actor$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:2396
VA_CHT_1_COMPGEN(0x00419630, 0x34, SCALAR_DELETING_DTOR, t_actor)

// name:A; map symbol; map:2397
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_actor)

// name:A; map symbol; map:2398
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_actor::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:2399
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor::~t_actor()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:2400
VA_CHT_1(0x0041a3c0, 0x74)
t_cached_ptr<t_actor_sequence>::t_cached_ptr<t_actor_sequence>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:2401
VA_CHT_1(0x00419670, 0xa6)
t_cached_ptr<t_actor_sequence>::~t_cached_ptr<t_actor_sequence>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2402
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_actor_sequence>& t_cached_ptr<t_actor_sequence>::operator=(
    t_cached_ptr<t_actor_sequence> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:2403
VA_CHT_1(0x0041a440, 0x1d)
t_abstract_cache<t_actor_sequence>::~t_abstract_cache<t_actor_sequence>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:2404
VA_CHT_1(0x0041a460, 0x195)
t_cached_ptr<t_actor_sequence> t_abstract_cache<t_actor_sequence>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2405
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2406
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_screen_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2407
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_direction const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2408
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_adv_actor_action_id const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2409
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2410
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2411
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direction get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2412
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_action_id get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2413
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_actor_sequence>")

// name:A; map symbol; map:2414
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_actor_sequence>")

// name:A; map symbol; map:2415
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::~t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:2416
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_actor_sequence>::t_cached_ptr<t_actor_sequence>(t_cached_ptr<t_actor_sequence> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_actor_sequence>::t_cached_ptr<t_actor_sequence>(
    t_actor_sequence* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2418
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_actor_sequence>::assign(t_actor_sequence* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2419
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence* t_cached_ptr<t_actor_sequence>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2420
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>(
    t_abstract_cache_data<t_actor_sequence>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2421
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_actor_sequence>* t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::operator t_abstract_cache_data<t_actor_sequence>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2422
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_actor_sequence>* t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2423
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_actor)

// confidence:C; align-order; map:2424
VA_CHT_1_COMPGEN(0x0041a680, 0x8, VECTOR_DELETING_DTOR, t_actor)

// confidence:C; align-order; map:2425
VA_CHT_1(0x0041a690, 0xb)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 104}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2426
VA_CHT_1(0x0041a6a0, 0xb)
// [thunk]: public: virtual void t_abstract_adv_actor::accept`vtordisp{-4, 104}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2427
VA_CHT_1(0x0041a6b0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::animates`vtordisp{-4, 104}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2428
VA_CHT_1(0x0041a6c0, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2429
VA_CHT_1(0x0041a6d0, 0x8)
// [thunk]: public: virtual void t_actor::draw_shadow_to`vtordisp{-4, 0}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2430
VA_CHT_1(0x0041a6e0, 0x8)
// [thunk]: public: virtual void t_actor::draw_shadow_to`vtordisp{-4, 0}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2431
VA_CHT_1(0x0041a6f0, 0x8)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 104}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2432
VA_CHT_1(0x0041a700, 0xb)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_subimage_to`vtordisp{-4, 104}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2433
VA_CHT_1(0x0041a710, 0xb)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 104}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2434
VA_CHT_1(0x0041a720, 0xb)
// [thunk]: public: virtual void t_abstract_adv_actor::draw_to`vtordisp{-4, 104}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2435
VA_CHT_1(0x0041a730, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_adv_actor::get_footprint`vtordisp{-4, 104}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2436
VA_CHT_1(0x0041a740, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 104}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2437
VA_CHT_1(0x0041a750, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_rect`vtordisp{-4, 104}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2438
VA_CHT_1(0x0041a760, 0xb)
// [thunk]: public: virtual t_screen_rect t_actor::get_shadow_rect`vtordisp{-4, 0}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2439
VA_CHT_1(0x0041a770, 0x8)
// [thunk]: public: virtual t_screen_rect t_actor::get_shadow_rect`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2440
VA_CHT_1(0x0041a780, 0x8)
// [thunk]: public: virtual int t_abstract_adv_actor::get_subimage_count`vtordisp{-4, 104}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2441
VA_CHT_1(0x0041a790, 0xb)
// [thunk]: public: virtual int t_abstract_adv_actor::get_subimage_depth_offset`vtordisp{-4, 104}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2442
VA_CHT_1(0x0041a7a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 104}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2443
VA_CHT_1(0x0041a7b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_adv_actor::get_subimage_rect`vtordisp{-4, 104}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2444
VA_CHT_1(0x0041a7c0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::hit_test`vtordisp{-4, 104}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2445
VA_CHT_1(0x0041a7d0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::needs_redrawing`vtordisp{-4, 104}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2446
VA_CHT_1(0x0041a7e0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_animates`vtordisp{-4, 104}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2447
VA_CHT_1(0x0041a7f0, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_is_underlay`vtordisp{-4, 104}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2448
VA_CHT_1(0x0041a800, 0xb)
// [thunk]: public: virtual bool t_abstract_adv_actor::subimage_needs_redrawing`vtordisp{-4, 104}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2449
VA_CHT_1(0x0041a810, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2450
VA_CHT_1(0x0041a820, 0x8)
// [thunk]: public: virtual bool t_abstract_adv_actor::visible_through_obstacles`vtordisp{-4, 104}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2451
VA_CHT_1(0x0041a830, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2452
VA_CHT_1(0x0041a840, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2453
VA_CHT_1(0x0041a850, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 40}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2454
VA_CHT_1(0x0041a860, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2455
VA_CHT_1(0x0041a870, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 40}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; map:2456
VA_CHT_1(0x0041a880, 0xb)
// [thunk]: public: virtual bool t_actor::is_actor`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (8 symbols) ===

// confidence:B; rtti-order; map:42593
DATA_CHT_1_COMPGEN(0x008cc4ec, "const t_actor::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:42594
DATA_CHT_1_COMPGEN(0x008cc52c, "const t_actor::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:42595
DATA_CHT_1_COMPGEN(0x008cc5ac, "const t_actor::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42596
DATA_CHT_1_COMPGEN(0x008cc5b4, "const t_actor::`vftable'{for `t_counted_object'}")

// confidence:B; rtti-order; map:42597
DATA_CHT_1_COMPGEN(0x008cc65c, "const t_actor::`vftable'{for `t_abstract_adv_actor'}")

// name:A; map symbol; map:42598
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42599
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`vbtable'{for `t_abstract_adv_actor'}")

// confidence:A; rtti-name; map:42600
DATA_CHT_1_COMPGEN(0x008cc6a8, "const t_abstract_cache<t_actor_sequence>::`vftable'")

// === .rdata$r (16 symbols) ===

// name:A; map symbol; map:47543
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:47544
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_actor@@;vft=4cc5ac;col=4f4dac;td=585bd0;chd=4f4e70;offset=20;cdOffset=0;validated-hierarchy; map:47545
DATA_CHT_1_COMPGEN(0x008f4dac, "const t_actor::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// name:A; map symbol; map:47546
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object_memory_cache_refrence@@;bcd=4f4dd4;pmd=20,-1,0;attributes=0;validated-hierarchy-link; map:47547
DATA_CHT_1_COMPGEN(0x008f4dd4, "t_adventure_object_memory_cache_refrence::`RTTI Base Class Descriptor at (20, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_counted_object@@;bcd=4f4dec;pmd=12,-1,0;attributes=0;validated-hierarchy-link; map:47548
DATA_CHT_1_COMPGEN(0x008f4dec, "t_counted_object::`RTTI Base Class Descriptor at (12, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_map_info@@;bcd=4f4e04;pmd=0,4,8;attributes=16;validated-hierarchy-link; map:47549
DATA_CHT_1_COMPGEN(0x008f4e04, "t_adv_object_map_info::`RTTI Base Class Descriptor at (0, 4, 8, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object@@;bcd=4f4e1c;pmd=12,-1,0;attributes=0;validated-hierarchy-link; map:47550
DATA_CHT_1_COMPGEN(0x008f4e1c, "t_adventure_object::`RTTI Base Class Descriptor at (12, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_actor@@;bcd=4f4e34;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47551
DATA_CHT_1_COMPGEN(0x008f4e34, "t_actor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_actor@@;vft=4cc5ac;col=4f4dac;td=585bd0;chd=4f4e70;offset=20;cdOffset=0;validated-hierarchy; map:47552
DATA_CHT_1_COMPGEN(0x008f4e4c, "t_actor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_actor@@;vft=4cc5ac;col=4f4dac;td=585bd0;chd=4f4e70;offset=20;cdOffset=0;validated-hierarchy; map:47553
DATA_CHT_1_COMPGEN(0x008f4e70, "t_actor::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47554
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_actor::`RTTI Complete Object Locator'{for `t_abstract_adv_actor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_actor_sequence@@@@;bcd=4f4e94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47555
DATA_CHT_1_COMPGEN(0x008f4e94, "t_abstract_cache<t_actor_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_actor_sequence@@@@;vft=4cc6a8;col=4f4ec4;td=585be8;chd=4f4eb4;offset=0;cdOffset=0;validated-hierarchy; map:47556
DATA_CHT_1_COMPGEN(0x008f4eac, "t_abstract_cache<t_actor_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_actor_sequence@@@@;vft=4cc6a8;col=4f4ec4;td=585be8;chd=4f4eb4;offset=0;cdOffset=0;validated-hierarchy; map:47557
DATA_CHT_1_COMPGEN(0x008f4eb4, "t_abstract_cache<t_actor_sequence>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_actor_sequence@@@@;vft=4cc6a8;col=4f4ec4;td=585be8;chd=4f4eb4;offset=0;cdOffset=0;validated-hierarchy; map:47558
DATA_CHT_1_COMPGEN(0x008f4ec4, "const t_abstract_cache<t_actor_sequence>::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_actor@@;td=585bd0;validated-header; map:57364
DATA_CHT_1_COMPGEN(0x00985bd0, "t_actor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_actor_sequence@@@@;td=585be8;validated-header; map:57365
DATA_CHT_1_COMPGEN(0x00985be8, "t_abstract_cache<t_actor_sequence> `RTTI Type Descriptor'")
