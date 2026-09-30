// campaign_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\campaign_file.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/28 (A:12 B:4 C:0); unaccounted 12; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (19 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68784; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589bf0, 0x16, STATIC_INIT_DISPATCH, "campaign_file#1")

// name:C; dyninit; see ledger; map:68785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "campaign_file#1")

// name:C; dyninit; see ledger; map:68786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "campaign_file#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:68787; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589c10, 0xa, STATIC_DTOR, "campaign_file#1")

// confidence:A; dyninit-init; owner-conf-C; map:68788; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589c20, 0x16, STATIC_INIT_DISPATCH, "campaign_file#2")

// name:C; dyninit; see ledger; map:68789
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "campaign_file#2")

// name:C; dyninit; see ledger; map:68790
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "campaign_file#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:68791; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589c40, 0xa, STATIC_DTOR, "campaign_file#2")

// confidence:A; align-order; retn,stable,vptr; map:18688
VA_CHT_1(0x00589c50, 0x6d)
t_campaign_file::t_campaign_file()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:18689
VA_CHT_1(0x00589ce0, 0x1d)
t_campaign_file::~t_campaign_file()
{
    // Body unavailable.
}

// name:A; map symbol; map:18690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_campaign_file::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18691
VA_CHT_1(0x00589d00, 0x62)
bool t_campaign_file::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18692
VA_CHT_1(0x00589d70, 0x1d)
t_counted_ptr<t_memory_buffer_counted> t_campaign_file::get_data_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:18693
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file::load_campaign_file(std::string& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file::load_campaign_file(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18695
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file::save_campaign_file(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68792; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589d90, 0x3f, STATIC_INIT_DISPATCH, campaign_file)

// confidence:A; align-band; retn,stable,vslot; map:18696
VA_CHT_1_COMPGEN(0x00589cc0, 0x1e, SCALAR_DELETING_DTOR, t_campaign_file)

// name:A; map symbol; map:18697
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_campaign_file)

// === .rdata (3 symbols) ===

// name:A; map symbol; map:43801
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_campaign_file>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43802
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_campaign_file>::extension; // Initial value unavailable.

// confidence:A; rtti-name; map:43803
DATA_CHT_1_COMPGEN(0x008d8870, "const t_campaign_file::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file@@;bcd=502508;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50415
DATA_CHT_1_COMPGEN(0x00902508, "t_campaign_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campaign_file@@;vft=4d8870;col=502538;td=596f28;chd=502528;offset=0;cdOffset=0;validated-hierarchy; map:50416
DATA_CHT_1_COMPGEN(0x00902520, "t_campaign_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campaign_file@@;vft=4d8870;col=502538;td=596f28;chd=502528;offset=0;cdOffset=0;validated-hierarchy; map:50417
DATA_CHT_1_COMPGEN(0x00902528, "t_campaign_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campaign_file@@;vft=4d8870;col=502538;td=596f28;chd=502528;offset=0;cdOffset=0;validated-hierarchy; map:50418
DATA_CHT_1_COMPGEN(0x00902538, "const t_campaign_file::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

namespace {

// name:A; map symbol; map:58117
DATA_CHT_1(UNACCOUNTED)
unsigned short k_campaign_file_version; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AVt_campaign_file@@;td=596f28;validated-header; map:58118
DATA_CHT_1_COMPGEN(0x00996f28, "t_campaign_file `RTTI Type Descriptor'")
