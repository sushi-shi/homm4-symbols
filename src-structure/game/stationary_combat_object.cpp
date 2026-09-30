// stationary_combat_object.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 32/65 (A:16 B:5 C:11); unaccounted 33; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (65 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62346; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2ce0, 0x15, STATIC_INIT_DISPATCH, "stationary_combat_object#1")

// name:C; dyninit; see ledger; map:62347
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#1")

// confidence:A; dyninit-init; owner-conf-C; map:62348; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d00, 0x15, STATIC_INIT_DISPATCH, "stationary_combat_object#2")

// name:C; dyninit; see ledger; map:62349
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#2")

// confidence:A; dyninit-init; owner-conf-C; map:62350; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d20, 0x15, STATIC_INIT_DISPATCH, "stationary_combat_object#3")

// name:C; dyninit; see ledger; map:62351
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#3")

// confidence:A; dyninit-init; owner-conf-C; map:62352; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d40, 0x15, STATIC_INIT_DISPATCH, "stationary_combat_object#4")

// name:C; dyninit; see ledger; map:62353
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#4")

// confidence:A; dyninit-init; owner-conf-C; map:62354; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d60, 0x10, STATIC_INIT_DISPATCH, "stationary_combat_object#5")

// name:C; dyninit; see ledger; map:62355
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#5")

// confidence:A; dyninit-init; owner-conf-C; map:62356; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d70, 0x15, STATIC_INIT_DISPATCH, "stationary_combat_object#6")

// name:C; dyninit; see ledger; map:62357
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#6")

// confidence:A; dyninit-init; owner-conf-C; map:62358; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2d90, 0x16, STATIC_INIT_DISPATCH, "stationary_combat_object#7")

// name:C; dyninit; see ledger; map:62359
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#7")

// name:C; dyninit; see ledger; map:62360
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "stationary_combat_object#7")

// confidence:B; dyninit-dtor; owner-conf-C; map:62361; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2db0, 0xa, STATIC_DTOR, "stationary_combat_object#7")

// confidence:A; dyninit-init; owner-conf-C; map:62362; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2dc0, 0x16, STATIC_INIT_DISPATCH, "stationary_combat_object#8")

// name:C; dyninit; see ledger; map:62363
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "stationary_combat_object#8")

// name:C; dyninit; see ledger; map:62364
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "stationary_combat_object#8")

// confidence:B; dyninit-dtor; owner-conf-C; map:62365; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e2de0, 0xa, STATIC_DTOR, "stationary_combat_object#8")

// confidence:A; align-order; retn,stable,vptr; map:38358
VA_CHT_1(0x007e2df0, 0x1a5)
t_stationary_combat_object::t_stationary_combat_object(
    t_battlefield& arg_0,
    t_combat_object_model_cache const& arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:38359
VA_CHT_1(0x007e2fa0, 0x102)
t_stationary_combat_object::t_stationary_combat_object(t_battlefield& arg_0, t_compound_object* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:38360
VA_CHT_1(0x007e30b0, 0x154)
t_stationary_combat_object::~t_stationary_combat_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:38361
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::can_be_destroyed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_type t_stationary_combat_object::get_object_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38363
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::draw_shadow_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38364
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::draw_shadow_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38365
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::draw_to(
    unsigned long arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38366
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::draw_to(
    unsigned long arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38367
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::can_be_attacked() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:38368
VA_CHT_1(0x007e3850, 0x42)
bool t_stationary_combat_object::is_permanent() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:38369
VA_CHT_1(0x007e38a0, 0x23)
t_attackable_object* t_stationary_combat_object::get_attackable_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:38370
VA_CHT_1(0x007e3900, 0xd)
t_compound_object* t_stationary_combat_object::get_compound_object() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38371
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_stationary_combat_object::get_footprint_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38372
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_stationary_combat_object::get_height() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38373
VA_CHT_1(0x007e3920, 0x2c)
t_screen_rect t_stationary_combat_object::get_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38374
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_stationary_combat_object::get_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38375
VA_CHT_1(0x007e3a60, 0x2c)
t_screen_rect t_stationary_combat_object::get_shadow_rect() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38376
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_stationary_combat_object::get_shadow_rect(unsigned long arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38377
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::hit_test(unsigned long arg_0, t_screen_point const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38378
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::blocks_movement() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38379
VA_CHT_1(0x007e3c70, 0x2e)
bool t_stationary_combat_object::is_animated() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38380
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::is_underlay() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38381
VA_CHT_1(0x007e3ca0, 0x1b)
bool t_stationary_combat_object::obscures_vision() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38382
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::needs_redrawing(unsigned long arg_0, unsigned long arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:38383
VA_CHT_1(0x007e3cd0, 0x29)
void t_stationary_combat_object::set_frame(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:38384
VA_CHT_1(0x007e3d00, 0x54)
void t_stationary_combat_object::increment_frame()
{
    // Body unavailable.
}

// name:A; map symbol; map:38385
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::on_idle()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:38386
VA_CHT_1(0x007e3d60, 0x55)
void t_stationary_combat_object::on_removed()
{
    // Body unavailable.
}

// name:A; map symbol; map:38387
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::hinders_movement() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38388
VA_CHT_1(0x007e3dc0, 0x19)
t_obstacle_type t_stationary_combat_object::get_obstacle_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38389
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_stationary_combat_object::get_depth() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38390
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38391
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_stationary_combat_object::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:38392
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_stationary_combat_object::place_during_read(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:38393
VA_CHT_1(0x007e3e00, 0x30)
void t_stationary_combat_object::on_placed()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62366; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e42e0, 0x20, STATIC_INIT_DISPATCH, stationary_combat_object)

// confidence:C; align-band; retn; map:38394
VA_CHT_1(0x007e3cc0, 0xd)
bool t_combat_object_model_root::can_be_destroyed() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:38395
VA_CHT_1(0x007e3df0, 0xd)
int t_object_segment::get_footprint_size() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:38396
VA_CHT_1(0x007e3910, 0xa)
bool t_compound_object::is_underlay() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:38397
VA_CHT_1(0x007e3c60, 0xa)
bool t_combat_object_model_root::obscures_vision() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:38398
VA_CHT_1(0x007e3de0, 0xa)
bool t_combat_object_model_root::hinders_movement() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:38400
VA_CHT_1(0x007e42a0, 0x3a)
t_counted_ptr<t_object_segment>& t_counted_ptr<t_object_segment>::operator=(t_object_segment* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:38401
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object* t_counted_ptr<t_compound_object>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:38402
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_compound_object* t_counted_ptr<t_compound_object>::operator t_compound_object*() const
{
    // Body unavailable.
}
