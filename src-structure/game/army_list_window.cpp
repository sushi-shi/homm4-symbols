// army_list_window.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 85/152 (A:53 B:20 C:12); unaccounted 67; skipped std 39.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (102 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:69507; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005299d0, 0x11, STATIC_INIT_DISPATCH, g_army_rings)

// confidence:B; dyninit-ctor; owner-conf-B; map:69508; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005299f0, 0xd7, STATIC_CTOR, g_army_rings)

// name:A; dyninit; see ledger; map:69509
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_army_rings)

// confidence:B; dyninit-dtor; owner-conf-B; map:69510; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00529ad0, 0xa, STATIC_DTOR, g_army_rings)

// confidence:A; align-order; retn,stable,vptr; map:14484
VA_CHT_1(0x00529ae0, 0x443)
t_army_list_window::t_army_list_window(t_screen_rect const& arg_0, t_window* arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:14485
VA_CHT_1(0x00529f50, 0x8c9)
void t_army_list_window::add_item(
    t_screen_point arg_0,
    t_bitmap_layer const* arg_1,
    t_bitmap_layer const* arg_2,
    t_screen_point arg_3,
    t_bitmap_layer const* arg_4,
    t_bitmap_layer const* arg_5,
    t_bitmap_layer const* arg_6
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:14486
VA_CHT_1(0x0052a970, 0x1c1)
t_army_list_window::~t_army_list_window()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14487
VA_CHT_1(0x0052ab40, 0xda)
void t_army_list_window::attach(t_scrollbar* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:14488
VA_CHT_1(0x0052ac20, 0x173)
void t_army_list_window::set_scrollbar()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14489
VA_CHT_1(0x0052ada0, 0x22)
void t_army_list_window::detach()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14490
VA_CHT_1(0x0052add0, 0x28)
void t_army_list_window::inserted(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:14491
VA_CHT_1(0x0052ae00, 0xb1)
bool t_army_list_window::key_down(t_key_event arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:14492
VA_CHT_1(0x0052aec0, 0x3c)
void t_army_list_window::removed(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14493
VA_CHT_1(0x0052af00, 0xd5)
void t_army_list_window::set_army_array(t_army_array* arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-init; owner-conf-C; map:69511; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052afe0, 0x11, STATIC_INIT_DISPATCH, "army_list_window#2")

// confidence:B; dyninit-ctor; owner-conf-C; map:69512; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052b000, 0xd1, STATIC_CTOR, "army_list_window#2")

// name:C; dyninit; see ledger; map:69513
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "army_list_window#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:69514; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052b0e0, 0xa, STATIC_DTOR, "army_list_window#2")

// confidence:A; dyninit-init; owner-conf-C; map:69515; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052b0f0, 0x11, STATIC_INIT_DISPATCH, "army_list_window#3")

// confidence:B; dyninit-ctor; owner-conf-C; map:69516; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052b110, 0xd1, STATIC_CTOR, "army_list_window#3")

// name:C; dyninit; see ledger; map:69517
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "army_list_window#3")

// confidence:B; dyninit-dtor; owner-conf-C; map:69518; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052b1f0, 0xa, STATIC_DTOR, "army_list_window#3")

// confidence:C; align-order; retn,stable; map:14494
VA_CHT_1(0x0052b200, 0xe45)
void t_army_list_window::update()
{
    // Body unavailable.
}

// name:A; map symbol; map:69519
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static void set_bar_height(
    int arg_0,
    int arg_1,
    t_window* arg_2,
    t_window* arg_3,
    t_window* arg_4,
    std::string const& arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14495
VA_CHT_1(0x0052c4c0, 0xbe)
void t_army_list_window::set_highlight(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14496
VA_CHT_1(0x0052c580, 0x15e)
void t_army_list_window::select(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14497
VA_CHT_1(0x0052c6e0, 0xd3)
void t_army_list_window::double_click(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14498
VA_CHT_1(0x0052cc00, 0x5e)
void t_army_list_window::on_scroll(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14499
VA_CHT_1(0x0052cc60, 0xbb)
void t_army_list_window::select_army(t_army* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_army_list_window::set_first_visible(int arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:14501
VA_CHT_1(0x0052cd20, 0x5e)
void t_army_list_window::move_selection_over_sleepers(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14502
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army* t_army_list_window::move_selection(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:14503
VA_CHT_1(0x0052d000, 0x58)
void t_army_list_window::on_visibility_change()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:69520; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0052d080, 0x20, STATIC_INIT_DISPATCH, army_list_window)

// confidence:A; align-band; retn,stable,vslot; map:14504
VA_CHT_1_COMPGEN(0x00529f30, 0x1e, VECTOR_DELETING_DTOR, t_army_list_window)

// name:A; map symbol; map:14505
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_army_list_window)

// name:A; map symbol; map:14506
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_list_viewer::t_list_viewer()
{
    // Body unavailable.
}

// name:A; map symbol; map:14507
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_button::set_double_click_handler(t_handler_1<t_button*> arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:14508
VA_CHT_1(0x0052cd80, 0xef)
t_army_list_window::t_item::t_item()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:14509
VA_CHT_1(0x0052a820, 0x141)
t_army_list_window::t_item::~t_item()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:14510
VA_CHT_1(0x0052c840, 0x38)
int t_army_list_window::get_max_index()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:14511
VA_CHT_1(0x0052c880, 0x21)
int t_army_list_window::get_num_rings()
{
    // Body unavailable.
}

// name:A; map symbol; map:14512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_army_list_window::get_num_armies()
{
    // Body unavailable.
}

// name:A; map symbol; map:14513
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_bitmap_layer_window::get_bitmap() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14516
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_army*>::operator()(t_army* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14517
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<int>::t_handler_1<int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14518
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<int>::operator()(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14535
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_viewed_list<t_counted_ptr<t_army>>::attach(t_list_viewer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14536
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_viewed_list<t_counted_ptr<t_army>>::detach(t_list_viewer* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14537
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_army*>& t_counted_ptr<t_handler_base_1<t_army*>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14538
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<int>>::t_counted_ptr<t_handler_base_1<int>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14539
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<int>& t_counted_ptr<t_handler_base_1<int>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14540
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_army_array>::t_counted_ptr<t_army_array>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14541
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_army_array>& t_counted_ptr<t_army_array>::operator=(t_army_array* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14542
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_array* t_counted_ptr<t_army_array>::operator t_army_array*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14543
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_array& t_counted_ptr<t_army_array>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14544
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int> bound_handler(
    t_army_list_window& arg_0,
    void (t_army_list_window::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14545
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> add_2nd_argument(t_handler_2<t_button*, int> arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14546
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int>::~t_handler_2<t_button*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14547
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, int>>::~t_counted_ptr<t_handler_base_2<t_button*, int>>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14548
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_scrollbar*, int> bound_handler(
    t_army_list_window& arg_0,
    void (t_army_list_window::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14554
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army_list_window::t_item& t_army_list_window::t_item::operator=(t_army_list_window::t_item const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14555
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_army_list_window::t_item)

// confidence:C; align-band; retn,stable; map:14556
VA_CHT_1(0x0052ce70, 0x14f)
t_army_list_window::t_item::t_item(t_army_list_window::t_item const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_button*, int>::t_handler_2<t_button*, int>(t_handler_base_2<t_button*, int>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14560
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, int>* t_handler_2<t_button*, int>::operator t_handler_base_2<t_button*, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14561
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_army_list_window, t_button*, int>::t_bound_handler_2<t_army_list_window, t_button*, int>(
    t_army_list_window& arg_0,
    void (t_army_list_window::*)(t_button*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_army_list_window, t_button*, int>::operator()(t_button* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, int>::t_add_2nd_handler_1<t_button*, int>(
    t_handler_base_2<t_button*, int>* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_button*, int>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:14565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::t_bound_handler_2<t_army_list_window, t_scrollbar*, int>(
    t_army_list_window& arg_0,
    void (t_army_list_window::*)(t_scrollbar*, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:14567
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_button*, int>")

// name:A; map symbol; map:14568
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_button*, int>")

// name:A; map symbol; map:14569
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, int>::t_handler_base_2<t_button*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:14570
VA_CHT_1_COMPGEN(0x0052cfe0, 0x1e, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, int>")

// name:A; map symbol; map:14571
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, int>")

// name:A; map symbol; map:14572
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>")

// name:A; map symbol; map:14573
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>")

// name:A; map symbol; map:14574
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_army_list_window, t_button*, int>::~t_bound_handler_2<t_army_list_window, t_button*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14575
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, int>::~t_handler_base_2<t_button*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:14576
VA_CHT_1(0x007def20, 0x21)
t_abstract_function_2<void, t_button*, int>::~t_abstract_function_2<void, t_button*, int>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:14577
VA_CHT_1_COMPGEN(0x0052cfc0, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, int>")

// name:A; map symbol; map:14578
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_button*, int>")

// name:A; map symbol; map:14579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, int>")

// name:A; map symbol; map:14580
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_button*, int>")

// confidence:A; align-band; retn,stable,vptr; map:14581
VA_CHT_1(0x006eaaa0, 0x58)
t_abstract_function_2<void, t_button*, int>::t_abstract_function_2<void, t_button*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14582
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_button*, int>::~t_add_2nd_handler_1<t_button*, int>()
{
    // Body unavailable.
}

// name:A; map symbol; map:14583
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::~t_bound_handler_2<t_army_list_window, t_scrollbar*, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:14585
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_button*, int>::operator()(t_button* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14593
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_window>::t_counted_ptr<t_bitmap_layer_window>(
    t_counted_ptr<t_bitmap_layer_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14594
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_window>& t_counted_ptr<t_bitmap_layer_window>::operator=(
    t_counted_ptr<t_bitmap_layer_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14595
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_cache_window>::t_counted_ptr<t_bitmap_layer_cache_window>(
    t_counted_ptr<t_bitmap_layer_cache_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14596
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_bitmap_layer_cache_window>& t_counted_ptr<t_bitmap_layer_cache_window>::operator=(
    t_counted_ptr<t_bitmap_layer_cache_window> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14598
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_button*, int>>::t_counted_ptr<t_handler_base_2<t_button*, int>>(
    t_handler_base_2<t_button*, int>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:14599
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, int>* t_counted_ptr<t_handler_base_2<t_button*, int>>::operator t_handler_base_2<t_button*, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:14600
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_button*, int>& t_counted_ptr<t_handler_base_2<t_button*, int>>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:14605
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>")

// name:A; map symbol; map:14606
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_army_list_window)

// confidence:C; align-order; stable; map:14607
VA_CHT_1_COMPGEN(0x0052d0b0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_2<t_army_list_window, t_button*, int>")

// confidence:C; align-order; stable; map:14608
VA_CHT_1_COMPGEN(0x0052d0c0, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_button*, int>")

// confidence:C; align-order; stable; map:14609
VA_CHT_1_COMPGEN(0x0052d0d0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_button*, int>")

// === .rdata (12 symbols) ===

// confidence:A; rtti-name; map:43454
DATA_CHT_1_COMPGEN(0x008d5824, "const t_army_list_window::`vftable'{for `t_list_viewer'}")

// confidence:B; rtti-order; map:43455
DATA_CHT_1_COMPGEN(0x008d583c, "const t_army_list_window::`vftable'{for `t_window'}")

// name:A; map symbol; map:43456
DATA_CHT_1(UNACCOUNTED)
// __real@8@4008fa00000000000000

// confidence:A; rtti-name; map:43457
DATA_CHT_1_COMPGEN(0x008d58c4, "const t_bound_handler_2<t_army_list_window, t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:43458
DATA_CHT_1_COMPGEN(0x008d58d0, "const t_bound_handler_2<t_army_list_window, t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43459
DATA_CHT_1_COMPGEN(0x008d58e4, "const t_add_2nd_handler_1<t_button*, int>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:43460
DATA_CHT_1_COMPGEN(0x008d58f0, "const t_add_2nd_handler_1<t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43461
DATA_CHT_1_COMPGEN(0x008d58f8, "const t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`vftable'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:B; rtti-order; map:43462
DATA_CHT_1_COMPGEN(0x008d5904, "const t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43463
DATA_CHT_1_COMPGEN(0x008e3ac8, "const t_handler_base_2<t_button*, int>::`vftable'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:B; rtti-order; map:43464
DATA_CHT_1_COMPGEN(0x008e3ad4, "const t_handler_base_2<t_button*, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:43465
DATA_CHT_1_COMPGEN(0x008d58d8, "const t_abstract_function_2<void, t_button*, int>::`vftable'")

// === .rdata$r (31 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_army_list_window@@;vft=4d5824;col=4fd81c;td=59061c;chd=4fd80c;offset=196;cdOffset=0;validated-hierarchy; map:49361
DATA_CHT_1_COMPGEN(0x008fd81c, "const t_army_list_window::`RTTI Complete Object Locator'{for `t_list_viewer'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_list_viewer@@;bcd=4fd7c4;pmd=196,-1,0;attributes=0;validated-hierarchy-link; map:49362
DATA_CHT_1_COMPGEN(0x008fd7c4, "t_list_viewer::`RTTI Base Class Descriptor at (196, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_army_list_window@@;bcd=4fd7dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49363
DATA_CHT_1_COMPGEN(0x008fd7dc, "t_army_list_window::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_army_list_window@@;vft=4d5824;col=4fd81c;td=59061c;chd=4fd80c;offset=196;cdOffset=0;validated-hierarchy; map:49364
DATA_CHT_1_COMPGEN(0x008fd7f4, "t_army_list_window::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_army_list_window@@;vft=4d5824;col=4fd81c;td=59061c;chd=4fd80c;offset=196;cdOffset=0;validated-hierarchy; map:49365
DATA_CHT_1_COMPGEN(0x008fd80c, "t_army_list_window::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49366
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_army_list_window::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_button@@H@@;vft=4d58c4;col=4fd8f4;td=590788;chd=4fd8e4;offset=8;cdOffset=0;validated-hierarchy; map:49367
DATA_CHT_1_COMPGEN(0x008fd8f4, "const t_bound_handler_2<t_army_list_window, t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;bcd=4fd888;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:49368
DATA_CHT_1_COMPGEN(0x008fd888, "t_abstract_function_2<void, t_button*, int>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@PAVt_button@@H@@;bcd=4fd8a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49369
DATA_CHT_1_COMPGEN(0x008fd8a0, "t_handler_base_2<t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_button@@H@@;bcd=4fd8b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49370
DATA_CHT_1_COMPGEN(0x008fd8b8, "t_bound_handler_2<t_army_list_window, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_button@@H@@;vft=4d58c4;col=4fd8f4;td=590788;chd=4fd8e4;offset=8;cdOffset=0;validated-hierarchy; map:49371
DATA_CHT_1_COMPGEN(0x008fd8d0, "t_bound_handler_2<t_army_list_window, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_button@@H@@;vft=4d58c4;col=4fd8f4;td=590788;chd=4fd8e4;offset=8;cdOffset=0;validated-hierarchy; map:49372
DATA_CHT_1_COMPGEN(0x008fd8e4, "t_bound_handler_2<t_army_list_window, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49373
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_army_list_window, t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@H@@;vft=4d58e4;col=4fd958;td=5907d0;chd=4fd948;offset=8;cdOffset=0;validated-hierarchy; map:49374
DATA_CHT_1_COMPGEN(0x008fd958, "const t_add_2nd_handler_1<t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@H@@;bcd=4fd91c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49375
DATA_CHT_1_COMPGEN(0x008fd91c, "t_add_2nd_handler_1<t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@H@@;vft=4d58e4;col=4fd958;td=5907d0;chd=4fd948;offset=8;cdOffset=0;validated-hierarchy; map:49376
DATA_CHT_1_COMPGEN(0x008fd934, "t_add_2nd_handler_1<t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@H@@;vft=4d58e4;col=4fd958;td=5907d0;chd=4fd948;offset=8;cdOffset=0;validated-hierarchy; map:49377
DATA_CHT_1_COMPGEN(0x008fd948, "t_add_2nd_handler_1<t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49378
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_scrollbar@@H@@;vft=4d58f8;col=4fd9bc;td=590808;chd=4fd9ac;offset=8;cdOffset=0;validated-hierarchy; map:49379
DATA_CHT_1_COMPGEN(0x008fd9bc, "const t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_scrollbar*, int>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_scrollbar@@H@@;bcd=4fd980;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49380
DATA_CHT_1_COMPGEN(0x008fd980, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_scrollbar@@H@@;vft=4d58f8;col=4fd9bc;td=590808;chd=4fd9ac;offset=8;cdOffset=0;validated-hierarchy; map:49381
DATA_CHT_1_COMPGEN(0x008fd998, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_scrollbar@@H@@;vft=4d58f8;col=4fd9bc;td=590808;chd=4fd9ac;offset=8;cdOffset=0;validated-hierarchy; map:49382
DATA_CHT_1_COMPGEN(0x008fd9ac, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49383
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_2<t_army_list_window, t_scrollbar*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@PAVt_button@@H@@;vft=4e3ac8;col=50d818;td=590758;chd=50d808;offset=8;cdOffset=0;validated-hierarchy; map:49384
DATA_CHT_1_COMPGEN(0x0090d818, "const t_handler_base_2<t_button*, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_button*, int>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@PAVt_button@@H@@;vft=4e3ac8;col=50d818;td=590758;chd=50d808;offset=8;cdOffset=0;validated-hierarchy; map:49385
DATA_CHT_1_COMPGEN(0x0090d7f8, "t_handler_base_2<t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@PAVt_button@@H@@;vft=4e3ac8;col=50d818;td=590758;chd=50d808;offset=8;cdOffset=0;validated-hierarchy; map:49386
DATA_CHT_1_COMPGEN(0x0090d808, "t_handler_base_2<t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:49387
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_button*, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;bcd=4fd830;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:49388
DATA_CHT_1_COMPGEN(0x008fd830, "t_abstract_function_2<void, t_button*, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;vft=4d58d8;col=4fd860;td=590720;chd=4fd850;offset=0;cdOffset=0;validated-hierarchy; map:49389
DATA_CHT_1_COMPGEN(0x008fd848, "t_abstract_function_2<void, t_button*, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;vft=4d58d8;col=4fd860;td=590720;chd=4fd850;offset=0;cdOffset=0;validated-hierarchy; map:49390
DATA_CHT_1_COMPGEN(0x008fd850, "t_abstract_function_2<void, t_button*, int>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;vft=4d58d8;col=4fd860;td=590720;chd=4fd850;offset=0;cdOffset=0;validated-hierarchy; map:49391
DATA_CHT_1_COMPGEN(0x008fd860, "const t_abstract_function_2<void, t_button*, int>::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_army_list_window@@;td=59061c;validated-header; map:57851
DATA_CHT_1_COMPGEN(0x0099061c, "t_army_list_window `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XPAVt_button@@H@@;td=590720;validated-header; map:57852
DATA_CHT_1_COMPGEN(0x00990720, "t_abstract_function_2<void, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@PAVt_button@@H@@;td=590758;validated-header; map:57853
DATA_CHT_1_COMPGEN(0x00990758, "t_handler_base_2<t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_button@@H@@;td=590788;validated-header; map:57854
DATA_CHT_1_COMPGEN(0x00990788, "t_bound_handler_2<t_army_list_window, t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@PAVt_button@@H@@;td=5907d0;validated-header; map:57855
DATA_CHT_1_COMPGEN(0x009907d0, "t_add_2nd_handler_1<t_button*, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_2@Vt_army_list_window@@PAVt_scrollbar@@H@@;td=590808;validated-header; map:57856
DATA_CHT_1_COMPGEN(0x00990808, "t_bound_handler_2<t_army_list_window, t_scrollbar*, int> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60064
DATA_CHT_1(0x009d1704)
t_bitmap_group_cache g_army_rings; // Initial value unavailable.
