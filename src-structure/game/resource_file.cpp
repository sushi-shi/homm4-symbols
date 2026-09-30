// resource_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 12/15 (A:6 B:0 C:0); unaccounted 3; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (9 symbols) ===

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33193
VA_CHT_1(0x00779850, 0x3d)
t_resource_file::t_resource_file(t_counted_ptr<t_shared_file> arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33194
VA_CHT_1(0x007798b0, 0x57)
t_resource_file::~t_resource_file()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33195
VA_CHT_1(0x00779910, 0x1b4)
t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>> t_resource_file::get_stream(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33196
VA_CHT_1(0x00779ad0, 0x80)
std::string t_resource_file::get_filename()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63462; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00779c80, 0x20, STATIC_INIT_DISPATCH, resource_file)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33197
VA_CHT_1_COMPGEN(0x00779890, 0x1e, VECTOR_DELETING_DTOR, t_resource_file)

// name:A; map symbol; map:33198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_resource_file)

// name:A; map symbol; map:33199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string t_shared_file::get_filename() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_file* t_counted_ptr<t_shared_file>::get() const
{
    // Body unavailable.
}

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45202
DATA_CHT_1_COMPGEN(0x008e9334, "const t_resource_file::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_resource_file@@;bcd=513fd0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54313
DATA_CHT_1_COMPGEN(0x00913fd0, "t_resource_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_resource_file@@;vft=4e9334;col=514008;td=5b1ed0;chd=513ff8;offset=0;cdOffset=0;validated-hierarchy; map:54314
DATA_CHT_1_COMPGEN(0x00913fe8, "t_resource_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_resource_file@@;vft=4e9334;col=514008;td=5b1ed0;chd=513ff8;offset=0;cdOffset=0;validated-hierarchy; map:54315
DATA_CHT_1_COMPGEN(0x00913ff8, "t_resource_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_resource_file@@;vft=4e9334;col=514008;td=5b1ed0;chd=513ff8;offset=0;cdOffset=0;validated-hierarchy; map:54316
DATA_CHT_1_COMPGEN(0x00914008, "const t_resource_file::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_resource_file@@;td=5b1ed0;validated-header; map:59045
DATA_CHT_1_COMPGEN(0x009b1ed0, "t_resource_file `RTTI Type Descriptor'")
