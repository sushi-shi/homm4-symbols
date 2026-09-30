// battlefield_passablity_map.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\battlefield_passablity_map.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 20/30 (A:14 B:0 C:0); unaccounted 10; skipped std 21.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (15 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:17484
VA_CHT_1(0x00567230, 0x33)
t_battlefield_passablity_map::t_battlefield_passablity_map()
{
    // Body unavailable.
}

// name:A; map symbol; map:17485
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_battlefield_passablity_map::t_battlefield_passablity_map(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    signed char const& arg_3
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17486
VA_CHT_1(0x00567290, 0x80)
t_battlefield_passablity_map::~t_battlefield_passablity_map()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17487
VA_CHT_1(0x00567310, 0x162)
void t_battlefield_passablity_map::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:17488
VA_CHT_1(0x00567480, 0x1df)
void t_battlefield_passablity_map::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:69037; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00567660, 0x20, STATIC_INIT_DISPATCH, battlefield_passablity_map)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:17489
VA_CHT_1_COMPGEN(0x00567270, 0x1e, VECTOR_DELETING_DTOR, t_battlefield_passablity_map)

// name:A; map symbol; map:17490
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_battlefield_passablity_map)

// name:A; map symbol; map:17491
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<signed char>::~t_isometric_map<signed char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17492
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<signed char>::t_isometric_map<signed char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:17493
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, signed char>::~t_basic_isometric_map<t_isometric_tile_map_base, signed char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17498
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_basic_isometric_map<t_isometric_tile_map_base, signed char>::initialize(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    signed char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17499
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, signed char>::t_basic_isometric_map<t_isometric_tile_map_base, signed char>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:17500
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_isometric_map<signed char>::t_isometric_map<signed char>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    signed char const& arg_3
)
{
    // Body unavailable.
}

// name:A; map symbol; map:17512
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_basic_isometric_map<t_isometric_tile_map_base, signed char>::t_basic_isometric_map<t_isometric_tile_map_base, signed char>(
    int arg_0,
    int arg_1,
    t_screen_point const& arg_2,
    signed char const& arg_3
)
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:43699
DATA_CHT_1_COMPGEN(0x008d73e4, "const t_battlefield_passablity_map::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AUt_isometric_map_base_base@@;bcd=500f2c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50129
DATA_CHT_1_COMPGEN(0x00900f2c, "t_isometric_map_base_base::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_isometric_tile_map_base@@;bcd=500f44;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50130
DATA_CHT_1_COMPGEN(0x00900f44, "t_isometric_tile_map_base::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_basic_isometric_map@Vt_isometric_tile_map_base@@C@@;bcd=500f5c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50131
DATA_CHT_1_COMPGEN(0x00900f5c, "t_basic_isometric_map<t_isometric_tile_map_base, signed char>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_isometric_map@C@@;bcd=500f74;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:50132
DATA_CHT_1_COMPGEN(0x00900f74, "t_isometric_map<signed char>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_battlefield_passablity_map@@;bcd=500f8c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50133
DATA_CHT_1_COMPGEN(0x00900f8c, "t_battlefield_passablity_map::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_battlefield_passablity_map@@;vft=4d73e4;col=500fd0;td=595130;chd=500fc0;offset=0;cdOffset=0;validated-hierarchy; map:50134
DATA_CHT_1_COMPGEN(0x00900fa4, "t_battlefield_passablity_map::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_battlefield_passablity_map@@;vft=4d73e4;col=500fd0;td=595130;chd=500fc0;offset=0;cdOffset=0;validated-hierarchy; map:50135
DATA_CHT_1_COMPGEN(0x00900fc0, "t_battlefield_passablity_map::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_battlefield_passablity_map@@;vft=4d73e4;col=500fd0;td=595130;chd=500fc0;offset=0;cdOffset=0;validated-hierarchy; map:50136
DATA_CHT_1_COMPGEN(0x00900fd0, "const t_battlefield_passablity_map::`RTTI Complete Object Locator'")

// === .data (6 symbols) ===

namespace {

// name:A; map symbol; map:58029
DATA_CHT_1(UNACCOUNTED)
int k_version; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AUt_isometric_map_base_base@@;td=595074;validated-header; map:58030
DATA_CHT_1_COMPGEN(0x00995074, "t_isometric_map_base_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_isometric_tile_map_base@@;td=59509c;validated-header; map:58031
DATA_CHT_1_COMPGEN(0x0099509c, "t_isometric_tile_map_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_basic_isometric_map@Vt_isometric_tile_map_base@@C@@;td=5950c8;validated-header; map:58032
DATA_CHT_1_COMPGEN(0x009950c8, "t_basic_isometric_map<t_isometric_tile_map_base, signed char> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_isometric_map@C@@;td=59510c;validated-header; map:58033
DATA_CHT_1_COMPGEN(0x0099510c, "t_isometric_map<signed char> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_battlefield_passablity_map@@;td=595130;validated-header; map:58034
DATA_CHT_1_COMPGEN(0x00995130, "t_battlefield_passablity_map `RTTI Type Descriptor'")
