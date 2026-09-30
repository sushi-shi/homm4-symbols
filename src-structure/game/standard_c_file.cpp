// standard_c_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/18 (A:7 B:0 C:0); unaccounted 2; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (12 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:38318
VA_CHT_1(0x007e07e0, 0x2a)
t_standard_c_file::t_standard_c_file()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:38319
VA_CHT_1(0x007e0830, 0x79)
t_standard_c_file::~t_standard_c_file()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38320
VA_CHT_1(0x007e08b0, 0x34)
bool t_standard_c_file::open(char const* arg_0, char const* arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38321
VA_CHT_1(0x007e08f0, 0x2e)
bool t_standard_c_file::close()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38322
VA_CHT_1(0x007e0920, 0x72)
long t_standard_c_file::filesize()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38323
VA_CHT_1(0x007e09a0, 0x24)
long t_standard_c_file::seek(long arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38324
VA_CHT_1(0x007e09d0, 0x29)
unsigned long t_standard_c_file::read(void* arg_0, unsigned long arg_1, unsigned long arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38325
VA_CHT_1(0x007e0a00, 0x29)
unsigned long t_standard_c_file::write(void const* arg_0, unsigned long arg_1, unsigned long arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:38326
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_standard_c_file::get_file_handle()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62453; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007e0a30, 0x20, STATIC_INIT_DISPATCH, standard_c_file)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:38327
VA_CHT_1_COMPGEN(0x007e0810, 0x1e, VECTOR_DELETING_DTOR, t_standard_c_file)

// name:A; map symbol; map:38328
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_standard_c_file)

// === .rdata (1 symbols) ===

// confidence:A; rtti-name; map:45856
DATA_CHT_1_COMPGEN(0x008ee09c, "const t_standard_c_file::`vftable'")

// === .rdata$r (4 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_standard_c_file@@;bcd=51c650;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56573
DATA_CHT_1_COMPGEN(0x0091c650, "t_standard_c_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_standard_c_file@@;vft=4ee09c;col=51c688;td=5bcd08;chd=51c678;offset=0;cdOffset=0;validated-hierarchy; map:56574
DATA_CHT_1_COMPGEN(0x0091c668, "t_standard_c_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_standard_c_file@@;vft=4ee09c;col=51c688;td=5bcd08;chd=51c678;offset=0;cdOffset=0;validated-hierarchy; map:56575
DATA_CHT_1_COMPGEN(0x0091c678, "t_standard_c_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_standard_c_file@@;vft=4ee09c;col=51c688;td=5bcd08;chd=51c678;offset=0;cdOffset=0;validated-hierarchy; map:56576
DATA_CHT_1_COMPGEN(0x0091c688, "const t_standard_c_file::`RTTI Complete Object Locator'")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_standard_c_file@@;td=5bcd08;validated-header; map:59612
DATA_CHT_1_COMPGEN(0x009bcd08, "t_standard_c_file `RTTI Type Descriptor'")
