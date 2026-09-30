// adv_artifact_pile.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_artifact_pile.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 133/248 (A:81 B:7 C:45); unaccounted 115; skipped std 40.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (158 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71221; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004301e0, 0x15, STATIC_INIT_DISPATCH, "adv_artifact_pile#1")

// name:C; dyninit; see ledger; map:71222
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_artifact_pile#1")

// confidence:A; dyninit-init; owner-conf-B; map:71223; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00430200, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:71224
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; align-order; retn,stable,vptr; map:3848
VA_CHT_1(0x00430220, 0x12f)
t_adv_artifact_pile::t_adv_artifact_pile(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:3849
VA_CHT_1(0x00430430, 0x198)
t_adv_artifact_pile::t_adv_artifact_pile(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:3850
VA_CHT_1(0x004305d0, 0x387)
void t_adv_artifact_pile::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:3851
VA_CHT_1(0x00430960, 0x2e6)
void t_adv_artifact_pile::add_artifacts(t_artifact_list const& arg_0, t_player* arg_1, t_player* arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:3852
VA_CHT_1(0x00430c50, 0x1b9)
void t_adv_artifact_pile::add_player(t_player* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_artifact_pile::get_version() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_artifact_pile::is_deleted_by_deletion_marker() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:3855
VA_CHT_1(0x00430e30, 0x1db)
bool t_adv_artifact_pile::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_artifact_pile::is_visible_to(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_artifact_pile::can_be_hidden() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adv_artifact_pile::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; map:3859
VA_CHT_1(0x00431410, 0x167)
bool t_adv_artifact_pile::is_good_creation_point(
    t_adv_map_point arg_0,
    t_counted_ptr<t_adv_artifact_pile>& arg_1,
    t_adventure_map* arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:3860
VA_CHT_1(0x00431580, 0x23e)
bool t_adv_artifact_pile::scan_for_good_creation_point(
    t_adventure_object const& arg_0,
    t_creature_array const& arg_1,
    t_adv_map_point& arg_2,
    t_counted_ptr<t_adv_artifact_pile>& arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:71225
VA_CHT_1(0x00432230, 0xbb)
static void object_pile_scanner(t_adv_map_point const& arg_0, bool& arg_1, t_object_pile_scanner_data& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71226; name:B (dyninit; see ledger)
VA_CHT_1(0x00432a90, 0x20)
// adv_artifact_pile$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71228; name:B (dyninit; see ledger)
VA_CHT_1(0x00432ab0, 0x5c)
// adv_artifact_pile$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71229
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_artifact_pile$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71230
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_artifact_pile$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71231
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_artifact_pile$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:3861
VA_CHT_1_COMPGEN(0x00430350, 0x2d, SCALAR_DELETING_DTOR, t_adv_artifact_pile)

// name:A; map symbol; map:3862
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_artifact_pile)

// name:A; map symbol; map:3863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_list::t_artifact_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:3864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_list::~t_artifact_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:3865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_artifact_pile::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:3866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_artifact_pile::~t_adv_artifact_pile()
{
    // Body unavailable.
}

// name:A; map symbol; map:3867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_booty>::~t_counted_ptr<t_dialog_booty>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3868
VA_CHT_1(0x004328d0, 0x9)
int t_player::get_team() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bool_array::operator[](int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile const& t_adventure_map::operator[](t_level_map_point_2d arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool operator==(t_adv_map_point const& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:3872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::is_blocked(bool arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::has_bridge() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object& t_adventure_map::get_adv_object(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&>::~t_handler_2<t_adv_map_point const&, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::~t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_object::is_on_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_tile::has_ramp() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile& t_adventure_map::get_adv_tile(t_level_map_point_2d const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_adventure_map::is_open(t_adv_map_point const& arg_0, t_creature_array const& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_tile const& t_adventure_map::get_adv_tile(t_level_map_point_2d const& arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:3882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_pile_scanner_data::t_object_pile_scanner_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:3883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_pile_scanner_data::~t_object_pile_scanner_data()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:3884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::~t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(
    t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3886
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(
    t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_artifact_pile>::~t_counted_ptr<t_adv_artifact_pile>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3889
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>::~t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>::~t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adv_map_point const&, bool&>* t_handler_2<t_adv_map_point const&, bool&>::operator t_handler_base_2<t_adv_map_point const&, bool&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(
    t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3905
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(
    t_handler_base_2<t_adv_map_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3906
VA_CHT_1(0x00431b20, 0x1c)
void t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::operator()(
    t_adv_map_point const& arg_0,
    t_adv_map_point const& arg_1,
    bool& arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3907
VA_CHT_1_COMPGEN(0x00431b40, 0x1e, SCALAR_DELETING_DTOR, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3908
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3909
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:3911
VA_CHT_1(0x00431b60, 0x1e)
t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3912
VA_CHT_1_COMPGEN(0x00431b80, 0x20, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3913
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3915
VA_CHT_1_COMPGEN(0x004ecbd0, 0x1e, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3916
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// confidence:A; align-band; retn,vptr; map:3917
VA_CHT_1(0x0082a210, 0x21)
t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&>::t_handler_2<t_adv_map_point const&, bool&>(
    t_handler_base_2<t_adv_map_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_adv_map_point const&, bool&>::operator()(t_adv_map_point const& arg_0, bool& arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>(
    t_handler_base_2<t_adv_map_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3933
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adv_map_point const&, bool&>* t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::operator t_handler_base_2<t_adv_map_point const&, bool&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adv_map_point const&, bool&>& t_counted_ptr<t_handler_base_2<t_adv_map_point const&, bool&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>(
    t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>>(
    t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_object& t_counted_ptr<t_adventure_object>::operator*() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:3938
VA_CHT_1(0x00431370, 0xa0)
t_adventure_tile const& t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::get(
    t_level_map_point_2d const& arg_0
) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:3939
VA_CHT_1(0x00431280, 0xdb)
t_adventure_tile& t_basic_isometric_map<t_isometric_tile_map_base, t_adventure_tile>::get(
    t_level_map_point_2d const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_adv_artifact_pile>::t_object_registration<t_adv_artifact_pile>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_booty>::t_counted_ptr<t_dialog_booty>(t_dialog_booty* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_booty* t_counted_ptr<t_dialog_booty>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:3943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_artifact_pile>::t_counted_ptr<t_adv_artifact_pile>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_artifact_pile>& t_counted_ptr<t_adv_artifact_pile>::operator=(
    t_counted_ptr<t_adv_artifact_pile> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_artifact_pile>& t_counted_ptr<t_adv_artifact_pile>::operator=(t_adv_artifact_pile* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3946
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>(
    t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3947
VA_CHT_1(0x00430380, 0xa3)
t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&> function_3_handler(
    void (* arg_0)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_adv_map_point const&, bool&> add_3rd_argument(
    t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&> arg_0,
    t_object_pile_scanner_data& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:3956
VA_CHT_1(0x004317c0, 0x16f)
t_artifact::t_artifact(t_artifact const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_artifact_effect_list::t_artifact_effect_list(t_artifact_effect_list const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:3960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_adv_artifact_pile>::t_object_factory<t_adv_artifact_pile>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3961
VA_CHT_1(0x00432170, 0x62)
t_stationary_adventure_object* t_object_factory<t_adv_artifact_pile>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3962
VA_CHT_1_COMPGEN(0x004328e0, 0x1e, SCALAR_DELETING_DTOR, t_artifact)

// name:A; map symbol; map:3965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>* t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3967
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(
    void (* arg_0)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_object_pile_scanner_data& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>* arg_0,
    t_object_pile_scanner_data& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:3971
VA_CHT_1_COMPGEN(0x00432970, 0x1e, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3972
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3973
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3974
VA_CHT_1_COMPGEN(0x00432990, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3975
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3976
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adv_map_point const&, bool&>::t_handler_base_2<t_adv_map_point const&, bool&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:3977
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_adv_map_point const&, bool&>::~t_handler_base_2<t_adv_map_point const&, bool&>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3978
VA_CHT_1(0x00432a40, 0x21)
t_abstract_function_2<void, t_adv_map_point const&, bool&>::~t_abstract_function_2<void, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3979
VA_CHT_1_COMPGEN(0x004322f0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3980
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::~t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3982
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::~t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:3983
VA_CHT_1(0x004329b0, 0x21)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::~t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3984
VA_CHT_1_COMPGEN(0x00432950, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3985
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3986
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// name:A; map symbol; map:3987
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// confidence:A; align-band; retn,vptr; map:3988
VA_CHT_1(0x004321e0, 0x4e)
t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::~t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:3990
VA_CHT_1_COMPGEN(0x00432a70, 0x1e, VECTOR_DELETING_DTOR, "t_handler_base_2<t_adv_map_point const&, bool&>")

// name:A; map symbol; map:3991
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_adv_map_point const&, bool&>")

// confidence:A; align-band; retn,stable,vptr; map:3992
VA_CHT_1(0x004329e0, 0x58)
t_abstract_function_2<void, t_adv_map_point const&, bool&>::t_abstract_function_2<void, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:3995
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::operator()(
    t_adv_map_point const& arg_0,
    bool& arg_1,
    t_object_pile_scanner_data& arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3996
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>::t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>(
    t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:3997
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>* t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>::operator t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:3998
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>& t_counted_ptr<t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:4001
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// confidence:C; align-order; stable; map:4002
VA_CHT_1_COMPGEN(0x00432b10, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_2<t_adv_map_point const&, bool&>")

// confidence:C; align-order; stable; map:4003
VA_CHT_1_COMPGEN(0x00432b20, 0x8, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// confidence:C; align-order; stable; map:4004
VA_CHT_1_COMPGEN(0x00432b30, 0x8, VECTOR_DELETING_DTOR, t_adv_artifact_pile)

// confidence:C; align-order; stable; map:4005
VA_CHT_1_COMPGEN(0x00432b40, 0x8, VECTOR_DELETING_DTOR, t_adv_artifact_pile)

// confidence:C; align-order; stable; map:4006
VA_CHT_1(0x00432b50, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 32}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4007
VA_CHT_1(0x00432b60, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 32}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4008
VA_CHT_1(0x00432b70, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4009
VA_CHT_1(0x00432b80, 0xb)
// [thunk]: public: virtual bool t_adv_artifact_pile::can_be_hidden`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4010
VA_CHT_1(0x00432b90, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 32}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4011
VA_CHT_1(0x00432ba0, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 32}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4012
VA_CHT_1(0x00432bb0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 32}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4013
VA_CHT_1(0x00432bc0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 32}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4014
VA_CHT_1(0x00432bd0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 32}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4015
VA_CHT_1(0x00432be0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 32}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4016
VA_CHT_1(0x00432bf0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4017
VA_CHT_1(0x00432c00, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 32}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4018
VA_CHT_1(0x00432c10, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4019
VA_CHT_1(0x00432c20, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 32}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4020
VA_CHT_1(0x00432c30, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4021
VA_CHT_1(0x00432c40, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4022
VA_CHT_1(0x00432c50, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 32}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4023
VA_CHT_1(0x00432c60, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 32}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4024
VA_CHT_1(0x00432c70, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 32}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4025
VA_CHT_1(0x00432c80, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 32}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4026
VA_CHT_1(0x00432c90, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 32}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4027
VA_CHT_1(0x00432ca0, 0xb)
// [thunk]: public: virtual bool t_adv_artifact_pile::is_visible_to`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4028
VA_CHT_1(0x00432cb0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 32}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4029
VA_CHT_1(0x00432cc0, 0x8)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 32}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4030
VA_CHT_1(0x00432cd0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 32}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4031
VA_CHT_1(0x00432ce0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 32}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:4032
VA_CHT_1_COMPGEN(0x00432cf0, 0xb, VECTOR_DELETING_DTOR, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// confidence:C; align-order; stable; map:4033
VA_CHT_1_COMPGEN(0x00432d00, 0xb, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>")

// confidence:C; align-order; stable; map:4034
VA_CHT_1_COMPGEN(0x00432d10, 0x8, VECTOR_DELETING_DTOR, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>")

// === .rdata (22 symbols) ===

// name:A; map symbol; map:42727
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42728
DATA_CHT_1_COMPGEN(0x008ce0e4, "const t_adv_artifact_pile::`vftable'")

// confidence:B; rtti-order; map:42729
DATA_CHT_1_COMPGEN(0x008ce1a4, "const t_adv_artifact_pile::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42730
DATA_CHT_1_COMPGEN(0x008ce1ac, "const t_adv_artifact_pile::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42731
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42732
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42733
DATA_CHT_1_COMPGEN(0x008ce278, "const t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:42734
DATA_CHT_1_COMPGEN(0x008ce284, "const t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42735
DATA_CHT_1_COMPGEN(0x008ce28c, "const t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:42736
DATA_CHT_1_COMPGEN(0x008ce298, "const t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42737
DATA_CHT_1_COMPGEN(0x008ce2a0, "const t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'")

// confidence:A; rtti-name; map:42738
DATA_CHT_1_COMPGEN(0x008ce0dc, "const t_object_factory<t_adv_artifact_pile>::`vftable'")

// name:A; map symbol; map:42739
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>'}")

// name:A; map symbol; map:42740
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42741
DATA_CHT_1_COMPGEN(0x008ce2cc, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:42742
DATA_CHT_1_COMPGEN(0x008ce2d8, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42743
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>'}")

// name:A; map symbol; map:42744
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42745
DATA_CHT_1_COMPGEN(0x008ce2e0, "const t_handler_base_2<t_adv_map_point const&, bool&>::`vftable'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:42746
DATA_CHT_1_COMPGEN(0x008ce2ec, "const t_handler_base_2<t_adv_map_point const&, bool&>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:42747
DATA_CHT_1_COMPGEN(0x008ce2f4, "const t_abstract_function_2<void, t_adv_map_point const&, bool&>::`vftable'")

// confidence:A; rtti-name; map:42748
DATA_CHT_1_COMPGEN(0x008ce2c0, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`vftable'")

// === .rdata$r (56 symbols) ===

// name:A; map symbol; map:47854
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_artifact_pile@@;vft=4ce0e4;col=4f66fc;td=587c98;chd=4f66ec;offset=116;cdOffset=0;validated-hierarchy; map:47855
DATA_CHT_1_COMPGEN(0x008f66fc, "const t_adv_artifact_pile::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47856
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_artifact_pile@@;bcd=4f66ac;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47857
DATA_CHT_1_COMPGEN(0x008f66ac, "t_adv_artifact_pile::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_artifact_pile@@;vft=4ce0e4;col=4f66fc;td=587c98;chd=4f66ec;offset=116;cdOffset=0;validated-hierarchy; map:47858
DATA_CHT_1_COMPGEN(0x008f66c4, "t_adv_artifact_pile::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_artifact_pile@@;vft=4ce0e4;col=4f66fc;td=587c98;chd=4f66ec;offset=116;cdOffset=0;validated-hierarchy; map:47859
DATA_CHT_1_COMPGEN(0x008f66ec, "t_adv_artifact_pile::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47860
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_artifact_pile::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_discard_2nd_handler_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce278;col=4f6790;td=587d88;chd=4f6780;offset=8;cdOffset=0;validated-hierarchy; map:47861
DATA_CHT_1_COMPGEN(0x008f6790, "const t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;bcd=4f6724;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47862
DATA_CHT_1_COMPGEN(0x008f6724, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@ABU1@AA_N@@;bcd=4f673c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47863
DATA_CHT_1_COMPGEN(0x008f673c, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_discard_2nd_handler_3@ABUt_adv_map_point@@ABU1@AA_N@@;bcd=4f6754;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47864
DATA_CHT_1_COMPGEN(0x008f6754, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_discard_2nd_handler_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce278;col=4f6790;td=587d88;chd=4f6780;offset=8;cdOffset=0;validated-hierarchy; map:47865
DATA_CHT_1_COMPGEN(0x008f676c, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_discard_2nd_handler_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce278;col=4f6790;td=587d88;chd=4f6780;offset=8;cdOffset=0;validated-hierarchy; map:47866
DATA_CHT_1_COMPGEN(0x008f6780, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47867
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce28c;col=4f681c;td=587d48;chd=4f680c;offset=8;cdOffset=0;validated-hierarchy; map:47868
DATA_CHT_1_COMPGEN(0x008f681c, "const t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce28c;col=4f681c;td=587d48;chd=4f680c;offset=8;cdOffset=0;validated-hierarchy; map:47869
DATA_CHT_1_COMPGEN(0x008f67fc, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce28c;col=4f681c;td=587d48;chd=4f680c;offset=8;cdOffset=0;validated-hierarchy; map:47870
DATA_CHT_1_COMPGEN(0x008f680c, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47871
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;bcd=4f67a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47872
DATA_CHT_1_COMPGEN(0x008f67a4, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce2a0;col=4f67d4;td=587d00;chd=4f67c4;offset=0;cdOffset=0;validated-hierarchy; map:47873
DATA_CHT_1_COMPGEN(0x008f67bc, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce2a0;col=4f67d4;td=587d00;chd=4f67c4;offset=0;cdOffset=0;validated-hierarchy; map:47874
DATA_CHT_1_COMPGEN(0x008f67c4, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;vft=4ce2a0;col=4f67d4;td=587d00;chd=4f67c4;offset=0;cdOffset=0;validated-hierarchy; map:47875
DATA_CHT_1_COMPGEN(0x008f67d4, "const t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_adv_artifact_pile@@@@;bcd=4f6628;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47876
DATA_CHT_1_COMPGEN(0x008f6628, "t_object_factory<t_adv_artifact_pile>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_adv_artifact_pile@@@@;vft=4ce0dc;col=4f665c;td=587c60;chd=4f664c;offset=0;cdOffset=0;validated-hierarchy; map:47877
DATA_CHT_1_COMPGEN(0x008f6640, "t_object_factory<t_adv_artifact_pile>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_adv_artifact_pile@@@@;vft=4ce0dc;col=4f665c;td=587c60;chd=4f664c;offset=0;cdOffset=0;validated-hierarchy; map:47878
DATA_CHT_1_COMPGEN(0x008f664c, "t_object_factory<t_adv_artifact_pile>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_adv_artifact_pile@@@@;vft=4ce0dc;col=4f665c;td=587c60;chd=4f664c;offset=0;cdOffset=0;validated-hierarchy; map:47879
DATA_CHT_1_COMPGEN(0x008f665c, "const t_object_factory<t_adv_artifact_pile>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47880
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>'}")

// name:A; map symbol; map:47881
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:47882
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:47883
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:47884
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:47885
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47886
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2cc;col=4f6a14;td=588010;chd=4f6a04;offset=8;cdOffset=0;validated-hierarchy; map:47887
DATA_CHT_1_COMPGEN(0x008f6a14, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;bcd=4f69a8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47888
DATA_CHT_1_COMPGEN(0x008f69a8, "t_abstract_function_2<void, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@ABUt_adv_map_point@@AA_N@@;bcd=4f69c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47889
DATA_CHT_1_COMPGEN(0x008f69c0, "t_handler_base_2<t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;bcd=4f69d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47890
DATA_CHT_1_COMPGEN(0x008f69d8, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2cc;col=4f6a14;td=588010;chd=4f6a04;offset=8;cdOffset=0;validated-hierarchy; map:47891
DATA_CHT_1_COMPGEN(0x008f69f0, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2cc;col=4f6a14;td=588010;chd=4f6a04;offset=8;cdOffset=0;validated-hierarchy; map:47892
DATA_CHT_1_COMPGEN(0x008f6a04, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47893
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47894
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>'}")

// name:A; map symbol; map:47895
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Array'")

// name:A; map symbol; map:47896
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47897
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@ABUt_adv_map_point@@AA_N@@;vft=4ce2e0;col=4f6980;td=587fd0;chd=4f6970;offset=8;cdOffset=0;validated-hierarchy; map:47898
DATA_CHT_1_COMPGEN(0x008f6980, "const t_handler_base_2<t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@ABUt_adv_map_point@@AA_N@@;vft=4ce2e0;col=4f6980;td=587fd0;chd=4f6970;offset=8;cdOffset=0;validated-hierarchy; map:47899
DATA_CHT_1_COMPGEN(0x008f6960, "t_handler_base_2<t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@ABUt_adv_map_point@@AA_N@@;vft=4ce2e0;col=4f6980;td=587fd0;chd=4f6970;offset=8;cdOffset=0;validated-hierarchy; map:47900
DATA_CHT_1_COMPGEN(0x008f6970, "t_handler_base_2<t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47901
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;bcd=4f6908;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47902
DATA_CHT_1_COMPGEN(0x008f6908, "t_abstract_function_2<void, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;vft=4ce2f4;col=4f6938;td=587f90;chd=4f6928;offset=0;cdOffset=0;validated-hierarchy; map:47903
DATA_CHT_1_COMPGEN(0x008f6920, "t_abstract_function_2<void, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;vft=4ce2f4;col=4f6938;td=587f90;chd=4f6928;offset=0;cdOffset=0;validated-hierarchy; map:47904
DATA_CHT_1_COMPGEN(0x008f6928, "t_abstract_function_2<void, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;vft=4ce2f4;col=4f6938;td=587f90;chd=4f6928;offset=0;cdOffset=0;validated-hierarchy; map:47905
DATA_CHT_1_COMPGEN(0x008f6938, "const t_abstract_function_2<void, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;bcd=4f6830;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47906
DATA_CHT_1_COMPGEN(0x008f6830, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2c0;col=4f6860;td=587dd0;chd=4f6850;offset=0;cdOffset=0;validated-hierarchy; map:47907
DATA_CHT_1_COMPGEN(0x008f6848, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2c0;col=4f6860;td=587dd0;chd=4f6850;offset=0;cdOffset=0;validated-hierarchy; map:47908
DATA_CHT_1_COMPGEN(0x008f6850, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;vft=4ce2c0;col=4f6860;td=587dd0;chd=4f6850;offset=0;cdOffset=0;validated-hierarchy; map:47909
DATA_CHT_1_COMPGEN(0x008f6860, "const t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&>::`RTTI Complete Object Locator'")

// === .data (11 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_artifact_pile@@;td=587c98;validated-header; map:57453
DATA_CHT_1_COMPGEN(0x00987c98, "t_adv_artifact_pile `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@ABU1@AA_N@@;td=587d00;validated-header; map:57454
DATA_CHT_1_COMPGEN(0x00987d00, "t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@ABU1@AA_N@@;td=587d48;validated-header; map:57455
DATA_CHT_1_COMPGEN(0x00987d48, "t_handler_base_3<t_adv_map_point const&, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_discard_2nd_handler_3@ABUt_adv_map_point@@ABU1@AA_N@@;td=587d88;validated-header; map:57456
DATA_CHT_1_COMPGEN(0x00987d88, "t_discard_2nd_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_adv_artifact_pile@@@@;td=587c60;validated-header; map:57457
DATA_CHT_1_COMPGEN(0x00987c60, "t_object_factory<t_adv_artifact_pile> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;td=587dd0;validated-header; map:57458
DATA_CHT_1_COMPGEN(0x00987dd0, "t_abstract_function_3<void, t_adv_map_point const&, bool&, t_object_pile_scanner_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;td=587e60;validated-header; map:57459
DATA_CHT_1_COMPGEN(0x00987e60, "t_handler_base_3<t_adv_map_point const&, bool&, t_object_pile_scanner_data&> `RTTI Type Descriptor'")

// name:A; map symbol; map:57460
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_adv_map_point const&, bool&, t_object_pile_scanner_data&), t_adv_map_point const&, bool&, t_object_pile_scanner_data&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XABUt_adv_map_point@@AA_N@@;td=587f90;validated-header; map:57461
DATA_CHT_1_COMPGEN(0x00987f90, "t_abstract_function_2<void, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@ABUt_adv_map_point@@AA_N@@;td=587fd0;validated-header; map:57462
DATA_CHT_1_COMPGEN(0x00987fd0, "t_handler_base_2<t_adv_map_point const&, bool&> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@ABUt_adv_map_point@@AA_NAAUt_object_pile_scanner_data@?%C:\Work\game\adv_artifact_pile.cpp2120723570@@@@;td=588010;validated-header; map:57463
DATA_CHT_1_COMPGEN(0x00988010, "t_add_3rd_handler_2<t_adv_map_point const&, bool&, t_object_pile_scanner_data&> `RTTI Type Descriptor'")

// === .bss (1 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59946
DATA_CHT_1(0x009c72e0)
t_object_registration<t_adv_artifact_pile> k_registration; // Initial value unavailable.

} // anonymous namespace
