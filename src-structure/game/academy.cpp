// academy.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 69/99 (A:20 B:4 C:0); unaccounted 30; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (59 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71335; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00418da0, 0x1c, STATIC_INIT_DISPATCH, "academy#1")

// name:C; dyninit; see ledger; map:71336
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "academy#1")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:2315
VA_CHT_1(0x00418dc0, 0x157)
t_academy::t_academy(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2316
VA_CHT_1(0x00418fb0, 0x2d)
bool t_academy::are_all_heroes_ineligible(t_army* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2317
VA_CHT_1(0x00419040, 0x147)
std::string t_academy::add_icons(
    t_basic_dialog* arg_0,
    std::string const& arg_1,
    std::vector<t_hero*, std::allocator<t_hero*>> const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2318
VA_CHT_1(0x00419190, 0x11)
void t_academy::visit(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2319
VA_CHT_1(0x004191b0, 0x8c)
float t_academy::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71337; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004192b0, 0x20, STATIC_INIT_DISPATCH, academy)

// name:A; map symbol; map:2320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_single_use_object::t_single_use_object(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2321
VA_CHT_1_COMPGEN(0x00418f20, 0x2d, SCALAR_DELETING_DTOR, t_single_use_object)

// name:A; map symbol; map:2322
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_single_use_object)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2323
VA_CHT_1(0x00418f50, 0x57)
// public: void t_single_use_object::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:2324
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_single_use_object::~t_single_use_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:2325
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_academy)

// name:A; map symbol; map:2326
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_academy)

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2327
VA_CHT_1(0x00418fe0, 0x57)
// public: void t_academy::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:2328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_academy::~t_academy()
{
    // Body unavailable.
}

// name:A; map symbol; map:2329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array& t_army::get_creatures()
{
    // Body unavailable.
}

// name:A; map symbol; map:2330
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_hero::add_experience(int arg_0, t_adventure_map const* arg_1, t_player* arg_2, t_window* arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:2331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack const& t_creature_array::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_academy>::t_object_registration<t_academy>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2333
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_academy>::t_object_factory<t_academy>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:2334
VA_CHT_1(0x00419240, 0x62)
t_stationary_adventure_object* t_object_factory<t_academy>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:2335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_base::t_object_factory_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:2336
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_academy)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2337
VA_CHT_1_COMPGEN(0x004192e0, 0xb, VECTOR_DELETING_DTOR, t_academy)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2338
VA_CHT_1(0x004192f0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 4}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2339
VA_CHT_1(0x00419300, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 4}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2340
VA_CHT_1(0x00419310, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2341
VA_CHT_1(0x00419320, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2342
VA_CHT_1(0x00419330, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 4}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2343
VA_CHT_1(0x00419340, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 4}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2344
VA_CHT_1(0x00419350, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 4}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2345
VA_CHT_1(0x00419360, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 4}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2346
VA_CHT_1(0x00419370, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 4}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2347
VA_CHT_1(0x00419380, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 4}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2348
VA_CHT_1(0x00419390, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2349
VA_CHT_1(0x004193a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 4}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2350
VA_CHT_1(0x004193b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2351
VA_CHT_1(0x004193c0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 4}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2352
VA_CHT_1(0x004193d0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2353
VA_CHT_1(0x004193e0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2354
VA_CHT_1(0x004193f0, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 4}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2355
VA_CHT_1(0x00419400, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 4}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2356
VA_CHT_1(0x00419410, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 4}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2357
VA_CHT_1(0x00419420, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 4}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2358
VA_CHT_1(0x00419430, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 4}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2359
VA_CHT_1(0x00419440, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 4}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2360
VA_CHT_1(0x00419450, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 4}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2361
VA_CHT_1(0x00419460, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 4}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2362
VA_CHT_1(0x00419470, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 4}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2363
VA_CHT_1(0x00419480, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2364
VA_CHT_1(0x00419490, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2365
VA_CHT_1(0x004194a0, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2366
VA_CHT_1(0x004194b0, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 12}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2367
VA_CHT_1(0x004194c0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2368
VA_CHT_1(0x004194d0, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2369
VA_CHT_1_COMPGEN(0x004194e0, 0x8, VECTOR_DELETING_DTOR, t_single_use_object)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:2370
VA_CHT_1_COMPGEN(0x004194f0, 0xb, VECTOR_DELETING_DTOR, t_single_use_object)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:42579
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42580
DATA_CHT_1_COMPGEN(0x008cc1bc, "const t_academy::`vftable'")

// confidence:B; rtti-order; map:42581
DATA_CHT_1_COMPGEN(0x008cc27c, "const t_academy::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42582
DATA_CHT_1_COMPGEN(0x008cc284, "const t_academy::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42583
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42584
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42585
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42586
DATA_CHT_1_COMPGEN(0x008cc344, "const t_single_use_object::`vftable'")

// confidence:B; rtti-order; map:42587
DATA_CHT_1_COMPGEN(0x008cc404, "const t_single_use_object::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42588
DATA_CHT_1_COMPGEN(0x008cc40c, "const t_single_use_object::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42589
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42590
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42591
DATA_CHT_1_COMPGEN(0x008cc1b4, "const t_object_factory<t_academy>::`vftable'")

// name:A; map symbol; map:42592
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_object_factory_base::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:47521
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_academy@@;vft=4cc1bc;col=4f4d70;td=585ba4;chd=4f4d60;offset=88;cdOffset=0;validated-hierarchy; map:47522
DATA_CHT_1_COMPGEN(0x008f4d70, "const t_academy::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47523
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_single_use_object@@;bcd=4f4d04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47524
DATA_CHT_1_COMPGEN(0x008f4d04, "t_single_use_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_academy@@;bcd=4f4d1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47525
DATA_CHT_1_COMPGEN(0x008f4d1c, "t_academy::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_academy@@;vft=4cc1bc;col=4f4d70;td=585ba4;chd=4f4d60;offset=88;cdOffset=0;validated-hierarchy; map:47526
DATA_CHT_1_COMPGEN(0x008f4d34, "t_academy::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_academy@@;vft=4cc1bc;col=4f4d70;td=585ba4;chd=4f4d60;offset=88;cdOffset=0;validated-hierarchy; map:47527
DATA_CHT_1_COMPGEN(0x008f4d60, "t_academy::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47528
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_academy::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47529
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_single_use_object@@;vft=4cc344;col=4f4cb4;td=585b80;chd=4f4ca4;offset=88;cdOffset=0;validated-hierarchy; map:47530
DATA_CHT_1_COMPGEN(0x008f4cb4, "const t_single_use_object::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47531
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_single_use_object@@;vft=4cc344;col=4f4cb4;td=585b80;chd=4f4ca4;offset=88;cdOffset=0;validated-hierarchy; map:47532
DATA_CHT_1_COMPGEN(0x008f4c7c, "t_single_use_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_single_use_object@@;vft=4cc344;col=4f4cb4;td=585b80;chd=4f4ca4;offset=88;cdOffset=0;validated-hierarchy; map:47533
DATA_CHT_1_COMPGEN(0x008f4ca4, "t_single_use_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47534
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_single_use_object::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_object_factory_base@@;bcd=4f4be0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47535
DATA_CHT_1_COMPGEN(0x008f4be0, "t_object_factory_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_academy@@@@;bcd=4f4bf8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47536
DATA_CHT_1_COMPGEN(0x008f4bf8, "t_object_factory<t_academy>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_academy@@@@;vft=4cc1b4;col=4f4c2c;td=585b50;chd=4f4c1c;offset=0;cdOffset=0;validated-hierarchy; map:47537
DATA_CHT_1_COMPGEN(0x008f4c10, "t_object_factory<t_academy>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_academy@@@@;vft=4cc1b4;col=4f4c2c;td=585b50;chd=4f4c1c;offset=0;cdOffset=0;validated-hierarchy; map:47538
DATA_CHT_1_COMPGEN(0x008f4c1c, "t_object_factory<t_academy>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_academy@@@@;vft=4cc1b4;col=4f4c2c;td=585b50;chd=4f4c1c;offset=0;cdOffset=0;validated-hierarchy; map:47539
DATA_CHT_1_COMPGEN(0x008f4c2c, "const t_object_factory<t_academy>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47540
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_object_factory_base::`RTTI Base Class Array'")

// name:A; map symbol; map:47541
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_object_factory_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47542
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_object_factory_base::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_single_use_object@@;td=585b80;validated-header; map:57360
DATA_CHT_1_COMPGEN(0x00985b80, "t_single_use_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_academy@@;td=585ba4;validated-header; map:57361
DATA_CHT_1_COMPGEN(0x00985ba4, "t_academy `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_object_factory_base@@;td=585b2c;validated-header; map:57362
DATA_CHT_1_COMPGEN(0x00985b2c, "t_object_factory_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_academy@@@@;td=585b50;validated-header; map:57363
DATA_CHT_1_COMPGEN(0x00985b50, "t_object_factory<t_academy> `RTTI Type Descriptor'")
