// adv_actor_model.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 58/139 (A:25 B:1 C:0); unaccounted 81; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (105 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71295; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00426a30, 0x15, STATIC_INIT_DISPATCH, "adv_actor_model#1")

// name:C; dyninit; see ledger; map:71296
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_actor_model#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:71297; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00426a50, 0xa, STATIC_INIT_DISPATCH, "adv_actor_model#2")

// name:C; dyninit; see ledger; map:71298
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_actor_model#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3280
VA_CHT_1(0x00426a60, 0x7)
t_actor_model_base::~t_actor_model_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:3281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model::t_adv_actor_model(t_adv_actor_model const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3282
VA_CHT_1(0x00426c50, 0x17c)
t_adv_actor_model::t_adv_actor_model(t_cached_ptr<t_adv_actor_model_definition> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3283
VA_CHT_1(0x00426e00, 0xde)
t_adv_actor_model::~t_adv_actor_model()
{
    // Body unavailable.
}

// name:A; map symbol; map:3284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model& t_adv_actor_model::operator=(t_adv_actor_model const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_2d t_adv_actor_model::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_actor_model::are_any_cells_flat() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_actor_model::are_any_cells_impassable() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_actor_model::is_cell_flat(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3289
VA_CHT_1(0x00426ee0, 0x12)
bool t_adv_actor_model::is_cell_impassable(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_actor_model::is_left_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3291
VA_CHT_1(0x00426f00, 0x20)
bool t_adv_actor_model::is_right_edge_trigger(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_actor_model::is_trigger_cell(t_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3293
VA_CHT_1(0x00426f40, 0x33)
t_abstract_cache<t_actor_sequence> t_adv_actor_model::get_cache(
    std::string const& arg_0,
    t_screen_point const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3294
VA_CHT_1(0x00426f80, 0x14e)
t_cached_ptr<t_actor_sequence> t_adv_actor_model::get_sequence_ptr(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:71299; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004287c0, 0x20, STATIC_INIT_DISPATCH, adv_actor_model)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3295
VA_CHT_1_COMPGEN(0x00426a70, 0x20, SCALAR_DELETING_DTOR, t_actor_model_base)

// name:A; map symbol; map:3296
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_actor_model_base)

// name:A; map symbol; map:3297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model::t_sequence_info::t_sequence_info()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3298
VA_CHT_1_COMPGEN(0x00426ac0, 0x1e, VECTOR_DELETING_DTOR, t_adv_actor_model)

// name:A; map symbol; map:3299
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_actor_model)

// name:A; map symbol; map:3300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model<t_adv_actor_model_definition>::t_actor_model<t_adv_actor_model_definition>(
    t_actor_model<t_adv_actor_model_definition> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model<t_adv_actor_model_definition>::~t_actor_model<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_footprint::t_footprint()
{
    // Body unavailable.
}

// name:A; map symbol; map:3303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model::t_sequence_info::~t_sequence_info()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3304
VA_CHT_1_COMPGEN(0x00426c10, 0x1e, VECTOR_DELETING_DTOR, "t_actor_model<t_adv_actor_model_definition>")

// name:A; map symbol; map:3305
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_actor_model<t_adv_actor_model_definition>")

// name:A; map symbol; map:3306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model_base::t_actor_model_base(t_actor_model_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_actor_sequence>::t_abstract_cache<t_actor_sequence>(
    t_abstract_cache<t_actor_sequence> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3308
VA_CHT_1_COMPGEN(0x00426c30, 0x1e, VECTOR_DELETING_DTOR, t_footprint)

// name:A; map symbol; map:3309
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_footprint)

// name:A; map symbol; map:3310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model<t_adv_actor_model_definition>& t_actor_model<t_adv_actor_model_definition>::operator=(
    t_actor_model<t_adv_actor_model_definition> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3311
VA_CHT_1(0x00427c40, 0x18)
t_actor_model_base& t_actor_model_base::operator=(t_actor_model_base const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3312
VA_CHT_1(0x00426dd0, 0x27)
t_abstract_cache<t_actor_sequence>& t_abstract_cache<t_actor_sequence>::operator=(
    t_abstract_cache<t_actor_sequence> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_adv_actor_model_definition>::t_cached_ptr<t_adv_actor_model_definition>(
    t_cached_ptr<t_adv_actor_model_definition> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3314
VA_CHT_1(0x004270d0, 0x74)
t_cached_ptr<t_adv_actor_model_definition>::~t_cached_ptr<t_adv_actor_model_definition>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition* t_cached_ptr<t_adv_actor_model_definition>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_adv_actor_model_definition>& t_cached_ptr<t_adv_actor_model_definition>::operator=(
    t_cached_ptr<t_adv_actor_model_definition> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3317
VA_CHT_1(0x004275d0, 0x11)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>(
    t_counted_ptr<t_abstract_cache_data<t_actor_sequence>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3318
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>& t_counted_ptr<t_abstract_cache_data<t_actor_sequence>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_actor_sequence>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_model<t_adv_actor_model_definition>::t_actor_model<t_adv_actor_model_definition>(
    t_cached_ptr<t_adv_actor_model_definition> arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_to(
    t_bitmap_layer const* arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bitmap_layer::draw_to(t_abstract_bitmap<unsigned short>& arg_0, t_screen_point arg_1, int arg_2) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_to(
    t_bitmap_layer const* arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_to(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    int arg_5
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3324
VA_CHT_1(0x004272e0, 0x89)
void t_image_sequence::draw_to(
    int arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_base_frame_to(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3326
VA_CHT_1(0x00427f90, 0x4c)
t_bitmap_layer const* t_image_sequence_base<t_bitmap_group>::get_frame_ptr(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_image_sequence_base_base::empty_frame_index()
{
    // Body unavailable.
}

// name:A; map symbol; map:3329
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_image_sequence_base_base::get_frame_index(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3331
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_to(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2,
    t_screen_rect const& arg_3,
    t_abstract_bitmap<unsigned short>& arg_4,
    t_screen_point const& arg_5,
    int arg_6
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3332
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_to(
    int arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3333
VA_CHT_1(0x00428580, 0x184)
void t_image_sequence::draw_base_frame_to(
    t_screen_rect const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3334
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_shadow_to(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    int arg_5
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3335
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_shadow_to(
    int arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3336
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_base_shadow_to(
    t_abstract_bitmap<unsigned short>& arg_0,
    t_screen_point const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3337
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_image_sequence_base<t_bitmap_group>::get_frame_shadow_ptr(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3338
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_image_sequence_base_base::get_shadow_index(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3339
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_actor_model<t_adv_actor_model_definition>::draw_shadow_to(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2,
    t_screen_rect const& arg_3,
    t_abstract_bitmap<unsigned short>& arg_4,
    t_screen_point const& arg_5,
    int arg_6
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3340
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_shadow_to(
    int arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3341
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_image_sequence::draw_base_shadow_to(
    t_screen_rect const& arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2,
    int arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3342
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition const& t_actor_model<t_adv_actor_model_definition>::get_definition() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3343
VA_CHT_1(0x00426b90, 0x75)
int t_actor_model<t_adv_actor_model_definition>::get_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3344
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model<t_adv_actor_model_definition>::get_frames_per_second(t_adv_actor_action_id arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3345
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model<t_adv_actor_model_definition>::get_frame_count(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3346
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_image_sequence_base_base::get_frame_count() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3347
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_actor_model<t_adv_actor_model_definition>::get_offset(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3348
VA_CHT_1(0x004276b0, 0xba)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::get_rect(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3349
VA_CHT_1(0x00427c60, 0xb1)
t_screen_rect t_image_sequence_base_base::get_rect(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3350
VA_CHT_1(0x004280f0, 0x104)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::get_rect(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3351
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_image_sequence_base_base::get_rect() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3352
VA_CHT_1(0x00427fe0, 0x108)
t_abstract_cache<t_actor_sequence> t_actor_model<t_adv_actor_model_definition>::get_sequence_cache(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3353
VA_CHT_1(0x00427b60, 0xba)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::get_shadow_rect(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3354
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_image_sequence_base_base::get_shadow_rect(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3355
VA_CHT_1(0x00428440, 0x108)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::get_shadow_rect(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_image_sequence_base_base::get_shadow_rect() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:3357
VA_CHT_1(0x00428550, 0x2b)
bool t_actor_model<t_adv_actor_model_definition>::has_action(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_actor_model<t_adv_actor_model_definition>::hit_test(
    t_adv_actor_action_id arg_0,
    t_direction arg_1,
    int arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_image_sequence_base_base::hit_test(int arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:3360
VA_CHT_1(0x00428710, 0x91)
t_cached_ptr<t_actor_sequence> t_actor_model<t_adv_actor_model_definition>::get_sequence_ptr(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::adjust_incoming(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point const& t_actor_model_definition_base::get_offset() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_actor_model<t_adv_actor_model_definition>::adjust_incoming(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_actor_model<t_adv_actor_model_definition>::adjust_outgoing(t_screen_rect const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_actor_model<t_adv_actor_model_definition>::adjust_outgoing(t_screen_point const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:3366
VA_CHT_1(0x00426ae0, 0xa2)
t_actor_model_base::t_actor_model_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:3367
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model_definition<t_adv_actor_model_definition_traits>::get_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3368
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_model_definition<t_adv_actor_model_definition_traits>::get_frames_per_second(
    t_adv_actor_action_id arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3369
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_actor_action_definition::get_frames_per_second() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3370
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_actor_model_definition<t_adv_actor_model_definition_traits>::get_sequence_name(
    t_adv_actor_action_id arg_0,
    t_direction arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:3371
VA_CHT_1(0x004275f0, 0x37)
std::string const& t_actor_action_definition::get_sequence_name(t_direction arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3372
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_static_vector<std::string, 8>::operator[](unsigned int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3373
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const* t_static_vector<std::string, 8>::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3374
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_adv_actor_model_definition>::assign(
    t_adv_actor_model_definition* arg_0,
    t_cached_ptr_base const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3375
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition* t_cached_ptr<t_adv_actor_model_definition>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_actor_model_definition& t_cached_ptr<t_adv_actor_model_definition>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_cache<t_actor_sequence>::is_valid() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_sequence* t_cached_ptr<t_actor_sequence>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3379
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition const& t_static_vector<t_actor_action_definition, 6>::operator[](
    unsigned int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_actor_action_definition const* t_static_vector<t_actor_action_definition, 6>::begin() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3381
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_actor_model)

// === .rdata (5 symbols) ===

// confidence:A; rtti-name; map:42642
DATA_CHT_1_COMPGEN(0x008ccb3c, "const t_actor_model_base::`vftable'")

// confidence:A; rtti-name; map:42643
DATA_CHT_1_COMPGEN(0x008ccb48, "const t_adv_actor_model::`vftable'{for `t_footprint'}")

// confidence:B; rtti-order; map:42644
DATA_CHT_1_COMPGEN(0x008ccb7c, "const t_adv_actor_model::`vftable'{for `t_actor_model<t_adv_actor_model_definition>'}")

// confidence:A; rtti-name; map:42645
DATA_CHT_1_COMPGEN(0x008ccbc0, "const t_actor_model<t_adv_actor_model_definition>::`vftable'")

// confidence:A; rtti-name; map:42646
DATA_CHT_1_COMPGEN(0x008ccb8c, "const t_footprint::`vftable'")

// === .rdata$r (18 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_actor_model_base@@;bcd=4f588c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47686
DATA_CHT_1_COMPGEN(0x008f588c, "t_actor_model_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_actor_model_base@@;vft=4ccb3c;col=4f58bc;td=586450;chd=4f58ac;offset=0;cdOffset=0;validated-hierarchy; map:47687
DATA_CHT_1_COMPGEN(0x008f58a4, "t_actor_model_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_actor_model_base@@;vft=4ccb3c;col=4f58bc;td=586450;chd=4f58ac;offset=0;cdOffset=0;validated-hierarchy; map:47688
DATA_CHT_1_COMPGEN(0x008f58ac, "t_actor_model_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_actor_model_base@@;vft=4ccb3c;col=4f58bc;td=586450;chd=4f58ac;offset=0;cdOffset=0;validated-hierarchy; map:47689
DATA_CHT_1_COMPGEN(0x008f58bc, "const t_actor_model_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_actor_model@@;vft=4ccb48;col=4f59c4;td=5864d0;chd=4f59b4;offset=396;cdOffset=0;validated-hierarchy; map:47690
DATA_CHT_1_COMPGEN(0x008f59c4, "const t_adv_actor_model::`RTTI Complete Object Locator'{for `t_footprint'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_footprint@@;bcd=4f5958;pmd=396,-1,0;attributes=0;validated-hierarchy-link; map:47691
DATA_CHT_1_COMPGEN(0x008f5958, "t_footprint::`RTTI Base Class Descriptor at (396, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_actor_model@Vt_adv_actor_model_definition@@@@;bcd=4f5970;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47692
DATA_CHT_1_COMPGEN(0x008f5970, "t_actor_model<t_adv_actor_model_definition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_actor_model@@;bcd=4f5988;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47693
DATA_CHT_1_COMPGEN(0x008f5988, "t_adv_actor_model::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_actor_model@@;vft=4ccb48;col=4f59c4;td=5864d0;chd=4f59b4;offset=396;cdOffset=0;validated-hierarchy; map:47694
DATA_CHT_1_COMPGEN(0x008f59a0, "t_adv_actor_model::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_actor_model@@;vft=4ccb48;col=4f59c4;td=5864d0;chd=4f59b4;offset=396;cdOffset=0;validated-hierarchy; map:47695
DATA_CHT_1_COMPGEN(0x008f59b4, "t_adv_actor_model::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47696
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_actor_model::`RTTI Complete Object Locator'{for `t_actor_model<t_adv_actor_model_definition>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_actor_model@Vt_adv_actor_model_definition@@@@;vft=4ccbc0;col=4f58ec;td=586490;chd=4f58dc;offset=0;cdOffset=0;validated-hierarchy; map:47697
DATA_CHT_1_COMPGEN(0x008f58d0, "t_actor_model<t_adv_actor_model_definition>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_actor_model@Vt_adv_actor_model_definition@@@@;vft=4ccbc0;col=4f58ec;td=586490;chd=4f58dc;offset=0;cdOffset=0;validated-hierarchy; map:47698
DATA_CHT_1_COMPGEN(0x008f58dc, "t_actor_model<t_adv_actor_model_definition>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_actor_model@Vt_adv_actor_model_definition@@@@;vft=4ccbc0;col=4f58ec;td=586490;chd=4f58dc;offset=0;cdOffset=0;validated-hierarchy; map:47699
DATA_CHT_1_COMPGEN(0x008f58ec, "const t_actor_model<t_adv_actor_model_definition>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_footprint@@;bcd=4f5900;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47700
DATA_CHT_1_COMPGEN(0x008f5900, "t_footprint::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_footprint@@;vft=4ccb8c;col=4f5930;td=586474;chd=4f5920;offset=0;cdOffset=0;validated-hierarchy; map:47701
DATA_CHT_1_COMPGEN(0x008f5918, "t_footprint::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_footprint@@;vft=4ccb8c;col=4f5930;td=586474;chd=4f5920;offset=0;cdOffset=0;validated-hierarchy; map:47702
DATA_CHT_1_COMPGEN(0x008f5920, "t_footprint::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_footprint@@;vft=4ccb8c;col=4f5930;td=586474;chd=4f5920;offset=0;cdOffset=0;validated-hierarchy; map:47703
DATA_CHT_1_COMPGEN(0x008f5930, "const t_footprint::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_actor_model_base@@;td=586450;validated-header; map:57409
DATA_CHT_1_COMPGEN(0x00986450, "t_actor_model_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_footprint@@;td=586474;validated-header; map:57410
DATA_CHT_1_COMPGEN(0x00986474, "t_footprint `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_actor_model@Vt_adv_actor_model_definition@@@@;td=586490;validated-header; map:57411
DATA_CHT_1_COMPGEN(0x00986490, "t_actor_model<t_adv_actor_model_definition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_actor_model@@;td=5864d0;validated-header; map:57412
DATA_CHT_1_COMPGEN(0x009864d0, "t_adv_actor_model `RTTI Type Descriptor'")

// name:A; map symbol; map:57413
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_base_frame < m_frames.size()")

// name:A; map symbol; map:57414
DATA_CHT_1_COMPGEN(UNACCOUNTED, "frame_num >= 0&& frame_num < m_...")

// name:A; map symbol; map:57415
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_base_shadow < m_frames.size()")

// name:A; map symbol; map:57416
DATA_CHT_1_COMPGEN(UNACCOUNTED, "direction >= 0&& direction < k_...")

// name:A; map symbol; map:57417
DATA_CHT_1_COMPGEN(UNACCOUNTED, "action_id >= 0&& action_id < k_...")

// name:A; map symbol; map:57418
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\actor_model_impl.h")

// name:A; map symbol; map:57419
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\actor_model_definit...")
