// sound_cache.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\sound_cache.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 82/131 (A:72 B:5 C:5); unaccounted 49; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (72 symbols) ===

namespace {

// confidence:C; align-order; stable; map:37808
VA_CHT_1(0x007cb410, 0x72)
t_wave_disk_stream::t_wave_disk_stream(t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>> arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:37809
VA_CHT_1(0x007cb490, 0x8)
int t_wave_disk_stream::read(void* arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37810
VA_CHT_1(0x007cb4c0, 0x87)
t_wave::t_wave(t_counted_ptr<t_abstract_resource_file> arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37811
VA_CHT_1(0x007cb550, 0x6)
char const* t_wave::get_extension() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37812
VA_CHT_1(0x007cb560, 0x1b9)
t_counted_ptr<t_sound_stream> t_wave::get_stream() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_wave::is_mp3() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37814
VA_CHT_1(0x007cb720, 0x77)
bool t_wave::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37815
VA_CHT_1(0x007cb7c0, 0x51)
t_mp3::t_mp3(t_counted_ptr<t_abstract_resource_file> arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37816
VA_CHT_1(0x007cb820, 0x6)
char const* t_mp3::get_extension() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37817
VA_CHT_1(0x007cb830, 0x1db)
t_counted_ptr<t_sound_stream> t_mp3::get_stream() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_mp3::is_mp3() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37819
VA_CHT_1(0x007cba10, 0x59)
bool t_mp3::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37820
VA_CHT_1(0x007cba70, 0x6)
char const* t_sound_cache_data::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37821
VA_CHT_1(0x007cba80, 0x207)
t_sound* t_sound_cache_data::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:37822
VA_CHT_1(0x007cbcf0, 0xa8)
t_sound_cache::t_sound_cache(std::string const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:C; align-order; stable; map:37823
VA_CHT_1(0x007cbed0, 0x7b)
t_mp3_data_stream::t_mp3_data_stream(
    t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>> arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37824
VA_CHT_1(0x007cbf50, 0x34)
long t_mp3_data_stream::read(void* arg_0, long arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; dyninit-tinit; owner-conf-B; map:62646; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007cc140, 0x20, STATIC_INIT_DISPATCH, sound_cache)

// name:A; map symbol; map:37825
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_wave_disk_stream)

// name:A; map symbol; map:37826
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_wave_disk_stream)

namespace {

// name:A; map symbol; map:37827
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_wave_disk_stream::~t_wave_disk_stream()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:37828
VA_CHT_1_COMPGEN(0x007cb4a0, 0x1e, SCALAR_DELETING_DTOR, t_wave)

// name:A; map symbol; map:37829
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_wave)

// confidence:A; align-band; retn,stable,vptr; map:37830
VA_CHT_1(0x007cbc90, 0x56)
t_abstract_sound::t_abstract_sound()
{
    // Body unavailable.
}

// name:A; map symbol; map:37831
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_sound::~t_abstract_sound()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37832
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_wave::~t_wave()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:37833
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_abstract_sound)

// name:A; map symbol; map:37834
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_abstract_sound)

// confidence:A; align-band; retn,stable,vslot; map:37835
VA_CHT_1_COMPGEN(0x007cb7a0, 0x1e, VECTOR_DELETING_DTOR, t_mp3)

// name:A; map symbol; map:37836
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_mp3)

namespace {

// name:A; map symbol; map:37837
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mp3::~t_mp3()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:37838
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mp3>::~t_counted_ptr<t_mp3>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37839
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_wave>::~t_counted_ptr<t_wave>()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37840
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_cache_data::t_sound_cache_data(std::string const& arg_0)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:37841
VA_CHT_1_COMPGEN(0x007cbda0, 0x1e, SCALAR_DELETING_DTOR, t_sound_cache_data)

// name:A; map symbol; map:37842
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sound_cache_data)

namespace {

// name:A; map symbol; map:37843
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_cache_data::~t_sound_cache_data()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:37844
VA_CHT_1_COMPGEN(0x007cbeb0, 0x1e, SCALAR_DELETING_DTOR, t_mp3_data_stream)

// name:A; map symbol; map:37845
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_mp3_data_stream)

// name:A; map symbol; map:37846
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mp3_data::t_mp3_data()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37847
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mp3_data_stream::~t_mp3_data_stream()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:37848
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_shared_array<char>::operator!=(char const* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:37849
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<char>::t_shared_array<char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<char>::~t_shared_array<char>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37851
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
char* t_shared_array<char>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37852
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_array<char>& t_shared_array<char>::operator=(char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_sound>::t_abstract_resource_cache_data<t_sound>(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:37854
VA_CHT_1(0x007cbf90, 0x49)
t_abstract_cache_data<t_sound>::~t_abstract_cache_data<t_sound>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:37855
VA_CHT_1(0x007cbdc0, 0xe6)
t_abstract_resource_cache_data<t_sound>::~t_abstract_resource_cache_data<t_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_sound>::get_load_cost()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:37857
VA_CHT_1(0x007cbfe0, 0x25)
void t_abstract_resource_cache_data<t_sound>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:37858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound* t_abstract_resource_cache_data<t_sound>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37859
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_sound>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:37860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_sound>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:37861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_sound>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_stream>::t_counted_ptr<t_sound_stream>(t_sound_stream* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_mp3>::t_counted_ptr<t_mp3>(t_mp3* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mp3* t_counted_ptr<t_mp3>::operator t_mp3*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_mp3* t_counted_ptr<t_mp3>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_wave>::t_counted_ptr<t_wave>(t_wave* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_wave* t_counted_ptr<t_wave>::operator t_wave*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_wave* t_counted_ptr<t_wave>::operator->() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:37869
VA_CHT_1_COMPGEN(0x007cc010, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_sound>")

// name:A; map symbol; map:37870
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_sound>")

// confidence:A; align-band; retn,stable,vslot; map:37871
VA_CHT_1_COMPGEN(0x007cc030, 0x1e, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_sound>")

// name:A; map symbol; map:37872
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_sound>")

// confidence:A; align-band; retn,stable,vptr; map:37873
VA_CHT_1(0x007cc050, 0xe6)
t_abstract_cache_data<t_sound>::t_abstract_cache_data<t_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37874
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sound)

// name:A; map symbol; map:37875
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<char>::set(char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_array<char>::construct(char* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37877
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sound_cache_data)

// confidence:C; align-order; stable; map:37878
VA_CHT_1_COMPGEN(0x007cc170, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_sound>")

// === .rdata (13 symbols) ===

// confidence:A; rtti-name; map:45788
DATA_CHT_1_COMPGEN(0x008ed3c4, "const t_wave_disk_stream::`vftable'")

// confidence:A; rtti-name; map:45789
DATA_CHT_1_COMPGEN(0x008ed3dc, "const t_wave::`vftable'{for `t_sound_header'}")

// confidence:B; rtti-order; map:45790
DATA_CHT_1_COMPGEN(0x008ed3e4, "const t_wave::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45791
DATA_CHT_1_COMPGEN(0x008ed3f8, "const t_abstract_sound::`vftable'{for `t_sound_header'}")

// confidence:B; rtti-order; map:45792
DATA_CHT_1_COMPGEN(0x008ed400, "const t_abstract_sound::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45793
DATA_CHT_1_COMPGEN(0x008ed414, "const t_mp3::`vftable'{for `t_sound_header'}")

// confidence:B; rtti-order; map:45794
DATA_CHT_1_COMPGEN(0x008ed41c, "const t_mp3::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:45795
DATA_CHT_1_COMPGEN(0x008ed458, "const t_sound_cache_data::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:45796
DATA_CHT_1_COMPGEN(0x008ed43c, "const t_sound_cache_data::`vftable'{for `t_abstract_cache_data<t_sound>'}")

// confidence:A; rtti-name; map:45797
DATA_CHT_1_COMPGEN(0x008ed430, "const t_mp3_data_stream::`vftable'")

// confidence:A; rtti-name; map:45798
DATA_CHT_1_COMPGEN(0x008ed488, "const t_abstract_resource_cache_data<t_sound>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:45799
DATA_CHT_1_COMPGEN(0x008ed4a0, "const t_abstract_resource_cache_data<t_sound>::`vftable'{for `t_abstract_cache_data<t_sound>'}")

// confidence:A; rtti-name; map:45800
DATA_CHT_1_COMPGEN(0x008ed470, "const t_abstract_cache_data<t_sound>::`vftable'")

// === .rdata$r (38 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_wave_disk_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;bcd=51b7cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56371
DATA_CHT_1_COMPGEN(0x0091b7cc, "t_wave_disk_stream::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_wave_disk_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3c4;col=51b804;td=5ba5a0;chd=51b7f4;offset=0;cdOffset=0;validated-hierarchy; map:56372
DATA_CHT_1_COMPGEN(0x0091b7e4, "t_wave_disk_stream::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_wave_disk_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3c4;col=51b804;td=5ba5a0;chd=51b7f4;offset=0;cdOffset=0;validated-hierarchy; map:56373
DATA_CHT_1_COMPGEN(0x0091b7f4, "t_wave_disk_stream::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_wave_disk_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3c4;col=51b804;td=5ba5a0;chd=51b7f4;offset=0;cdOffset=0;validated-hierarchy; map:56374
DATA_CHT_1_COMPGEN(0x0091b804, "const t_wave_disk_stream::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_wave@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3dc;col=51b8e0;td=5ba60c;chd=51b8d0;offset=8;cdOffset=0;validated-hierarchy; map:56375
DATA_CHT_1_COMPGEN(0x0091b8e0, "const t_wave::`RTTI Complete Object Locator'{for `t_sound_header'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_header@@;bcd=51b874;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:56376
DATA_CHT_1_COMPGEN(0x0091b874, "t_sound_header::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_abstract_sound@@;bcd=51b88c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56377
DATA_CHT_1_COMPGEN(0x0091b88c, "t_abstract_sound::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_wave@?%C:\Work\game\sound_cache.cpp2331532092@@;bcd=51b8a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56378
DATA_CHT_1_COMPGEN(0x0091b8a4, "t_wave::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_wave@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3dc;col=51b8e0;td=5ba60c;chd=51b8d0;offset=8;cdOffset=0;validated-hierarchy; map:56379
DATA_CHT_1_COMPGEN(0x0091b8bc, "t_wave::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_wave@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed3dc;col=51b8e0;td=5ba60c;chd=51b8d0;offset=8;cdOffset=0;validated-hierarchy; map:56380
DATA_CHT_1_COMPGEN(0x0091b8d0, "t_wave::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56381
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_wave::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_abstract_sound@@;vft=4ed3f8;col=51b84c;td=5ba5ec;chd=51b83c;offset=8;cdOffset=0;validated-hierarchy; map:56382
DATA_CHT_1_COMPGEN(0x0091b84c, "const t_abstract_sound::`RTTI Complete Object Locator'{for `t_sound_header'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_abstract_sound@@;vft=4ed3f8;col=51b84c;td=5ba5ec;chd=51b83c;offset=8;cdOffset=0;validated-hierarchy; map:56383
DATA_CHT_1_COMPGEN(0x0091b82c, "t_abstract_sound::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_abstract_sound@@;vft=4ed3f8;col=51b84c;td=5ba5ec;chd=51b83c;offset=8;cdOffset=0;validated-hierarchy; map:56384
DATA_CHT_1_COMPGEN(0x0091b83c, "t_abstract_sound::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56385
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_sound::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mp3@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed414;col=51b944;td=5ba650;chd=51b934;offset=8;cdOffset=0;validated-hierarchy; map:56386
DATA_CHT_1_COMPGEN(0x0091b944, "const t_mp3::`RTTI Complete Object Locator'{for `t_sound_header'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mp3@?%C:\Work\game\sound_cache.cpp2331532092@@;bcd=51b908;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56387
DATA_CHT_1_COMPGEN(0x0091b908, "t_mp3::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mp3@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed414;col=51b944;td=5ba650;chd=51b934;offset=8;cdOffset=0;validated-hierarchy; map:56388
DATA_CHT_1_COMPGEN(0x0091b920, "t_mp3::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mp3@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed414;col=51b944;td=5ba650;chd=51b934;offset=8;cdOffset=0;validated-hierarchy; map:56389
DATA_CHT_1_COMPGEN(0x0091b934, "t_mp3::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56390
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_mp3::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sound_cache_data@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed458;col=51b9d8;td=5ba750;chd=51ba5c;offset=16;cdOffset=0;validated-hierarchy; map:56391
DATA_CHT_1_COMPGEN(0x0091b9d8, "const t_sound_cache_data::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_sound@@@@;bcd=51b9ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56392
DATA_CHT_1_COMPGEN(0x0091b9ec, "t_abstract_cache_data<t_sound>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_sound@@@@;bcd=51ba04;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56393
DATA_CHT_1_COMPGEN(0x0091ba04, "t_abstract_resource_cache_data<t_sound>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_cache_data@?%C:\Work\game\sound_cache.cpp2331532092@@;bcd=51ba1c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56394
DATA_CHT_1_COMPGEN(0x0091ba1c, "t_sound_cache_data::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sound_cache_data@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed458;col=51b9d8;td=5ba750;chd=51ba5c;offset=16;cdOffset=0;validated-hierarchy; map:56395
DATA_CHT_1_COMPGEN(0x0091ba34, "t_sound_cache_data::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sound_cache_data@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed458;col=51b9d8;td=5ba750;chd=51ba5c;offset=16;cdOffset=0;validated-hierarchy; map:56396
DATA_CHT_1_COMPGEN(0x0091ba5c, "t_sound_cache_data::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56397
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_sound_cache_data::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_sound>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_mp3_data_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;bcd=51b958;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56398
DATA_CHT_1_COMPGEN(0x0091b958, "t_mp3_data_stream::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_mp3_data_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed430;col=51b98c;td=5ba690;chd=51b97c;offset=0;cdOffset=0;validated-hierarchy; map:56399
DATA_CHT_1_COMPGEN(0x0091b970, "t_mp3_data_stream::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_mp3_data_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed430;col=51b98c;td=5ba690;chd=51b97c;offset=0;cdOffset=0;validated-hierarchy; map:56400
DATA_CHT_1_COMPGEN(0x0091b97c, "t_mp3_data_stream::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_mp3_data_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;vft=4ed430;col=51b98c;td=5ba690;chd=51b97c;offset=0;cdOffset=0;validated-hierarchy; map:56401
DATA_CHT_1_COMPGEN(0x0091b98c, "const t_mp3_data_stream::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_sound@@@@;vft=4ed488;col=51bac8;td=5ba710;chd=51bab8;offset=16;cdOffset=0;validated-hierarchy; map:56402
DATA_CHT_1_COMPGEN(0x0091bac8, "const t_abstract_resource_cache_data<t_sound>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_sound@@@@;vft=4ed488;col=51bac8;td=5ba710;chd=51bab8;offset=16;cdOffset=0;validated-hierarchy; map:56403
DATA_CHT_1_COMPGEN(0x0091ba94, "t_abstract_resource_cache_data<t_sound>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_sound@@@@;vft=4ed488;col=51bac8;td=5ba710;chd=51bab8;offset=16;cdOffset=0;validated-hierarchy; map:56404
DATA_CHT_1_COMPGEN(0x0091bab8, "t_abstract_resource_cache_data<t_sound>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56405
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_sound>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_sound>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_sound@@@@;vft=4ed470;col=51b9c4;td=5ba6dc;chd=51b9b4;offset=0;cdOffset=0;validated-hierarchy; map:56406
DATA_CHT_1_COMPGEN(0x0091b9a0, "t_abstract_cache_data<t_sound>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_sound@@@@;vft=4ed470;col=51b9c4;td=5ba6dc;chd=51b9b4;offset=0;cdOffset=0;validated-hierarchy; map:56407
DATA_CHT_1_COMPGEN(0x0091b9b4, "t_abstract_cache_data<t_sound>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_sound@@@@;vft=4ed470;col=51b9c4;td=5ba6dc;chd=51b9b4;offset=0;cdOffset=0;validated-hierarchy; map:56408
DATA_CHT_1_COMPGEN(0x0091b9c4, "const t_abstract_cache_data<t_sound>::`RTTI Complete Object Locator'")

// === .data (8 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_wave_disk_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;td=5ba5a0;validated-header; map:59570
DATA_CHT_1_COMPGEN(0x009ba5a0, "t_wave_disk_stream `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_abstract_sound@@;td=5ba5ec;validated-header; map:59571
DATA_CHT_1_COMPGEN(0x009ba5ec, "t_abstract_sound `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_wave@?%C:\Work\game\sound_cache.cpp2331532092@@;td=5ba60c;validated-header; map:59572
DATA_CHT_1_COMPGEN(0x009ba60c, "t_wave `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_mp3@?%C:\Work\game\sound_cache.cpp2331532092@@;td=5ba650;validated-header; map:59573
DATA_CHT_1_COMPGEN(0x009ba650, "t_mp3 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_sound@@@@;td=5ba6dc;validated-header; map:59574
DATA_CHT_1_COMPGEN(0x009ba6dc, "t_abstract_cache_data<t_sound> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_sound@@@@;td=5ba710;validated-header; map:59575
DATA_CHT_1_COMPGEN(0x009ba710, "t_abstract_resource_cache_data<t_sound> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sound_cache_data@?%C:\Work\game\sound_cache.cpp2331532092@@;td=5ba750;validated-header; map:59576
DATA_CHT_1_COMPGEN(0x009ba750, "t_sound_cache_data `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_mp3_data_stream@?%C:\Work\game\sound_cache.cpp2331532092@@;td=5ba690;validated-header; map:59577
DATA_CHT_1_COMPGEN(0x009ba690, "t_mp3_data_stream `RTTI Type Descriptor'")
