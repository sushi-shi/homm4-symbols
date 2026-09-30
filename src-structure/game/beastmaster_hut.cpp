// beastmaster_hut.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\beastmaster_hut.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 54/92 (A:42 B:6 C:6); unaccounted 38; skipped std 7.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (50 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68980; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0056d2f0, 0x15, STATIC_INIT_DISPATCH, "beastmaster_hut#1")

// name:C; dyninit; see ledger; map:68981
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "beastmaster_hut#1")

// confidence:A; dyninit-init; owner-conf-B; map:68982; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0056d310, 0x1e, STATIC_INIT_DISPATCH, k_registration)

// name:B; dyninit; see ledger; map:68983
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_registration)

// confidence:A; dyninit-init; owner-conf-B; map:68984; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0056d330, 0x1e, STATIC_INIT_DISPATCH, k_witch_registration)

// name:B; dyninit; see ledger; map:68985
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_witch_registration)

// confidence:A; align-order; retn,stable,vptr; map:17908
VA_CHT_1(0x0056d350, 0x179)
t_beastmaster_hut::t_beastmaster_hut(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:17909
VA_CHT_1(0x0056d570, 0x143)
void t_beastmaster_hut::show_dialog(std::string const& arg_0, t_level_map_point_2d arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17910
VA_CHT_1(0x0056d6c0, 0xb50)
void t_beastmaster_hut::activate_trigger(
    t_army* arg_0,
    t_adv_map_point const& arg_1,
    t_direction arg_2,
    t_adventure_frame* arg_3
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17911
VA_CHT_1(0x0056e290, 0x166)
std::string t_beastmaster_hut::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17912
VA_CHT_1(0x0056e400, 0x3af)
void t_beastmaster_hut::right_click(t_mouse_event const& arg_0, t_adventure_frame* arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set const& t_beastmaster_hut::get_default_available_skill_set()
{
    // Body unavailable.
}

// name:A; map symbol; map:17914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_beastmaster_hut::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17915
VA_CHT_1(0x0056e7b0, 0x8e)
bool t_beastmaster_hut::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17916
VA_CHT_1(0x0056e840, 0xa0)
bool t_beastmaster_hut::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17917
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_beastmaster_hut::place(t_adventure_map& arg_0, t_adv_map_point const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17918
VA_CHT_1(0x0056e9c0, 0x4e)
bool t_beastmaster_hut::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:17919
VA_CHT_1(0x0056ea10, 0xe7)
float t_beastmaster_hut::ai_value(t_adventure_ai const& arg_0, t_creature_array const& arg_1, int arg_2) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:17920
VA_CHT_1(0x0056eb00, 0xc0)
t_witch_hut::t_witch_hut(t_stationary_adventure_object const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:17921
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set const& t_witch_hut::get_default_available_skill_set()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68986; name:B (dyninit; see ledger)
VA_CHT_1(0x0056ef20, 0x20)
// beastmaster_hut$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:68988; name:B (dyninit; see ledger)
VA_CHT_1(0x0056ef40, 0x5c)
// beastmaster_hut$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68989
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// beastmaster_hut$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68990
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// beastmaster_hut$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:68991
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// beastmaster_hut$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-band; retn,stable,vslot; map:17922
VA_CHT_1_COMPGEN(0x0056d4d0, 0x2d, VECTOR_DELETING_DTOR, t_beastmaster_hut)

// name:A; map symbol; map:17923
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_beastmaster_hut)

// confidence:C; align-band; retn; map:17924
VA_CHT_1(0x0056ebf0, 0x6a)
// public: void t_beastmaster_hut::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:17925
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_beastmaster_hut::~t_beastmaster_hut()
{
    // Body unavailable.
}

// name:A; map symbol; map:17926
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::vector<t_hero*, std::allocator<t_hero*>> t_dialog_beastmaster::get_selected_heroes() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17927
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_beastmaster>::~t_counted_ptr<t_dialog_beastmaster>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17928
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_set const& t_adventure_map::get_allowed_skills() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:17929
VA_CHT_1_COMPGEN(0x0056ebc0, 0x2d, SCALAR_DELETING_DTOR, t_witch_hut)

// name:A; map symbol; map:17930
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_witch_hut)

// name:A; map symbol; map:17931
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// public: void t_witch_hut::`vbase dtor'(void)
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:17932
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_witch_hut::~t_witch_hut()
{
    // Body unavailable.
}

// name:A; map symbol; map:17935
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::bitset<36> operator&(std::bitset<36> const& arg_0, std::bitset<36> const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17940
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_beastmaster_hut>::t_object_registration<t_beastmaster_hut>(
    t_adv_object_type arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17941
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_registration<t_witch_hut>::t_object_registration<t_witch_hut>(t_adv_object_type arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:17942
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_beastmaster>::t_counted_ptr<t_dialog_beastmaster>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_dialog_beastmaster>& t_counted_ptr<t_dialog_beastmaster>::operator=(
    t_dialog_beastmaster* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_dialog_beastmaster* t_counted_ptr<t_dialog_beastmaster>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:17945
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_beastmaster_hut>::t_object_factory<t_beastmaster_hut>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:17946
VA_CHT_1(0x0056ec60, 0x14a)
t_stationary_adventure_object* t_object_factory<t_beastmaster_hut>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:17947
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_object_factory<t_witch_hut>::t_object_factory<t_witch_hut>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:17948
VA_CHT_1(0x0056edd0, 0x14a)
t_stationary_adventure_object* t_object_factory<t_witch_hut>::create(
    std::string const& arg_0,
    t_qualified_adv_object_type const& arg_1
) const
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:17949
VA_CHT_1_COMPGEN(0x0056efa0, 0x8, VECTOR_DELETING_DTOR, t_witch_hut)

// confidence:C; align-order; stable; map:17950
VA_CHT_1_COMPGEN(0x0056efb0, 0xb, VECTOR_DELETING_DTOR, t_witch_hut)

// confidence:C; align-order; stable; map:17951
VA_CHT_1_COMPGEN(0x0056efc0, 0x8, VECTOR_DELETING_DTOR, t_beastmaster_hut)

// confidence:C; align-order; stable; map:17952
VA_CHT_1_COMPGEN(0x0056efd0, 0xb, VECTOR_DELETING_DTOR, t_beastmaster_hut)

// === .rdata (14 symbols) ===

// name:A; map symbol; map:43719
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43720
DATA_CHT_1_COMPGEN(0x008d75dc, "const t_beastmaster_hut::`vftable'")

// confidence:B; rtti-order; map:43721
DATA_CHT_1_COMPGEN(0x008d769c, "const t_beastmaster_hut::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43722
DATA_CHT_1_COMPGEN(0x008d76a4, "const t_beastmaster_hut::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43723
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43724
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`vbtable'{for `t_abstract_stationary_adv_object'}")

// name:A; map symbol; map:43725
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`vftable'{for `t_adv_object_map_info'}")

// confidence:A; rtti-name; map:43726
DATA_CHT_1_COMPGEN(0x008d7774, "const t_witch_hut::`vftable'")

// confidence:B; rtti-order; map:43727
DATA_CHT_1_COMPGEN(0x008d7834, "const t_witch_hut::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43728
DATA_CHT_1_COMPGEN(0x008d783c, "const t_witch_hut::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:43729
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`vbtable'{for `t_adventure_object'}")

// name:A; map symbol; map:43730
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`vbtable'{for `t_abstract_stationary_adv_object'}")

// confidence:A; rtti-name; map:43731
DATA_CHT_1_COMPGEN(0x008d75cc, "const t_object_factory<t_beastmaster_hut>::`vftable'")

// confidence:A; rtti-name; map:43732
DATA_CHT_1_COMPGEN(0x008d75d4, "const t_object_factory<t_witch_hut>::`vftable'")

// === .rdata$r (22 symbols) ===

// name:A; map symbol; map:50195
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_beastmaster_hut@@;vft=4d75dc;col=501550;td=5954f8;chd=501540;offset=120;cdOffset=0;validated-hierarchy; map:50196
DATA_CHT_1_COMPGEN(0x00901550, "const t_beastmaster_hut::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50197
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_beastmaster_hut@@;bcd=501500;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50198
DATA_CHT_1_COMPGEN(0x00901500, "t_beastmaster_hut::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_beastmaster_hut@@;vft=4d75dc;col=501550;td=5954f8;chd=501540;offset=120;cdOffset=0;validated-hierarchy; map:50199
DATA_CHT_1_COMPGEN(0x00901518, "t_beastmaster_hut::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_beastmaster_hut@@;vft=4d75dc;col=501550;td=5954f8;chd=501540;offset=120;cdOffset=0;validated-hierarchy; map:50200
DATA_CHT_1_COMPGEN(0x00901540, "t_beastmaster_hut::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50201
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_beastmaster_hut::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:50202
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`RTTI Complete Object Locator'{for `t_adv_object_map_info'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_witch_hut@@;vft=4d7774;col=5015f4;td=595540;chd=5015e4;offset=120;cdOffset=0;validated-hierarchy; map:50203
DATA_CHT_1_COMPGEN(0x009015f4, "const t_witch_hut::`RTTI Complete Object Locator'")

// name:A; map symbol; map:50204
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_witch_hut@@;bcd=5015a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50205
DATA_CHT_1_COMPGEN(0x009015a0, "t_witch_hut::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_witch_hut@@;vft=4d7774;col=5015f4;td=595540;chd=5015e4;offset=120;cdOffset=0;validated-hierarchy; map:50206
DATA_CHT_1_COMPGEN(0x009015b8, "t_witch_hut::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_witch_hut@@;vft=4d7774;col=5015f4;td=595540;chd=5015e4;offset=120;cdOffset=0;validated-hierarchy; map:50207
DATA_CHT_1_COMPGEN(0x009015e4, "t_witch_hut::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50208
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_witch_hut::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_beastmaster_hut@@@@;bcd=501434;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50209
DATA_CHT_1_COMPGEN(0x00901434, "t_object_factory<t_beastmaster_hut>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_beastmaster_hut@@@@;vft=4d75cc;col=501468;td=595490;chd=501458;offset=0;cdOffset=0;validated-hierarchy; map:50210
DATA_CHT_1_COMPGEN(0x0090144c, "t_object_factory<t_beastmaster_hut>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_beastmaster_hut@@@@;vft=4d75cc;col=501468;td=595490;chd=501458;offset=0;cdOffset=0;validated-hierarchy; map:50211
DATA_CHT_1_COMPGEN(0x00901458, "t_object_factory<t_beastmaster_hut>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_beastmaster_hut@@@@;vft=4d75cc;col=501468;td=595490;chd=501458;offset=0;cdOffset=0;validated-hierarchy; map:50212
DATA_CHT_1_COMPGEN(0x00901468, "const t_object_factory<t_beastmaster_hut>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_object_factory@Vt_witch_hut@@@@;bcd=50147c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50213
DATA_CHT_1_COMPGEN(0x0090147c, "t_object_factory<t_witch_hut>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_object_factory@Vt_witch_hut@@@@;vft=4d75d4;col=5014b0;td=5954c8;chd=5014a0;offset=0;cdOffset=0;validated-hierarchy; map:50214
DATA_CHT_1_COMPGEN(0x00901494, "t_object_factory<t_witch_hut>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_object_factory@Vt_witch_hut@@@@;vft=4d75d4;col=5014b0;td=5954c8;chd=5014a0;offset=0;cdOffset=0;validated-hierarchy; map:50215
DATA_CHT_1_COMPGEN(0x009014a0, "t_object_factory<t_witch_hut>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_object_factory@Vt_witch_hut@@@@;vft=4d75d4;col=5014b0;td=5954c8;chd=5014a0;offset=0;cdOffset=0;validated-hierarchy; map:50216
DATA_CHT_1_COMPGEN(0x009014b0, "const t_object_factory<t_witch_hut>::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_beastmaster_hut@@;td=5954f8;validated-header; map:58065
DATA_CHT_1_COMPGEN(0x009954f8, "t_beastmaster_hut `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_witch_hut@@;td=595540;validated-header; map:58066
DATA_CHT_1_COMPGEN(0x00995540, "t_witch_hut `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_beastmaster_hut@@@@;td=595490;validated-header; map:58067
DATA_CHT_1_COMPGEN(0x00995490, "t_object_factory<t_beastmaster_hut> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_object_factory@Vt_witch_hut@@@@;td=5954c8;validated-header; map:58068
DATA_CHT_1_COMPGEN(0x009954c8, "t_object_factory<t_witch_hut> `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60079
DATA_CHT_1(0x009d80b4)
t_object_registration<t_beastmaster_hut> k_registration; // Initial value unavailable.

// confidence:B; dyninit-global; owner-conf-B; map:60080
DATA_CHT_1(0x009d80b8)
t_object_registration<t_witch_hut> k_witch_registration; // Initial value unavailable.

} // anonymous namespace
