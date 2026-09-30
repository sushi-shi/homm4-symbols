// scrollbar.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 93/164 (A:71 B:14 C:8); unaccounted 71; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (100 symbols) ===

// confidence:A; dyninit-init; owner-conf-B; map:62863; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9ac0, 0x1b, STATIC_INIT_DISPATCH, g_vertical_scroll)

// confidence:B; dyninit-ctor; owner-conf-B; map:62864; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9ae0, 0x127, STATIC_CTOR, g_vertical_scroll)

// name:A; dyninit; see ledger; map:62865
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_vertical_scroll)

// confidence:B; dyninit-dtor; owner-conf-B; map:62866; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9c30, 0xa, STATIC_DTOR, g_vertical_scroll)

// confidence:A; dyninit-init; owner-conf-B; map:62867; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9c40, 0x1b, STATIC_INIT_DISPATCH, g_horizontal_scroll)

// name:A; dyninit; see ledger; map:62868
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, g_horizontal_scroll)

// name:A; dyninit; see ledger; map:62869
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_horizontal_scroll)

// confidence:B; dyninit-dtor; owner-conf-B; map:62870; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a9c60, 0xa, STATIC_DTOR, g_horizontal_scroll)

// confidence:A; align-order; stable,vptr; map:36895
VA_CHT_1(0x007a9c70, 0x1a4)
t_scrollbar::t_scrollbar(t_screen_point arg_0, int arg_1, t_window* arg_2, int arg_3, int arg_4, bool arg_5)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:36896
VA_CHT_1(0x007a9e40, 0xe2)
t_scrollbar::t_scrollbar(
    t_screen_point arg_0,
    int arg_1,
    t_window* arg_2,
    int arg_3,
    int arg_4,
    bool arg_5,
    t_cached_ptr<t_scrollbar_bitmaps>& arg_6
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:36897
VA_CHT_1(0x007a9f30, 0x129)
void t_scrollbar::left_button_down(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:36898
VA_CHT_1(0x007aa060, 0x2a)
void t_scrollbar::left_button_up(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:36899
VA_CHT_1(0x007aa090, 0x13)
void t_scrollbar::mouse_leaving(t_window* arg_0, t_window* arg_1, t_mouse_event const& arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:36900
VA_CHT_1(0x007aa0b0, 0x7d)
void t_scrollbar::mouse_move(t_mouse_event const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36901
VA_CHT_1(0x007aa130, 0x2d)
void t_scrollbar::set_limits(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36902
VA_CHT_1(0x007aa160, 0x1bd)
void t_scrollbar::set_position(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_scrollbar::click_up(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36904
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_scrollbar::up_button_down_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36905
VA_CHT_1(0x007aa320, 0x26)
void t_scrollbar::click_down(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36906
VA_CHT_1(0x007aa350, 0x120)
void t_scrollbar::down_button_down_clicked(t_button* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:36907
VA_CHT_1(0x007aa590, 0x182)
void t_scrollbar::drag(t_screen_point arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:36908
VA_CHT_1(0x007aa720, 0x877)
void t_scrollbar::init(
    t_screen_point arg_0,
    int arg_1,
    int arg_2,
    int arg_3,
    bool arg_4,
    t_cached_ptr<t_scrollbar_bitmaps>& arg_5
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:62871
VA_CHT_1(0x007aafa0, 0x169)
static void set_button_images(
    t_button* arg_0,
    t_bitmap_layer const* arg_1,
    t_bitmap_layer const* arg_2,
    t_screen_point& arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:36909
VA_CHT_1(0x007ab110, 0x4b)
void t_scrollbar::on_idle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62872; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007ab4c0, 0x20, STATIC_INIT_DISPATCH, scrollbar)

// name:A; map symbol; map:36910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar_cache::t_scrollbar_cache(char const* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:36911
VA_CHT_1_COMPGEN(0x007a9c10, 0x1e, VECTOR_DELETING_DTOR, t_scrollbar_cache)

// name:A; map symbol; map:36912
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scrollbar_cache)

// name:A; map symbol; map:36913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::~t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar_cache::~t_scrollbar_cache()
{
    // Body unavailable.
}

// name:A; map symbol; map:36915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_scrollbar_bitmaps>::~t_resource_cache<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36916
VA_CHT_1_COMPGEN(0x007a9e20, 0x1e, VECTOR_DELETING_DTOR, t_scrollbar)

// name:A; map symbol; map:36917
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_scrollbar)

// name:A; map symbol; map:36918
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar::~t_scrollbar()
{
    // Body unavailable.
}

// name:A; map symbol; map:36919
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_button::set_down_click_handler(t_handler_1<t_button*> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_background() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_thumb() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_down_pressed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_down_released() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36924
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_up_released() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_layer const* t_scrollbar_bitmaps::get_up_pressed() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_scrollbar*, int>::operator()(t_scrollbar* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_scrollbar*, int>& t_counted_ptr<t_handler_base_2<t_scrollbar*, int>>::operator*() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:36928
VA_CHT_1(0x007ab160, 0x74)
t_cached_ptr<t_scrollbar_bitmaps>::t_cached_ptr<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36929
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_scrollbar_bitmaps>::~t_cached_ptr<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36930
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar_bitmaps* t_cached_ptr<t_scrollbar_bitmaps>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_scrollbar_bitmaps>& t_cached_ptr<t_scrollbar_bitmaps>::operator=(
    t_cached_ptr<t_scrollbar_bitmaps> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36932
VA_CHT_1(0x007ab3e0, 0x1d)
t_abstract_cache<t_scrollbar_bitmaps>::~t_abstract_cache<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:36933
VA_CHT_1(0x007ab1e0, 0x195)
t_cached_ptr<t_scrollbar_bitmaps> t_abstract_cache<t_scrollbar_bitmaps>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_button*> bound_handler(t_scrollbar& arg_0, void (t_scrollbar::*)(t_button*))
{
    // Body unavailable.
}

// name:A; map symbol; map:36936
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36937
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::~t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36939
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>")

// name:A; map symbol; map:36940
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>")

// name:A; map symbol; map:36941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_scrollbar_bitmaps>::t_cached_ptr<t_scrollbar_bitmaps>(
    t_cached_ptr<t_scrollbar_bitmaps> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36942
VA_CHT_1(0x007ab380, 0x5e)
t_bound_handler_1<t_scrollbar, t_button*>::t_bound_handler_1<t_scrollbar, t_button*>(
    t_scrollbar& arg_0,
    void (t_scrollbar::*)(t_button*)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_1<t_scrollbar, t_button*>::operator()(t_button* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36944
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_1<t_scrollbar, t_button*>")

// name:A; map symbol; map:36945
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_scrollbar, t_button*>")

// name:A; map symbol; map:36946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_1<t_scrollbar, t_button*>::~t_bound_handler_1<t_scrollbar, t_button*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_scrollbar_bitmaps>::t_cached_ptr<t_scrollbar_bitmaps>(
    t_scrollbar_bitmaps* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_scrollbar_bitmaps>::assign(t_scrollbar_bitmaps* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:36949
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar_bitmaps* t_cached_ptr<t_scrollbar_bitmaps>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36950
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>(
    t_abstract_cache_data<t_scrollbar_bitmaps>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_scrollbar_bitmaps>* t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::operator t_abstract_cache_data<t_scrollbar_bitmaps>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36952
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_scrollbar_bitmaps>* t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_cache<t_scrollbar_bitmaps>::t_resource_cache<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_resource_cache<t_scrollbar_bitmaps>::set(t_abstract_resource_cache_data<t_scrollbar_bitmaps>* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_scrollbar_bitmaps>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:36957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_scrollbar_bitmaps>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:36958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_scrollbar_bitmaps* t_abstract_resource_cache_data<t_scrollbar_bitmaps>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36959
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_scrollbar_bitmaps>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:36960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_scrollbar_bitmaps>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:36961
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_scrollbar_bitmaps>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char const* t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36963
VA_CHT_1(0x007ab400, 0xba)
t_scrollbar_bitmaps* t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36964
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_resource_cache<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36965
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_resource_cache<t_scrollbar_bitmaps>")

// confidence:A; align-band; retn,stable,vslot; map:36966
VA_CHT_1_COMPGEN(0x007ab4e0, 0x1e, SCALAR_DELETING_DTOR, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>")

// name:A; map symbol; map:36967
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>")

// name:A; map symbol; map:36968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::~t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36969
VA_CHT_1(0x007ab500, 0xcb)
t_abstract_resource_cache_data<t_scrollbar_bitmaps>::~t_abstract_resource_cache_data<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36970
VA_CHT_1(0x007ab5d0, 0x49)
t_abstract_cache_data<t_scrollbar_bitmaps>::~t_abstract_cache_data<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36971
VA_CHT_1_COMPGEN(0x007ab620, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36972
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_scrollbar_bitmaps>")

// confidence:A; align-band; retn,stable,vslot; map:36973
VA_CHT_1_COMPGEN(0x007ab640, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36974
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>")

// name:A; map symbol; map:36975
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_scrollbar_bitmaps>::t_abstract_cache<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_cache<t_scrollbar_bitmaps>::set(t_abstract_cache_data<t_scrollbar_bitmaps>* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36977
VA_CHT_1(0x007ab730, 0x80)
t_abstract_resource_cache_data<t_scrollbar_bitmaps>::t_abstract_resource_cache_data<t_scrollbar_bitmaps>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36978
VA_CHT_1(0x007ab660, 0xcb)
t_abstract_cache_data<t_scrollbar_bitmaps>::t_abstract_cache_data<t_scrollbar_bitmaps>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36979
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36980
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>& t_counted_ptr<t_abstract_cache_data<t_scrollbar_bitmaps>>::operator=(
    t_abstract_cache_data<t_scrollbar_bitmaps>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36981
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_1<t_scrollbar, t_button*>")

// confidence:C; align-order; stable; map:36982
VA_CHT_1_COMPGEN(0x007ab7c0, 0xb, VECTOR_DELETING_DTOR, t_scrollbar)

// confidence:C; align-order; stable; map:36983
VA_CHT_1_COMPGEN(0x007ab7d0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>")

// confidence:C; align-order; stable; map:36984
VA_CHT_1_COMPGEN(0x007ab7e0, 0x8, VECTOR_DELETING_DTOR, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>")

// === .rdata (13 symbols) ===

// confidence:A; rtti-name; map:45701
DATA_CHT_1_COMPGEN(0x008ec244, "const t_scrollbar_cache::`vftable'")

// confidence:A; rtti-name; map:45702
DATA_CHT_1_COMPGEN(0x008ec290, "const t_scrollbar::`vftable'{for `t_idle_processor'}")

// confidence:B; rtti-order; map:45703
DATA_CHT_1_COMPGEN(0x008ec29c, "const t_scrollbar::`vftable'{for `t_window'}")

// confidence:A; rtti-name; map:45704
DATA_CHT_1_COMPGEN(0x008ec288, "const t_abstract_cache<t_scrollbar_bitmaps>::`vftable'")

// confidence:A; rtti-name; map:45705
DATA_CHT_1_COMPGEN(0x008ec280, "const t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::`vftable'")

// confidence:A; rtti-name; map:45706
DATA_CHT_1_COMPGEN(0x008ec308, "const t_bound_handler_1<t_scrollbar, t_button*>::`vftable'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:B; rtti-order; map:45707
DATA_CHT_1_COMPGEN(0x008ec314, "const t_bound_handler_1<t_scrollbar, t_button*>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45708
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_scrollbar_bitmaps>::`vftable'")

// confidence:A; rtti-name; map:45709
DATA_CHT_1_COMPGEN(0x008ec24c, "const t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:45710
DATA_CHT_1_COMPGEN(0x008ec264, "const t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`vftable'{for `t_abstract_cache_data<t_scrollbar_bitmaps>'}")

// confidence:A; rtti-name; map:45711
DATA_CHT_1_COMPGEN(0x008ec334, "const t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:45712
DATA_CHT_1_COMPGEN(0x008ec34c, "const t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`vftable'{for `t_abstract_cache_data<t_scrollbar_bitmaps>'}")

// confidence:A; rtti-name; map:45713
DATA_CHT_1_COMPGEN(0x008ec31c, "const t_abstract_cache_data<t_scrollbar_bitmaps>::`vftable'")

// === .rdata$r (40 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_scrollbar_bitmaps@@@@;bcd=51a938;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56173
DATA_CHT_1_COMPGEN(0x0091a938, "t_abstract_cache<t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_resource_cache@Vt_scrollbar_bitmaps@@@@;bcd=51a950;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56174
DATA_CHT_1_COMPGEN(0x0091a950, "t_resource_cache<t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;bcd=51a968;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56175
DATA_CHT_1_COMPGEN(0x0091a968, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scrollbar_cache@@;bcd=51a980;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56176
DATA_CHT_1_COMPGEN(0x0091a980, "t_scrollbar_cache::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scrollbar_cache@@;vft=4ec244;col=51a9bc;td=5b93e8;chd=51a9ac;offset=0;cdOffset=0;validated-hierarchy; map:56177
DATA_CHT_1_COMPGEN(0x0091a998, "t_scrollbar_cache::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scrollbar_cache@@;vft=4ec244;col=51a9bc;td=5b93e8;chd=51a9ac;offset=0;cdOffset=0;validated-hierarchy; map:56178
DATA_CHT_1_COMPGEN(0x0091a9ac, "t_scrollbar_cache::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scrollbar_cache@@;vft=4ec244;col=51a9bc;td=5b93e8;chd=51a9ac;offset=0;cdOffset=0;validated-hierarchy; map:56179
DATA_CHT_1_COMPGEN(0x0091a9bc, "const t_scrollbar_cache::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_scrollbar@@;vft=4ec290;col=51aa50;td=5b941c;chd=51aa40;offset=196;cdOffset=0;validated-hierarchy; map:56180
DATA_CHT_1_COMPGEN(0x0091aa50, "const t_scrollbar::`RTTI Complete Object Locator'{for `t_idle_processor'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_scrollbar@@;bcd=51aa10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56181
DATA_CHT_1_COMPGEN(0x0091aa10, "t_scrollbar::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_scrollbar@@;vft=4ec290;col=51aa50;td=5b941c;chd=51aa40;offset=196;cdOffset=0;validated-hierarchy; map:56182
DATA_CHT_1_COMPGEN(0x0091aa28, "t_scrollbar::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_scrollbar@@;vft=4ec290;col=51aa50;td=5b941c;chd=51aa40;offset=196;cdOffset=0;validated-hierarchy; map:56183
DATA_CHT_1_COMPGEN(0x0091aa40, "t_scrollbar::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56184
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_scrollbar::`RTTI Complete Object Locator'{for `t_window'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_scrollbar_bitmaps@@@@;vft=4ec288;col=51a9e8;td=5b9324;chd=51a9d8;offset=0;cdOffset=0;validated-hierarchy; map:56185
DATA_CHT_1_COMPGEN(0x0091a9d0, "t_abstract_cache<t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_scrollbar_bitmaps@@@@;vft=4ec288;col=51a9e8;td=5b9324;chd=51a9d8;offset=0;cdOffset=0;validated-hierarchy; map:56186
DATA_CHT_1_COMPGEN(0x0091a9d8, "t_abstract_cache<t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_scrollbar_bitmaps@@@@;vft=4ec288;col=51a9e8;td=5b9324;chd=51a9d8;offset=0;cdOffset=0;validated-hierarchy; map:56187
DATA_CHT_1_COMPGEN(0x0091a9e8, "const t_abstract_cache<t_scrollbar_bitmaps>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec280;col=51a87c;td=5b9398;chd=51a86c;offset=0;cdOffset=0;validated-hierarchy; map:56188
DATA_CHT_1_COMPGEN(0x0091a85c, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec280;col=51a87c;td=5b9398;chd=51a86c;offset=0;cdOffset=0;validated-hierarchy; map:56189
DATA_CHT_1_COMPGEN(0x0091a86c, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec280;col=51a87c;td=5b9398;chd=51a86c;offset=0;cdOffset=0;validated-hierarchy; map:56190
DATA_CHT_1_COMPGEN(0x0091a87c, "const t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_1@Vt_scrollbar@@PAVt_button@@@@;vft=4ec308;col=51aab4;td=5b9438;chd=51aaa4;offset=8;cdOffset=0;validated-hierarchy; map:56191
DATA_CHT_1_COMPGEN(0x0091aab4, "const t_bound_handler_1<t_scrollbar, t_button*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_button*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_1@Vt_scrollbar@@PAVt_button@@@@;bcd=51aa78;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56192
DATA_CHT_1_COMPGEN(0x0091aa78, "t_bound_handler_1<t_scrollbar, t_button*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_1@Vt_scrollbar@@PAVt_button@@@@;vft=4ec308;col=51aab4;td=5b9438;chd=51aaa4;offset=8;cdOffset=0;validated-hierarchy; map:56193
DATA_CHT_1_COMPGEN(0x0091aa90, "t_bound_handler_1<t_scrollbar, t_button*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_1@Vt_scrollbar@@PAVt_button@@@@;vft=4ec308;col=51aab4;td=5b9438;chd=51aaa4;offset=8;cdOffset=0;validated-hierarchy; map:56194
DATA_CHT_1_COMPGEN(0x0091aaa4, "t_bound_handler_1<t_scrollbar, t_button*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_1<t_scrollbar, t_button*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:56196
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// name:A; map symbol; map:56197
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_cache<t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56198
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_cache<t_scrollbar_bitmaps>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec24c;col=51a924;td=5b92d0;chd=51a914;offset=16;cdOffset=0;validated-hierarchy; map:56199
DATA_CHT_1_COMPGEN(0x0091a924, "const t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_scrollbar_bitmaps@@@@;bcd=51a8a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56200
DATA_CHT_1_COMPGEN(0x0091a8a4, "t_abstract_cache_data<t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_scrollbar_bitmaps@@@@;bcd=51a8bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56201
DATA_CHT_1_COMPGEN(0x0091a8bc, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_conversion_cache_data@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;bcd=51a8d4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56202
DATA_CHT_1_COMPGEN(0x0091a8d4, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec24c;col=51a924;td=5b92d0;chd=51a914;offset=16;cdOffset=0;validated-hierarchy; map:56203
DATA_CHT_1_COMPGEN(0x0091a8ec, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_conversion_cache_data@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;vft=4ec24c;col=51a924;td=5b92d0;chd=51a914;offset=16;cdOffset=0;validated-hierarchy; map:56204
DATA_CHT_1_COMPGEN(0x0091a914, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56205
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_scrollbar_bitmaps>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec334;col=51ab10;td=5b9288;chd=51ab00;offset=16;cdOffset=0;validated-hierarchy; map:56206
DATA_CHT_1_COMPGEN(0x0091ab10, "const t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec334;col=51ab10;td=5b9288;chd=51ab00;offset=16;cdOffset=0;validated-hierarchy; map:56207
DATA_CHT_1_COMPGEN(0x0091aadc, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec334;col=51ab10;td=5b9288;chd=51ab00;offset=16;cdOffset=0;validated-hierarchy; map:56208
DATA_CHT_1_COMPGEN(0x0091ab00, "t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56209
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_scrollbar_bitmaps>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_scrollbar_bitmaps>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec31c;col=51ab48;td=5b9244;chd=51ab38;offset=0;cdOffset=0;validated-hierarchy; map:56210
DATA_CHT_1_COMPGEN(0x0091ab24, "t_abstract_cache_data<t_scrollbar_bitmaps>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec31c;col=51ab48;td=5b9244;chd=51ab38;offset=0;cdOffset=0;validated-hierarchy; map:56211
DATA_CHT_1_COMPGEN(0x0091ab38, "t_abstract_cache_data<t_scrollbar_bitmaps>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_scrollbar_bitmaps@@@@;vft=4ec31c;col=51ab48;td=5b9244;chd=51ab38;offset=0;cdOffset=0;validated-hierarchy; map:56212
DATA_CHT_1_COMPGEN(0x0091ab48, "const t_abstract_cache_data<t_scrollbar_bitmaps>::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_scrollbar_bitmaps@@@@;td=5b9324;validated-header; map:59525
DATA_CHT_1_COMPGEN(0x009b9324, "t_abstract_cache<t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_resource_cache@Vt_scrollbar_bitmaps@@@@;td=5b935c;validated-header; map:59526
DATA_CHT_1_COMPGEN(0x009b935c, "t_resource_cache<t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;td=5b9398;validated-header; map:59527
DATA_CHT_1_COMPGEN(0x009b9398, "t_conversion_cache<t_bitmap_group_24, t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scrollbar_cache@@;td=5b93e8;validated-header; map:59528
DATA_CHT_1_COMPGEN(0x009b93e8, "t_scrollbar_cache `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_scrollbar@@;td=5b941c;validated-header; map:59529
DATA_CHT_1_COMPGEN(0x009b941c, "t_scrollbar `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_1@Vt_scrollbar@@PAVt_button@@@@;td=5b9438;validated-header; map:59530
DATA_CHT_1_COMPGEN(0x009b9438, "t_bound_handler_1<t_scrollbar, t_button*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_scrollbar_bitmaps@@@@;td=5b9244;validated-header; map:59531
DATA_CHT_1_COMPGEN(0x009b9244, "t_abstract_cache_data<t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_scrollbar_bitmaps@@@@;td=5b9288;validated-header; map:59532
DATA_CHT_1_COMPGEN(0x009b9288, "t_abstract_resource_cache_data<t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_conversion_cache_data@Vt_bitmap_group_24@@Vt_scrollbar_bitmaps@@@@;td=5b92d0;validated-header; map:59533
DATA_CHT_1_COMPGEN(0x009b92d0, "t_conversion_cache_data<t_bitmap_group_24, t_scrollbar_bitmaps> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:60355
DATA_CHT_1(0x009f5434)
t_scrollbar_cache g_horizontal_scroll; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60356
DATA_CHT_1(0x009f5440)
t_scrollbar_cache g_vertical_scroll; // Initial value unavailable.
