// random_monster.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\random_monster.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 95/135 (A:46 B:12 C:37); unaccounted 40; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (79 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:63576; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076cfa0, 0x15, STATIC_INIT_DISPATCH, "random_monster#1")

// name:C; dyninit; see ledger; map:63577
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "random_monster#1")

// confidence:A; dyninit-init; owner-conf-B; map:63578; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076cfc0, 0x1c, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:63579
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; dyninit-init; owner-conf-B; map:63580; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0076cfe0, 0x1c, STATIC_INIT_DISPATCH, k_level_registration)

// name:B; dyninit; see ledger; map:63581
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_level_registration)

// confidence:B; align-order; retn,stable; map:32899
VA_CHT_1(0x0076d000, 0xc0)
void add_random_helpers(t_army* arg_0, bool arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:63582
VA_CHT_1(0x0076d0c0, 0xd1)
static t_creature_type choose_creature(
    t_town_type arg_0,
    bool arg_1,
    int arg_2,
    t_creature_type arg_3,
    int arg_4,
    int arg_5
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:32900
VA_CHT_1(0x0076d1a0, 0x150)
t_random_monster_base::t_random_monster_base(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32901
VA_CHT_1(0x0076d450, 0x1f4)
bool t_random_monster_base::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32902
VA_CHT_1(0x0076d650, 0x2d6)
void t_random_monster_base::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32903
VA_CHT_1(0x0076d930, 0x52)
bool t_random_monster_base::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32904
VA_CHT_1(0x0076d990, 0x16)
void t_random_random_monster::get_default_experience_range(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32905
VA_CHT_1(0x0076d9b0, 0x17)
void t_random_random_monster::get_valid_creatue_levels(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:32906
VA_CHT_1(0x0076d9d0, 0x19)
void t_random_monster::get_default_experience_range(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:32907
VA_CHT_1(0x0076d9f0, 0x21)
void t_random_monster::get_valid_creatue_levels(int& arg_0, int& arg_1) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63583; name:B (dyninit; see ledger)
VA_CHT_1(0x0076dec0, 0x20)
// random_monster$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:63585; name:B (dyninit; see ledger)
VA_CHT_1(0x0076dee0, 0x5c)
// random_monster$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63586
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_monster$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63587
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_monster$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:63588
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// random_monster$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:32908
VA_CHT_1_COMPGEN(0x0076d2f0, 0x33, VECTOR_DELETING_DTOR, t_random_monster_base)

// name:A; map symbol; map:32909
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_random_monster_base)

// name:A; map symbol; map:32910
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_monster_base::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_monster_base::~t_random_monster_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:32912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_random_monster::get_creature_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:32913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_random_monster>::t_object_registration<t_random_random_monster>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:32914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_monster>::t_object_registration<t_random_monster>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:32915
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_random_monster>::t_object_factory<t_random_random_monster>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32916
VA_CHT_1(0x0076da20, 0xef)
t_stationary_adventure_object* t_object_factory<t_random_random_monster>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_random_monster::t_random_random_monster(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32918
VA_CHT_1_COMPGEN(0x0076db10, 0x33, SCALAR_DELETING_DTOR, t_random_random_monster)

// name:A; map symbol; map:32919
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_random_random_monster)

// name:A; map symbol; map:32920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_random_monster::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_random_monster::~t_random_random_monster()
{
    // Body unavailable.
}

// name:A; map symbol; map:32922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_monster>::t_object_factory<t_random_monster>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32923
VA_CHT_1(0x0076dc70, 0xef)
t_stationary_adventure_object* t_object_factory<t_random_monster>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:32924
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_monster::t_random_monster(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:32925
VA_CHT_1_COMPGEN(0x0076dd60, 0x33, SCALAR_DELETING_DTOR, t_random_monster)

// name:A; map symbol; map:32926
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_random_monster)

// name:A; map symbol; map:32927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_monster::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:32928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_monster::~t_random_monster()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:32929
VA_CHT_1_COMPGEN(0x0076df40, 0x8, VECTOR_DELETING_DTOR, t_random_monster_base)

// confidence:C; align-order; stable; map:32930
VA_CHT_1_COMPGEN(0x0076df50, 0xe, VECTOR_DELETING_DTOR, t_random_monster_base)

// confidence:C; align-order; stable; map:32931
VA_CHT_1(0x0076df60, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 108}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32932
VA_CHT_1(0x0076df70, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 108}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32933
VA_CHT_1(0x0076df80, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32934
VA_CHT_1(0x0076df90, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32935
VA_CHT_1(0x0076dfa0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 108}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32936
VA_CHT_1(0x0076dfb0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 108}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32937
VA_CHT_1(0x0076dfc0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 108}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32938
VA_CHT_1(0x0076dfd0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 108}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32939
VA_CHT_1(0x0076dfe0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 108}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32940
VA_CHT_1(0x0076dff0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 108}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32941
VA_CHT_1(0x0076e000, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32942
VA_CHT_1(0x0076e010, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 108}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32943
VA_CHT_1(0x0076e020, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32944
VA_CHT_1(0x0076e030, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 108}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32945
VA_CHT_1(0x0076e040, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32946
VA_CHT_1(0x0076e050, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32947
VA_CHT_1(0x0076e060, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 108}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32948
VA_CHT_1(0x0076e070, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 108}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32949
VA_CHT_1(0x0076e080, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 108}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32950
VA_CHT_1(0x0076e090, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 108}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32951
VA_CHT_1(0x0076e0a0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 108}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32952
VA_CHT_1(0x0076e0b0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 108}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32953
VA_CHT_1(0x0076e0c0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 108}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32954
VA_CHT_1(0x0076e0d0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 108}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32955
VA_CHT_1(0x0076e0e0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 108}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32956
VA_CHT_1(0x0076e0f0, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32957
VA_CHT_1(0x0076e100, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32958
VA_CHT_1(0x0076e110, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32959
VA_CHT_1(0x0076e120, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 116}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32960
VA_CHT_1(0x0076e130, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32961
VA_CHT_1(0x0076e140, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 116}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:32962
VA_CHT_1_COMPGEN(0x0076e150, 0x8, VECTOR_DELETING_DTOR, t_random_random_monster)

// confidence:C; align-order; stable; map:32963
VA_CHT_1_COMPGEN(0x0076e160, 0xe, VECTOR_DELETING_DTOR, t_random_random_monster)

// confidence:C; align-order; stable; map:32964
VA_CHT_1_COMPGEN(0x0076e170, 0x8, VECTOR_DELETING_DTOR, t_random_monster)

// confidence:C; align-order; stable; map:32965
VA_CHT_1_COMPGEN(0x0076e180, 0xe, VECTOR_DELETING_DTOR, t_random_monster)

// === .rdata (20 symbols) ===

// name:A; map symbol; map:45163
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45164
DATA_CHT_1_COMPGEN(0x008e8af4, "const t_random_monster_base::`vftable'")

// confidence:B; rtti-order; map:45165
DATA_CHT_1_COMPGEN(0x008e8bb4, "const t_random_monster_base::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45166
DATA_CHT_1_COMPGEN(0x008e8bbc, "const t_random_monster_base::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45167
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45168
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45169
DATA_CHT_1_COMPGEN(0x008e8ae4, "const t_object_factory<t_random_random_monster>::`vftable'")

// name:A; map symbol; map:45170
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45171
DATA_CHT_1_COMPGEN(0x008e8c94, "const t_random_random_monster::`vftable'")

// confidence:B; rtti-order; map:45172
DATA_CHT_1_COMPGEN(0x008e8d54, "const t_random_random_monster::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45173
DATA_CHT_1_COMPGEN(0x008e8d5c, "const t_random_random_monster::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45174
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45175
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:45176
DATA_CHT_1_COMPGEN(0x008e8aec, "const t_object_factory<t_random_monster>::`vftable'")

// name:A; map symbol; map:45177
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:45178
DATA_CHT_1_COMPGEN(0x008e8e34, "const t_random_monster::`vftable'")

// confidence:B; rtti-order; map:45179
DATA_CHT_1_COMPGEN(0x008e8ef4, "const t_random_monster::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:45180
DATA_CHT_1_COMPGEN(0x008e8efc, "const t_random_monster::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:45181
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:45182
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`vbtable'{for `t_abstract_stationary_adv_object'}")

// === .rdata$r (29 symbols) ===

// name:A; map symbol; map:54253
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_monster_base@@;vft=4e8af4;col=513bb0;td=5b1a64;chd=513ba0;offset=192;cdOffset=0;validated-hierarchy; map:54254
DATA_CHT_1_COMPGEN(0x00913bb0, "const t_random_monster_base::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54255
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_monster_base@@;bcd=513b60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54256
DATA_CHT_1_COMPGEN(0x00913b60, "t_random_monster_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_monster_base@@;vft=4e8af4;col=513bb0;td=5b1a64;chd=513ba0;offset=192;cdOffset=0;validated-hierarchy; map:54257
DATA_CHT_1_COMPGEN(0x00913b78, "t_random_monster_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_monster_base@@;vft=4e8af4;col=513bb0;td=5b1a64;chd=513ba0;offset=192;cdOffset=0;validated-hierarchy; map:54258
DATA_CHT_1_COMPGEN(0x00913ba0, "t_random_monster_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54259
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster_base::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_random_monster@@@@;bcd=513a94;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54260
DATA_CHT_1_COMPGEN(0x00913a94, "t_object_factory<t_random_random_monster>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_random_monster@@@@;vft=4e8ae4;col=513ac8;td=5b19f0;chd=513ab8;offset=0;cdOffset=0;validated-hierarchy; map:54261
DATA_CHT_1_COMPGEN(0x00913aac, "t_object_factory<t_random_random_monster>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_random_monster@@@@;vft=4e8ae4;col=513ac8;td=5b19f0;chd=513ab8;offset=0;cdOffset=0;validated-hierarchy; map:54262
DATA_CHT_1_COMPGEN(0x00913ab8, "t_object_factory<t_random_random_monster>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_random_monster@@@@;vft=4e8ae4;col=513ac8;td=5b19f0;chd=513ab8;offset=0;cdOffset=0;validated-hierarchy; map:54263
DATA_CHT_1_COMPGEN(0x00913ac8, "const t_object_factory<t_random_random_monster>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54264
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_random_monster@@;vft=4e8c94;col=513c54;td=5b1a88;chd=513c44;offset=192;cdOffset=0;validated-hierarchy; map:54265
DATA_CHT_1_COMPGEN(0x00913c54, "const t_random_random_monster::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54266
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_random_monster@@;bcd=513c00;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54267
DATA_CHT_1_COMPGEN(0x00913c00, "t_random_random_monster::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_random_monster@@;vft=4e8c94;col=513c54;td=5b1a88;chd=513c44;offset=192;cdOffset=0;validated-hierarchy; map:54268
DATA_CHT_1_COMPGEN(0x00913c18, "t_random_random_monster::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_random_monster@@;vft=4e8c94;col=513c54;td=5b1a88;chd=513c44;offset=192;cdOffset=0;validated-hierarchy; map:54269
DATA_CHT_1_COMPGEN(0x00913c44, "t_random_random_monster::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54270
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_random_monster::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_monster@@@@;bcd=513adc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54271
DATA_CHT_1_COMPGEN(0x00913adc, "t_object_factory<t_random_monster>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_monster@@@@;vft=4e8aec;col=513b10;td=5b1a2c;chd=513b00;offset=0;cdOffset=0;validated-hierarchy; map:54272
DATA_CHT_1_COMPGEN(0x00913af4, "t_object_factory<t_random_monster>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_monster@@@@;vft=4e8aec;col=513b10;td=5b1a2c;chd=513b00;offset=0;cdOffset=0;validated-hierarchy; map:54273
DATA_CHT_1_COMPGEN(0x00913b00, "t_object_factory<t_random_monster>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_monster@@@@;vft=4e8aec;col=513b10;td=5b1a2c;chd=513b00;offset=0;cdOffset=0;validated-hierarchy; map:54274
DATA_CHT_1_COMPGEN(0x00913b10, "const t_object_factory<t_random_monster>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54275
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_monster@@;vft=4e8e34;col=513cf8;td=5b1ab0;chd=513ce8;offset=192;cdOffset=0;validated-hierarchy; map:54276
DATA_CHT_1_COMPGEN(0x00913cf8, "const t_random_monster::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54277
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_monster@@;bcd=513ca4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54278
DATA_CHT_1_COMPGEN(0x00913ca4, "t_random_monster::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_monster@@;vft=4e8e34;col=513cf8;td=5b1ab0;chd=513ce8;offset=192;cdOffset=0;validated-hierarchy; map:54279
DATA_CHT_1_COMPGEN(0x00913cbc, "t_random_monster::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_monster@@;vft=4e8e34;col=513cf8;td=5b1ab0;chd=513ce8;offset=192;cdOffset=0;validated-hierarchy; map:54280
DATA_CHT_1_COMPGEN(0x00913ce8, "t_random_monster::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54281
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_monster::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (5 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_random_monster_base@@;td=5b1a64;validated-header; map:59035
DATA_CHT_1_COMPGEN(0x009b1a64, "t_random_monster_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_random_monster@@@@;td=5b19f0;validated-header; map:59036
DATA_CHT_1_COMPGEN(0x009b19f0, "t_object_factory<t_random_random_monster> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_random_monster@@;td=5b1a88;validated-header; map:59037
DATA_CHT_1_COMPGEN(0x009b1a88, "t_random_random_monster `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_monster@@@@;td=5b1a2c;validated-header; map:59038
DATA_CHT_1_COMPGEN(0x009b1a2c, "t_object_factory<t_random_monster> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_monster@@;td=5b1ab0;validated-header; map:59039
DATA_CHT_1_COMPGEN(0x009b1ab0, "t_random_monster `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60333
DATA_CHT_1(0x009f3db4)
t_object_registration<t_random_random_monster> k_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60334
DATA_CHT_1(0x009f3db8)
t_object_registration<t_random_monster> k_level_registration; // Initial value unavailable.

} // anonymous namespace
