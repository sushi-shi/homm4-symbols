// shared_file.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 23/51 (A:12 B:0 C:0); unaccounted 28; skipped std 2.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (33 symbols) ===

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:37101
VA_CHT_1(0x007afe80, 0x8e)
t_shared_file::t_shared_file()
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37102
VA_CHT_1(0x007aff30, 0x17c)
t_shared_file::t_shared_file(std::string arg_0, std::string arg_1, t_derived_file_systems arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37103
VA_CHT_1(0x007b00b0, 0xa4)
t_shared_file::~t_shared_file()
{
    // Body unavailable.
}

// name:A; map symbol; map:37104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_shared_file::t_resource_shared_file()
{
    // Body unavailable.
}

// name:A; map symbol; map:37105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_shared_file::t_resource_shared_file(
    std::string arg_0,
    std::string arg_1,
    t_derived_file_systems arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_resource_shared_file::open(char const* arg_0, char const* arg_1, t_derived_file_systems arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:37107
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_resource_shared_file::close()
{
    // Body unavailable.
}

// name:A; map symbol; map:37108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_resource_shared_file::is_open()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:37109
VA_CHT_1(0x007b0160, 0xf3)
t_shared_file_buffer::t_shared_file_buffer(t_shared_file* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37110
VA_CHT_1(0x007b0330, 0x97)
std::fpos<int> t_shared_file_buffer::seekoff(long arg_0, std::ios_base::seekdir arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:D; align-order; stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37111
VA_CHT_1(0x007b03d0, 0xd9)
std::fpos<int> t_shared_file_buffer::seekpos(std::fpos<int> arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37112
VA_CHT_1(0x007b04b0, 0x96)
int t_shared_file_buffer::underflow()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62829; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007b0550, 0x20, STATIC_INIT_DISPATCH, shared_file)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37113
VA_CHT_1_COMPGEN(0x007aff10, 0x1e, SCALAR_DELETING_DTOR, t_shared_file)

// name:A; map symbol; map:37114
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_shared_file)

// name:A; map symbol; map:37115
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_resource_shared_file)

// name:A; map symbol; map:37116
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_resource_shared_file)

// name:A; map symbol; map:37117
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_shared_file::~t_resource_shared_file()
{
    // Body unavailable.
}

// name:A; map symbol; map:37118
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_data_lock& t_shared_file::get_data_lock()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:37119
VA_CHT_1_COMPGEN(0x007b0260, 0x1e, SCALAR_DELETING_DTOR, t_shared_file_buffer)

// name:A; map symbol; map:37120
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_shared_file_buffer)

// name:A; map symbol; map:37121
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_file_buffer::~t_shared_file_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:37122
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_file::lock()
{
    // Body unavailable.
}

// name:A; map symbol; map:37123
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_file::unlock()
{
    // Body unavailable.
}

// name:A; map symbol; map:37124
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_abstract_file>::t_owned_ptr<t_abstract_file>(t_abstract_file* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:37125
VA_CHT_1(0x007b0280, 0xa7)
t_owned_ptr<t_abstract_file>::~t_owned_ptr<t_abstract_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37126
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_abstract_file>::reset(t_abstract_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37127
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* t_owned_ptr<t_abstract_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37128
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_shared_file>::t_counted_ptr<t_shared_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37129
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_shared_file>& t_counted_ptr<t_shared_file>::operator=(t_shared_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37130
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<char>::t_owned_ptr<char>(char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37131
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<char>::~t_owned_ptr<char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37132
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_owned_ptr<char>::get() const
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:45728
DATA_CHT_1_COMPGEN(0x008ec5cc, "const t_shared_file::`vftable'")

// name:A; map symbol; map:45729
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_shared_file::`vftable'")

// confidence:A; rtti-name; map:45730
DATA_CHT_1_COMPGEN(0x008ec5d4, "const t_shared_file_buffer::`vftable'")

// === .rdata$r (12 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_shared_file@@;bcd=51adc8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56243
DATA_CHT_1_COMPGEN(0x0091adc8, "t_shared_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_shared_file@@;vft=4ec5cc;col=51adfc;td=5b97b0;chd=51adec;offset=0;cdOffset=0;validated-hierarchy; map:56244
DATA_CHT_1_COMPGEN(0x0091ade0, "t_shared_file::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_shared_file@@;vft=4ec5cc;col=51adfc;td=5b97b0;chd=51adec;offset=0;cdOffset=0;validated-hierarchy; map:56245
DATA_CHT_1_COMPGEN(0x0091adec, "t_shared_file::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_shared_file@@;vft=4ec5cc;col=51adfc;td=5b97b0;chd=51adec;offset=0;cdOffset=0;validated-hierarchy; map:56246
DATA_CHT_1_COMPGEN(0x0091adfc, "const t_shared_file::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56247
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_shared_file::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:56248
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_shared_file::`RTTI Base Class Array'")

// name:A; map symbol; map:56249
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_shared_file::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56250
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_resource_shared_file::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_shared_file_buffer@@;bcd=51ae10;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56251
DATA_CHT_1_COMPGEN(0x0091ae10, "t_shared_file_buffer::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_shared_file_buffer@@;vft=4ec5d4;col=51ae44;td=5b97cc;chd=51ae34;offset=0;cdOffset=0;validated-hierarchy; map:56252
DATA_CHT_1_COMPGEN(0x0091ae28, "t_shared_file_buffer::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_shared_file_buffer@@;vft=4ec5d4;col=51ae44;td=5b97cc;chd=51ae34;offset=0;cdOffset=0;validated-hierarchy; map:56253
DATA_CHT_1_COMPGEN(0x0091ae34, "t_shared_file_buffer::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_shared_file_buffer@@;vft=4ec5d4;col=51ae44;td=5b97cc;chd=51ae34;offset=0;cdOffset=0;validated-hierarchy; map:56254
DATA_CHT_1_COMPGEN(0x0091ae44, "const t_shared_file_buffer::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_shared_file@@;td=5b97b0;validated-header; map:59540
DATA_CHT_1_COMPGEN(0x009b97b0, "t_shared_file `RTTI Type Descriptor'")

// name:A; map symbol; map:59541
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_resource_shared_file `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_shared_file_buffer@@;td=5b97cc;validated-header; map:59542
DATA_CHT_1_COMPGEN(0x009b97cc, "t_shared_file_buffer `RTTI Type Descriptor'")
