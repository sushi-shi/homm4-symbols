// combat_header_table.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 33/54 (A:12 B:0 C:1); unaccounted 21; skipped std 29.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (38 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67797; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ce330, 0x89, STATIC_INIT_DISPATCH, k_combat_header_table_resource_name)

// name:C; dyninit; see ledger; map:67798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_combat_header_table_resource_name)

// name:C; dyninit; see ledger; map:67799
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_combat_header_table_resource_name)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67800; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ce3c0, 0x45, STATIC_DTOR, k_combat_header_table_resource_name)

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67801; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ce410, 0x31, STATIC_INIT_DISPATCH, k_combat_header_table_name)

// name:C; dyninit; see ledger; map:67802
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, k_combat_header_table_name)

// name:C; dyninit; see ledger; map:67803
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, k_combat_header_table_name)

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:67804; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005ce450, 0x45, STATIC_DTOR, k_combat_header_table_name)

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20820
VA_CHT_1(0x005ce4a0, 0x16)
t_combat_header_table::t_combat_header_table()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20821
VA_CHT_1(0x005ce4c0, 0xc1)
t_combat_header_table::~t_combat_header_table()
{
    // Body unavailable.
}

// name:A; map symbol; map:20822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_header_table::fill_obstacle_array(
    std::vector<t_combat_header_obstacle_data, std::allocator<t_combat_header_obstacle_data>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20823
VA_CHT_1(0x005ce590, 0x153)
void t_combat_header_table::get_date_string(std::string& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20824
VA_CHT_1(0x005ce780, 0x69)
void t_combat_header_table::insert(std::string const& arg_0, t_combat_object_model_base const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20825
VA_CHT_1(0x005ce7f0, 0x235)
bool t_combat_header_table::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20826
VA_CHT_1(0x005cea80, 0x157)
void t_combat_header_table::read_string(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::string& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20827
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_header_table::set_date(long arg_0, long arg_1, long arg_2, long arg_3, long arg_4)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20828
VA_CHT_1(0x005cebe0, 0x23)
long t_combat_header_table::size() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20829
VA_CHT_1(0x005cef40, 0x51)
bool t_combat_header_table::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:20830
VA_CHT_1(0x005ceff0, 0xd3)
void t_combat_header_table::write_string(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    std::string const& arg_1
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:67805; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x005cf180, 0x20, STATIC_INIT_DISPATCH, combat_header_table)

// name:A; map symbol; map:20831
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_obstacle_data::t_combat_header_obstacle_data()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20832
VA_CHT_1(0x005cea40, 0x3b)
t_combat_object_model_base::t_combat_object_model_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20833
VA_CHT_1(0x005ce6f0, 0x35)
t_combat_object_model_root::t_combat_object_model_root()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20834
VA_CHT_1_COMPGEN(0x005ce730, 0x1e, SCALAR_DELETING_DTOR, t_combat_object_model_root)

// name:A; map symbol; map:20835
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_combat_object_model_root)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:20836
VA_CHT_1_COMPGEN(0x005ce750, 0x1e, VECTOR_DELETING_DTOR, t_combat_object_model_base)

// name:A; map symbol; map:20837
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_object_model_base)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20838
VA_CHT_1(0x005cf0d0, 0xaf)
t_combat_object_model_base::~t_combat_object_model_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:20839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_obstacle_data::~t_combat_header_obstacle_data()
{
    // Body unavailable.
}

// name:A; map symbol; map:20840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_model_base& t_combat_object_model_base::operator=(t_combat_object_model_base const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20841
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_model_root& t_combat_object_model_root::operator=(t_combat_object_model_root const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, char const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:20872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_obstacle_data& t_combat_header_obstacle_data::operator=(
    t_combat_header_obstacle_data const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:20873
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_combat_header_obstacle_data)

// name:A; map symbol; map:20874
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_header_obstacle_data::t_combat_header_obstacle_data(t_combat_header_obstacle_data const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:20875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_combat_object_model_base::t_combat_object_model_base(t_combat_object_model_base const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:20876
VA_CHT_1(0x00602360, 0x4b)
t_combat_object_model_root::t_combat_object_model_root(t_combat_object_model_root const& arg_0)
{
    // Body unavailable.
}

// === .rdata (4 symbols) ===

// name:A; map symbol; map:43940
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_header_table>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43941
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_combat_header_table>::extension; // Initial value unavailable.

// confidence:A; rtti-name; map:43942
DATA_CHT_1_COMPGEN(0x008dc504, "const t_combat_object_model_base::`vftable'")

// confidence:A; rtti-name; map:43943
DATA_CHT_1_COMPGEN(0x008dc50c, "const t_combat_object_model_root::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_model_root@@;bcd=503f18;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50771
DATA_CHT_1_COMPGEN(0x00903f18, "t_combat_object_model_root::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_combat_object_model_base@@;bcd=503f30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50772
DATA_CHT_1_COMPGEN(0x00903f30, "t_combat_object_model_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_object_model_base@@;vft=4dc504;col=503f64;td=599148;chd=503f54;offset=0;cdOffset=0;validated-hierarchy; map:50773
DATA_CHT_1_COMPGEN(0x00903f48, "t_combat_object_model_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_object_model_base@@;vft=4dc504;col=503f64;td=599148;chd=503f54;offset=0;cdOffset=0;validated-hierarchy; map:50774
DATA_CHT_1_COMPGEN(0x00903f54, "t_combat_object_model_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_object_model_base@@;vft=4dc504;col=503f64;td=599148;chd=503f54;offset=0;cdOffset=0;validated-hierarchy; map:50775
DATA_CHT_1_COMPGEN(0x00903f64, "const t_combat_object_model_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_combat_object_model_root@@;vft=4dc50c;col=503f90;td=59911c;chd=503f80;offset=0;cdOffset=0;validated-hierarchy; map:50776
DATA_CHT_1_COMPGEN(0x00903f78, "t_combat_object_model_root::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_combat_object_model_root@@;vft=4dc50c;col=503f90;td=59911c;chd=503f80;offset=0;cdOffset=0;validated-hierarchy; map:50777
DATA_CHT_1_COMPGEN(0x00903f80, "t_combat_object_model_root::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_combat_object_model_root@@;vft=4dc50c;col=503f90;td=59911c;chd=503f80;offset=0;cdOffset=0;validated-hierarchy; map:50778
DATA_CHT_1_COMPGEN(0x00903f90, "const t_combat_object_model_root::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_combat_object_model_root@@;td=59911c;validated-header; map:58215
DATA_CHT_1_COMPGEN(0x0099911c, "t_combat_object_model_root `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_combat_object_model_base@@;td=599148;validated-header; map:58216
DATA_CHT_1_COMPGEN(0x00999148, "t_combat_object_model_base `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:60111
DATA_CHT_1(UNACCOUNTED)
std::string const k_combat_header_table_name; // Initial value unavailable.

// confidence:C; dyninit-global; owner-conf-C; map:60112
DATA_CHT_1(0x009dd6e0)
std::string const k_combat_header_table_resource_name; // Initial value unavailable.
