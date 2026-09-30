// abstract_town.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\abstract_town.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 302/441 (A:167 B:27 C:108); unaccounted 139; skipped std 216.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (271 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:71339; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00413aa0, 0x15, STATIC_INIT_DISPATCH, "abstract_town#1")

// name:C; dyninit; see ledger; map:71340
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "abstract_town#1")

// confidence:A; dyninit-init; owner-conf-B; map:71341; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00413ac0, 0x11, STATIC_INIT_DISPATCH, k_named_object_balloon_help)

// confidence:B; dyninit-ctor; owner-conf-B; map:71342; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00413ae0, 0xd1, STATIC_CTOR, k_named_object_balloon_help)

// name:A; dyninit; see ledger; map:71343
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_named_object_balloon_help)

// confidence:B; dyninit-dtor; owner-conf-B; map:71344; name:A (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00413bc0, 0xa, STATIC_DTOR, k_named_object_balloon_help)

namespace {

// name:A; map symbol; map:1843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_old_built_in_event(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_ownable_built_in_event& arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:1844
VA_CHT_1(0x00413bd0, 0x1a4)
bool read_old_timed_event(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_ownable_timed_event& arg_2
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,vptr; map:1845
VA_CHT_1(0x00413d80, 0x30c)
t_abstract_town::t_abstract_town(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:1846
VA_CHT_1(0x00414420, 0x315)
t_abstract_town::t_abstract_town(t_abstract_town* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:1847
VA_CHT_1(0x00414910, 0x221)
t_abstract_town::~t_abstract_town()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1848
VA_CHT_1(0x00414b40, 0x29)
void t_abstract_town::on_adventure_map_destruction()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1849
VA_CHT_1(0x00414b70, 0x3f)
void t_abstract_town::clear_nobility_heroes()
{
    // Body unavailable.
}

// name:A; map symbol; map:1850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_town::get_towndwelling_count() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1851
VA_CHT_1(0x00414bb0, 0x2d)
t_town_image_level t_abstract_town::get_castle_level() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1852
VA_CHT_1(0x00414be0, 0xe)
t_abstract_grail_data_source const& t_abstract_town::get_grail_data() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1853
VA_CHT_1(0x00414bf0, 0x12d)
std::string t_abstract_town::get_name() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1854
VA_CHT_1(0x00414d20, 0x241)
std::string t_abstract_town::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1855
VA_CHT_1(0x00414f70, 0x16)
int t_abstract_town::get_nobility_bonus() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1856
VA_CHT_1(0x00414f90, 0xc9)
t_hero* t_abstract_town::get_best_nobility_hero() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1857
VA_CHT_1(0x00415060, 0xa1)
void t_abstract_town::add_hero_to_nobility_list(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1858
VA_CHT_1(0x00415110, 0xf2)
void t_abstract_town::remove_hero_from_nobility_list(t_hero* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1859
VA_CHT_1(0x00415210, 0x5b)
int t_abstract_town::get_highest_nobility_priority() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1860
VA_CHT_1(0x00415270, 0x5b)
int t_abstract_town::get_lowest_nobility_priority() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1861
VA_CHT_1(0x004152d0, 0x45)
bool t_abstract_town::gets_global_grail_effects(t_town_type arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1862
VA_CHT_1(0x00415320, 0x1df)
bool t_abstract_town::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:1863
VA_CHT_1(0x00415500, 0x24d)
bool t_abstract_town::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1864
VA_CHT_1(0x00415750, 0xad4)
bool t_abstract_town::read_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1865
VA_CHT_1(0x004163c0, 0x225)
bool t_abstract_town::write_events(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1866
VA_CHT_1(0x004165f0, 0x82)
bool t_abstract_town::read_map_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1,
    bool& arg_2,
    bool& arg_3,
    bool& arg_4,
    t_skill_set& arg_5,
    t_skill_set& arg_6
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1867
VA_CHT_1(0x00416680, 0x210)
bool t_abstract_town::read_map_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1,
    bool& arg_2,
    bool& arg_3,
    bool& arg_4,
    t_skill_set& arg_5,
    t_skill_set& arg_6,
    int arg_7
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:1868
VA_CHT_1(0x00416890, 0x5c)
bool t_abstract_town::preplacement(t_adventure_map& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_town::read_ai_importance_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1870
VA_CHT_1(0x004168f0, 0x22a)
bool t_abstract_town::read_buildings_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    bool& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1871
VA_CHT_1(0x00416b20, 0x125)
bool t_abstract_town::read_built_in_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_town::read_garrison_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    bool& arg_2
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1873
VA_CHT_1(0x00416c50, 0xf8)
bool t_abstract_town::read_name_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_town::read_player_color_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1875
VA_CHT_1(0x00416d50, 0x266)
bool t_abstract_town::read_timed_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1876
VA_CHT_1(0x00416fc0, 0x260)
bool t_abstract_town::read_triggerable_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1877
VA_CHT_1(0x00417220, 0x266)
bool t_abstract_town::read_continuous_events_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_town::read_school_skills_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    bool& arg_2,
    t_skill_set& arg_3,
    t_skill_set& arg_4
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_town::is_deleted_by_deletion_marker() const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:1880
VA_CHT_1(0x00417490, 0x2f)
void t_abstract_town::destroy()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:1881
VA_CHT_1(0x004174c0, 0x71)
void t_abstract_town::set_owner(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:1882
VA_CHT_1(0x00417540, 0x15)
void t_abstract_town::post_change()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:1883
VA_CHT_1(0x00417560, 0x13)
int t_abstract_town::compute_scouting_range() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:1884
VA_CHT_1(0x00417580, 0x19d)
void t_abstract_town::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:1885
VA_CHT_1(0x00418650, 0x2d)
void t_abstract_town::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71345; name:B (dyninit; see ledger)
VA_CHT_1(0x004186c0, 0x20)
// abstract_town$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:71347; name:B (dyninit; see ledger)
VA_CHT_1(0x004186e0, 0x5c)
// abstract_town$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_town$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:71349
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// abstract_town$tatexit3
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:71350; name:B (dyninit; see ledger)
VA_CHT_1(0x00418740, 0x50)
// abstract_town$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-band; retn,stable; map:1886
VA_CHT_1(0x00418200, 0x3b)
void t_timed_event::set_first_occurrence(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1887
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_timed_event::set_recurrence_interval(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:1888
VA_CHT_1(0x004185d0, 0x19)
void t_ownable_timed_event::clear_execution_flag()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:1889
VA_CHT_1(0x00416250, 0x1a)
void t_ownable_timed_event::set_execution_flag()
{
    // Body unavailable.
}

// name:A; map symbol; map:1890
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_grail_data_source::~t_abstract_grail_data_source()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1891
VA_CHT_1_COMPGEN(0x00414090, 0x20, VECTOR_DELETING_DTOR, t_abstract_grail_data_source)

// name:A; map symbol; map:1892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_grail_data_source)

// confidence:A; align-band; retn,vptr; map:1893
VA_CHT_1(0x004400c0, 0x11)
t_adv_object_map_info::~t_adv_object_map_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:1894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type t_creature_array::get_boat_type() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1895
VA_CHT_1(0x004140d0, 0x9)
float t_adventure_object::ai_value(
    t_adventure_ai const& arg_0,
    t_creature_array const& arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vslot; map:1896
VA_CHT_1(0x004140e0, 0x9)
float t_adventure_object::ai_activation_value_drop(t_creature_array const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:1897
VA_CHT_1(0x0047e410, 0x11)
t_adv_object_map_info::t_adv_object_map_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:1898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_adv_object::t_owned_adv_object(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_object::read_postplacement(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1900
VA_CHT_1(0x004140f0, 0xd2)
t_stationary_adventure_object::t_stationary_adventure_object(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1901
VA_CHT_1_COMPGEN(0x004141d0, 0x2d, SCALAR_DELETING_DTOR, t_stationary_adventure_object)

// name:A; map symbol; map:1902
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_stationary_adventure_object)

// name:A; map symbol; map:1903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_stationary_adventure_object::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vptr; map:1904
VA_CHT_1(0x004dd730, 0x162)
t_stationary_adventure_object::~t_stationary_adventure_object()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1905
VA_CHT_1_COMPGEN(0x00414260, 0x2d, VECTOR_DELETING_DTOR, t_owned_adv_object)

// name:A; map symbol; map:1906
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_owned_adv_object)

// name:A; map symbol; map:1907
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_owned_adv_object::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:1908
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_adv_object::~t_owned_adv_object()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1909
VA_CHT_1_COMPGEN(0x004142f0, 0x33, VECTOR_DELETING_DTOR, t_abstract_town)

// name:A; map symbol; map:1910
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_town)

// name:A; map symbol; map:1911
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_grail_data_source::t_abstract_grail_data_source()
{
    // Body unavailable.
}

// name:A; map symbol; map:1912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>::~t_counted_ptr<t_ownable_built_in_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_built_in_event::t_ownable_built_in_event()
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vptr; map:1915
VA_CHT_1(0x00416270, 0x49)
t_discrete_event::~t_discrete_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1916
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_event::t_ownable_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_abstract_town::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:1918
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ownable_built_in_event)

// name:A; map symbol; map:1919
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_ownable_built_in_event)

// name:A; map symbol; map:1920
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_built_in_event::~t_ownable_built_in_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_event::~t_ownable_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1922
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_adv_object::t_owned_adv_object(t_owned_adv_object const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1923
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_adv_object::t_abstract_adv_object(t_abstract_adv_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vptr; map:1924
VA_CHT_1(0x0056edb0, 0x18)
t_adv_object_map_info::t_adv_object_map_info(t_adv_object_map_info const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1925
VA_CHT_1(0x004364f0, 0x126)
t_stationary_adventure_object::t_stationary_adventure_object(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:1926
VA_CHT_1(0x00414740, 0x17f)
t_adventure_object::t_adventure_object(t_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1927
VA_CHT_1(0x00794900, 0x12)
t_counted_object::t_counted_object(t_counted_object const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:1928
VA_CHT_1_COMPGEN(0x004148c0, 0x2d, SCALAR_DELETING_DTOR, t_adventure_object)

// name:A; map symbol; map:1929
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_object)

// confidence:A; align-band; retn,stable,vptr; map:1930
VA_CHT_1(0x004de670, 0x2f)
t_adventure_object_memory_cache_refrence::t_adventure_object_memory_cache_refrence(
    t_adventure_object_memory_cache_refrence const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_adventure_object::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:1932
VA_CHT_1_COMPGEN(0x004148f0, 0x1e, VECTOR_DELETING_DTOR, t_adventure_object_memory_cache_refrence)

// name:A; map symbol; map:1933
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adventure_object_memory_cache_refrence)

// name:A; map symbol; map:1934
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>::~t_counted_ptr<t_adventure_object_memory_cache>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:1935
VA_CHT_1(0x00417960, 0x1d)
bool t_abstract_town::has(t_town_building arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1936
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_hero::get_nobility_priority() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1937
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_town> t_hero::get_nobility_town() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1938
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_town>::~t_counted_ptr<t_abstract_town>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_triggerable_event::set_name(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:1941
VA_CHT_1(0x00417720, 0x52)
bool t_ownable_built_in_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:1942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_timed_event::t_ownable_timed_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_timed_event::t_timed_event()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1944
VA_CHT_1(0x00416230, 0x1a)
t_timed_event::~t_timed_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1945
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_ownable_timed_event)

// name:A; map symbol; map:1946
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ownable_timed_event)

// confidence:A; align-band; retn,stable,vptr; map:1947
VA_CHT_1(0x006c9210, 0x260)
t_ownable_timed_event::~t_ownable_timed_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1948
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_triggerable_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:1949
VA_CHT_1(0x004162c0, 0x4a)
t_ownable_continuous_event::t_ownable_continuous_event()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:1950
VA_CHT_1(0x00416310, 0x26)
t_continuous_event::~t_continuous_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1951
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_ownable_continuous_event)

// name:A; map symbol; map:1952
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ownable_continuous_event)

// confidence:A; align-band; vptr; map:1953
VA_CHT_1(0x00416340, 0x49)
t_continuous_event::t_continuous_event()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1954
VA_CHT_1(0x006c96d0, 0x260)
t_ownable_continuous_event::~t_ownable_continuous_event()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:1955
VA_CHT_1(0x00417dd0, 0x12)
void t_ownable_continuous_event::set_run_only_during_owners_turn(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:1956
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_timed_event>::~t_counted_ptr<t_ownable_timed_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1957
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_continuous_event>::~t_counted_ptr<t_ownable_continuous_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1958
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_triggerable_event::t_ownable_triggerable_event()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1959
VA_CHT_1(0x00416390, 0x26)
t_triggerable_event::~t_triggerable_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1960
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_triggerable_event>::~t_counted_ptr<t_ownable_triggerable_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1961
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_ownable_triggerable_event)

// name:A; map symbol; map:1962
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_ownable_triggerable_event)

// name:A; map symbol; map:1963
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_triggerable_event::t_triggerable_event()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:1964
VA_CHT_1(0x006c9470, 0x25c)
t_ownable_triggerable_event::~t_ownable_triggerable_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:1965
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_built_in_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1966
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_ownable_triggerable_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:1967
VA_CHT_1(0x00418680, 0x3f)
t_player* t_adventure_map::get_player(t_player_color arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:1968
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_adv_object::set_player_color(t_player_color arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:2138
VA_CHT_1(0x00418550, 0x43)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, bool const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2139
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2140
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_memory_cache>::t_counted_ptr<t_adventure_object_memory_cache>(
    t_counted_ptr<t_adventure_object_memory_cache> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2141
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_adventure_object_cache_manager>::t_counted_ptr<t_adventure_object_cache_manager>(
    t_counted_ptr<t_adventure_object_cache_manager> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2142
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>::t_counted_ptr<t_ownable_built_in_event>(
    t_ownable_built_in_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2143
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>::t_counted_ptr<t_ownable_built_in_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:2144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_built_in_event>& t_counted_ptr<t_ownable_built_in_event>::operator=(
    t_counted_ptr<t_ownable_built_in_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_built_in_event* t_counted_ptr<t_ownable_built_in_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2146
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_built_in_event& t_counted_ptr<t_ownable_built_in_event>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2147
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_town>::t_counted_ptr<t_abstract_town>(t_counted_ptr<t_abstract_town> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2148
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_town* t_counted_ptr<t_abstract_town>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2149
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_player* t_shared_ptr<t_player>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2150
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action* t_counted_ptr<t_abstract_script_action>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2153
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_building enum_incr(t_town_building& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0, std::bitset<43> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_town_type const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:2156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<43> get_bitset(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2157
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_type get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2158
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_town_scriptable_event enum_incr(t_town_scriptable_event& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2159
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_timed_event>::t_counted_ptr<t_ownable_timed_event>(t_ownable_timed_event* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:2160
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_timed_event* t_counted_ptr<t_ownable_timed_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_timed_event& t_counted_ptr<t_ownable_timed_event>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_continuous_event>::t_counted_ptr<t_ownable_continuous_event>(
    t_ownable_continuous_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_continuous_event* t_counted_ptr<t_ownable_continuous_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_triggerable_event>::t_counted_ptr<t_ownable_triggerable_event>(
    t_ownable_triggerable_event* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ownable_triggerable_event* t_counted_ptr<t_ownable_triggerable_event>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:2194
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_ownable_continuous_event>")

// name:A; map symbol; map:2195
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_ownable_timed_event>")

// name:A; map symbol; map:2196
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_ownable_triggerable_event>")

// name:A; map symbol; map:2201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_timed_event>::t_counted_ptr<t_ownable_timed_event>(
    t_counted_ptr<t_ownable_timed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_timed_event>& t_counted_ptr<t_ownable_timed_event>::operator=(
    t_counted_ptr<t_ownable_timed_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2203
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_continuous_event>::t_counted_ptr<t_ownable_continuous_event>(
    t_counted_ptr<t_ownable_continuous_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2204
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_continuous_event>& t_counted_ptr<t_ownable_continuous_event>::operator=(
    t_counted_ptr<t_ownable_continuous_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_triggerable_event>::t_counted_ptr<t_ownable_triggerable_event>(
    t_counted_ptr<t_ownable_triggerable_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:2206
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_ownable_triggerable_event>& t_counted_ptr<t_ownable_triggerable_event>::operator=(
    t_counted_ptr<t_ownable_triggerable_event> const& arg_0
)
{
    // Body unavailable.
}

// name:C; dyninit; see ledger; map:2209
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_shroud_transition@@")

// name:C; dyninit; see ledger; map:2210
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "?g_default_body_ref@?$t_copy_on_write_ptr@V?$vector@Vt_shroud_transition@@")

// confidence:C; align-band; retn,stable; map:2211
VA_CHT_1(0x00414290, 0x57)
copy_on_write_ptr_details::t_default_body_ref<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::~t_default_body_ref<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:2212
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "copy_on_write_ptr_details::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>")

// name:A; map symbol; map:2213
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
copy_on_write_ptr_details::t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>::~t_body<std::vector<t_shroud_transition, std::allocator<t_shroud_transition>>>(

)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:2219
VA_CHT_1_COMPGEN(0x004187a0, 0xb, VECTOR_DELETING_DTOR, t_stationary_adventure_object)

// confidence:C; align-order; stable; map:2220
VA_CHT_1_COMPGEN(0x004187b0, 0x8, VECTOR_DELETING_DTOR, t_stationary_adventure_object)

// confidence:C; align-order; stable; map:2221
VA_CHT_1(0x004187c0, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2222
VA_CHT_1(0x004187d0, 0x8)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 0}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2223
VA_CHT_1(0x004187e0, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2224
VA_CHT_1(0x004187f0, 0xb)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2225
VA_CHT_1(0x00418800, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2226
VA_CHT_1(0x00418810, 0xb)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 8}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2227
VA_CHT_1(0x00418820, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2228
VA_CHT_1(0x00418860, 0x8)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 8}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:2229
VA_CHT_1(0x00418830, 0x24)
t_adv_map_point t_adventure_object::get_position() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:2230
VA_CHT_1_COMPGEN(0x00418870, 0xb, VECTOR_DELETING_DTOR, t_abstract_town)

// confidence:C; align-order; stable; map:2231
VA_CHT_1_COMPGEN(0x00418880, 0xb, VECTOR_DELETING_DTOR, t_abstract_town)

// confidence:C; align-order; stable; map:2232
VA_CHT_1(0x00418890, 0xb)
// [thunk]: protected: virtual int t_abstract_town::compute_scouting_range`adjustor{84}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2233
VA_CHT_1_COMPGEN(0x004188a0, 0xb, VECTOR_DELETING_DTOR, t_abstract_town)

// confidence:C; align-order; stable; map:2234
VA_CHT_1_COMPGEN(0x004188b0, 0x8, VECTOR_DELETING_DTOR, t_abstract_town)

// confidence:C; align-order; stable; map:2235
VA_CHT_1(0x004188c0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 212}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2236
VA_CHT_1(0x004188d0, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 212}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2237
VA_CHT_1(0x004188e0, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2238
VA_CHT_1(0x004188f0, 0xb)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2239
VA_CHT_1(0x00418900, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 212}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2240
VA_CHT_1(0x00418910, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 212}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2241
VA_CHT_1(0x00418920, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 212}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2242
VA_CHT_1(0x00418930, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 212}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2243
VA_CHT_1(0x00418940, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 212}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2244
VA_CHT_1(0x00418950, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 212}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2245
VA_CHT_1(0x00418960, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2246
VA_CHT_1(0x00418970, 0xb)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 200}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2247
VA_CHT_1(0x00418980, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 212}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2248
VA_CHT_1(0x00418990, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2249
VA_CHT_1(0x004189a0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 212}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2250
VA_CHT_1(0x004189b0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2251
VA_CHT_1(0x004189c0, 0xb)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2252
VA_CHT_1(0x004189d0, 0xb)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 212}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2253
VA_CHT_1(0x004189e0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 212}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2254
VA_CHT_1(0x004189f0, 0xb)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 212}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2255
VA_CHT_1(0x00418a00, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 212}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2256
VA_CHT_1(0x00418a10, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 212}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2257
VA_CHT_1(0x00418a20, 0x8)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 212}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2258
VA_CHT_1(0x00418a30, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 212}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2259
VA_CHT_1(0x00418a40, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 212}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2260
VA_CHT_1(0x00418a50, 0xb)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 212}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2261
VA_CHT_1(0x00418a60, 0xb)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2262
VA_CHT_1(0x00418a70, 0x8)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:2263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:2264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 220}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2265
VA_CHT_1(0x00418a90, 0xb)
// [thunk]: public: virtual t_town_image_level t_abstract_town::get_castle_level`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2266
VA_CHT_1(0x00418aa0, 0x8)
// [thunk]: public: virtual t_creature_array* t_creature_array::get_creature_array`adjustor{136}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2267
VA_CHT_1(0x00418ab0, 0xb)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2268
VA_CHT_1(0x00418ac0, 0x8)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 200}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:2269
VA_CHT_1(0x00418a80, 0x4)
int t_owned_adv_object::get_owner_number() const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:2270
VA_CHT_1(0x00418ad0, 0x8)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 220}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2271
VA_CHT_1_COMPGEN(0x00418ae0, 0x8, VECTOR_DELETING_DTOR, t_owned_adv_object)

// confidence:C; align-order; stable; map:2272
VA_CHT_1_COMPGEN(0x00418af0, 0x8, VECTOR_DELETING_DTOR, t_owned_adv_object)

// confidence:C; align-order; stable; map:2273
VA_CHT_1(0x00418b00, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 12}'(t_abstract_adv_object_visitor&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2274
VA_CHT_1(0x00418b10, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::accept`vtordisp{-4, 12}'(t_abstract_adv_object_visitor&)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2275
VA_CHT_1(0x00418b20, 0x8)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::animates`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2276
VA_CHT_1(0x00418b30, 0x8)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`adjustor{20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2277
VA_CHT_1(0x00418b40, 0x8)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 12}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2278
VA_CHT_1(0x00418b50, 0xb)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_shadow_to`vtordisp{-4, 12}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2279
VA_CHT_1(0x00418b60, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 12}'(int, unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2280
VA_CHT_1(0x00418b70, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_subimage_to`vtordisp{-4, 12}'(int, unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&, int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2281
VA_CHT_1(0x00418b80, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 12}'(unsigned long, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2282
VA_CHT_1(0x00418b90, 0xe)
// [thunk]: public: virtual void t_abstract_stationary_adv_object::draw_to`vtordisp{-4, 12}'(unsigned long, t_screen_rect const&, t_abstract_bitmap<unsigned short>&, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2283
VA_CHT_1(0x00418ba0, 0xb)
// [thunk]: public: virtual t_footprint const& t_abstract_stationary_adv_object::get_footprint`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2284
VA_CHT_1(0x00418bb0, 0xe)
// [thunk]: public: virtual t_player_color t_owned_adv_object::get_player_color`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2285
VA_CHT_1(0x00418bc0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 12}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2286
VA_CHT_1(0x00418bd0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_rect`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2287
VA_CHT_1(0x00418be0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 12}'(unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2288
VA_CHT_1(0x00418bf0, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_shadow_rect`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2289
VA_CHT_1(0x00418c00, 0xe)
// [thunk]: public: virtual int t_abstract_stationary_adv_object::get_subimage_count`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2290
VA_CHT_1(0x00418c10, 0xe)
// [thunk]: public: virtual int t_stationary_adventure_object::get_subimage_depth_offset`vtordisp{-4, 12}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2291
VA_CHT_1(0x00418c20, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 12}'(int, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2292
VA_CHT_1(0x00418c30, 0xe)
// [thunk]: public: virtual t_screen_rect t_abstract_stationary_adv_object::get_subimage_rect`vtordisp{-4, 12}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2293
VA_CHT_1(0x00418c40, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::hit_test`vtordisp{-4, 12}'(unsigned long, t_screen_point const&) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2294
VA_CHT_1(0x00418c50, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::is_decorative`vtordisp{-4, 12}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2295
VA_CHT_1(0x00418c60, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::needs_redrawing`vtordisp{-4, 12}'(unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2296
VA_CHT_1(0x00418c70, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_animates`vtordisp{-4, 12}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2297
VA_CHT_1(0x00418c80, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_is_underlay`vtordisp{-4, 12}'(int) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2298
VA_CHT_1(0x00418c90, 0xe)
// [thunk]: public: virtual bool t_abstract_stationary_adv_object::subimage_needs_redrawing`vtordisp{-4, 12}'(int, unsigned long, unsigned long) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2299
VA_CHT_1(0x00418ca0, 0xe)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`adjustor{20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2300
VA_CHT_1(0x00418cb0, 0xe)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2301
VA_CHT_1(0x00418cc0, 0xe)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2302
VA_CHT_1(0x00418cd0, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 20}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2303
VA_CHT_1(0x00418ce0, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2304
VA_CHT_1(0x00418cf0, 0xe)
// [thunk]: public: virtual int t_owned_adv_object::get_owner_number`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2305
VA_CHT_1(0x00418d00, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 20}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2306
VA_CHT_1_COMPGEN(0x00418d10, 0xb, VECTOR_DELETING_DTOR, t_adventure_object)

// confidence:C; align-order; stable; map:2307
VA_CHT_1_COMPGEN(0x00418d20, 0xe, VECTOR_DELETING_DTOR, t_adventure_object)

// confidence:C; align-order; stable; map:2308
VA_CHT_1(0x00418d30, 0xe)
// [thunk]: public: virtual std::auto_ptr<t_abstract_adv_object> t_adventure_object::clone`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2309
VA_CHT_1(0x00418d40, 0xe)
// [thunk]: public: virtual bool t_adventure_object::uses_bridge_heights`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2310
VA_CHT_1(0x00418d50, 0x8)
// [thunk]: public: virtual t_adventure_ai const* t_adventure_object::get_ai`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2311
VA_CHT_1(0x00418d60, 0xb)
// [thunk]: public: virtual t_adventure_frame* t_adventure_object::get_adventure_frame`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2312
VA_CHT_1(0x00418d70, 0xe)
// [thunk]: public: virtual t_adventure_object* t_adventure_object::get_adventure_object`vtordisp{-4, 0}'(void)
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2313
VA_CHT_1(0x00418d80, 0xe)
// [thunk]: public: virtual t_adventure_map* t_adventure_object::get_map`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-order; stable; map:2314
VA_CHT_1(0x00418d90, 0xe)
// [thunk]: public: virtual t_adv_map_point t_adventure_object::get_position`vtordisp{-4, 0}'(void) const
// Function body not reconstructed; signature retained as a comment.

// === .rdata (38 symbols) ===

// confidence:B; rtti-order; map:42539
DATA_CHT_1_COMPGEN(0x008cba84, "const t_abstract_town::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:42540
DATA_CHT_1_COMPGEN(0x008cbac4, "const t_abstract_town::`vftable'{for `t_owned_adv_object'}")

// confidence:A; rtti-name; map:42541
DATA_CHT_1_COMPGEN(0x008cbb44, "const t_abstract_town::`vftable'{for `t_abstract_grail_data_source'}")

// confidence:B; rtti-order; map:42542
DATA_CHT_1_COMPGEN(0x008cbb50, "const t_abstract_town::`vftable'{for `t_creature_array'}")

// confidence:B; rtti-order; map:42543
DATA_CHT_1_COMPGEN(0x008cbb84, "const t_abstract_town::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42544
DATA_CHT_1_COMPGEN(0x008cbb8c, "const t_abstract_town::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42545
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`vbtable'")

// name:A; map symbol; map:42546
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42547
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42548
DATA_CHT_1_COMPGEN(0x008cbc48, "const t_abstract_grail_data_source::`vftable'")

// confidence:A; rtti-name; map:42549
DATA_CHT_1_COMPGEN(0x008cbddc, "const t_adv_object_map_info::`vftable'")

// name:A; map symbol; map:42550
DATA_CHT_1(UNACCOUNTED)
// __real@4@00000000000000000000

// name:A; map symbol; map:42551
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42552
DATA_CHT_1_COMPGEN(0x008cbc54, "const t_owned_adv_object::`vftable'")

// confidence:B; rtti-order; map:42553
DATA_CHT_1_COMPGEN(0x008cbd14, "const t_owned_adv_object::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42554
DATA_CHT_1_COMPGEN(0x008cbd1c, "const t_owned_adv_object::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42555
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42556
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:42557
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:42558
DATA_CHT_1_COMPGEN(0x008cbe44, "const t_stationary_adventure_object::`vftable'")

// confidence:B; rtti-order; map:42559
DATA_CHT_1_COMPGEN(0x008cbf04, "const t_stationary_adventure_object::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42560
DATA_CHT_1_COMPGEN(0x008cbf0c, "const t_stationary_adventure_object::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42561
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:42562
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:42563
DATA_CHT_1_COMPGEN(0x008cba7c, "const t_ownable_built_in_event::`vftable'")

// confidence:A; rtti-name; map:42564
DATA_CHT_1_COMPGEN(0x008cbfd8, "const t_discrete_event::`vftable'")

// confidence:B; rtti-order; map:42565
DATA_CHT_1_COMPGEN(0x008cbfe4, "const t_adventure_object::`vftable'{for `t_adv_object_map_info'}")

// confidence:B; rtti-order; map:42566
DATA_CHT_1_COMPGEN(0x008cc024, "const t_adventure_object::`vftable'{for `t_abstract_adv_object'}")

// confidence:A; rtti-name; map:42567
DATA_CHT_1_COMPGEN(0x008cc0a4, "const t_adventure_object::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:42568
DATA_CHT_1_COMPGEN(0x008cc0ac, "const t_adventure_object::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:42569
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_object::`vbtable'")

// confidence:A; rtti-name; map:42570
DATA_CHT_1_COMPGEN(0x008cc154, "const t_adventure_object_memory_cache_refrence::`vftable'")

// confidence:A; rtti-name; map:42571
DATA_CHT_1_COMPGEN(0x008cc16c, "const t_ownable_timed_event::`vftable'")

// confidence:A; rtti-name; map:42572
DATA_CHT_1_COMPGEN(0x008cc17c, "const t_timed_event::`vftable'")

// confidence:A; rtti-name; map:42573
DATA_CHT_1_COMPGEN(0x008cc164, "const t_ownable_continuous_event::`vftable'")

// confidence:A; rtti-name; map:42574
DATA_CHT_1_COMPGEN(0x008cc174, "const t_continuous_event::`vftable'")

// confidence:A; rtti-name; map:42575
DATA_CHT_1_COMPGEN(0x008cc15c, "const t_ownable_triggerable_event::`vftable'")

// confidence:A; rtti-name; map:42576
DATA_CHT_1_COMPGEN(0x008cc184, "const t_triggerable_event::`vftable'")

// === .rdata$r (96 symbols) ===

// name:A; map symbol; map:47425
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:47426
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_owned_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_town@@;vft=4cbb44;col=4f4544;td=585930;chd=4f46b0;offset=156;cdOffset=0;validated-hierarchy; map:47427
DATA_CHT_1_COMPGEN(0x008f4544, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_abstract_grail_data_source'}")

// name:A; map symbol; map:47428
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_creature_array'}")

// name:A; map symbol; map:47429
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_grail_data_source@@;bcd=4f456c;pmd=156,-1,0;attributes=0;validated-hierarchy-link; map:47430
DATA_CHT_1_COMPGEN(0x008f456c, "t_abstract_grail_data_source::`RTTI Base Class Descriptor at (156, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f4584;pmd=92,-1,0;attributes=9;validated-hierarchy-link; map:47431
DATA_CHT_1_COMPGEN(0x008f4584, "t_uncopyable::`RTTI Base Class Descriptor at (92, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_creature_array@@;bcd=4f459c;pmd=84,-1,0;attributes=0;validated-hierarchy-link; map:47432
DATA_CHT_1_COMPGEN(0x008f459c, "t_creature_array::`RTTI Base Class Descriptor at (84, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object_memory_cache_refrence@@;bcd=4f45b4;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:47433
DATA_CHT_1_COMPGEN(0x008f45b4, "t_adventure_object_memory_cache_refrence::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_map_info@@;bcd=4f45cc;pmd=0,64,8;attributes=16;validated-hierarchy-link; map:47434
DATA_CHT_1_COMPGEN(0x008f45cc, "t_adv_object_map_info::`RTTI Base Class Descriptor at (0, 64, 8, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object@@;bcd=4f45e4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47435
DATA_CHT_1_COMPGEN(0x008f45e4, "t_adventure_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adv_object@@;bcd=4f45fc;pmd=0,64,4;attributes=16;validated-hierarchy-link; map:47436
DATA_CHT_1_COMPGEN(0x008f45fc, "t_abstract_adv_object::`RTTI Base Class Descriptor at (0, 64, 4, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_stationary_adv_object@@;bcd=4f4614;pmd=64,-1,0;attributes=0;validated-hierarchy-link; map:47437
DATA_CHT_1_COMPGEN(0x008f4614, "t_abstract_stationary_adv_object::`RTTI Base Class Descriptor at (64, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_stationary_adventure_object@@;bcd=4f462c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47438
DATA_CHT_1_COMPGEN(0x008f462c, "t_stationary_adventure_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_owned_adv_object@@;bcd=4f4644;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47439
DATA_CHT_1_COMPGEN(0x008f4644, "t_owned_adv_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_town@@;bcd=4f465c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47440
DATA_CHT_1_COMPGEN(0x008f465c, "t_abstract_town::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_town@@;vft=4cbb44;col=4f4544;td=585930;chd=4f46b0;offset=156;cdOffset=0;validated-hierarchy; map:47441
DATA_CHT_1_COMPGEN(0x008f4674, "t_abstract_town::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_town@@;vft=4cbb44;col=4f4544;td=585930;chd=4f46b0;offset=156;cdOffset=0;validated-hierarchy; map:47442
DATA_CHT_1_COMPGEN(0x008f46b0, "t_abstract_town::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47443
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_town::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_grail_data_source@@;bcd=4f44c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47444
DATA_CHT_1_COMPGEN(0x008f44c4, "t_abstract_grail_data_source::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_grail_data_source@@;vft=4cbc48;col=4f44f4;td=585814;chd=4f44e4;offset=0;cdOffset=0;validated-hierarchy; map:47445
DATA_CHT_1_COMPGEN(0x008f44dc, "t_abstract_grail_data_source::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_grail_data_source@@;vft=4cbc48;col=4f44f4;td=585814;chd=4f44e4;offset=0;cdOffset=0;validated-hierarchy; map:47446
DATA_CHT_1_COMPGEN(0x008f44e4, "t_abstract_grail_data_source::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_grail_data_source@@;vft=4cbc48;col=4f44f4;td=585814;chd=4f44e4;offset=0;cdOffset=0;validated-hierarchy; map:47447
DATA_CHT_1_COMPGEN(0x008f44f4, "const t_abstract_grail_data_source::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_map_info@@;bcd=4f43f8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47448
DATA_CHT_1_COMPGEN(0x008f43f8, "t_adv_object_map_info::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_map_info@@;vft=4cbddc;col=4f4428;td=585898;chd=4f4418;offset=0;cdOffset=0;validated-hierarchy; map:47449
DATA_CHT_1_COMPGEN(0x008f4410, "t_adv_object_map_info::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_map_info@@;vft=4cbddc;col=4f4428;td=585898;chd=4f4418;offset=0;cdOffset=0;validated-hierarchy; map:47450
DATA_CHT_1_COMPGEN(0x008f4418, "t_adv_object_map_info::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_map_info@@;vft=4cbddc;col=4f4428;td=585898;chd=4f4418;offset=0;cdOffset=0;validated-hierarchy; map:47451
DATA_CHT_1_COMPGEN(0x008f4428, "const t_adv_object_map_info::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47452
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_owned_adv_object@@;vft=4cbc54;col=4f44b0;td=58590c;chd=4f44a0;offset=96;cdOffset=0;validated-hierarchy; map:47453
DATA_CHT_1_COMPGEN(0x008f44b0, "const t_owned_adv_object::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47454
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_owned_adv_object@@;vft=4cbc54;col=4f44b0;td=58590c;chd=4f44a0;offset=96;cdOffset=0;validated-hierarchy; map:47455
DATA_CHT_1_COMPGEN(0x008f4478, "t_owned_adv_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_owned_adv_object@@;vft=4cbc54;col=4f44b0;td=58590c;chd=4f44a0;offset=96;cdOffset=0;validated-hierarchy; map:47456
DATA_CHT_1_COMPGEN(0x008f44a0, "t_owned_adv_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47457
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_owned_adv_object::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:47458
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_stationary_adventure_object@@;vft=4cbe44;col=4f47e0;td=5858e0;chd=4f47d0;offset=84;cdOffset=0;validated-hierarchy; map:47459
DATA_CHT_1_COMPGEN(0x008f47e0, "const t_stationary_adventure_object::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47460
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_stationary_adventure_object@@;vft=4cbe44;col=4f47e0;td=5858e0;chd=4f47d0;offset=84;cdOffset=0;validated-hierarchy; map:47461
DATA_CHT_1_COMPGEN(0x008f47ac, "t_stationary_adventure_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_stationary_adventure_object@@;vft=4cbe44;col=4f47e0;td=5858e0;chd=4f47d0;offset=84;cdOffset=0;validated-hierarchy; map:47462
DATA_CHT_1_COMPGEN(0x008f47d0, "t_stationary_adventure_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47463
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_stationary_adventure_object::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_event@@;bcd=4f46d4;pmd=56,-1,0;attributes=0;validated-hierarchy-link; map:47464
DATA_CHT_1_COMPGEN(0x008f46d4, "t_ownable_event::`RTTI Base Class Descriptor at (56, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_event@@;bcd=4f46ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47465
DATA_CHT_1_COMPGEN(0x008f46ec, "t_script_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_discrete_event@@;bcd=4f4704;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47466
DATA_CHT_1_COMPGEN(0x008f4704, "t_discrete_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_built_in_event@@;bcd=4f471c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47467
DATA_CHT_1_COMPGEN(0x008f471c, "t_ownable_built_in_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_ownable_built_in_event@@;vft=4cba7c;col=4f475c;td=5859b0;chd=4f474c;offset=0;cdOffset=0;validated-hierarchy; map:47468
DATA_CHT_1_COMPGEN(0x008f4734, "t_ownable_built_in_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_ownable_built_in_event@@;vft=4cba7c;col=4f475c;td=5859b0;chd=4f474c;offset=0;cdOffset=0;validated-hierarchy; map:47469
DATA_CHT_1_COMPGEN(0x008f474c, "t_ownable_built_in_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_ownable_built_in_event@@;vft=4cba7c;col=4f475c;td=5859b0;chd=4f474c;offset=0;cdOffset=0;validated-hierarchy; map:47470
DATA_CHT_1_COMPGEN(0x008f475c, "const t_ownable_built_in_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_discrete_event@@;vft=4cbfd8;col=4f4814;td=585990;chd=4f4804;offset=0;cdOffset=0;validated-hierarchy; map:47471
DATA_CHT_1_COMPGEN(0x008f47f4, "t_discrete_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_discrete_event@@;vft=4cbfd8;col=4f4814;td=585990;chd=4f4804;offset=0;cdOffset=0;validated-hierarchy; map:47472
DATA_CHT_1_COMPGEN(0x008f4804, "t_discrete_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_discrete_event@@;vft=4cbfd8;col=4f4814;td=585990;chd=4f4804;offset=0;cdOffset=0;validated-hierarchy; map:47473
DATA_CHT_1_COMPGEN(0x008f4814, "const t_discrete_event::`RTTI Complete Object Locator'")

// name:A; map symbol; map:47474
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_object::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// name:A; map symbol; map:47475
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_object::`RTTI Complete Object Locator'{for `t_abstract_adv_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_object@@;vft=4cc0a4;col=4f4880;td=5858bc;chd=4f48f0;offset=8;cdOffset=0;validated-hierarchy; map:47476
DATA_CHT_1_COMPGEN(0x008f4880, "const t_adventure_object::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_map_info@@;bcd=4f48a8;pmd=0,24,8;attributes=16;validated-hierarchy-link; map:47477
DATA_CHT_1_COMPGEN(0x008f48a8, "t_adv_object_map_info::`RTTI Base Class Descriptor at (0, 24, 8, 16)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_adv_object@@;bcd=4f48c0;pmd=0,24,4;attributes=16;validated-hierarchy-link; map:47478
DATA_CHT_1_COMPGEN(0x008f48c0, "t_abstract_adv_object::`RTTI Base Class Descriptor at (0, 24, 4, 16)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_object@@;vft=4cc0a4;col=4f4880;td=5858bc;chd=4f48f0;offset=8;cdOffset=0;validated-hierarchy; map:47479
DATA_CHT_1_COMPGEN(0x008f48d8, "t_adventure_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_object@@;vft=4cc0a4;col=4f4880;td=5858bc;chd=4f48f0;offset=8;cdOffset=0;validated-hierarchy; map:47480
DATA_CHT_1_COMPGEN(0x008f48f0, "t_adventure_object::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:47481
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_object::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_object_memory_cache_refrence@@;bcd=4f4828;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47482
DATA_CHT_1_COMPGEN(0x008f4828, "t_adventure_object_memory_cache_refrence::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_object_memory_cache_refrence@@;vft=4cc154;col=4f4858;td=585860;chd=4f4848;offset=0;cdOffset=0;validated-hierarchy; map:47483
DATA_CHT_1_COMPGEN(0x008f4840, "t_adventure_object_memory_cache_refrence::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_object_memory_cache_refrence@@;vft=4cc154;col=4f4858;td=585860;chd=4f4848;offset=0;cdOffset=0;validated-hierarchy; map:47484
DATA_CHT_1_COMPGEN(0x008f4848, "t_adventure_object_memory_cache_refrence::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_object_memory_cache_refrence@@;vft=4cc154;col=4f4858;td=585860;chd=4f4848;offset=0;cdOffset=0;validated-hierarchy; map:47485
DATA_CHT_1_COMPGEN(0x008f4858, "const t_adventure_object_memory_cache_refrence::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_event@@;bcd=4f4914;pmd=64,-1,0;attributes=0;validated-hierarchy-link; map:47486
DATA_CHT_1_COMPGEN(0x008f4914, "t_ownable_event::`RTTI Base Class Descriptor at (64, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_timed_event@@;bcd=4f492c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47487
DATA_CHT_1_COMPGEN(0x008f492c, "t_timed_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_timed_event@@;bcd=4f4944;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47488
DATA_CHT_1_COMPGEN(0x008f4944, "t_ownable_timed_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_ownable_timed_event@@;vft=4cc16c;col=4f4988;td=585a0c;chd=4f4978;offset=0;cdOffset=0;validated-hierarchy; map:47489
DATA_CHT_1_COMPGEN(0x008f495c, "t_ownable_timed_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_ownable_timed_event@@;vft=4cc16c;col=4f4988;td=585a0c;chd=4f4978;offset=0;cdOffset=0;validated-hierarchy; map:47490
DATA_CHT_1_COMPGEN(0x008f4978, "t_ownable_timed_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_ownable_timed_event@@;vft=4cc16c;col=4f4988;td=585a0c;chd=4f4978;offset=0;cdOffset=0;validated-hierarchy; map:47491
DATA_CHT_1_COMPGEN(0x008f4988, "const t_ownable_timed_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_timed_event@@;vft=4cc17c;col=4f4b00;td=5859f0;chd=4f4af0;offset=0;cdOffset=0;validated-hierarchy; map:47492
DATA_CHT_1_COMPGEN(0x008f4adc, "t_timed_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_timed_event@@;vft=4cc17c;col=4f4b00;td=5859f0;chd=4f4af0;offset=0;cdOffset=0;validated-hierarchy; map:47493
DATA_CHT_1_COMPGEN(0x008f4af0, "t_timed_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_timed_event@@;vft=4cc17c;col=4f4b00;td=5859f0;chd=4f4af0;offset=0;cdOffset=0;validated-hierarchy; map:47494
DATA_CHT_1_COMPGEN(0x008f4b00, "const t_timed_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_event@@;bcd=4f499c;pmd=28,-1,0;attributes=0;validated-hierarchy-link; map:47495
DATA_CHT_1_COMPGEN(0x008f499c, "t_ownable_event::`RTTI Base Class Descriptor at (28, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_continuous_event@@;bcd=4f49b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47496
DATA_CHT_1_COMPGEN(0x008f49b4, "t_continuous_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_continuous_event@@;bcd=4f49cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47497
DATA_CHT_1_COMPGEN(0x008f49cc, "t_ownable_continuous_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_ownable_continuous_event@@;vft=4cc164;col=4f4a0c;td=585a54;chd=4f49fc;offset=0;cdOffset=0;validated-hierarchy; map:47498
DATA_CHT_1_COMPGEN(0x008f49e4, "t_ownable_continuous_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_ownable_continuous_event@@;vft=4cc164;col=4f4a0c;td=585a54;chd=4f49fc;offset=0;cdOffset=0;validated-hierarchy; map:47499
DATA_CHT_1_COMPGEN(0x008f49fc, "t_ownable_continuous_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_ownable_continuous_event@@;vft=4cc164;col=4f4a0c;td=585a54;chd=4f49fc;offset=0;cdOffset=0;validated-hierarchy; map:47500
DATA_CHT_1_COMPGEN(0x008f4a0c, "const t_ownable_continuous_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_continuous_event@@;vft=4cc174;col=4f4ac8;td=585a30;chd=4f4ab8;offset=0;cdOffset=0;validated-hierarchy; map:47501
DATA_CHT_1_COMPGEN(0x008f4aa8, "t_continuous_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_continuous_event@@;vft=4cc174;col=4f4ac8;td=585a30;chd=4f4ab8;offset=0;cdOffset=0;validated-hierarchy; map:47502
DATA_CHT_1_COMPGEN(0x008f4ab8, "t_continuous_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_continuous_event@@;vft=4cc174;col=4f4ac8;td=585a30;chd=4f4ab8;offset=0;cdOffset=0;validated-hierarchy; map:47503
DATA_CHT_1_COMPGEN(0x008f4ac8, "const t_continuous_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_event@@;bcd=4f4a20;pmd=72,-1,0;attributes=0;validated-hierarchy-link; map:47504
DATA_CHT_1_COMPGEN(0x008f4a20, "t_ownable_event::`RTTI Base Class Descriptor at (72, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_triggerable_event@@;bcd=4f4a38;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47505
DATA_CHT_1_COMPGEN(0x008f4a38, "t_triggerable_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_ownable_triggerable_event@@;bcd=4f4a50;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47506
DATA_CHT_1_COMPGEN(0x008f4a50, "t_ownable_triggerable_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_ownable_triggerable_event@@;vft=4cc15c;col=4f4a94;td=585aa4;chd=4f4a84;offset=0;cdOffset=0;validated-hierarchy; map:47507
DATA_CHT_1_COMPGEN(0x008f4a68, "t_ownable_triggerable_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_ownable_triggerable_event@@;vft=4cc15c;col=4f4a94;td=585aa4;chd=4f4a84;offset=0;cdOffset=0;validated-hierarchy; map:47508
DATA_CHT_1_COMPGEN(0x008f4a84, "t_ownable_triggerable_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_ownable_triggerable_event@@;vft=4cc15c;col=4f4a94;td=585aa4;chd=4f4a84;offset=0;cdOffset=0;validated-hierarchy; map:47509
DATA_CHT_1_COMPGEN(0x008f4a94, "const t_ownable_triggerable_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_triggerable_event@@;vft=4cc184;col=4f4b38;td=585a80;chd=4f4b28;offset=0;cdOffset=0;validated-hierarchy; map:47510
DATA_CHT_1_COMPGEN(0x008f4b14, "t_triggerable_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_triggerable_event@@;vft=4cc184;col=4f4b38;td=585a80;chd=4f4b28;offset=0;cdOffset=0;validated-hierarchy; map:47511
DATA_CHT_1_COMPGEN(0x008f4b28, "t_triggerable_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_triggerable_event@@;vft=4cc184;col=4f4b38;td=585a80;chd=4f4b28;offset=0;cdOffset=0;validated-hierarchy; map:47512
DATA_CHT_1_COMPGEN(0x008f4b38, "const t_triggerable_event::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVlogic_error@std@@;bcd=4f4b4c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47513
DATA_CHT_1_COMPGEN(0x008f4b4c, "std::logic_error::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVlogic_error@std@@;vft=4cc19c;col=4f4bcc;td=585ad0;chd=4f4bbc;offset=0;cdOffset=0;validated-hierarchy; map:47514
DATA_CHT_1_COMPGEN(0x008f4bb0, "std::logic_error::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVlogic_error@std@@;vft=4cc19c;col=4f4bcc;td=585ad0;chd=4f4bbc;offset=0;cdOffset=0;validated-hierarchy; map:47515
DATA_CHT_1_COMPGEN(0x008f4bbc, "std::logic_error::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVlogic_error@std@@;vft=4cc19c;col=4f4bcc;td=585ad0;chd=4f4bbc;offset=0;cdOffset=0;validated-hierarchy; map:47516
DATA_CHT_1_COMPGEN(0x008f4bcc, "const std::logic_error::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVout_of_range@std@@;bcd=4f4b64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47517
DATA_CHT_1_COMPGEN(0x008f4b64, "std::out_of_range::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVout_of_range@std@@;vft=4cc18c;col=4f4b9c;td=585af0;chd=4f4b8c;offset=0;cdOffset=0;validated-hierarchy; map:47518
DATA_CHT_1_COMPGEN(0x008f4b7c, "std::out_of_range::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVout_of_range@std@@;vft=4cc18c;col=4f4b9c;td=585af0;chd=4f4b8c;offset=0;cdOffset=0;validated-hierarchy; map:47519
DATA_CHT_1_COMPGEN(0x008f4b8c, "std::out_of_range::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVout_of_range@std@@;vft=4cc18c;col=4f4b9c;td=585af0;chd=4f4b8c;offset=0;cdOffset=0;validated-hierarchy; map:47520
DATA_CHT_1_COMPGEN(0x008f4b9c, "const std::out_of_range::`RTTI Complete Object Locator'")

// === .xdata$x (6 symbols) ===

// name:A; map symbol; map:57206
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0?AVlogic_error@std@@@8??0logic_error@std@@QAE@ABV01@@Z28

// name:A; map symbol; map:57207
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0?AVout_of_range@std@@@8??0out_of_range@std@@QAE@ABV01@@Z28

// name:A; map symbol; map:57208
DATA_CHT_1(UNACCOUNTED)
// __CTA3?AVout_of_range@std@@

// name:A; map symbol; map:57209
DATA_CHT_1(UNACCOUNTED)
// __TI3?AVout_of_range@std@@

// name:A; map symbol; map:57210
DATA_CHT_1(UNACCOUNTED)
// __CTA2?AVlogic_error@std@@

// name:A; map symbol; map:57211
DATA_CHT_1(UNACCOUNTED)
// __TI2?AVlogic_error@std@@

// === .data (27 symbols) ===

// name:A; map symbol; map:57333
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_first_occurrence >= 1")

// name:A; map symbol; map:57334
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\timed_event.h")

// name:A; map symbol; map:57335
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_recurrence_interval >= 0")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_grail_data_source@@;td=585814;validated-header; map:57336
DATA_CHT_1_COMPGEN(0x00985814, "t_abstract_grail_data_source `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_creature_array@@;td=585840;validated-header; map:57337
DATA_CHT_1_COMPGEN(0x00985840, "t_creature_array `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_object_memory_cache_refrence@@;td=585860;validated-header; map:57338
DATA_CHT_1_COMPGEN(0x00985860, "t_adventure_object_memory_cache_refrence `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_map_info@@;td=585898;validated-header; map:57339
DATA_CHT_1_COMPGEN(0x00985898, "t_adv_object_map_info `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_object@@;td=5858bc;validated-header; map:57340
DATA_CHT_1_COMPGEN(0x009858bc, "t_adventure_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_stationary_adventure_object@@;td=5858e0;validated-header; map:57341
DATA_CHT_1_COMPGEN(0x009858e0, "t_stationary_adventure_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_owned_adv_object@@;td=58590c;validated-header; map:57342
DATA_CHT_1_COMPGEN(0x0098590c, "t_owned_adv_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_town@@;td=585930;validated-header; map:57343
DATA_CHT_1_COMPGEN(0x00985930, "t_abstract_town `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_event@@;td=585950;validated-header; map:57344
DATA_CHT_1_COMPGEN(0x00985950, "t_ownable_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_event@@;td=585970;validated-header; map:57345
DATA_CHT_1_COMPGEN(0x00985970, "t_script_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_discrete_event@@;td=585990;validated-header; map:57346
DATA_CHT_1_COMPGEN(0x00985990, "t_discrete_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_built_in_event@@;td=5859b0;validated-header; map:57347
DATA_CHT_1_COMPGEN(0x009859b0, "t_ownable_built_in_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_timed_event@@;td=5859f0;validated-header; map:57348
DATA_CHT_1_COMPGEN(0x009859f0, "t_timed_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_timed_event@@;td=585a0c;validated-header; map:57349
DATA_CHT_1_COMPGEN(0x00985a0c, "t_ownable_timed_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_continuous_event@@;td=585a30;validated-header; map:57350
DATA_CHT_1_COMPGEN(0x00985a30, "t_continuous_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_continuous_event@@;td=585a54;validated-header; map:57351
DATA_CHT_1_COMPGEN(0x00985a54, "t_ownable_continuous_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_triggerable_event@@;td=585a80;validated-header; map:57352
DATA_CHT_1_COMPGEN(0x00985a80, "t_triggerable_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_ownable_triggerable_event@@;td=585aa4;validated-header; map:57353
DATA_CHT_1_COMPGEN(0x00985aa4, "t_ownable_triggerable_event `RTTI Type Descriptor'")

// name:A; map symbol; map:57354
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_owner < 0")

// name:A; map symbol; map:57355
DATA_CHT_1_COMPGEN(UNACCOUNTED, "new_player_color >= 0&& new_pla...")

// name:A; map symbol; map:57356
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\owned_adv_object.h")

// confidence:A; rtti-type-name; type-name=.?AVlogic_error@std@@;td=585ad0;validated-header; map:57357
DATA_CHT_1_COMPGEN(0x00985ad0, "std::logic_error `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVout_of_range@std@@;td=585af0;validated-header; map:57358
DATA_CHT_1_COMPGEN(0x00985af0, "std::out_of_range `RTTI Type Descriptor'")

// name:A; map symbol; map:57359
DATA_CHT_1_COMPGEN(UNACCOUNTED, "invalid bitset<N> position")

// === .bss (3 symbols) ===

// confidence:B; dyninit-global; owner-conf-B; map:59928
DATA_CHT_1(0x009c5fa4)
t_external_string const k_named_object_balloon_help; // Initial value unavailable.

// name:A; map symbol; map:59929
DATA_CHT_1(UNACCOUNTED)
std::_Tree<t_hero*, t_hero*, std::set<t_hero*, std::less<t_hero*>, std::allocator<t_hero*>>::_Kfn, std::less<t_hero*>, std::allocator<t_hero*>>::_Node*std::_Tree<t_hero*, t_hero*, std::set<t_hero*, std::less<t_hero*>, std::allocator<t_hero*>>::_Kfn, std::less<t_hero*>, std::allocator<t_hero*>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:59931
DATA_CHT_1_COMPGEN(UNACCOUNTED, "??_C@_00A@?$AA@")
