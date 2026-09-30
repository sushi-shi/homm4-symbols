// bitmap_raw.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\bitmap_raw.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 35/59 (A:31 B:1 C:3); unaccounted 24; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (32 symbols) ===

// confidence:A; align-order; retn,stable,vptr; map:18282
VA_CHT_1(0x0057b4c0, 0x17)
t_bitmap_raw_24::t_bitmap_raw_24()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18283
VA_CHT_1(0x0057b500, 0x1d)
t_bitmap_raw_24::~t_bitmap_raw_24()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18284
VA_CHT_1(0x0057b520, 0x127)
bool t_bitmap_raw_24::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bitmap_raw_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18286
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_bitmap_raw_24::init(int arg_0, int arg_1, t_memory_bitmap<t_pixel_32>& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:18287
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bitmap_raw_16::t_bitmap_raw_16()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:18288
VA_CHT_1(0x0057b670, 0x11e)
t_bitmap_raw_16::t_bitmap_raw_16(t_bitmap_raw_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:18289
VA_CHT_1(0x0057b790, 0x1d)
t_bitmap_raw_16::~t_bitmap_raw_16()
{
    // Body unavailable.
}

// confidence:C; align-order; map:18290
VA_CHT_1(0x0057b7b0, 0x16)
void t_bitmap_raw_16::draw_to(
    t_screen_rect arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point arg_2
) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68947; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0057b810, 0x20, STATIC_INIT_DISPATCH, bitmap_raw)

// confidence:A; align-band; retn,stable,vslot; map:18291
VA_CHT_1_COMPGEN(0x0057b4e0, 0x1e, VECTOR_DELETING_DTOR, t_bitmap_raw_24)

// name:A; map symbol; map:18292
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bitmap_raw_24)

// confidence:A; align-band; retn,stable,vslot; map:18293
VA_CHT_1_COMPGEN(0x0057b650, 0x1e, VECTOR_DELETING_DTOR, t_bitmap_raw_16)

// name:A; map symbol; map:18294
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_bitmap_raw_16)

// name:A; map symbol; map:18295
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24 const* t_abstract_bitmap<t_pixel_24>::get_data_ptr() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_bitmap<t_pixel_24>::get_height() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_bitmap<t_pixel_24>::get_width() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18298
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24* t_abstract_bitmap<t_pixel_24>::advance_line(t_pixel_24* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18299
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24 const* t_abstract_bitmap<t_pixel_24>::advance_line(t_pixel_24 const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18300
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24 const* t_abstract_bitmap<t_pixel_24>::advance_line(t_pixel_24 const* arg_0, int arg_1) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18301
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_32 const* t_abstract_bitmap<t_pixel_32>::advance_line(t_pixel_32 const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18302
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_24 const* t_abstract_bitmap<t_pixel_24>::byte_increment(t_pixel_24 const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pixel_32 const* t_abstract_bitmap<t_pixel_32>::byte_increment(t_pixel_32 const* arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_bitmap<t_pixel_24>::init(int arg_0, int arg_1, int arg_2, t_pixel_24* arg_3)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:18305
VA_CHT_1(0x0057b7f0, 0x1d)
t_memory_bitmap<t_pixel_24>::t_memory_bitmap<t_pixel_24>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18306
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<t_pixel_24>::~t_memory_bitmap<t_pixel_24>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18307
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<t_pixel_24>::~t_abstract_bitmap<t_pixel_24>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_memory_bitmap<t_pixel_24>::init(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_bitmap<unsigned short>::t_memory_bitmap<unsigned short>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18310
VA_CHT_1_COMPGEN(0x0057b7d0, 0x1e, VECTOR_DELETING_DTOR, "t_memory_bitmap<t_pixel_24>")

// name:A; map symbol; map:18311
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_memory_bitmap<t_pixel_24>")

// name:A; map symbol; map:18312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_bitmap<t_pixel_24>::t_abstract_bitmap<t_pixel_24>()
{
    // Body unavailable.
}

// === .rdata (6 symbols) ===

// name:A; map symbol; map:43753
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bitmap_raw_24>::prefix; // Initial value unavailable.

// name:A; map symbol; map:43754
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_bitmap_raw_24>::extension; // Initial value unavailable.

// confidence:A; rtti-name; map:43755
DATA_CHT_1_COMPGEN(0x008d7c8c, "const t_bitmap_raw_24::`vftable'")

// confidence:A; rtti-name; map:43756
DATA_CHT_1_COMPGEN(0x008d7ca4, "const t_bitmap_raw_16::`vftable'")

// confidence:A; rtti-name; map:43757
DATA_CHT_1_COMPGEN(0x008d7c9c, "const t_memory_bitmap<t_pixel_24>::`vftable'")

// confidence:A; rtti-name; map:43758
DATA_CHT_1_COMPGEN(0x008d7c94, "const t_abstract_bitmap<t_pixel_24>::`vftable'")

// === .rdata$r (16 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_bitmap@Ut_pixel_24@@@@;bcd=501a48;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50269
DATA_CHT_1_COMPGEN(0x00901a48, "t_abstract_bitmap<t_pixel_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_memory_bitmap@Ut_pixel_24@@@@;bcd=501a60;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50270
DATA_CHT_1_COMPGEN(0x00901a60, "t_memory_bitmap<t_pixel_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_raw_24@@;bcd=501a78;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50271
DATA_CHT_1_COMPGEN(0x00901a78, "t_bitmap_raw_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_raw_24@@;vft=4d7c8c;col=501ab4;td=5957d4;chd=501aa4;offset=0;cdOffset=0;validated-hierarchy; map:50272
DATA_CHT_1_COMPGEN(0x00901a90, "t_bitmap_raw_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_raw_24@@;vft=4d7c8c;col=501ab4;td=5957d4;chd=501aa4;offset=0;cdOffset=0;validated-hierarchy; map:50273
DATA_CHT_1_COMPGEN(0x00901aa4, "t_bitmap_raw_24::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_raw_24@@;vft=4d7c8c;col=501ab4;td=5957d4;chd=501aa4;offset=0;cdOffset=0;validated-hierarchy; map:50274
DATA_CHT_1_COMPGEN(0x00901ab4, "const t_bitmap_raw_24::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_bitmap_raw_16@@;bcd=501b2c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50275
DATA_CHT_1_COMPGEN(0x00901b2c, "t_bitmap_raw_16::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_bitmap_raw_16@@;vft=4d7ca4;col=501b68;td=5957f4;chd=501b58;offset=0;cdOffset=0;validated-hierarchy; map:50276
DATA_CHT_1_COMPGEN(0x00901b44, "t_bitmap_raw_16::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_bitmap_raw_16@@;vft=4d7ca4;col=501b68;td=5957f4;chd=501b58;offset=0;cdOffset=0;validated-hierarchy; map:50277
DATA_CHT_1_COMPGEN(0x00901b58, "t_bitmap_raw_16::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_bitmap_raw_16@@;vft=4d7ca4;col=501b68;td=5957f4;chd=501b58;offset=0;cdOffset=0;validated-hierarchy; map:50278
DATA_CHT_1_COMPGEN(0x00901b68, "const t_bitmap_raw_16::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_memory_bitmap@Ut_pixel_24@@@@;vft=4d7c9c;col=501ae8;td=5957a4;chd=501ad8;offset=0;cdOffset=0;validated-hierarchy; map:50279
DATA_CHT_1_COMPGEN(0x00901ac8, "t_memory_bitmap<t_pixel_24>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_memory_bitmap@Ut_pixel_24@@@@;vft=4d7c9c;col=501ae8;td=5957a4;chd=501ad8;offset=0;cdOffset=0;validated-hierarchy; map:50280
DATA_CHT_1_COMPGEN(0x00901ad8, "t_memory_bitmap<t_pixel_24>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_memory_bitmap@Ut_pixel_24@@@@;vft=4d7c9c;col=501ae8;td=5957a4;chd=501ad8;offset=0;cdOffset=0;validated-hierarchy; map:50281
DATA_CHT_1_COMPGEN(0x00901ae8, "const t_memory_bitmap<t_pixel_24>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_bitmap@Ut_pixel_24@@@@;vft=4d7c94;col=501b18;td=595774;chd=501b08;offset=0;cdOffset=0;validated-hierarchy; map:50282
DATA_CHT_1_COMPGEN(0x00901afc, "t_abstract_bitmap<t_pixel_24>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_bitmap@Ut_pixel_24@@@@;vft=4d7c94;col=501b18;td=595774;chd=501b08;offset=0;cdOffset=0;validated-hierarchy; map:50283
DATA_CHT_1_COMPGEN(0x00901b08, "t_abstract_bitmap<t_pixel_24>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_bitmap@Ut_pixel_24@@@@;vft=4d7c94;col=501b18;td=595774;chd=501b08;offset=0;cdOffset=0;validated-hierarchy; map:50284
DATA_CHT_1_COMPGEN(0x00901b18, "const t_abstract_bitmap<t_pixel_24>::`RTTI Complete Object Locator'")

// === .data (5 symbols) ===

namespace {

// name:A; map symbol; map:58082
DATA_CHT_1(UNACCOUNTED)
unsigned short k_bitmap_24_version; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_bitmap@Ut_pixel_24@@@@;td=595774;validated-header; map:58083
DATA_CHT_1_COMPGEN(0x00995774, "t_abstract_bitmap<t_pixel_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_memory_bitmap@Ut_pixel_24@@@@;td=5957a4;validated-header; map:58084
DATA_CHT_1_COMPGEN(0x009957a4, "t_memory_bitmap<t_pixel_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_raw_24@@;td=5957d4;validated-header; map:58085
DATA_CHT_1_COMPGEN(0x009957d4, "t_bitmap_raw_24 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_bitmap_raw_16@@;td=5957f4;validated-header; map:58086
DATA_CHT_1_COMPGEN(0x009957f4, "t_bitmap_raw_16 `RTTI Type Descriptor'")
