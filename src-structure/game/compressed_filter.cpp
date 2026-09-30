// compressed_filter.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 45/77 (A:35 B:0 C:10); unaccounted 32; skipped std 3.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (44 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:22685
VA_CHT_1(0x00602930, 0x28e)
t_deflate_filter::t_deflate_filter(std::basic_streambuf<char, std::char_traits<char>>& arg_0, long arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; vptr; map:22686
VA_CHT_1(0x00602d50, 0x3e)
t_deflate_filter::~t_deflate_filter()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22687
VA_CHT_1(0x00602e00, 0x380)
int t_deflate_filter::close()
{
    // Body unavailable.
}

// name:A; map symbol; map:22688
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_deflate_filter::put(unsigned long arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:22689
VA_CHT_1(0x00603180, 0x63)
int t_deflate_filter::sync()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:22690
VA_CHT_1(0x006031f0, 0xe1)
int t_deflate_filter::sync_raw()
{
    // Body unavailable.
}

// name:A; map symbol; map:22691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_deflate_filter::sync_compressed()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:22692
VA_CHT_1(0x006032e0, 0x76)
int t_deflate_filter::overflow(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:22693
VA_CHT_1(0x00603360, 0xbc)
int t_deflate_filter::overflow_raw(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22694
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_deflate_filter::overflow_compress(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:22695
VA_CHT_1(0x00603420, 0x103)
t_inflate_filter::t_data_error::t_data_error()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22696
VA_CHT_1(0x00603530, 0x6d)
int t_inflate_filter::get_char()
{
    // Body unavailable.
}

// name:A; map symbol; map:22697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_inflate_filter::put_back_char(char arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:22698
VA_CHT_1(0x006035a0, 0x600)
t_inflate_filter::t_inflate_filter(std::basic_streambuf<char, std::char_traits<char>>& arg_0, long arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; vptr; map:22699
VA_CHT_1(0x00603d20, 0x3e)
t_inflate_filter::~t_inflate_filter()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:22700
VA_CHT_1(0x00603d67, 0x68)
int t_inflate_filter::close()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:22701
VA_CHT_1(0x00603e70, 0x64)
int t_inflate_filter::underflow()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:22702
VA_CHT_1(0x00603ee0, 0x255)
int t_inflate_filter::underflow_raw()
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:22703
VA_CHT_1(0x00604140, 0x82)
int t_inflate_filter::underflow_compress()
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:67076; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006041d0, 0x20, STATIC_INIT_DISPATCH, compressed_filter)

// confidence:C; align-band; retn; map:22704
VA_CHT_1(0x006037ca, 0x10)
char* t_deflate_filter::get_input_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:22705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_deflate_filter::get_output_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:22706
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_deflate_filter)

// name:A; map symbol; map:22707
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_deflate_filter)

// name:A; map symbol; map:22708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_constructor_failure<t_deflate_filter, std::runtime_error>::~t_constructor_failure<t_deflate_filter, std::runtime_error>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:22709
VA_CHT_1(0x00602bf0, 0x158)
t_constructor_failure<t_deflate_filter, std::runtime_error>::t_constructor_failure<t_deflate_filter, std::runtime_error>(
    t_constructor_failure<t_deflate_filter, std::runtime_error> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:22710
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_constructor_failure<t_deflate_filter, std::runtime_error>")

// name:A; map symbol; map:22711
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_constructor_failure<t_deflate_filter, std::runtime_error>")

// name:A; map symbol; map:22712
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_inflate_filter::t_data_error)

// name:A; map symbol; map:22713
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_inflate_filter::t_data_error)

// name:A; map symbol; map:22714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_inflate_filter::t_data_error::~t_data_error()
{
    // Body unavailable.
}

// name:A; map symbol; map:22715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_inflate_filter::get_input_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:22716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_inflate_filter::get_output_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:22717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_inflate_filter::must_get_char()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:22718
VA_CHT_1(0x00603ba0, 0x158)
t_inflate_filter::t_data_error::t_data_error(t_inflate_filter::t_data_error const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:22719
VA_CHT_1_COMPGEN(0x00603d00, 0x1e, VECTOR_DELETING_DTOR, t_inflate_filter)

// name:A; map symbol; map:22720
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_inflate_filter)

// name:A; map symbol; map:22721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_inflate_filter::must_get_long()
{
    // Body unavailable.
}

// name:A; map symbol; map:22723
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_constructor_failure<t_deflate_filter, std::runtime_error>::t_constructor_failure<t_deflate_filter, std::runtime_error>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:22724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_array<char>::t_owned_array<char>(char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:22725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_array<char>::~t_owned_array<char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:22726
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char& t_owned_array<char>::operator[](int arg_0) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:22727
VA_CHT_1(0x00603dd0, 0x92)
std::string t_constructor_failure<t_deflate_filter, std::runtime_error>::build_msg()
{
    // Body unavailable.
}

// confidence:C; align-band; retn; map:22729
VA_CHT_1(0x00602d97, 0x68)
std::string t_constructor_failure<t_deflate_filter, std::runtime_error>::build_msg(std::string const& arg_0)
{
    // Body unavailable.
}

// === .rdata (4 symbols) ===

// confidence:A; rtti-name; map:44152
DATA_CHT_1_COMPGEN(0x008de13c, "const t_deflate_filter::`vftable'")

// confidence:A; rtti-name; map:44153
DATA_CHT_1_COMPGEN(0x008de12c, "const t_constructor_failure<t_deflate_filter, std::runtime_error>::`vftable'")

// confidence:A; rtti-name; map:44154
DATA_CHT_1_COMPGEN(0x008de174, "const t_inflate_filter::t_data_error::`vftable'")

// confidence:A; rtti-name; map:44155
DATA_CHT_1_COMPGEN(0x008de184, "const t_inflate_filter::`vftable'")

// === .rdata$r (16 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_deflate_filter@@;bcd=507574;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51508
DATA_CHT_1_COMPGEN(0x00907574, "t_deflate_filter::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_deflate_filter@@;vft=4de13c;col=5075a8;td=59d480;chd=507598;offset=0;cdOffset=0;validated-hierarchy; map:51509
DATA_CHT_1_COMPGEN(0x0090758c, "t_deflate_filter::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_deflate_filter@@;vft=4de13c;col=5075a8;td=59d480;chd=507598;offset=0;cdOffset=0;validated-hierarchy; map:51510
DATA_CHT_1_COMPGEN(0x00907598, "t_deflate_filter::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_deflate_filter@@;vft=4de13c;col=5075a8;td=59d480;chd=507598;offset=0;cdOffset=0;validated-hierarchy; map:51511
DATA_CHT_1_COMPGEN(0x009075a8, "const t_deflate_filter::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@;bcd=5075bc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51512
DATA_CHT_1_COMPGEN(0x009075bc, "t_constructor_failure<t_deflate_filter, std::runtime_error>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@;vft=4de12c;col=5075f4;td=59d4a0;chd=5075e4;offset=0;cdOffset=0;validated-hierarchy; map:51513
DATA_CHT_1_COMPGEN(0x009075d4, "t_constructor_failure<t_deflate_filter, std::runtime_error>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@;vft=4de12c;col=5075f4;td=59d4a0;chd=5075e4;offset=0;cdOffset=0;validated-hierarchy; map:51514
DATA_CHT_1_COMPGEN(0x009075e4, "t_constructor_failure<t_deflate_filter, std::runtime_error>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@;vft=4de12c;col=5075f4;td=59d4a0;chd=5075e4;offset=0;cdOffset=0;validated-hierarchy; map:51515
DATA_CHT_1_COMPGEN(0x009075f4, "const t_constructor_failure<t_deflate_filter, std::runtime_error>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_data_error@t_inflate_filter@@;bcd=507608;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51516
DATA_CHT_1_COMPGEN(0x00907608, "t_inflate_filter::t_data_error::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_data_error@t_inflate_filter@@;vft=4de174;col=507640;td=5970b4;chd=507630;offset=0;cdOffset=0;validated-hierarchy; map:51517
DATA_CHT_1_COMPGEN(0x00907620, "t_inflate_filter::t_data_error::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_data_error@t_inflate_filter@@;vft=4de174;col=507640;td=5970b4;chd=507630;offset=0;cdOffset=0;validated-hierarchy; map:51518
DATA_CHT_1_COMPGEN(0x00907630, "t_inflate_filter::t_data_error::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_data_error@t_inflate_filter@@;vft=4de174;col=507640;td=5970b4;chd=507630;offset=0;cdOffset=0;validated-hierarchy; map:51519
DATA_CHT_1_COMPGEN(0x00907640, "const t_inflate_filter::t_data_error::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_inflate_filter@@;bcd=507654;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:51520
DATA_CHT_1_COMPGEN(0x00907654, "t_inflate_filter::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_inflate_filter@@;vft=4de184;col=507688;td=59d4f8;chd=507678;offset=0;cdOffset=0;validated-hierarchy; map:51521
DATA_CHT_1_COMPGEN(0x0090766c, "t_inflate_filter::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_inflate_filter@@;vft=4de184;col=507688;td=59d4f8;chd=507678;offset=0;cdOffset=0;validated-hierarchy; map:51522
DATA_CHT_1_COMPGEN(0x00907678, "t_inflate_filter::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_inflate_filter@@;vft=4de184;col=507688;td=59d4f8;chd=507678;offset=0;cdOffset=0;validated-hierarchy; map:51523
DATA_CHT_1_COMPGEN(0x00907688, "const t_inflate_filter::`RTTI Complete Object Locator'")

// === .xdata$x (9 symbols) ===

// name:A; map symbol; map:57221
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@@8??0?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@QAE@ABV0@@Z28

// name:A; map symbol; map:57222
DATA_CHT_1(UNACCOUNTED)
// __CTA3?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@

// name:A; map symbol; map:57223
DATA_CHT_1(UNACCOUNTED)
// __TI3?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@

// name:A; map symbol; map:57224
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0_N@81

// name:A; map symbol; map:57225
DATA_CHT_1(UNACCOUNTED)
// __CTA1_N

// name:A; map symbol; map:57226
DATA_CHT_1(UNACCOUNTED)
// __CT??_R0?AVt_data_error@t_inflate_filter@@@8??0t_data_error@t_inflate_filter@@QAE@ABV01@@Z28

// name:A; map symbol; map:57227
DATA_CHT_1(UNACCOUNTED)
// __CTA3?AVt_data_error@t_inflate_filter@@

// name:A; map symbol; map:57228
DATA_CHT_1(UNACCOUNTED)
// __TI3?AVt_data_error@t_inflate_filter@@

// name:A; map symbol; map:57229
DATA_CHT_1(UNACCOUNTED)
// __TI1_N

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_deflate_filter@@;td=59d480;validated-header; map:58388
DATA_CHT_1_COMPGEN(0x0099d480, "t_deflate_filter `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_constructor_failure@Vt_deflate_filter@@Vruntime_error@std@@@@;td=59d4a0;validated-header; map:58389
DATA_CHT_1_COMPGEN(0x0099d4a0, "t_constructor_failure<t_deflate_filter, std::runtime_error> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_inflate_filter@@;td=59d4f8;validated-header; map:58390
DATA_CHT_1_COMPGEN(0x0099d4f8, "t_inflate_filter `RTTI Type Descriptor'")

// name:A; map symbol; map:58391
DATA_CHT_1_COMPGEN(UNACCOUNTED, "bool `RTTI Type Descriptor'")
