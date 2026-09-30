// army_dialog.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\army_dialog.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 161/269 (A:97 B:10 C:0); unaccounted 108; skipped std 76.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (145 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69638; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005124b0, 0x15, STATIC_INIT_DISPATCH, "army_dialog#1")

// name:C; dyninit; see ledger; map:69639
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "army_dialog#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69640; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005124d0, 0x11, STATIC_INIT_DISPATCH, "army_dialog#2")

// confidence:D; dyninit-ctor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69641; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005124f0, 0xd1, STATIC_CTOR, "army_dialog#2")

// name:C; dyninit; see ledger; map:69642
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "army_dialog#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:69643; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005125d0, 0xa, STATIC_DTOR, "army_dialog#2")

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14001
VA_CHT_1(0x005125e0, 0x619)
t_army_dialog::t_army_dialog(t_army* arg_0, t_army* arg_1, t_adventure_frame* arg_2, int arg_3)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14002
VA_CHT_1(0x00513310, 0x16)
void t_army_dialog::army_down_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14003
VA_CHT_1(0x00513330, 0x16)
void t_army_dialog::army_up_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14004
VA_CHT_1(0x00513350, 0x1eb)
void t_army_dialog::setup_temp_army()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14005
VA_CHT_1(0x00513540, 0x1cc)
void t_army_dialog::get_transfer_costs(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14006
VA_CHT_1(0x00513710, 0x373)
void t_army_dialog::close_creature_windows()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14007
VA_CHT_1(0x00513a90, 0x22b)
void t_army_dialog::select_army(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14008
VA_CHT_1(0x00513cc0, 0xd6)
void t_army_dialog::validate_graveyard_drag_drop(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14009
VA_CHT_1(0x00513da0, 0x98)
void t_army_dialog::validate_allied_graveyard_drag_drop(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1,
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14010
VA_CHT_1(0x00513e40, 0x2f2)
void t_army_dialog::check_for_allied_and_graveyard()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14011
VA_CHT_1(0x00514160, 0xc4)
void t_army_dialog::get_artifact_pile_position(
    t_adv_map_point& arg_0,
    t_counted_ptr<t_adv_artifact_pile>& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:14012
VA_CHT_1(0x00514230, 0x32)
void t_army_dialog::update_scroll_buttons(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14013
VA_CHT_1(0x00514270, 0x14)
void t_army_dialog::on_close()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14014
VA_CHT_1(0x00514480, 0xe7)
void t_army_dialog::trigger_events()
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14015
VA_CHT_1(0x00514f60, 0x43)
void t_army_dialog::set_enemy_attack_handler(t_handler arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14016
VA_CHT_1(0x00515820, 0x21)
void t_army_dialog::enemy_attack_handler()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69644; name:B (dyninit; see ledger)
VA_CHT_1(0x005158d0, 0x20)
// army_dialog$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69646; name:B (dyninit; see ledger)
VA_CHT_1(0x005158f0, 0x5c)
// army_dialog$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_dialog$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_dialog$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:69649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// army_dialog$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:14017
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army_list_window::set_limit_handler(t_handler_1<int> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:14018
VA_CHT_1(0x00514450, 0x21)
t_handler_1<int>::~t_handler_1<int>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14019
VA_CHT_1(0x00514140, 0x20)
t_handler_1<int>& t_handler_1<int>::operator=(t_handler_1<int> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14020
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<int>>::~t_counted_ptr<t_handler_base_1<int>>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14021
VA_CHT_1_COMPGEN(0x00512c00, 0x1e, SCALAR_DELETING_DTOR, t_army_dialog)

// name:A; map symbol; map:14022
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army_dialog)

// name:A; map symbol; map:14023
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_dialog_base::~t_army_dialog_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14024
VA_CHT_1(0x005130d0, 0x7)
t_drag_artifact_source_holder::~t_drag_artifact_source_holder()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14025
VA_CHT_1_COMPGEN(0x005130e0, 0x20, VECTOR_DELETING_DTOR, t_drag_artifact_source_holder)

// name:A; map symbol; map:14026
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_drag_artifact_source_holder)

// name:A; map symbol; map:14028
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_dialog::~t_army_dialog()
{
    // Body unavailable.
}

// name:A; map symbol; map:14029
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer_window::~t_bitmap_layer_window()
{
    // Body unavailable.
}

// name:A; map symbol; map:14030
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_window>::~t_counted_ptr<t_bitmap_layer_window>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14031
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army_list_window::move_list(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14032
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array const* t_creature_array_window::get_army() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14033
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_stack* t_drag_creature::get_data() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14034
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_creature_array_window* t_drag_creature::get_source_window() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14035
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::~t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14036
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14037
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> t_creature_array_window::get_drag_validate_handler(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14038
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14039
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_creature_array_window::set_drag_validate_handler(
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14040
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>& t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::operator=(
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14041
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(
    t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14109
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>& t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator=(
    t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14110
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>& t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14111
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_army>& t_counted_ptr<t_army>::operator=(t_counted_ptr<t_army> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14112
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<int>>& t_counted_ptr<t_handler_base_1<int>>::operator=(
    t_counted_ptr<t_handler_base_1<int>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_army_dialog& arg_0, void (t_army_dialog::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:14114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_army*> bound_handler(t_army_dialog& arg_0, void (t_army_dialog::*)(t_army*))
{
    // Body unavailable.
}

// name:A; map symbol; map:14115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int> bound_handler(t_army_dialog& arg_0, void (t_army_dialog::*)(int))
{
    // Body unavailable.
}

// name:A; map symbol; map:14116
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler bound_handler(t_army_dialog& arg_0, void (t_army_dialog::*)(void))
{
    // Body unavailable.
}

// name:A; map symbol; map:14117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> bound_handler(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> add_3rd_argument(
    t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> arg_0,
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>::~t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> bound_handler(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(
    t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int>::t_handler_1<int>(t_handler_base_1<int>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(
    t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>* t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>*(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14133
VA_CHT_1(0x00515290, 0x5e)
t_bound_handler_1<t_army_dialog, t_button*>::t_bound_handler_1<t_army_dialog, t_button*>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14134
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_army_dialog, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14135
VA_CHT_1(0x005152f0, 0x5e)
t_bound_handler_1<t_army_dialog, t_army*>::t_bound_handler_1<t_army_dialog, t_army*>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_army*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14136
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_army_dialog, t_army*>::operator()(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14137
VA_CHT_1(0x00515350, 0x5e)
t_bound_handler_1<t_army_dialog, int>::t_bound_handler_1<t_army_dialog, int>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14138
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_army_dialog, int>::operator()(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14139
VA_CHT_1(0x005153b0, 0x5e)
t_bound_handler<t_army_dialog>::t_bound_handler<t_army_dialog>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(void)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler<t_army_dialog>::operator()()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14141
VA_CHT_1(0x00515410, 0x5e)
t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>)
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14142
VA_CHT_1(0x00515640, 0x79)
void t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1,
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-band; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14143
VA_CHT_1(0x00515470, 0x128)
t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(
    t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>* arg_0,
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot;vftable-certificate=1156c0:14144;class=t_add_3rd_handler_2<struct t_creature_array_window::t_drag_drop_validate_data const &, bool &, class t_handler_2<struct t_creature_array_window::t_drag_drop_validate_data const &, bool &>>;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=8;checked-rtti-and-raw-slots;vft=4d5438,col=4fd178,offset=8,slot=1,entry=1156c0; map:14144
VA_CHT_1(0x005156c0, 0x98)
void t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14145
VA_CHT_1(0x005155c0, 0x5e)
t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(
    t_army_dialog& arg_0,
    void (t_army_dialog::*)(t_creature_array_window::t_drag_drop_validate_data const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_button*>")

// name:A; map symbol; map:14148
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_button*>")

// name:A; map symbol; map:14149
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_army*>")

// name:A; map symbol; map:14150
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_army*>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14151
VA_CHT_1_COMPGEN(0x005157a0, 0x1e, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, int>")

// name:A; map symbol; map:14152
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, int>")

// name:A; map symbol; map:14153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<int>::t_handler_base_1<int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14154
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler<t_army_dialog>")

// name:A; map symbol; map:14155
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_army_dialog>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14156
VA_CHT_1_COMPGEN(0x005157c0, 0x1e, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14157
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14158
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14159
VA_CHT_1_COMPGEN(0x00515800, 0x1e, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14160
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::~t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14163
VA_CHT_1(0x00670b90, 0x21)
t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::~t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14164
VA_CHT_1_COMPGEN(0x005155a0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:14165
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:14166
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:14167
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:14168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_army_dialog, t_button*>::~t_bound_handler_1<t_army_dialog, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_army_dialog, t_army*>::~t_bound_handler_1<t_army_dialog, t_army*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_army_dialog, int>::~t_bound_handler_1<t_army_dialog, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<int>::~t_handler_base_1<int>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14172
VA_CHT_1(0x00565230, 0x21)
t_abstract_function_1<void, int>::~t_abstract_function_1<void, int>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14173
VA_CHT_1_COMPGEN(0x00515760, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_1<void, int>")

// name:A; map symbol; map:14174
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_1<void, int>")

// name:A; map symbol; map:14175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_1<int>")

// name:A; map symbol; map:14176
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_1<int>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14177
VA_CHT_1(0x0053d620, 0x73)
t_abstract_function_1<void, int>::t_abstract_function_1<void, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14178
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_army_dialog>::~t_bound_handler<t_army_dialog>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:14182
VA_CHT_1_COMPGEN(0x005157e0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14184
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14185
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// name:A; map symbol; map:14186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::~t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14188
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// name:A; map symbol; map:14189
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:14190
VA_CHT_1(0x006b0370, 0x58)
t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::~t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::operator()(
    t_creature_array_window::t_drag_drop_validate_data const& arg_0,
    bool& arg_1,
    t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14193
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::t_counted_ptr<t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>(
    t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14194
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<int>>::t_counted_ptr<t_handler_base_1<int>>(t_handler_base_1<int>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>::t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>(
    t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>* t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>::operator t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>& t_counted_ptr<t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_army_dialog>")

// name:A; map symbol; map:14199
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14200
VA_CHT_1_COMPGEN(0x00515950, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14201
VA_CHT_1_COMPGEN(0x00515960, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14202
VA_CHT_1_COMPGEN(0x00515970, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_button*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14203
VA_CHT_1_COMPGEN(0x00515980, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14204
VA_CHT_1_COMPGEN(0x00515990, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, t_army*>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14205
VA_CHT_1_COMPGEN(0x005159a0, 0xb, VECTOR_DELETING_DTOR, t_army_dialog)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14206
VA_CHT_1_COMPGEN(0x005159b0, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_1<int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14207
VA_CHT_1_COMPGEN(0x005159c0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_army_dialog, int>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:14208
VA_CHT_1_COMPGEN(0x005159d0, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>")

// === .rdata (26 symbols) ===

// confidence:A; rtti-name; map:43400
DATA_CHT_1_COMPGEN(0x008d52fc, "const t_army_dialog::`vftable'{for `t_drag_artifact_source_holder'}")

// confidence:B; rtti-order; map:43401
DATA_CHT_1_COMPGEN(0x008d531c, "const t_army_dialog::`vftable'{for `t_bitmap_layer_window'}")

// confidence:A; rtti-name; map:43402
DATA_CHT_1_COMPGEN(0x008d53a0, "const t_drag_artifact_source_holder::`vftable'")

// confidence:A; rtti-name; map:43403
DATA_CHT_1_COMPGEN(0x008d53bc, "const t_bound_handler_1<t_army_dialog, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:43404
DATA_CHT_1_COMPGEN(0x008d53c8, "const t_bound_handler_1<t_army_dialog, t_button*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43405
DATA_CHT_1_COMPGEN(0x008d53d0, "const t_bound_handler_1<t_army_dialog, t_army*>::`vftable'{for `t_abstract_function_1<void, t_army*>'}")

// confidence:B; rtti-order; map:43406
DATA_CHT_1_COMPGEN(0x008d53dc, "const t_bound_handler_1<t_army_dialog, t_army*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43407
DATA_CHT_1_COMPGEN(0x008d53e4, "const t_bound_handler_1<t_army_dialog, int>::`vftable'{for `t_abstract_function_1<void, int>'}")

// confidence:B; rtti-order; map:43408
DATA_CHT_1_COMPGEN(0x008d53f0, "const t_bound_handler_1<t_army_dialog, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43409
DATA_CHT_1_COMPGEN(0x008d5404, "const t_bound_handler<t_army_dialog>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:43410
DATA_CHT_1_COMPGEN(0x008d5410, "const t_bound_handler<t_army_dialog>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43411
DATA_CHT_1_COMPGEN(0x008d5418, "const t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>'}")

// confidence:B; rtti-order; map:43412
DATA_CHT_1_COMPGEN(0x008d5424, "const t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43413
DATA_CHT_1_COMPGEN(0x008d5438, "const t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:B; rtti-order; map:43414
DATA_CHT_1_COMPGEN(0x008d5444, "const t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43415
DATA_CHT_1_COMPGEN(0x008d546c, "const t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:B; rtti-order; map:43416
DATA_CHT_1_COMPGEN(0x008d5478, "const t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43417
DATA_CHT_1_COMPGEN(0x008d6ca4, "const t_handler_base_1<int>::`vftable'{for `t_abstract_function_1<void, int>'}")

// confidence:B; rtti-order; map:43418
DATA_CHT_1_COMPGEN(0x008d6cb0, "const t_handler_base_1<int>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43419
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>'}")

// name:A; map symbol; map:43420
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43421
DATA_CHT_1_COMPGEN(0x008d544c, "const t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:B; rtti-order; map:43422
DATA_CHT_1_COMPGEN(0x008d5458, "const t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43423
DATA_CHT_1_COMPGEN(0x008d5460, "const t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`vftable'")

// confidence:A; rtti-name; map:43424
DATA_CHT_1_COMPGEN(0x008d53f8, "const t_abstract_function_1<void, int>::`vftable'")

// confidence:A; rtti-name; map:43425
DATA_CHT_1_COMPGEN(0x008d542c, "const t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`vftable'")

// === .rdata$r (77 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_army_dialog@@;vft=4d52fc;col=4fcd38;td=58f4c4;chd=4fcd28;offset=200;cdOffset=0;validated-hierarchy; map:49203
DATA_CHT_1_COMPGEN(0x008fcd38, "const t_army_dialog::`RTTI Complete Object Locator'{for `t_drag_artifact_source_holder'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_drag_artifact_source_holder@@;bcd=4fcca8;pmd=200,-1,0;attributes=0;validated-hierarchy-link; map:49204
DATA_CHT_1_COMPGEN(0x008fcca8, "t_drag_artifact_source_holder::`RTTI Base Class Descriptor at (200, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_layer_window@@;bcd=4fccc0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49205
DATA_CHT_1_COMPGEN(0x008fccc0, "t_bitmap_layer_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army_dialog_base@@;bcd=4fccd8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49206
DATA_CHT_1_COMPGEN(0x008fccd8, "t_army_dialog_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army_dialog@@;bcd=4fccf0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49207
DATA_CHT_1_COMPGEN(0x008fccf0, "t_army_dialog::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army_dialog@@;vft=4d52fc;col=4fcd38;td=58f4c4;chd=4fcd28;offset=200;cdOffset=0;validated-hierarchy; map:49208
DATA_CHT_1_COMPGEN(0x008fcd08, "t_army_dialog::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army_dialog@@;vft=4d52fc;col=4fcd38;td=58f4c4;chd=4fcd28;offset=200;cdOffset=0;validated-hierarchy; map:49209
DATA_CHT_1_COMPGEN(0x008fcd28, "t_army_dialog::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49210
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army_dialog::`RTTI Complete Object Locator'{for `t_bitmap_layer_window'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_drag_artifact_source_holder@@;bcd=4fcd4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49211
DATA_CHT_1_COMPGEN(0x008fcd4c, "t_drag_artifact_source_holder::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_drag_artifact_source_holder@@;vft=4d53a0;col=4fcd7c;td=58f450;chd=4fcd6c;offset=0;cdOffset=0;validated-hierarchy; map:49212
DATA_CHT_1_COMPGEN(0x008fcd64, "t_drag_artifact_source_holder::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_drag_artifact_source_holder@@;vft=4d53a0;col=4fcd7c;td=58f450;chd=4fcd6c;offset=0;cdOffset=0;validated-hierarchy; map:49213
DATA_CHT_1_COMPGEN(0x008fcd6c, "t_drag_artifact_source_holder::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_drag_artifact_source_holder@@;vft=4d53a0;col=4fcd7c;td=58f450;chd=4fcd6c;offset=0;cdOffset=0;validated-hierarchy; map:49214
DATA_CHT_1_COMPGEN(0x008fcd7c, "const t_drag_artifact_source_holder::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_button@@@@;vft=4d53bc;col=4fcde0;td=58f568;chd=4fcdd0;offset=8;cdOffset=0;validated-hierarchy; map:49215
DATA_CHT_1_COMPGEN(0x008fcde0, "const t_bound_handler_1<t_army_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_button@@@@;bcd=4fcda4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49216
DATA_CHT_1_COMPGEN(0x008fcda4, "t_bound_handler_1<t_army_dialog, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_button@@@@;vft=4d53bc;col=4fcde0;td=58f568;chd=4fcdd0;offset=8;cdOffset=0;validated-hierarchy; map:49217
DATA_CHT_1_COMPGEN(0x008fcdbc, "t_bound_handler_1<t_army_dialog, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_button@@@@;vft=4d53bc;col=4fcde0;td=58f568;chd=4fcdd0;offset=8;cdOffset=0;validated-hierarchy; map:49218
DATA_CHT_1_COMPGEN(0x008fcdd0, "t_bound_handler_1<t_army_dialog, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49219
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_army_dialog, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_army@@@@;vft=4d53d0;col=4fce44;td=58f5a8;chd=4fce34;offset=8;cdOffset=0;validated-hierarchy; map:49220
DATA_CHT_1_COMPGEN(0x008fce44, "const t_bound_handler_1<t_army_dialog, t_army*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_army*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_army@@@@;bcd=4fce08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49221
DATA_CHT_1_COMPGEN(0x008fce08, "t_bound_handler_1<t_army_dialog, t_army*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_army@@@@;vft=4d53d0;col=4fce44;td=58f5a8;chd=4fce34;offset=8;cdOffset=0;validated-hierarchy; map:49222
DATA_CHT_1_COMPGEN(0x008fce20, "t_bound_handler_1<t_army_dialog, t_army*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_army@@@@;vft=4d53d0;col=4fce44;td=58f5a8;chd=4fce34;offset=8;cdOffset=0;validated-hierarchy; map:49223
DATA_CHT_1_COMPGEN(0x008fce34, "t_bound_handler_1<t_army_dialog, t_army*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49224
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_army_dialog, t_army*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@H@@;vft=4d53e4;col=4fcf1c;td=58f638;chd=4fcf0c;offset=8;cdOffset=0;validated-hierarchy; map:49225
DATA_CHT_1_COMPGEN(0x008fcf1c, "const t_bound_handler_1<t_army_dialog, int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XH@@;bcd=4fceb0;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49226
DATA_CHT_1_COMPGEN(0x008fceb0, "t_abstract_function_1<void, int>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_1@H@@;bcd=4fcec8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49227
DATA_CHT_1_COMPGEN(0x008fcec8, "t_handler_base_1<int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@H@@;bcd=4fcee0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49228
DATA_CHT_1_COMPGEN(0x008fcee0, "t_bound_handler_1<t_army_dialog, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@H@@;vft=4d53e4;col=4fcf1c;td=58f638;chd=4fcf0c;offset=8;cdOffset=0;validated-hierarchy; map:49229
DATA_CHT_1_COMPGEN(0x008fcef8, "t_bound_handler_1<t_army_dialog, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@H@@;vft=4d53e4;col=4fcf1c;td=58f638;chd=4fcf0c;offset=8;cdOffset=0;validated-hierarchy; map:49230
DATA_CHT_1_COMPGEN(0x008fcf0c, "t_bound_handler_1<t_army_dialog, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49231
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_army_dialog, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler@Vt_army_dialog@@@@;vft=4d5404;col=4fcf80;td=58f66c;chd=4fcf70;offset=8;cdOffset=0;validated-hierarchy; map:49232
DATA_CHT_1_COMPGEN(0x008fcf80, "const t_bound_handler<t_army_dialog>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler@Vt_army_dialog@@@@;bcd=4fcf44;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49233
DATA_CHT_1_COMPGEN(0x008fcf44, "t_bound_handler<t_army_dialog>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler@Vt_army_dialog@@@@;vft=4d5404;col=4fcf80;td=58f66c;chd=4fcf70;offset=8;cdOffset=0;validated-hierarchy; map:49234
DATA_CHT_1_COMPGEN(0x008fcf5c, "t_bound_handler<t_army_dialog>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler@Vt_army_dialog@@@@;vft=4d5404;col=4fcf80;td=58f66c;chd=4fcf70;offset=8;cdOffset=0;validated-hierarchy; map:49235
DATA_CHT_1_COMPGEN(0x008fcf70, "t_bound_handler<t_army_dialog>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49236
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler<t_army_dialog>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5418;col=4fd058;td=58f7f8;chd=4fd048;offset=8;cdOffset=0;validated-hierarchy; map:49237
DATA_CHT_1_COMPGEN(0x008fd058, "const t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;bcd=4fcfec;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49238
DATA_CHT_1_COMPGEN(0x008fcfec, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;bcd=4fd004;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49239
DATA_CHT_1_COMPGEN(0x008fd004, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;bcd=4fd01c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49240
DATA_CHT_1_COMPGEN(0x008fd01c, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5418;col=4fd058;td=58f7f8;chd=4fd048;offset=8;cdOffset=0;validated-hierarchy; map:49241
DATA_CHT_1_COMPGEN(0x008fd034, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5418;col=4fd058;td=58f7f8;chd=4fd048;offset=8;cdOffset=0;validated-hierarchy; map:49242
DATA_CHT_1_COMPGEN(0x008fd048, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49243
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5438;col=4fd178;td=58f978;chd=4fd168;offset=8;cdOffset=0;validated-hierarchy; map:49244
DATA_CHT_1_COMPGEN(0x008fd178, "const t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;bcd=4fd10c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49245
DATA_CHT_1_COMPGEN(0x008fd10c, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;bcd=4fd124;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49246
DATA_CHT_1_COMPGEN(0x008fd124, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;bcd=4fd13c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49247
DATA_CHT_1_COMPGEN(0x008fd13c, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5438;col=4fd178;td=58f978;chd=4fd168;offset=8;cdOffset=0;validated-hierarchy; map:49248
DATA_CHT_1_COMPGEN(0x008fd154, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d5438;col=4fd178;td=58f978;chd=4fd168;offset=8;cdOffset=0;validated-hierarchy; map:49249
DATA_CHT_1_COMPGEN(0x008fd168, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49250
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d546c;col=4fd1dc;td=58fa28;chd=4fd1cc;offset=8;cdOffset=0;validated-hierarchy; map:49251
DATA_CHT_1_COMPGEN(0x008fd1dc, "const t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;bcd=4fd1a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49252
DATA_CHT_1_COMPGEN(0x008fd1a0, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d546c;col=4fd1dc;td=58fa28;chd=4fd1cc;offset=8;cdOffset=0;validated-hierarchy; map:49253
DATA_CHT_1_COMPGEN(0x008fd1b8, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d546c;col=4fd1dc;td=58fa28;chd=4fd1cc;offset=8;cdOffset=0;validated-hierarchy; map:49254
DATA_CHT_1_COMPGEN(0x008fd1cc, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49255
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_1@H@@;vft=4d6ca4;col=4ff78c;td=58f614;chd=4ff77c;offset=8;cdOffset=0;validated-hierarchy; map:49256
DATA_CHT_1_COMPGEN(0x008ff78c, "const t_handler_base_1<int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, int>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_1@H@@;vft=4d6ca4;col=4ff78c;td=58f614;chd=4ff77c;offset=8;cdOffset=0;validated-hierarchy; map:49257
DATA_CHT_1_COMPGEN(0x008ff76c, "t_handler_base_1<int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_1@H@@;vft=4d6ca4;col=4ff78c;td=58f614;chd=4ff77c;offset=8;cdOffset=0;validated-hierarchy; map:49258
DATA_CHT_1_COMPGEN(0x008ff77c, "t_handler_base_1<int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49259
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_1<int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:49260
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>'}")

// name:A; map symbol; map:49261
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Array'")

// name:A; map symbol; map:49262
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49263
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d544c;col=4fd0e4;td=58f918;chd=4fd0d4;offset=8;cdOffset=0;validated-hierarchy; map:49264
DATA_CHT_1_COMPGEN(0x008fd0e4, "const t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d544c;col=4fd0e4;td=58f918;chd=4fd0d4;offset=8;cdOffset=0;validated-hierarchy; map:49265
DATA_CHT_1_COMPGEN(0x008fd0c4, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d544c;col=4fd0e4;td=58f918;chd=4fd0d4;offset=8;cdOffset=0;validated-hierarchy; map:49266
DATA_CHT_1_COMPGEN(0x008fd0d4, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49267
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;bcd=4fd06c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49268
DATA_CHT_1_COMPGEN(0x008fd06c, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d5460;col=4fd09c;td=58f8b0;chd=4fd08c;offset=0;cdOffset=0;validated-hierarchy; map:49269
DATA_CHT_1_COMPGEN(0x008fd084, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d5460;col=4fd09c;td=58f8b0;chd=4fd08c;offset=0;cdOffset=0;validated-hierarchy; map:49270
DATA_CHT_1_COMPGEN(0x008fd08c, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;vft=4d5460;col=4fd09c;td=58f8b0;chd=4fd08c;offset=0;cdOffset=0;validated-hierarchy; map:49271
DATA_CHT_1_COMPGEN(0x008fd09c, "const t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_1@XH@@;bcd=4fce58;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49272
DATA_CHT_1_COMPGEN(0x008fce58, "t_abstract_function_1<void, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_1@XH@@;vft=4d53f8;col=4fce88;td=58f5e8;chd=4fce78;offset=0;cdOffset=0;validated-hierarchy; map:49273
DATA_CHT_1_COMPGEN(0x008fce70, "t_abstract_function_1<void, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_1@XH@@;vft=4d53f8;col=4fce88;td=58f5e8;chd=4fce78;offset=0;cdOffset=0;validated-hierarchy; map:49274
DATA_CHT_1_COMPGEN(0x008fce78, "t_abstract_function_1<void, int>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_1@XH@@;vft=4d53f8;col=4fce88;td=58f5e8;chd=4fce78;offset=0;cdOffset=0;validated-hierarchy; map:49275
DATA_CHT_1_COMPGEN(0x008fce88, "const t_abstract_function_1<void, int>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;bcd=4fcf94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49276
DATA_CHT_1_COMPGEN(0x008fcf94, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d542c;col=4fcfc4;td=58f6a0;chd=4fcfb4;offset=0;cdOffset=0;validated-hierarchy; map:49277
DATA_CHT_1_COMPGEN(0x008fcfac, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d542c;col=4fcfc4;td=58f6a0;chd=4fcfb4;offset=0;cdOffset=0;validated-hierarchy; map:49278
DATA_CHT_1_COMPGEN(0x008fcfb4, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;vft=4d542c;col=4fcfc4;td=58f6a0;chd=4fcfb4;offset=0;cdOffset=0;validated-hierarchy; map:49279
DATA_CHT_1_COMPGEN(0x008fcfc4, "const t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>>::`RTTI Complete Object Locator'")

// === .data (20 symbols) ===

namespace {

// name:A; map symbol; map:57810
DATA_CHT_1(UNACCOUNTED)
int k_max_army_windows; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AVt_drag_artifact_source_holder@@;td=58f450;validated-header; map:57811
DATA_CHT_1_COMPGEN(0x0098f450, "t_drag_artifact_source_holder `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_layer_window@@;td=58f47c;validated-header; map:57812
DATA_CHT_1_COMPGEN(0x0098f47c, "t_bitmap_layer_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_army_dialog_base@@;td=58f4a0;validated-header; map:57813
DATA_CHT_1_COMPGEN(0x0098f4a0, "t_army_dialog_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_army_dialog@@;td=58f4c4;validated-header; map:57814
DATA_CHT_1_COMPGEN(0x0098f4c4, "t_army_dialog `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_drag_object@@;td=58f52c;validated-header; map:57815
DATA_CHT_1_COMPGEN(0x0098f52c, "t_drag_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_drag_creature@@;td=58f548;validated-header; map:57816
DATA_CHT_1_COMPGEN(0x0098f548, "t_drag_creature `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_button@@@@;td=58f568;validated-header; map:57817
DATA_CHT_1_COMPGEN(0x0098f568, "t_bound_handler_1<t_army_dialog, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@PAVt_army@@@@;td=58f5a8;validated-header; map:57818
DATA_CHT_1_COMPGEN(0x0098f5a8, "t_bound_handler_1<t_army_dialog, t_army*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_1@XH@@;td=58f5e8;validated-header; map:57819
DATA_CHT_1_COMPGEN(0x0098f5e8, "t_abstract_function_1<void, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_1@H@@;td=58f614;validated-header; map:57820
DATA_CHT_1_COMPGEN(0x0098f614, "t_handler_base_1<int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_army_dialog@@H@@;td=58f638;validated-header; map:57821
DATA_CHT_1_COMPGEN(0x0098f638, "t_bound_handler_1<t_army_dialog, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler@Vt_army_dialog@@@@;td=58f66c;validated-header; map:57822
DATA_CHT_1_COMPGEN(0x0098f66c, "t_bound_handler<t_army_dialog> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;td=58f6a0;validated-header; map:57823
DATA_CHT_1_COMPGEN(0x0098f6a0, "t_abstract_function_3<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;td=58f750;validated-header; map:57824
DATA_CHT_1_COMPGEN(0x0098f750, "t_handler_base_3<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;td=58f7f8;validated-header; map:57825
DATA_CHT_1_COMPGEN(0x0098f7f8, "t_bound_handler_3<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;td=58f8b0;validated-header; map:57826
DATA_CHT_1_COMPGEN(0x0098f8b0, "t_abstract_function_2<void, t_creature_array_window::t_drag_drop_validate_data const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;td=58f918;validated-header; map:57827
DATA_CHT_1_COMPGEN(0x0098f918, "t_handler_base_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_NV?$t_handler_2@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@@@;td=58f978;validated-header; map:57828
DATA_CHT_1_COMPGEN(0x0098f978, "t_add_3rd_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&, t_handler_2<t_creature_array_window::t_drag_drop_validate_data const&, bool&>> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_army_dialog@@ABUt_drag_drop_validate_data@t_creature_array_window@@AA_N@@;td=58fa28;validated-header; map:57829
DATA_CHT_1_COMPGEN(0x0098fa28, "t_bound_handler_2<t_army_dialog, t_creature_array_window::t_drag_drop_validate_data const&, bool&> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// name:A; map symbol; map:60055
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_counted_ptr<t_army>, std::pair<t_counted_ptr<t_army> const, t_counted_ptr<t_army>>, std::map<t_counted_ptr<t_army>, t_counted_ptr<t_army>, std::less<t_counted_ptr<t_army>>, std::allocator<t_counted_ptr<t_army>>>::_Kfn, std::less<t_counted_ptr<t_army>>, std::allocator<t_counted_ptr<t_army>>>::_Node*std::_Tree<t_counted_ptr<t_army>, std::pair<t_counted_ptr<t_army> const, t_counted_ptr<t_army>>, std::map<t_counted_ptr<t_army>, t_counted_ptr<t_army>, std::less<t_counted_ptr<t_army>>, std::allocator<t_counted_ptr<t_army>>>::_Kfn, std::less<t_counted_ptr<t_army>>, std::allocator<t_counted_ptr<t_army>>>::_Nil; // Initial value unavailable.
