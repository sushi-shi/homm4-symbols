// castle_gate.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\castle_gate.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 43/73 (A:6 B:4 C:0); unaccounted 30; skipped std 8.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (58 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68454; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00599910, 0x15, STATIC_INIT_DISPATCH, "castle_gate#1")

// name:C; dyninit; see ledger; map:68455
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68456; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00599930, 0x15, STATIC_INIT_DISPATCH, "castle_gate#2")

// name:C; dyninit; see ledger; map:68457
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68458; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00599950, 0x15, STATIC_INIT_DISPATCH, "castle_gate#3")

// name:C; dyninit; see ledger; map:68459
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#3")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68460; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00599970, 0x15, STATIC_INIT_DISPATCH, "castle_gate#4")

// name:C; dyninit; see ledger; map:68461
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#4")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68462; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00599990, 0x10, STATIC_INIT_DISPATCH, "castle_gate#5")

// name:C; dyninit; see ledger; map:68463
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#5")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68464; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005999a0, 0x15, STATIC_INIT_DISPATCH, "castle_gate#6")

// name:C; dyninit; see ledger; map:68465
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "castle_gate#6")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19172
VA_CHT_1(0x005999c0, 0x17d)
t_castle_gate::t_castle_gate(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19173
VA_CHT_1(0x00599b70, 0x198)
t_castle_gate::~t_castle_gate()
{
    // Body unavailable.
}

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19174
VA_CHT_1(0x00599d10, 0x2dd)
t_gate_sound_set::t_gate_sound_set(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19175
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_gate_sound_set::play(t_town_type arg_0) const
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19176
VA_CHT_1(0x00599ff0, 0x125)
t_castle_gate::t_castle_gate(
    t_battlefield& arg_0,
    t_combat_object_model_cache const& arg_1,
    t_town const* arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19177
VA_CHT_1(0x0059a120, 0x19f)
void t_castle_gate::apply_damage(t_battlefield& arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:68466
VA_CHT_1(0x0059a2c0, 0x332)
static t_combat_object_model_cache get_gate_cache(
    t_town_type arg_0,
    t_town_image_level arg_1,
    int arg_2,
    double arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19178
VA_CHT_1(0x0059a600, 0x1e8)
void t_castle_gate::start_animation(t_battlefield& arg_0, t_gate_animation arg_1, t_handler arg_2)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68467
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_castle_gate::start_animation$sdtor
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:19179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_castle_gate::belongs_to(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19180
VA_CHT_1(0x0059a810, 0x7)
bool t_castle_gate::controlled_by(bool arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19181
VA_CHT_1(0x0059a820, 0xc4)
void t_castle_gate::on_idle()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19182
VA_CHT_1(0x0059a8f0, 0x185)
void t_castle_gate::change_model(t_combat_object_model_cache const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19183
VA_CHT_1(0x0059aa80, 0x18)
void t_castle_gate::place(t_battlefield& arg_0, t_map_point_2d const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19184
VA_CHT_1(0x0059aaa0, 0x39)
t_map_rect_2d t_castle_gate::get_open_rect() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19185
VA_CHT_1(0x0059aae0, 0x52)
bool t_castle_gate::is_open() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_castle_gate::is_gate() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_type t_castle_gate::get_object_type() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19188
VA_CHT_1(0x0059ab40, 0xfa)
bool t_castle_gate::read(t_combat_reader& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19189
VA_CHT_1(0x0059ac40, 0xd6)
bool t_castle_gate::write(t_combat_writer& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19190
VA_CHT_1(0x0059ad20, 0x15e)
void t_castle_gate::remove(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19191
VA_CHT_1(0x0059ae80, 0x2a8)
void t_castle_gate::flinch(t_combat_creature const& arg_0, t_combat_action_message const& arg_1)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:68468
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_castle_gate::flinch$sdtor2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68469
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// t_castle_gate::flinch$sdtor1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68470; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0059b150, 0x11, STATIC_INIT_DISPATCH, "castle_gate#7")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68471; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0059b170, 0xd1, STATIC_CTOR, "castle_gate#7")

// name:C; dyninit; see ledger; map:68472
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "castle_gate#7")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:68473; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0059b250, 0xa, STATIC_DTOR, "castle_gate#7")

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19192
VA_CHT_1(0x0059b260, 0x14d)
std::string t_castle_gate::get_object_name() const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68474; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0059b3e0, 0x20, STATIC_INIT_DISPATCH, castle_gate)

// name:A; map symbol; map:19193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_attackable_obstacle::t_attackable_obstacle()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19194
VA_CHT_1_COMPGEN(0x00599b40, 0x2d, SCALAR_DELETING_DTOR, t_castle_gate)

// name:A; map symbol; map:19195
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_castle_gate)

// name:A; map symbol; map:19196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_castle_gate::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

namespace {

// name:A; map symbol; map:19197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_gate_sound_set::~t_gate_sound_set()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_compound_object_model::get_frame_count() const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19199
VA_CHT_1(0x0059a800, 0x10)
int t_stationary_combat_object::get_frame() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_cached_ptr<t_sound>::operator!=(t_sound const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19207
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_resource_cache<t_compound_object_model>::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19208
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_segment* t_counted_ptr<t_object_segment>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_castle_gate)

// name:A; map symbol; map:19211
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual bool t_castle_gate::belongs_to`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:19212
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual bool t_castle_gate::controlled_by`vtordisp{-4, 0}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19213
VA_CHT_1_COMPGEN(0x0059b410, 0x8, VECTOR_DELETING_DTOR, t_castle_gate)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19214
VA_CHT_1(0x0059b420, 0xe)
// [thunk]: public: virtual float t_attackable_obstacle::get_defense_basic`vtordisp{-4, 32}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19215
VA_CHT_1(0x0059b430, 0xb)
// [thunk]: public: virtual float t_attackable_obstacle::get_defense_bonus`vtordisp{-4, 32}'(bool) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (6 symbols) ===

// confidence:B; rtti-order; map:43839
DATA_CHT_1_COMPGEN(0x008d8df4, "const t_castle_gate::`vftable'{for `t_has_defense'}")

// confidence:B; rtti-order; map:43840
DATA_CHT_1_COMPGEN(0x008d8e04, "const t_castle_gate::`vftable'{for `t_abstract_target'}")

// confidence:A; rtti-name; map:43841
DATA_CHT_1_COMPGEN(0x008d8e14, "const t_castle_gate::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:43842
DATA_CHT_1_COMPGEN(0x008d8e20, "const t_castle_gate::`vftable'{for `t_combat_saveable_object'}")

// confidence:B; rtti-order; map:43843
DATA_CHT_1_COMPGEN(0x008d8e3c, "const t_castle_gate::`vftable'{for `t_attackable_object'}")

// name:A; map symbol; map:43844
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_castle_gate::`vbtable'")

// === .rdata$r (8 symbols) ===

// name:A; map symbol; map:50512
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_castle_gate::`RTTI Complete Object Locator'{for `t_has_defense'}")

// name:A; map symbol; map:50513
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_castle_gate::`RTTI Complete Object Locator'{for `t_abstract_target'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_castle_gate@@;vft=4d8e14;col=502cb8;td=597a68;chd=502d20;offset=48;cdOffset=0;validated-hierarchy; map:50514
DATA_CHT_1_COMPGEN(0x00902cb8, "const t_castle_gate::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// name:A; map symbol; map:50515
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_castle_gate::`RTTI Complete Object Locator'{for `t_combat_saveable_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_castle_gate@@;bcd=502ce0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50516
DATA_CHT_1_COMPGEN(0x00902ce0, "t_castle_gate::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_castle_gate@@;vft=4d8e14;col=502cb8;td=597a68;chd=502d20;offset=48;cdOffset=0;validated-hierarchy; map:50517
DATA_CHT_1_COMPGEN(0x00902cf8, "t_castle_gate::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_castle_gate@@;vft=4d8e14;col=502cb8;td=597a68;chd=502d20;offset=48;cdOffset=0;validated-hierarchy; map:50518
DATA_CHT_1_COMPGEN(0x00902d20, "t_castle_gate::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50519
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_castle_gate::`RTTI Complete Object Locator'{for `t_attackable_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_castle_gate@@;td=597a68;validated-header; map:58147
DATA_CHT_1_COMPGEN(0x00997a68, "t_castle_gate `RTTI Type Descriptor'")
