// carryover_data.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\carryover_data.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 28/50 (A:6 B:0 C:0); unaccounted 22; skipped std 63.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (40 symbols) ===

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19022
VA_CHT_1(0x00595d10, 0x1c)
int get_power(t_hero_carryover_data const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19023
VA_CHT_1(0x00595d30, 0x23a)
bool read_hero_pool(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>>& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19024
VA_CHT_1(0x00595f70, 0x135)
bool write_hero_pool(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>> const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19025
VA_CHT_1(0x005960b0, 0x170)
void add_hero_to_pool(
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>>& arg_0,
    t_counted_ptr<t_hero_carryover_data> arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19026
VA_CHT_1(0x00596220, 0x2e5)
t_counted_ptr<t_hero_carryover_data> retrieve_most_powerful_hero_from_pool(
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>>& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19027
VA_CHT_1(0x00596530, 0x117)
t_counted_ptr<t_hero_carryover_data> retrieve_named_hero_from_pool(
    std::string const& arg_0,
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>>& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19028
VA_CHT_1(0x00596650, 0x108)
std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>> copy(
    std::vector<t_counted_ptr<t_hero_carryover_data>, std::allocator<t_counted_ptr<t_hero_carryover_data>>> const& arg_0
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19029
VA_CHT_1(0x00596760, 0x120)
t_hero_carryover_data::t_hero_carryover_data()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19030
VA_CHT_1(0x00596880, 0x5ed)
bool t_hero_carryover_data::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19031
VA_CHT_1(0x00596e70, 0x3ee)
bool t_hero_carryover_data::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:19032
VA_CHT_1(0x00597260, 0x25e)
t_carryover_data::t_carryover_data(t_carryover_data const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19033
VA_CHT_1(0x005974c0, 0xd7)
void t_carryover_data::add(t_counted_ptr<t_hero_carryover_data> arg_0, t_player_color arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19034
VA_CHT_1(0x005975a0, 0xd1)
void t_carryover_data::add_for_human(t_counted_ptr<t_hero_carryover_data> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19035
VA_CHT_1(0x00597680, 0x1d4)
void t_carryover_data::add(t_artifact const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19036
VA_CHT_1(0x00597860, 0x424)
bool t_carryover_data::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19037
VA_CHT_1(0x00597c90, 0x24d)
std::vector<t_artifact, std::allocator<t_artifact>> t_carryover_data::retrieve_artifacts(
    t_artifact_set const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19038
VA_CHT_1(0x00597ee0, 0x2a)
t_counted_ptr<t_hero_carryover_data> t_carryover_data::retrieve_most_powerful_hero(t_player_color arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19039
VA_CHT_1(0x00597f10, 0x22)
t_counted_ptr<t_hero_carryover_data> t_carryover_data::retrieve_most_powerful_hero_for_human()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19040
VA_CHT_1(0x00597f40, 0x171)
t_counted_ptr<t_hero_carryover_data> t_carryover_data::retrieve_named_hero(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:19041
VA_CHT_1(0x005980c0, 0x2b9)
bool t_carryover_data::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:68486; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005985a0, 0x20, STATIC_INIT_DISPATCH, carryover_data)

// name:A; map symbol; map:19042
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_skill_mastery t_hero_carryover_data::get_mastery(t_skill_type arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:19043
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_hero_carryover_data::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19044
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_hero_carryover_data::is_named_by_map() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19045
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_carryover_data::t_hero_carryover_data(t_hero_carryover_data const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:19046
VA_CHT_1_COMPGEN(0x00596510, 0x1e, SCALAR_DELETING_DTOR, t_hero_carryover_data)

// name:A; map symbol; map:19047
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_hero_carryover_data)

// name:A; map symbol; map:19048
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_carryover_data::~t_hero_carryover_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:19079
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>::t_counted_ptr<t_hero_carryover_data>()
{
    // Body unavailable.
}

// name:A; map symbol; map:19080
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_carryover_data* t_counted_ptr<t_hero_carryover_data>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:19081
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_hero_carryover_data>& t_counted_ptr<t_hero_carryover_data>::operator=(
    t_counted_ptr<t_hero_carryover_data> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19082
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_carryover_data* t_counted_ptr<t_hero_carryover_data>::operator->() const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19085
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void pop_heap_element(
    t_counted_ptr<t_hero_carryover_data>* arg_0,
    t_counted_ptr<t_hero_carryover_data>* arg_1,
    t_counted_ptr<t_hero_carryover_data>* arg_2,
    t_sort_by_power arg_3
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:19087
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_stat_type enum_incr(t_stat_type& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:19113
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void adjust_heap(
    t_counted_ptr<t_hero_carryover_data>* arg_0,
    t_counted_ptr<t_hero_carryover_data>* arg_1,
    t_counted_ptr<t_hero_carryover_data>* arg_2,
    t_sort_by_power arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19114
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sort_by_power::operator()(
    t_counted_ptr<t_hero_carryover_data> const& arg_0,
    t_counted_ptr<t_hero_carryover_data> const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19115
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int compute_parent_index(unsigned int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:19119
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void up_heap(
    t_counted_ptr<t_hero_carryover_data>* arg_0,
    t_counted_ptr<t_hero_carryover_data>* arg_1,
    t_sort_by_power arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19120
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void down_heap(
    t_counted_ptr<t_hero_carryover_data>* arg_0,
    t_counted_ptr<t_hero_carryover_data>* arg_1,
    t_counted_ptr<t_hero_carryover_data>* arg_2,
    t_sort_by_power arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:19121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int compute_child_index(unsigned int arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43831
DATA_CHT_1_COMPGEN(0x008d8c1c, "const t_hero_carryover_data::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_hero_carryover_data@@;bcd=502b60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50497
DATA_CHT_1_COMPGEN(0x00902b60, "t_hero_carryover_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_hero_carryover_data@@;vft=4d8c1c;col=502b94;td=5979a8;chd=502b84;offset=0;cdOffset=0;validated-hierarchy; map:50498
DATA_CHT_1_COMPGEN(0x00902b78, "t_hero_carryover_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_hero_carryover_data@@;vft=4d8c1c;col=502b94;td=5979a8;chd=502b84;offset=0;cdOffset=0;validated-hierarchy; map:50499
DATA_CHT_1_COMPGEN(0x00902b84, "t_hero_carryover_data::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_hero_carryover_data@@;vft=4d8c1c;col=502b94;td=5979a8;chd=502b84;offset=0;cdOffset=0;validated-hierarchy; map:50500
DATA_CHT_1_COMPGEN(0x00902b94, "const t_hero_carryover_data::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

// name:A; map symbol; map:58140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "skill >= 0&& skill < k_skill_ty...")

// confidence:A; rtti-type-name; type-name=.?AVt_hero_carryover_data@@;td=5979a8;validated-header; map:58141
DATA_CHT_1_COMPGEN(0x009979a8, "t_hero_carryover_data `RTTI Type Descriptor'")

// name:A; map symbol; map:58142
DATA_CHT_1_COMPGEN(UNACCOUNTED, "begin <= iter&& iter < end")

// name:A; map symbol; map:58143
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\carryover_data.cpp")

// name:A; map symbol; map:58144
DATA_CHT_1_COMPGEN(UNACCOUNTED, "begin <= iter")
