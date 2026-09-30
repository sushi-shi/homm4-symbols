// script_event.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 11/15 (A:4 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (11 symbols) ===

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:34980
VA_CHT_1(0x00799800, 0x7d)
t_script_event::t_script_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:34981
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_event::t_script_event(t_script_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:34982
VA_CHT_1(0x00799880, 0x57)
t_script_event::~t_script_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:34983
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_script_action const& t_script_event::get_script() const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:34984
VA_CHT_1(0x007998e0, 0x75)
void t_script_event::set_script(t_counted_ptr<t_abstract_script_action> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:34985
VA_CHT_1(0x00799960, 0xae)
bool t_script_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:34986
VA_CHT_1(0x00799a10, 0xa9)
bool t_script_event::read_from_map(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:34987
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:34988
VA_CHT_1(0x00799ac0, 0x8)
t_script_event& t_script_event::operator=(t_script_event const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63094; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00799ad0, 0x49, STATIC_INIT_DISPATCH, script_event)

// name:C; dyninit; see ledger; map:63096
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<42,t_script_sequence>::k_factory")

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45448
DATA_CHT_1_COMPGEN(0x008eaf34, "const t_script_event::`vftable'")

// === .rdata$r (3 symbols) ===

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_script_event@@;vft=4eaf34;col=5172f0;td=585970;chd=5172e0;offset=0;cdOffset=0;validated-hierarchy; map:55170
DATA_CHT_1_COMPGEN(0x009172d4, "t_script_event::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_script_event@@;vft=4eaf34;col=5172f0;td=585970;chd=5172e0;offset=0;cdOffset=0;validated-hierarchy; map:55171
DATA_CHT_1_COMPGEN(0x009172e0, "t_script_event::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_script_event@@;vft=4eaf34;col=5172f0;td=585970;chd=5172e0;offset=0;cdOffset=0;validated-hierarchy; map:55172
DATA_CHT_1_COMPGEN(0x009172f0, "const t_script_event::`RTTI Complete Object Locator'")
