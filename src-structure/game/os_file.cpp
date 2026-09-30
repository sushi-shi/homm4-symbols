// os_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 24/28 (A:24 B:0 C:0); unaccounted 4; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (16 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:31136
VA_CHT_1(0x0074c270, 0x2e)
t_os_file::t_os_file()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:31137
VA_CHT_1(0x0074c2c0, 0x73)
t_os_file::~t_os_file()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31138
VA_CHT_1(0x0074c3b0, 0xb3)
bool t_os_file::open(char const* arg_0, char const* arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31139
VA_CHT_1(0x0074c470, 0x2e)
bool t_os_file::close()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31140
VA_CHT_1(0x0074c4a0, 0x14)
long t_os_file::filesize()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31141
VA_CHT_1(0x0074c4c0, 0x44)
long t_os_file::seek(long arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31142
VA_CHT_1(0x0074c510, 0x31)
unsigned long t_os_file::read(void* arg_0, unsigned long arg_1, unsigned long arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:31143
VA_CHT_1(0x0074c550, 0x31)
unsigned long t_os_file::write(void const* arg_0, unsigned long arg_1, unsigned long arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:31144
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_os_file::get_file_handle()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63839; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0074c5a0, 0x20, STATIC_INIT_DISPATCH, os_file)

// name:A; map symbol; map:31145
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file::t_abstract_file()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:31146
VA_CHT_1_COMPGEN(0x0074c340, 0x1e, VECTOR_DELETING_DTOR, t_abstract_file)

// name:A; map symbol; map:31147
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_file)

// confidence:A; align-band; retn,vptr; map:31148
VA_CHT_1(0x0074c360, 0x49)
t_abstract_file::~t_abstract_file()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:31149
VA_CHT_1_COMPGEN(0x0074c2a0, 0x1e, VECTOR_DELETING_DTOR, t_os_file)

// name:A; map symbol; map:31150
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_os_file)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44951
DATA_CHT_1_COMPGEN(0x008e6ac4, "const t_os_file::`vftable'")

// confidence:A; rtti-name; map:44952
DATA_CHT_1_COMPGEN(0x008e6ae8, "const t_abstract_file::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_file@@;bcd=5114c0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53700
DATA_CHT_1_COMPGEN(0x009114c0, "t_abstract_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_os_file@@;bcd=5114d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53701
DATA_CHT_1_COMPGEN(0x009114d8, "t_os_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_os_file@@;vft=4e6ac4;col=511510;td=5aee28;chd=511500;offset=0;cdOffset=0;validated-hierarchy; map:53702
DATA_CHT_1_COMPGEN(0x009114f0, "t_os_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_os_file@@;vft=4e6ac4;col=511510;td=5aee28;chd=511500;offset=0;cdOffset=0;validated-hierarchy; map:53703
DATA_CHT_1_COMPGEN(0x00911500, "t_os_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_os_file@@;vft=4e6ac4;col=511510;td=5aee28;chd=511500;offset=0;cdOffset=0;validated-hierarchy; map:53704
DATA_CHT_1_COMPGEN(0x00911510, "const t_os_file::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_file@@;vft=4e6ae8;col=511540;td=5aee08;chd=511530;offset=0;cdOffset=0;validated-hierarchy; map:53705
DATA_CHT_1_COMPGEN(0x00911524, "t_abstract_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_file@@;vft=4e6ae8;col=511540;td=5aee08;chd=511530;offset=0;cdOffset=0;validated-hierarchy; map:53706
DATA_CHT_1_COMPGEN(0x00911530, "t_abstract_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_file@@;vft=4e6ae8;col=511540;td=5aee08;chd=511530;offset=0;cdOffset=0;validated-hierarchy; map:53707
DATA_CHT_1_COMPGEN(0x00911540, "const t_abstract_file::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_file@@;td=5aee08;validated-header; map:58913
DATA_CHT_1_COMPGEN(0x009aee08, "t_abstract_file `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_os_file@@;td=5aee28;validated-header; map:58914
DATA_CHT_1_COMPGEN(0x009aee28, "t_os_file `RTTI Type Descriptor'")
