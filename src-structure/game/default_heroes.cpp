// default_heroes.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\default_heroes.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 25/40 (A:0 B:1 C:0); unaccounted 15; skipped std 39.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (36 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66819; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b770, 0x29, STATIC_INIT_DISPATCH, "default_heroes#1")

// name:C; dyninit; see ledger; map:66820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "default_heroes#1")

// name:C; dyninit; see ledger; map:66821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "default_heroes#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66822; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b7a0, 0x42, STATIC_DTOR, "default_heroes#1")

// confidence:D; dyninit-init; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66823; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b7f0, 0x11, STATIC_INIT_DISPATCH, g_hero_table)

// confidence:D; dyninit-ctor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66824; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b810, 0x121, STATIC_CTOR, g_hero_table)

// name:B; dyninit; see ledger; map:66825
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, g_hero_table)

// confidence:D; dyninit-dtor; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66826; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b940, 0xa, STATIC_DTOR, g_hero_table)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66827; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b950, 0x29, STATIC_INIT_DISPATCH, "default_heroes#3")

// name:C; dyninit; see ledger; map:66828
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "default_heroes#3")

// name:C; dyninit; see ledger; map:66829
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "default_heroes#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:66830; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062b980, 0x20, STATIC_DTOR, "default_heroes#3")

namespace {

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23757
VA_CHT_1(0x0062b9a0, 0x3d1)
void read_table_helper()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23758
VA_CHT_1(0x0062be20, 0x245)
t_default_hero_list::t_default_hero_list()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23759
VA_CHT_1(0x0062c070, 0x1e5)
t_default_hero t_default_hero_list::get_generic(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23760
VA_CHT_1(0x0062c260, 0x54c)
std::vector<t_default_hero, std::allocator<t_default_hero>> t_default_hero_list::get_unused(
    t_hero_class arg_0,
    bool arg_1
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23761
VA_CHT_1(0x0062c7b0, 0x13e)
bool t_default_hero_list::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23762
VA_CHT_1(0x0062c8f0, 0xde)
bool t_default_hero_list::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string get_default_biography(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23764
VA_CHT_1(0x0062cb40, 0x2d)
int get_default_biography_id_from_portrait_id(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23765
VA_CHT_1(0x0062cb70, 0x18c)
t_default_hero get_default_hero(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23766
VA_CHT_1(0x0062cd00, 0x48)
t_hero_class get_default_hero_class(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23767
VA_CHT_1(0x0062cdf0, 0x38)
bool get_default_is_male(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:23768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string get_default_name(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23769
VA_CHT_1(0x0062d010, 0x13)
int get_default_portrait_id(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23770
VA_CHT_1(0x0062d8d0, 0xbd)
bool hero_allowed_by_default(int arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:66831; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0062e350, 0x20, STATIC_INIT_DISPATCH, default_heroes)

namespace {

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23771
VA_CHT_1(0x0062bd80, 0x97)
t_hero_biography::t_hero_biography()
{
    // Body unavailable.
}

// name:A; map symbol; map:23772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_hero_biography::~t_hero_biography()
{
    // Body unavailable.
}

// name:A; map symbol; map:23773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void read_table()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:23774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_default_hero::t_default_hero()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:23775
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sort_biography::t_sort_biography(int const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23807
VA_CHT_1(0x0062e4c0, 0x44)
t_hero_biography& t_hero_biography::operator=(t_hero_biography const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23808
VA_CHT_1(0x0062cd50, 0x95)
t_hero_biography::t_hero_biography(t_hero_biography const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:23809
VA_CHT_1_COMPGEN(0x0062e080, 0x1e, SCALAR_DELETING_DTOR, t_hero_biography)

namespace {

// name:A; map symbol; map:23814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sort_biography::operator()(int arg_0, int arg_1) const
{
    // Body unavailable.
}

} // anonymous namespace

// === .bss (4 symbols) ===

namespace {

// confidence:B; dyninit-global; owner-conf-B; map:60195
DATA_CHT_1(0x009ecee4)
t_pointer_cache<t_table> g_hero_table; // Initial value unavailable.

// name:A; map symbol; map:60196
DATA_CHT_1(UNACCOUNTED)
std::vector<t_hero_biography, std::allocator<t_hero_biography>> g_default_heroes; // Initial value unavailable.

// name:A; map symbol; map:60197
DATA_CHT_1(UNACCOUNTED)
std::vector<int, std::allocator<int>> g_portrait_to_biography_id_table; // Initial value unavailable.

} // anonymous namespace

// name:A; map symbol; map:60198
DATA_CHT_1(UNACCOUNTED)
// bool `void read_table(void)'::`2'::initialized
