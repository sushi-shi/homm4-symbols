// chain_lightning.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\chain_lightning.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 80/145 (A:45 B:2 C:0); unaccounted 65; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (80 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68399; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a1550, 0x15, STATIC_INIT_DISPATCH, "chain_lightning#1")

// name:C; dyninit; see ledger; map:68400
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68401; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a1570, 0x15, STATIC_INIT_DISPATCH, "chain_lightning#2")

// name:C; dyninit; see ledger; map:68402
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68403; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a1590, 0x15, STATIC_INIT_DISPATCH, "chain_lightning#3")

// name:C; dyninit; see ledger; map:68404
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68405; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a15b0, 0x15, STATIC_INIT_DISPATCH, "chain_lightning#4")

// name:C; dyninit; see ledger; map:68406
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68407; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a15d0, 0x10, STATIC_INIT_DISPATCH, "chain_lightning#5")

// name:C; dyninit; see ledger; map:68408
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68409; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a15e0, 0x15, STATIC_INIT_DISPATCH, "chain_lightning#6")

// name:C; dyninit; see ledger; map:68410
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#6")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68411; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a1600, 0x1c, STATIC_INIT_DISPATCH, "chain_lightning#7")

// name:C; dyninit; see ledger; map:68412
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "chain_lightning#7")

namespace {

// confidence:D; align-order; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19251
VA_CHT_1(0x005a1620, 0x154)
t_chain_bolt::t_chain_bolt(
    t_battlefield& arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    t_counted_ptr<t_combat_creature> arg_2,
    int arg_3,
    t_combat_action_message const& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19252
VA_CHT_1(0x005a1780, 0x1e)
void t_chain_bolt::operator()(t_window* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19253
VA_CHT_1(0x005a18a0, 0x2bf)
void t_chain_bolt::get_next_target()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68413
VA_CHT_1(0x005a1b60, 0x198)
static void get_next_target_list(
    t_battlefield& arg_0,
    t_combat_creature const* arg_1,
    t_counted_ptr<t_combat_creature> const& arg_2,
    t_combat_creature_list const& arg_3,
    t_combat_creature_list& arg_4
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68414
VA_CHT_1(0x005a1e20, 0x9b)
static void bolt_impact(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_counted_ptr<t_chain_bolt> arg_2
)
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19254
VA_CHT_1(0x005a1ec0, 0x89)
void t_chain_bolt::impact()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19255
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_chain_lightning::t_chain_lightning(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19256
VA_CHT_1(0x005a1f50, 0x91)
double t_chain_lightning::ai_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:68415
VA_CHT_1(0x005a1ff0, 0x2c6)
static double ai_weight_recurse(
    t_battlefield& arg_0,
    t_combat_creature const& arg_1,
    t_combat_creature* arg_2,
    int arg_3,
    t_combat_creature_list arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19257
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
double t_chain_lightning::get_cancel_weight(t_combat_creature const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19258
VA_CHT_1(0x005a22c0, 0x25d)
bool t_chain_lightning::cast_on(
    t_counted_ptr<t_combat_creature> arg_0,
    t_counted_ptr<t_combat_creature> arg_1,
    int arg_2,
    bool arg_3
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68416; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005a29d0, 0x20, STATIC_INIT_DISPATCH, chain_lightning)

// name:A; map symbol; map:19259
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_chain_bolt)

// name:A; map symbol; map:19260
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_chain_bolt)

namespace {

// name:A; map symbol; map:19261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_chain_bolt::~t_chain_bolt()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19262
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d operator-(t_map_point_3d const& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_point_3d& t_map_point_3d::operator-=(t_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_chain_bolt>::~t_counted_ptr<t_chain_bolt>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19265
VA_CHT_1(0x007e5310, 0x27)
t_combat_spell_single_target::t_combat_spell_single_target(t_battlefield& arg_0, t_spell arg_1)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19266
VA_CHT_1_COMPGEN(0x0077f7c0, 0x1e, SCALAR_DELETING_DTOR, t_combat_spell_single_target)

// name:A; map symbol; map:19267
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_spell_single_target)

// name:A; map symbol; map:19268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell::~t_combat_spell()
{
    // Body unavailable.
}

// name:A; map symbol; map:19269
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_single_target::~t_combat_spell_single_target()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19270
VA_CHT_1_COMPGEN(0x005a1e00, 0x1e, SCALAR_DELETING_DTOR, t_chain_lightning)

// name:A; map symbol; map:19271
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_chain_lightning)

// name:A; map symbol; map:19272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_chain_lightning::~t_chain_lightning()
{
    // Body unavailable.
}

// name:A; map symbol; map:19273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_animation(t_combat_actor_action_id arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:19275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_spell_registration<t_chain_lightning>::t_combat_spell_registration<t_chain_lightning>(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_chain_bolt>::t_counted_ptr<t_chain_bolt>(t_chain_bolt* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_chain_bolt* t_counted_ptr<t_chain_bolt>::operator->() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19278
VA_CHT_1(0x005a2950, 0x73)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> function_3_handler(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> arg_0,
    t_counted_ptr<t_chain_bolt> arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell_factory<t_chain_lightning>::t_spell_factory<t_chain_lightning>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19283
VA_CHT_1(0x005a2520, 0x79)
t_combat_spell* t_spell_factory<t_chain_lightning>::create(t_battlefield& arg_0, t_spell arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19284
VA_CHT_1(0x00717460, 0x17)
t_spell_factory_base::t_spell_factory_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:19285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19288
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_counted_ptr<t_chain_bolt> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-band; vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19289
VA_CHT_1(0x005a25f0, 0x121)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>* arg_0,
    t_counted_ptr<t_chain_bolt> arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19290
VA_CHT_1(0x005a27c0, 0xfd)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19291
VA_CHT_1_COMPGEN(0x005a28c0, 0x1e, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19292
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:19293
VA_CHT_1(0x005a17a0, 0xf0)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19294
VA_CHT_1_COMPGEN(0x005a2900, 0x1e, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19295
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::~t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19298
VA_CHT_1(0x005a2920, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19299
VA_CHT_1_COMPGEN(0x005a28e0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19300
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19301
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// name:A; map symbol; map:19302
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19303
VA_CHT_1(0x005a25a0, 0x4e)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:19305
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_counted_ptr<t_chain_bolt> arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_chain_bolt>::t_counted_ptr<t_chain_bolt>(t_counted_ptr<t_chain_bolt> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19310
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_chain_bolt)

// name:A; map symbol; map:19311
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19312
VA_CHT_1_COMPGEN(0x005a2a00, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19313
VA_CHT_1_COMPGEN(0x005a2a10, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>")

// === .rdata (13 symbols) ===

// confidence:A; rtti-name; map:43850
DATA_CHT_1_COMPGEN(0x008d8f44, "const t_chain_bolt::`vftable'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:B; rtti-order; map:43851
DATA_CHT_1_COMPGEN(0x008d8f50, "const t_chain_bolt::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43852
DATA_CHT_1_COMPGEN(0x008d8f5c, "const t_chain_lightning::`vftable'")

// confidence:A; rtti-name; map:43853
DATA_CHT_1_COMPGEN(0x008e9514, "const t_combat_spell_single_target::`vftable'")

// confidence:A; rtti-name; map:43854
DATA_CHT_1_COMPGEN(0x008d8f3c, "const t_spell_factory<t_chain_lightning>::`vftable'")

// confidence:A; rtti-name; map:43855
DATA_CHT_1_COMPGEN(0x008e549c, "const t_spell_factory_base::`vftable'")

// name:A; map symbol; map:43856
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>'}")

// name:A; map symbol; map:43857
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43858
DATA_CHT_1_COMPGEN(0x008d8fc0, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:43859
DATA_CHT_1_COMPGEN(0x008d8fcc, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43860
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>'}")

// name:A; map symbol; map:43861
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43862
DATA_CHT_1_COMPGEN(0x008d8fb4, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`vftable'")

// === .rdata$r (42 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@;vft=4d8f44;col=502f0c;td=597da8;chd=502efc;offset=8;cdOffset=0;validated-hierarchy; map:50534
DATA_CHT_1_COMPGEN(0x00902f0c, "const t_chain_bolt::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_window*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@;bcd=502ed0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50535
DATA_CHT_1_COMPGEN(0x00902ed0, "t_chain_bolt::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@;vft=4d8f44;col=502f0c;td=597da8;chd=502efc;offset=8;cdOffset=0;validated-hierarchy; map:50536
DATA_CHT_1_COMPGEN(0x00902ee8, "t_chain_bolt::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@;vft=4d8f44;col=502f0c;td=597da8;chd=502efc;offset=8;cdOffset=0;validated-hierarchy; map:50537
DATA_CHT_1_COMPGEN(0x00902efc, "t_chain_bolt::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50538
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_chain_bolt::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_spell@@;bcd=502f20;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50539
DATA_CHT_1_COMPGEN(0x00902f20, "t_combat_spell::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_spell_single_target@@;bcd=502f38;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50540
DATA_CHT_1_COMPGEN(0x00902f38, "t_combat_spell_single_target::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_chain_lightning@@;bcd=502f50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50541
DATA_CHT_1_COMPGEN(0x00902f50, "t_chain_lightning::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_chain_lightning@@;vft=4d8f5c;col=502f8c;td=597e3c;chd=502f7c;offset=0;cdOffset=0;validated-hierarchy; map:50542
DATA_CHT_1_COMPGEN(0x00902f68, "t_chain_lightning::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_chain_lightning@@;vft=4d8f5c;col=502f8c;td=597e3c;chd=502f7c;offset=0;cdOffset=0;validated-hierarchy; map:50543
DATA_CHT_1_COMPGEN(0x00902f7c, "t_chain_lightning::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_chain_lightning@@;vft=4d8f5c;col=502f8c;td=597e3c;chd=502f7c;offset=0;cdOffset=0;validated-hierarchy; map:50544
DATA_CHT_1_COMPGEN(0x00902f8c, "const t_chain_lightning::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_spell_single_target@@;vft=4e9514;col=5142e4;td=597e10;chd=5142d4;offset=0;cdOffset=0;validated-hierarchy; map:50545
DATA_CHT_1_COMPGEN(0x009142c4, "t_combat_spell_single_target::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_spell_single_target@@;vft=4e9514;col=5142e4;td=597e10;chd=5142d4;offset=0;cdOffset=0;validated-hierarchy; map:50546
DATA_CHT_1_COMPGEN(0x009142d4, "t_combat_spell_single_target::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_spell_single_target@@;vft=4e9514;col=5142e4;td=597e10;chd=5142d4;offset=0;cdOffset=0;validated-hierarchy; map:50547
DATA_CHT_1_COMPGEN(0x009142e4, "const t_combat_spell_single_target::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_spell_factory_base@@;bcd=502e5c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50548
DATA_CHT_1_COMPGEN(0x00902e5c, "t_spell_factory_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_spell_factory@Vt_chain_lightning@@@@;bcd=502e74;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50549
DATA_CHT_1_COMPGEN(0x00902e74, "t_spell_factory<t_chain_lightning>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_spell_factory@Vt_chain_lightning@@@@;vft=4d8f3c;col=502ea8;td=597d70;chd=502e98;offset=0;cdOffset=0;validated-hierarchy; map:50550
DATA_CHT_1_COMPGEN(0x00902e8c, "t_spell_factory<t_chain_lightning>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_spell_factory@Vt_chain_lightning@@@@;vft=4d8f3c;col=502ea8;td=597d70;chd=502e98;offset=0;cdOffset=0;validated-hierarchy; map:50551
DATA_CHT_1_COMPGEN(0x00902e98, "t_spell_factory<t_chain_lightning>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_spell_factory@Vt_chain_lightning@@@@;vft=4d8f3c;col=502ea8;td=597d70;chd=502e98;offset=0;cdOffset=0;validated-hierarchy; map:50552
DATA_CHT_1_COMPGEN(0x00902ea8, "const t_spell_factory<t_chain_lightning>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_spell_factory_base@@;vft=4e549c;col=50fb3c;td=597d4c;chd=50fb2c;offset=0;cdOffset=0;validated-hierarchy; map:50553
DATA_CHT_1_COMPGEN(0x0090fb24, "t_spell_factory_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_spell_factory_base@@;vft=4e549c;col=50fb3c;td=597d4c;chd=50fb2c;offset=0;cdOffset=0;validated-hierarchy; map:50554
DATA_CHT_1_COMPGEN(0x0090fb2c, "t_spell_factory_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_spell_factory_base@@;vft=4e549c;col=50fb3c;td=597d4c;chd=50fb2c;offset=0;cdOffset=0;validated-hierarchy; map:50555
DATA_CHT_1_COMPGEN(0x0090fb3c, "const t_spell_factory_base::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50556
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>'}")

// name:A; map symbol; map:50557
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:50558
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:50559
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:50560
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Array'")

// name:A; map symbol; map:50561
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50562
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fc0;col=5030c8;td=598080;chd=5030b8;offset=8;cdOffset=0;validated-hierarchy; map:50563
DATA_CHT_1_COMPGEN(0x009030c8, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;bcd=50308c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50564
DATA_CHT_1_COMPGEN(0x0090308c, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fc0;col=5030c8;td=598080;chd=5030b8;offset=8;cdOffset=0;validated-hierarchy; map:50565
DATA_CHT_1_COMPGEN(0x009030a4, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fc0;col=5030c8;td=598080;chd=5030b8;offset=8;cdOffset=0;validated-hierarchy; map:50566
DATA_CHT_1_COMPGEN(0x009030b8, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50567
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50568
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>'}")

// name:A; map symbol; map:50569
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Array'")

// name:A; map symbol; map:50570
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50571
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;bcd=502fa0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50572
DATA_CHT_1_COMPGEN(0x00902fa0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fb4;col=502fd0;td=597e60;chd=502fc0;offset=0;cdOffset=0;validated-hierarchy; map:50573
DATA_CHT_1_COMPGEN(0x00902fb8, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fb4;col=502fd0;td=597e60;chd=502fc0;offset=0;cdOffset=0;validated-hierarchy; map:50574
DATA_CHT_1_COMPGEN(0x00902fc0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;vft=4d8fb4;col=502fd0;td=597e60;chd=502fc0;offset=0;cdOffset=0;validated-hierarchy; map:50575
DATA_CHT_1_COMPGEN(0x00902fd0, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>>::`RTTI Complete Object Locator'")

// === .data (10 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@;td=597da8;validated-header; map:58151
DATA_CHT_1_COMPGEN(0x00997da8, "t_chain_bolt `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_spell@@;td=597df0;validated-header; map:58152
DATA_CHT_1_COMPGEN(0x00997df0, "t_combat_spell `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_spell_single_target@@;td=597e10;validated-header; map:58153
DATA_CHT_1_COMPGEN(0x00997e10, "t_combat_spell_single_target `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_chain_lightning@@;td=597e3c;validated-header; map:58154
DATA_CHT_1_COMPGEN(0x00997e3c, "t_chain_lightning `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_spell_factory_base@@;td=597d4c;validated-header; map:58155
DATA_CHT_1_COMPGEN(0x00997d4c, "t_spell_factory_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_spell_factory@Vt_chain_lightning@@@@;td=597d70;validated-header; map:58156
DATA_CHT_1_COMPGEN(0x00997d70, "t_spell_factory<t_chain_lightning> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;td=597e60;validated-header; map:58157
DATA_CHT_1_COMPGEN(0x00997e60, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;td=597f10;validated-header; map:58158
DATA_CHT_1_COMPGEN(0x00997f10, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> `RTTI Type Descriptor'")

// name:A; map symbol; map:58159
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@V?$t_counted_ptr@Vt_chain_bolt@?%C:\Work\game\chain_lightning.cpp2248017495@@@@@@;td=598080;validated-header; map:58160
DATA_CHT_1_COMPGEN(0x00998080, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_counted_ptr<t_chain_bolt>> `RTTI Type Descriptor'")
