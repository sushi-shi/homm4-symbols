// abstract_script_action.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\abstract_script_action.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/26 (A:9 B:3 C:5); unaccounted 9; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (17 symbols) ===

// confidence:C; align-order; retn,stable; map:1551
VA_CHT_1(0x00410060, 0x5f)
t_counted_ptr<t_abstract_script_action> t_abstract_script_action::reconstruct_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1552
VA_CHT_1(0x004100c0, 0xd3)
t_counted_ptr<t_abstract_script_action> t_abstract_script_action::reconstruct_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1553
VA_CHT_1(0x004101a0, 0xd6)
t_counted_ptr<t_abstract_script_action> t_abstract_script_action::reconstruct(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1554
VA_CHT_1(0x00410280, 0xb5)
t_counted_ptr<t_abstract_script_action> t_abstract_script_action::construct(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1555
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_action::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:1556
VA_CHT_1(0x00410350, 0x6f)
bool t_abstract_script_action::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1557
VA_CHT_1(0x004103c0, 0x8)
void t_abstract_script_action::flag_for_removal()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1558
VA_CHT_1(0x004103d0, 0x8)
void t_abstract_script_action::clear_removal()
{
    // Body unavailable.
}

// name:A; map symbol; map:1559
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_script_action::pending_removal()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:1560
VA_CHT_1(0x004103e0, 0x6)
int t_abstract_script_action::get_version()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:1561
VA_CHT_1(0x004103f0, 0x16)
t_abstract_script_action::t_factory::t_factory(t_script_action_type arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:71381; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00410410, 0x20, STATIC_INIT_DISPATCH, abstract_script_action)

// name:A; map symbol; map:1562
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>::~t_counted_ptr<t_abstract_script_action>()
{
    // Body unavailable.
}

// name:A; map symbol; map:1563
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_counted_ptr_base::operator!() const
{
    // Body unavailable.
}

// name:A; map symbol; map:1564
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>::t_counted_ptr<t_abstract_script_action>(
    t_counted_ptr<t_abstract_script_action> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1565
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action>::t_counted_ptr<t_abstract_script_action>(
    t_abstract_script_action* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:1566
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action* t_counted_ptr<t_abstract_script_action>::operator->() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:42528
DATA_CHT_1_COMPGEN(0x008cb8f4, "const t_abstract_script_action::t_factory::`vftable'")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=4f42f4;pmd=4,-1,0;attributes=9;validated-hierarchy-link; map:47411
DATA_CHT_1_COMPGEN(0x008f42f4, "t_uncopyable::`RTTI Base Class Descriptor at (4, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_factory@t_abstract_script_action@@;bcd=4f430c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:47412
DATA_CHT_1_COMPGEN(0x008f430c, "t_abstract_script_action::t_factory::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_factory@t_abstract_script_action@@;vft=4cb8f4;col=4f4340;td=585710;chd=4f4330;offset=0;cdOffset=0;validated-hierarchy; map:47413
DATA_CHT_1_COMPGEN(0x008f4324, "t_abstract_script_action::t_factory::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_factory@t_abstract_script_action@@;vft=4cb8f4;col=4f4340;td=585710;chd=4f4330;offset=0;cdOffset=0;validated-hierarchy; map:47414
DATA_CHT_1_COMPGEN(0x008f4330, "t_abstract_script_action::t_factory::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_factory@t_abstract_script_action@@;vft=4cb8f4;col=4f4340;td=585710;chd=4f4330;offset=0;cdOffset=0;validated-hierarchy; map:47415
DATA_CHT_1_COMPGEN(0x008f4340, "const t_abstract_script_action::t_factory::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_factory@t_abstract_script_action@@;td=585710;validated-header; map:57309
DATA_CHT_1_COMPGEN(0x00985710, "t_abstract_script_action::t_factory `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:59926
DATA_CHT_1(UNACCOUNTED)
t_abstract_script_action::t_factory const**g_factory_ptr_table; // Initial value unavailable.

// name:A; map symbol; map:59927
DATA_CHT_1(UNACCOUNTED)
bool t_abstract_script_action::m_removal_flag; // Initial value unavailable.
