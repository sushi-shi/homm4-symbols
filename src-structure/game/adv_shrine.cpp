// adv_shrine.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\adv_shrine.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 92/144 (A:45 B:9 C:38); unaccounted 52; skipped std 19.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (102 symbols) ===

// name:C; dyninit; see ledger; map:70814
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_shrine#1")

// name:C; dyninit; see ledger; map:70815
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_shrine#1")

// name:C; dyninit; see ledger; map:70816
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_shrine#1")

// name:C; dyninit; see ledger; map:70817
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_shrine#1")

// name:C; dyninit; see ledger; map:70818
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, "adv_shrine#2")

// name:C; dyninit; see ledger; map:70819
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_shrine#2")

// name:C; dyninit; see ledger; map:70820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "adv_shrine#2")

// name:C; dyninit; see ledger; map:70821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "adv_shrine#2")

// confidence:A; dyninit-init; owner-conf-C; map:70822; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x004636e0, 0x15, STATIC_INIT_DISPATCH, "adv_shrine#3")

// name:C; dyninit; see ledger; map:70823
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adv_shrine#3")

// confidence:A; dyninit-init; owner-conf-B; map:70824; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00463700, 0x1c, STATIC_INIT_DISPATCH, k_shrine_registration)

// name:B; dyninit; see ledger; map:70825
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_shrine_registration)

// confidence:A; dyninit-init; owner-conf-B; map:70826; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00463720, 0x1c, STATIC_INIT_DISPATCH, k_random_shrine_registration)

// name:B; dyninit; see ledger; map:70827
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_random_shrine_registration)

namespace {

// confidence:B; align-order; retn,stable; map:5761
VA_CHT_1(0x00463740, 0x1eb)
std::string get_shrine_model_name(t_town_type arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:5762
VA_CHT_1(0x00463930, 0x1e4)
t_spell pick_spell(t_town_type arg_0, int arg_1, std::bitset<188> const& arg_2, t_adventure_map& arg_3)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:5763
VA_CHT_1(0x00463b20, 0x175)
t_adv_shrine::t_adv_shrine(t_town_type arg_0, int arg_1, t_spell arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:5764
VA_CHT_1(0x00463d40, 0x14b)
t_adv_shrine::t_adv_shrine(std::string const& arg_0, t_qualified_adv_object_type const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:5765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_type t_adv_shrine::get_skill_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5766
VA_CHT_1(0x00463e90, 0x793)
void t_adv_shrine::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5767
VA_CHT_1(0x00464630, 0x389)
std::string t_adv_shrine::replace_text(std::string arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_shrine::get_version() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:5769
VA_CHT_1(0x004649c0, 0x48)
bool t_adv_shrine::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5770
VA_CHT_1(0x00464a10, 0x58)
bool t_adv_shrine::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5771
VA_CHT_1(0x00464a70, 0xa5)
bool t_adv_shrine::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5772
VA_CHT_1(0x00464b20, 0x22a)
std::string t_adv_shrine::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5773
VA_CHT_1(0x00464d50, 0x3d)
void t_adv_shrine::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5774
VA_CHT_1(0x00464d90, 0x442)
void t_adv_shrine::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:5775
VA_CHT_1(0x004651e0, 0x11e)
float t_adv_shrine::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:5776
VA_CHT_1(0x00465300, 0x150)
t_random_adv_shrine::t_random_adv_shrine(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_random_adv_shrine::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:5778
VA_CHT_1(0x00465520, 0xaf)
bool t_random_adv_shrine::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:5779
VA_CHT_1(0x004655d0, 0xc0)
void t_random_adv_shrine::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:70828; name:B (dyninit; see ledger)
VA_CHT_1(0x004659f0, 0x20)
// adv_shrine$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:70830; name:B (dyninit; see ledger)
VA_CHT_1(0x00465a10, 0x5c)
// adv_shrine$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70831
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shrine$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70832
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shrine$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70833
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adv_shrine$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<188> const& t_adventure_map::get_allowed_spells() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:5781
VA_CHT_1(0x004657d0, 0x34)
void t_adventure_map::increment_spell_count(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool is_teachable(t_spell arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_adv_shrine::get_alignment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adv_shrine::get_spell_level() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:5785
VA_CHT_1_COMPGEN(0x00463ca0, 0x30, VECTOR_DELETING_DTOR, t_adv_shrine)

// name:A; map symbol; map:5786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_shrine)

// name:A; map symbol; map:5787
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adv_shrine::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_shrine::~t_adv_shrine()
{
    // Body unavailable.
}

// name:A; map symbol; map:5789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_adv_shrine::get_skill_level() const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:5790
VA_CHT_1(0x00465810, 0x1d)
bool t_hero::in_spellbook(t_spell arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:5791
VA_CHT_1_COMPGEN(0x00465450, 0x33, SCALAR_DELETING_DTOR, t_random_adv_shrine)

// name:A; map symbol; map:5792
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_random_adv_shrine)

// name:A; map symbol; map:5793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_random_adv_shrine::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:5794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_random_adv_shrine::~t_random_adv_shrine()
{
    // Body unavailable.
}

// name:A; map symbol; map:5795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_random_adv_shrine::get_spell_level() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_shrine>::~t_counted_ptr<t_adv_shrine>()
{
    // Body unavailable.
}

// name:A; map symbol; map:5815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_register_with_type<t_adv_shrine>::t_register_with_type<t_adv_shrine>(t_adv_object_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_random_adv_shrine>::t_object_registration<t_random_adv_shrine>(
    t_adv_object_type arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:5817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell enum_incr(t_spell& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_spell const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:5819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_spell get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5820
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_random_number_generator::operator()(t_town_type arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adv_shrine>::t_counted_ptr<t_adv_shrine>(t_adv_shrine* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:5822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_shrine* t_counted_ptr<t_adv_shrine>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:5823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory_with_type<t_adv_shrine>::t_object_factory_with_type<t_adv_shrine>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:5824
VA_CHT_1(0x00465910, 0x6a)
t_stationary_adventure_object* t_object_factory_with_type<t_adv_shrine>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:5825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_random_adv_shrine>::t_object_factory<t_random_adv_shrine>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:5826
VA_CHT_1(0x00465980, 0x65)
t_stationary_adventure_object* t_object_factory<t_random_adv_shrine>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:5827
VA_CHT_1_COMPGEN(0x00465a70, 0x8, VECTOR_DELETING_DTOR, t_adv_shrine)

// confidence:C; align-order; stable; map:5828
VA_CHT_1_COMPGEN(0x00465a80, 0xb, VECTOR_DELETING_DTOR, t_adv_shrine)

// confidence:C; align-order; stable; map:5829
VA_CHT_1(0x00465a90, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 44}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5830
VA_CHT_1(0x00465aa0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 44}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5831
VA_CHT_1(0x00465ab0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5832
VA_CHT_1(0x00465ac0, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5833
VA_CHT_1(0x00465ad0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 44}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5834
VA_CHT_1(0x00465ae0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 44}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5835
VA_CHT_1(0x00465af0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 44}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5836
VA_CHT_1(0x00465b00, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 44}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5837
VA_CHT_1(0x00465b10, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 44}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5838
VA_CHT_1(0x00465b20, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 44}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5839
VA_CHT_1(0x00465b30, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5840
VA_CHT_1(0x00465b40, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 44}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5841
VA_CHT_1(0x00465b50, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5842
VA_CHT_1(0x00465b60, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 44}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5843
VA_CHT_1(0x00465b70, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5844
VA_CHT_1(0x00465b80, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5845
VA_CHT_1(0x00465b90, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5846
VA_CHT_1(0x00465ba0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 44}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5847
VA_CHT_1(0x00465bb0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5848
VA_CHT_1(0x00465bc0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 44}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5849
VA_CHT_1(0x00465bd0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 44}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5850
VA_CHT_1(0x00465be0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 44}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5851
VA_CHT_1(0x00465bf0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5852
VA_CHT_1(0x00465c00, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 44}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5853
VA_CHT_1(0x00465c10, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 44}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5854
VA_CHT_1(0x00465c20, 0x8)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5855
VA_CHT_1(0x00465c30, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5856
VA_CHT_1(0x00465c40, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5857
VA_CHT_1(0x00465c50, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 52}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5858
VA_CHT_1(0x00465c60, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5859
VA_CHT_1(0x00465c70, 0xb)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 52}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:5860
VA_CHT_1_COMPGEN(0x00465c80, 0x8, VECTOR_DELETING_DTOR, t_random_adv_shrine)

// confidence:C; align-order; stable; map:5861
VA_CHT_1_COMPGEN(0x00465c90, 0xe, VECTOR_DELETING_DTOR, t_random_adv_shrine)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:42999
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43000
DATA_CHT_1_COMPGEN(0x008d19e4, "const t_adv_shrine::`vftable'")

// confidence:B; rtti-order; map:43001
DATA_CHT_1_COMPGEN(0x008d1aa4, "const t_adv_shrine::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43002
DATA_CHT_1_COMPGEN(0x008d1aac, "const t_adv_shrine::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43003
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43004
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:43005
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43006
DATA_CHT_1_COMPGEN(0x008d1b7c, "const t_random_adv_shrine::`vftable'")

// confidence:B; rtti-order; map:43007
DATA_CHT_1_COMPGEN(0x008d1c3c, "const t_random_adv_shrine::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43008
DATA_CHT_1_COMPGEN(0x008d1c44, "const t_random_adv_shrine::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43009
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43010
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43011
DATA_CHT_1_COMPGEN(0x008d19d4, "const t_object_factory_with_type<t_adv_shrine>::`vftable'")

// confidence:A; rtti-name; map:43012
DATA_CHT_1_COMPGEN(0x008d19dc, "const t_object_factory<t_random_adv_shrine>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:48316
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_shrine@@;vft=4d19e4;col=4f8bb4;td=58ab58;chd=4f8ba4;offset=128;cdOffset=0;validated-hierarchy; map:48317
DATA_CHT_1_COMPGEN(0x008f8bb4, "const t_adv_shrine::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48318
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_shrine@@;bcd=4f8b64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48319
DATA_CHT_1_COMPGEN(0x008f8b64, "t_adv_shrine::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_shrine@@;vft=4d19e4;col=4f8bb4;td=58ab58;chd=4f8ba4;offset=128;cdOffset=0;validated-hierarchy; map:48320
DATA_CHT_1_COMPGEN(0x008f8b7c, "t_adv_shrine::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_shrine@@;vft=4d19e4;col=4f8bb4;td=58ab58;chd=4f8ba4;offset=128;cdOffset=0;validated-hierarchy; map:48321
DATA_CHT_1_COMPGEN(0x008f8ba4, "t_adv_shrine::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48322
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adv_shrine::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:48323
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_random_adv_shrine@@;vft=4d1b7c;col=4f8c54;td=58abb8;chd=4f8c44;offset=140;cdOffset=0;validated-hierarchy; map:48324
DATA_CHT_1_COMPGEN(0x008f8c54, "const t_random_adv_shrine::`RTTI Complete Object Locator'")

// name:A; map symbol; map:48325
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_random_adv_shrine@@;bcd=4f8c04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48326
DATA_CHT_1_COMPGEN(0x008f8c04, "t_random_adv_shrine::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_random_adv_shrine@@;vft=4d1b7c;col=4f8c54;td=58abb8;chd=4f8c44;offset=140;cdOffset=0;validated-hierarchy; map:48327
DATA_CHT_1_COMPGEN(0x008f8c1c, "t_random_adv_shrine::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_random_adv_shrine@@;vft=4d1b7c;col=4f8c54;td=58abb8;chd=4f8c44;offset=140;cdOffset=0;validated-hierarchy; map:48328
DATA_CHT_1_COMPGEN(0x008f8c44, "t_random_adv_shrine::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48329
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_random_adv_shrine::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory_with_type@Vt_adv_shrine@@@@;bcd=4f8a98;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48330
DATA_CHT_1_COMPGEN(0x008f8a98, "t_object_factory_with_type<t_adv_shrine>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_shrine@@@@;vft=4d19d4;col=4f8acc;td=58aad8;chd=4f8abc;offset=0;cdOffset=0;validated-hierarchy; map:48331
DATA_CHT_1_COMPGEN(0x008f8ab0, "t_object_factory_with_type<t_adv_shrine>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_shrine@@@@;vft=4d19d4;col=4f8acc;td=58aad8;chd=4f8abc;offset=0;cdOffset=0;validated-hierarchy; map:48332
DATA_CHT_1_COMPGEN(0x008f8abc, "t_object_factory_with_type<t_adv_shrine>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory_with_type@Vt_adv_shrine@@@@;vft=4d19d4;col=4f8acc;td=58aad8;chd=4f8abc;offset=0;cdOffset=0;validated-hierarchy; map:48333
DATA_CHT_1_COMPGEN(0x008f8acc, "const t_object_factory_with_type<t_adv_shrine>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_random_adv_shrine@@@@;bcd=4f8ae0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48334
DATA_CHT_1_COMPGEN(0x008f8ae0, "t_object_factory<t_random_adv_shrine>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_shrine@@@@;vft=4d19dc;col=4f8b14;td=58ab14;chd=4f8b04;offset=0;cdOffset=0;validated-hierarchy; map:48335
DATA_CHT_1_COMPGEN(0x008f8af8, "t_object_factory<t_random_adv_shrine>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_shrine@@@@;vft=4d19dc;col=4f8b14;td=58ab14;chd=4f8b04;offset=0;cdOffset=0;validated-hierarchy; map:48336
DATA_CHT_1_COMPGEN(0x008f8b04, "t_object_factory<t_random_adv_shrine>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_random_adv_shrine@@@@;vft=4d19dc;col=4f8b14;td=58ab14;chd=4f8b04;offset=0;cdOffset=0;validated-hierarchy; map:48337
DATA_CHT_1_COMPGEN(0x008f8b14, "const t_object_factory<t_random_adv_shrine>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_adv_shrine@@;td=58ab58;validated-header; map:57554
DATA_CHT_1_COMPGEN(0x0098ab58, "t_adv_shrine `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_random_adv_shrine@@;td=58abb8;validated-header; map:57555
DATA_CHT_1_COMPGEN(0x0098abb8, "t_random_adv_shrine `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory_with_type@Vt_adv_shrine@@@@;td=58aad8;validated-header; map:57556
DATA_CHT_1_COMPGEN(0x0098aad8, "t_object_factory_with_type<t_adv_shrine> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_random_adv_shrine@@@@;td=58ab14;validated-header; map:57557
DATA_CHT_1_COMPGEN(0x0098ab14, "t_object_factory<t_random_adv_shrine> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:59963
DATA_CHT_1(0x009cfc30)
t_register_with_type<t_adv_shrine> k_shrine_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:59964
DATA_CHT_1(0x009cfc34)
t_object_registration<t_random_adv_shrine> k_random_shrine_registration; // Initial value unavailable.

} // anonymous namespace
