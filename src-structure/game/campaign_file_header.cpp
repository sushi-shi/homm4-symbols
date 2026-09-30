// campaign_file_header.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\campaign_file_header.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 114/237 (A:91 B:11 C:12); unaccounted 123; skipped std 51.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (169 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:68773; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589dd0, 0x16, STATIC_INIT_DISPATCH, "campaign_file_header#1")

// name:C; dyninit; see ledger; map:68774
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "campaign_file_header#1")

// name:C; dyninit; see ledger; map:68775
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "campaign_file_header#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:68776; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589df0, 0xa, STATIC_DTOR, "campaign_file_header#1")

// confidence:A; dyninit-init; owner-conf-C; map:68777; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589e00, 0x16, STATIC_INIT_DISPATCH, "campaign_file_header#2")

// name:C; dyninit; see ledger; map:68778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "campaign_file_header#2")

// name:C; dyninit; see ledger; map:68779
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "campaign_file_header#2")

// confidence:B; dyninit-dtor; owner-conf-C; map:68780; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00589e20, 0xa, STATIC_DTOR, "campaign_file_header#2")

namespace {

// confidence:C; align-order; retn,stable; map:18698
VA_CHT_1(0x00589e30, 0x155)
std::string t_campaign_file_opener::get_resource_name(t_standard_campaign_id arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18699
VA_CHT_1(0x00589fb0, 0x57)
std::auto_ptr<std::basic_streambuf<char, std::char_traits<char>>> t_campaign_file_opener::operator()(
    t_campaign_file_ref const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-order; stable,vslot; map:18700
VA_CHT_1(0x0058a010, 0x5)
void t_campaign_file_opener::access(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:18701
VA_CHT_1(0x0058a020, 0x7d)
void t_campaign_file_opener::access(t_standard_campaign_id arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18702
VA_CHT_1(0x0058a0a0, 0x103)
void t_campaign_file_opener::open_file(std::string const& arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18703
VA_CHT_1(0x0058a1b0, 0x22d)
void t_campaign_file_opener::open_resource(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18704
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_signature_and_version(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int& arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18705
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file_header_visitor::visit(t_multi_scenario_campaign_file_header& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file_header_visitor::visit(t_multi_scenario_campaign_file_header const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file_header_visitor::visit(t_single_scenario_campaign_file_header& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file_header_visitor::visit(t_single_scenario_campaign_file_header const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:18709
VA_CHT_1(0x0058a400, 0xec)
t_single_scenario_campaign_file_header::t_single_scenario_campaign_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:18710
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_single_scenario_campaign_file_header::~t_single_scenario_campaign_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:18711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_single_scenario_campaign_file_header::accept(t_campaign_file_header_visitor& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_single_scenario_campaign_file_header::accept(t_campaign_file_header_visitor& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; vslot; map:18713
VA_CHT_1(0x0058a4f0, 0xe)
int t_single_scenario_campaign_file_header::get_map_count() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18714
VA_CHT_1(0x0058a500, 0x17)
std::fpos<int> t_single_scenario_campaign_file_header::get_map_data_end(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18715
VA_CHT_1(0x0058a520, 0x17)
std::fpos<int> t_single_scenario_campaign_file_header::get_map_data_start(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18716
VA_CHT_1(0x0058a540, 0x6)
t_map_header const& t_single_scenario_campaign_file_header::get_map_header(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_single_scenario_campaign_file_header::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_single_scenario_campaign_file_header::is_multi_scenario() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:18719
VA_CHT_1(0x0058a550, 0xf7)
bool t_single_scenario_campaign_file_header::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_single_scenario_campaign_file_header::set_map_header(t_map_header const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vptr; map:18721
VA_CHT_1(0x0058a650, 0xcd)
t_multi_scenario_campaign_file_header::~t_multi_scenario_campaign_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:18722
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_multi_scenario_campaign_file_header::accept(t_campaign_file_header_visitor& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18723
VA_CHT_1(0x0058a720, 0x1e)
void t_multi_scenario_campaign_file_header::accept(t_campaign_file_header_visitor& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18724
VA_CHT_1(0x0058a740, 0x13)
int t_multi_scenario_campaign_file_header::get_map_count() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18725
VA_CHT_1(0x0058a760, 0x22)
std::fpos<int> t_multi_scenario_campaign_file_header::get_map_data_end(int arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:18726
VA_CHT_1(0x0058a790, 0x20)
std::fpos<int> t_multi_scenario_campaign_file_header::get_map_data_start(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18727
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_header const& t_multi_scenario_campaign_file_header::get_map_header(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_multi_scenario_campaign_file_header::get_name() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:18729
VA_CHT_1(0x0058b370, 0x19)
std::string const& t_multi_scenario_campaign_file_header::get_description() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_multi_scenario_campaign_file_header::is_multi_scenario() const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18731
VA_CHT_1(0x0058b3f0, 0x195)
bool t_multi_scenario_campaign_file_header::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18732
VA_CHT_1(0x0058b610, 0x111)
t_counted_ptr<t_campaign_file_header> create_campaign_file_header(
    t_campaign_file_ref const& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18733
VA_CHT_1(0x0058b730, 0x127)
t_counted_ptr<t_single_scenario_campaign_file_header> create_single_scenario_campaign_file_header(
    t_campaign_file_ref const& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:18734
VA_CHT_1(0x0058b9d0, 0x80)
t_counted_ptr<t_multi_scenario_campaign_file_header> create_multi_scenario_campaign_file_header(
    t_campaign_file_ref const& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:18735
VA_CHT_1(0x0058ba50, 0x49)
std::auto_ptr<std::basic_streambuf<char, std::char_traits<char>>> open_campaign_file(
    t_campaign_file_ref const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:68781; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0058bb50, 0x3f, STATIC_INIT_DISPATCH, campaign_file_header)

// name:A; map symbol; map:18736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_campaign_file_ref::accept(t_campaign_file_ref_accessor& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_campaign_file>::~t_pointer_cache<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_campaign_file>& t_pointer_cache<t_campaign_file>::operator=(
    t_pointer_cache<t_campaign_file> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18739
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache<t_campaign_file>& t_abstract_cache<t_campaign_file>::operator=(
    t_abstract_cache<t_campaign_file> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18740
VA_CHT_1_COMPGEN(0x0058a3e0, 0x1e, SCALAR_DELETING_DTOR, t_single_scenario_campaign_file_header)

// name:A; map symbol; map:18741
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_single_scenario_campaign_file_header)

// name:A; map symbol; map:18742
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_header::t_campaign_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:18743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_header::~t_campaign_file_header()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:18744
VA_CHT_1_COMPGEN(0x0058b970, 0x1e, SCALAR_DELETING_DTOR, t_campaign_file_header)

// name:A; map symbol; map:18745
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_campaign_file_header)

// confidence:C; align-band; retn,stable; map:18746
VA_CHT_1(0x0058af30, 0x156)
t_map_header& t_map_header::operator=(t_map_header const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18747
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_multi_scenario_campaign_file_header)

// name:A; map symbol; map:18748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_multi_scenario_campaign_file_header)

// confidence:C; align-band; retn; map:18749
VA_CHT_1(0x0058b2d0, 0x38)
t_multi_scenario_campaign_file_header::t_map_info::t_map_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:18750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header::t_map_info::~t_map_info()
{
    // Body unavailable.
}

// name:A; map symbol; map:18751
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_header>::~t_counted_ptr<t_campaign_file_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18752
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_multi_scenario_campaign_file_header>::~t_counted_ptr<t_multi_scenario_campaign_file_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_single_scenario_campaign_file_header>::~t_counted_ptr<t_single_scenario_campaign_file_header>(

)
{
    // Body unavailable.
}

namespace {

// confidence:A; align-band; retn,vptr; map:18754
VA_CHT_1(0x0058b1f0, 0x7a)
t_campaign_file_opener::t_campaign_file_opener()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,vptr; map:18755
VA_CHT_1(0x0058b270, 0x7)
t_campaign_file_ref_accessor::~t_campaign_file_ref_accessor()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_opener::~t_campaign_file_opener()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,vptr; map:18757
VA_CHT_1(0x0058b280, 0x48)
t_campaign_file_ref_accessor::t_campaign_file_ref_accessor()
{
    // Body unavailable.
}

// name:A; map symbol; map:18795
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref_body* t_counted_ptr<t_campaign_file_ref_body>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref_body* t_counted_ptr<t_campaign_file_ref_body>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_map_header>::t_owned_ptr<t_map_header>(t_map_header* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:18798
VA_CHT_1(0x0058b920, 0x41)
t_owned_ptr<t_map_header>::~t_owned_ptr<t_map_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_header& t_owned_ptr<t_map_header>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_header* t_owned_ptr<t_map_header>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_map_header>::t_shared_ptr<t_map_header>()
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:18802
VA_CHT_1(0x0058b590, 0x74)
t_shared_ptr<t_map_header>::~t_shared_ptr<t_map_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_map_header>& t_shared_ptr<t_map_header>::operator=(t_map_header* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_header& t_shared_ptr<t_map_header>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_buffer_counted* t_counted_ptr<t_memory_buffer_counted>::operator t_memory_buffer_counted*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>(
    std::auto_ptr<std::basic_streambuf<char, std::char_traits<char>>> arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>(
    std::basic_streambuf<char, std::char_traits<char>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::~t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>* t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::get(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>* t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::release(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::reset(
    std::basic_streambuf<char, std::char_traits<char>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>& t_owned_ptr<std::basic_streambuf<char, std::char_traits<char>>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>::t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>(
    std::basic_filebuf<char, std::char_traits<char>>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>::~t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_filebuf<char, std::char_traits<char>>* t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>::release(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:18816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_filebuf<char, std::char_traits<char>>* t_owned_ptr<std::basic_filebuf<char, std::char_traits<char>>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_campaign_file>>& t_counted_ptr<t_abstract_cache_data<t_campaign_file>>::operator=(
    t_counted_ptr<t_abstract_cache_data<t_campaign_file>> const& arg_0
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:18818
VA_CHT_1(0x0058b3d0, 0x1d)
t_abstract_cache<t_campaign_file>::~t_abstract_cache<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file> t_abstract_cache<t_campaign_file>::get(t_progress_handler* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18820
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_campaign_file>::t_pointer_cache<t_campaign_file>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_pointer_cache<t_campaign_file>::t_pointer_cache<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file>::t_cached_ptr<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file>::~t_cached_ptr<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18824
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file* t_cached_ptr<t_campaign_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18825
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file>& t_cached_ptr<t_campaign_file>::operator=(
    t_cached_ptr<t_campaign_file> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18826
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_header>::t_counted_ptr<t_campaign_file_header>()
{
    // Body unavailable.
}

namespace {

// confidence:C; align-band; retn; map:18827
VA_CHT_1(0x0058adb0, 0x176)
t_counted_ptr<t_multi_scenario_campaign_file_header> create_and_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18828
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_multi_scenario_campaign_file_header>::t_counted_ptr<t_multi_scenario_campaign_file_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18829
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_header>::t_counted_ptr<t_campaign_file_header>(
    t_counted_ptr<t_multi_scenario_campaign_file_header> const& arg_0
)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:18830
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_single_scenario_campaign_file_header> create_and_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:18831
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_single_scenario_campaign_file_header>::t_counted_ptr<t_single_scenario_campaign_file_header>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18832
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_header>::t_counted_ptr<t_campaign_file_header>(
    t_counted_ptr<t_single_scenario_campaign_file_header> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18842
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_map_header)

// name:A; map symbol; map:18843
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_cache<t_campaign_file>")

// name:A; map symbol; map:18844
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache<t_campaign_file>")

// name:A; map symbol; map:18845
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_campaign_file>>::~t_counted_ptr<t_abstract_cache_data<t_campaign_file>>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18846
VA_CHT_1_COMPGEN(0x0058b990, 0x1e, SCALAR_DELETING_DTOR, "t_pointer_cache<t_campaign_file>")

// name:A; map symbol; map:18847
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_pointer_cache<t_campaign_file>")

// name:A; map symbol; map:18848
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header::t_multi_scenario_campaign_file_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:18849
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header::t_map_info& t_multi_scenario_campaign_file_header::t_map_info::operator=(
    t_multi_scenario_campaign_file_header::t_map_info const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18850
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header::t_map_info::t_map_info(
    t_multi_scenario_campaign_file_header::t_map_info const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18851
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_multi_scenario_campaign_file_header::t_map_info)

// name:A; map symbol; map:18853
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file>::t_cached_ptr<t_campaign_file>(t_cached_ptr<t_campaign_file> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18854
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_map_header>::t_shared_ptr<t_map_header>(t_shared_ptr<t_map_header> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18855
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_map_header* t_shared_ptr<t_map_header>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18856
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_ptr<t_map_header>& t_shared_ptr<t_map_header>::operator=(t_shared_ptr<t_map_header> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18857
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_map_header>::set(t_map_header* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_map_header>::construct(t_map_header* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_cache_data<t_campaign_file>>::t_counted_ptr<t_abstract_cache_data<t_campaign_file>>(
    t_abstract_cache_data<t_campaign_file>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_campaign_file>* t_counted_ptr<t_abstract_cache_data<t_campaign_file>>::operator t_abstract_cache_data<t_campaign_file>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_campaign_file>* t_counted_ptr<t_abstract_cache_data<t_campaign_file>>::operator->(

) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:18863
VA_CHT_1(0x0058b9b0, 0x19)
t_abstract_cache<t_campaign_file>::t_abstract_cache<t_campaign_file>(
    t_abstract_cache_data<t_campaign_file>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_cached_ptr<t_campaign_file>::t_cached_ptr<t_campaign_file>(
    t_campaign_file* arg_0,
    t_abstract_cache_base* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_cached_ptr<t_campaign_file>::assign(t_campaign_file* arg_0, t_cached_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file* t_cached_ptr<t_campaign_file>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_campaign_file>::t_ptr_cache_data<t_campaign_file>(std::string const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_abstract_resource_cache_data<t_campaign_file>::get_load_cost()
{
    // Body unavailable.
}

// name:A; map symbol; map:18869
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_campaign_file>::add_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:18870
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file* t_abstract_resource_cache_data<t_campaign_file>::do_get(t_progress_handler* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18871
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_campaign_file>::release_memory()
{
    // Body unavailable.
}

// name:A; map symbol; map:18872
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_abstract_resource_cache_data<t_campaign_file>::remove_reference()
{
    // Body unavailable.
}

// name:A; map symbol; map:18873
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_resource_cache_data<t_campaign_file>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18874
VA_CHT_1(0x0058baa0, 0x6)
char const* t_ptr_cache_data<t_campaign_file>::get_prefix() const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18875
VA_CHT_1(0x0058bab0, 0x93)
t_campaign_file* t_ptr_cache_data<t_campaign_file>::do_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18876
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_campaign_file& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18877
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_multi_scenario_campaign_file_header>::t_counted_ptr<t_multi_scenario_campaign_file_header>(
    t_counted_ptr<t_multi_scenario_campaign_file_header> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18878
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_multi_scenario_campaign_file_header>::t_counted_ptr<t_multi_scenario_campaign_file_header>(
    t_multi_scenario_campaign_file_header* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18879
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header* t_counted_ptr<t_multi_scenario_campaign_file_header>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18880
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_multi_scenario_campaign_file_header* t_counted_ptr<t_multi_scenario_campaign_file_header>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18881
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_header* implicit_cast(t_campaign_file_header* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18882
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_single_scenario_campaign_file_header>::t_counted_ptr<t_single_scenario_campaign_file_header>(
    t_counted_ptr<t_single_scenario_campaign_file_header> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18883
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_single_scenario_campaign_file_header>::t_counted_ptr<t_single_scenario_campaign_file_header>(
    t_single_scenario_campaign_file_header* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18884
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_single_scenario_campaign_file_header* t_counted_ptr<t_single_scenario_campaign_file_header>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18885
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_single_scenario_campaign_file_header* t_counted_ptr<t_single_scenario_campaign_file_header>::operator->(

) const
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18886
VA_CHT_1_COMPGEN(0x0058bbb0, 0x1e, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_campaign_file>")

// name:A; map symbol; map:18887
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_ptr_cache_data<t_campaign_file>")

// name:A; map symbol; map:18888
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_ptr_cache_data<t_campaign_file>::~t_ptr_cache_data<t_campaign_file>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:18889
VA_CHT_1(0x0058bbd0, 0xcb)
t_abstract_resource_cache_data<t_campaign_file>::~t_abstract_resource_cache_data<t_campaign_file>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:18890
VA_CHT_1(0x0058bcc0, 0xcb)
t_abstract_cache_data<t_campaign_file>::~t_abstract_cache_data<t_campaign_file>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:18891
VA_CHT_1_COMPGEN(0x0058bb90, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_cache_data<t_campaign_file>")

// name:A; map symbol; map:18892
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_cache_data<t_campaign_file>")

// confidence:A; align-band; retn,stable,vslot; map:18893
VA_CHT_1_COMPGEN(0x0058bca0, 0x1e, SCALAR_DELETING_DTOR, "t_abstract_resource_cache_data<t_campaign_file>")

// name:A; map symbol; map:18894
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_campaign_file>")

// name:A; map symbol; map:18895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_map_header>::assign(t_map_header* arg_0, t_shared_ptr_base const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:18896
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_shared_ptr<t_map_header>::add_link(t_shared_ptr_base const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:18897
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_resource_cache_data<t_campaign_file>::t_abstract_resource_cache_data<t_campaign_file>(
    std::string const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:18898
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_campaign_file>::t_owned_ptr<t_campaign_file>(t_campaign_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18899
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_owned_ptr<t_campaign_file>::~t_owned_ptr<t_campaign_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:18900
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file* t_owned_ptr<t_campaign_file>::release()
{
    // Body unavailable.
}

// name:A; map symbol; map:18901
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_owned_ptr<t_campaign_file>::reset(t_campaign_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:18902
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file& t_owned_ptr<t_campaign_file>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:18903
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_cache_data<t_campaign_file>::t_abstract_cache_data<t_campaign_file>()
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:18905
VA_CHT_1_COMPGEN(0x0058bd90, 0x8, VECTOR_DELETING_DTOR, "t_ptr_cache_data<t_campaign_file>")

// confidence:C; align-order; stable; map:18906
VA_CHT_1_COMPGEN(0x0058bda0, 0x8, VECTOR_DELETING_DTOR, "t_abstract_resource_cache_data<t_campaign_file>")

// === .rdata (12 symbols) ===

// confidence:A; rtti-name; map:43804
DATA_CHT_1_COMPGEN(0x008d8894, "const t_single_scenario_campaign_file_header::`vftable'")

// confidence:A; rtti-name; map:43805
DATA_CHT_1_COMPGEN(0x008d88bc, "const t_campaign_file_header::`vftable'")

// confidence:A; rtti-name; map:43806
DATA_CHT_1_COMPGEN(0x008d88e4, "const t_multi_scenario_campaign_file_header::`vftable'")

// confidence:A; rtti-name; map:43807
DATA_CHT_1_COMPGEN(0x008d890c, "const t_campaign_file_opener::`vftable'")

// confidence:A; rtti-name; map:43808
DATA_CHT_1_COMPGEN(0x008d8918, "const t_campaign_file_ref_accessor::`vftable'")

// confidence:A; rtti-name; map:43809
DATA_CHT_1_COMPGEN(0x008d8884, "const t_abstract_cache<t_campaign_file>::`vftable'")

// confidence:A; rtti-name; map:43810
DATA_CHT_1_COMPGEN(0x008d888c, "const t_pointer_cache<t_campaign_file>::`vftable'")

// confidence:A; rtti-name; map:43811
DATA_CHT_1_COMPGEN(0x008d8940, "const t_ptr_cache_data<t_campaign_file>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43812
DATA_CHT_1_COMPGEN(0x008d8924, "const t_ptr_cache_data<t_campaign_file>::`vftable'{for `t_abstract_cache_data<t_campaign_file>'}")

// confidence:A; rtti-name; map:43813
DATA_CHT_1_COMPGEN(0x008d8970, "const t_abstract_resource_cache_data<t_campaign_file>::`vftable'{for `t_abstract_resource_cache_base'}")

// confidence:B; rtti-order; map:43814
DATA_CHT_1_COMPGEN(0x008d8988, "const t_abstract_resource_cache_data<t_campaign_file>::`vftable'{for `t_abstract_cache_data<t_campaign_file>'}")

// confidence:A; rtti-name; map:43815
DATA_CHT_1_COMPGEN(0x008d8958, "const t_abstract_cache_data<t_campaign_file>::`vftable'")

// === .rdata$r (43 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file_header@@;bcd=50260c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50419
DATA_CHT_1_COMPGEN(0x0090260c, "t_campaign_file_header::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_single_scenario_campaign_file_header@@;bcd=502624;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50420
DATA_CHT_1_COMPGEN(0x00902624, "t_single_scenario_campaign_file_header::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_single_scenario_campaign_file_header@@;vft=4d8894;col=502660;td=59707c;chd=502650;offset=0;cdOffset=0;validated-hierarchy; map:50421
DATA_CHT_1_COMPGEN(0x0090263c, "t_single_scenario_campaign_file_header::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_single_scenario_campaign_file_header@@;vft=4d8894;col=502660;td=59707c;chd=502650;offset=0;cdOffset=0;validated-hierarchy; map:50422
DATA_CHT_1_COMPGEN(0x00902650, "t_single_scenario_campaign_file_header::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_single_scenario_campaign_file_header@@;vft=4d8894;col=502660;td=59707c;chd=502650;offset=0;cdOffset=0;validated-hierarchy; map:50423
DATA_CHT_1_COMPGEN(0x00902660, "const t_single_scenario_campaign_file_header::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campaign_file_header@@;vft=4d88bc;col=5025f8;td=597054;chd=5025e8;offset=0;cdOffset=0;validated-hierarchy; map:50424
DATA_CHT_1_COMPGEN(0x009025d8, "t_campaign_file_header::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campaign_file_header@@;vft=4d88bc;col=5025f8;td=597054;chd=5025e8;offset=0;cdOffset=0;validated-hierarchy; map:50425
DATA_CHT_1_COMPGEN(0x009025e8, "t_campaign_file_header::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campaign_file_header@@;vft=4d88bc;col=5025f8;td=597054;chd=5025e8;offset=0;cdOffset=0;validated-hierarchy; map:50426
DATA_CHT_1_COMPGEN(0x009025f8, "const t_campaign_file_header::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_multi_scenario_campaign_file_header@@;bcd=502674;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50427
DATA_CHT_1_COMPGEN(0x00902674, "t_multi_scenario_campaign_file_header::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_multi_scenario_campaign_file_header@@;vft=4d88e4;col=5026b0;td=5970e0;chd=5026a0;offset=0;cdOffset=0;validated-hierarchy; map:50428
DATA_CHT_1_COMPGEN(0x0090268c, "t_multi_scenario_campaign_file_header::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_multi_scenario_campaign_file_header@@;vft=4d88e4;col=5026b0;td=5970e0;chd=5026a0;offset=0;cdOffset=0;validated-hierarchy; map:50429
DATA_CHT_1_COMPGEN(0x009026a0, "t_multi_scenario_campaign_file_header::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_multi_scenario_campaign_file_header@@;vft=4d88e4;col=5026b0;td=5970e0;chd=5026a0;offset=0;cdOffset=0;validated-hierarchy; map:50430
DATA_CHT_1_COMPGEN(0x009026b0, "const t_multi_scenario_campaign_file_header::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file_ref_accessor@@;bcd=5026c4;pmd=0,-1,0;attributes=9;validated-hierarchy-link; map:50431
DATA_CHT_1_COMPGEN(0x009026c4, "t_campaign_file_ref_accessor::`RTTI Base Class Descriptor at (0, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file_opener@?%C:\Work\game\campaign_file_header.cpp299822590@@;bcd=5026dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50432
DATA_CHT_1_COMPGEN(0x009026dc, "t_campaign_file_opener::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campaign_file_opener@?%C:\Work\game\campaign_file_header.cpp299822590@@;vft=4d890c;col=502710;td=597140;chd=502700;offset=0;cdOffset=0;validated-hierarchy; map:50433
DATA_CHT_1_COMPGEN(0x009026f4, "t_campaign_file_opener::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campaign_file_opener@?%C:\Work\game\campaign_file_header.cpp299822590@@;vft=4d890c;col=502710;td=597140;chd=502700;offset=0;cdOffset=0;validated-hierarchy; map:50434
DATA_CHT_1_COMPGEN(0x00902700, "t_campaign_file_opener::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campaign_file_opener@?%C:\Work\game\campaign_file_header.cpp299822590@@;vft=4d890c;col=502710;td=597140;chd=502700;offset=0;cdOffset=0;validated-hierarchy; map:50435
DATA_CHT_1_COMPGEN(0x00902710, "const t_campaign_file_opener::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_campaign_file_ref_accessor@@;bcd=502724;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50436
DATA_CHT_1_COMPGEN(0x00902724, "t_campaign_file_ref_accessor::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_campaign_file_ref_accessor@@;vft=4d8918;col=502754;td=597114;chd=502744;offset=0;cdOffset=0;validated-hierarchy; map:50437
DATA_CHT_1_COMPGEN(0x0090273c, "t_campaign_file_ref_accessor::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_campaign_file_ref_accessor@@;vft=4d8918;col=502754;td=597114;chd=502744;offset=0;cdOffset=0;validated-hierarchy; map:50438
DATA_CHT_1_COMPGEN(0x00902744, "t_campaign_file_ref_accessor::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_campaign_file_ref_accessor@@;vft=4d8918;col=502754;td=597114;chd=502744;offset=0;cdOffset=0;validated-hierarchy; map:50439
DATA_CHT_1_COMPGEN(0x00902754, "const t_campaign_file_ref_accessor::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache@Vt_campaign_file@@@@;bcd=502594;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50440
DATA_CHT_1_COMPGEN(0x00902594, "t_abstract_cache<t_campaign_file>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache@Vt_campaign_file@@@@;vft=4d8884;col=5025c4;td=597020;chd=5025b4;offset=0;cdOffset=0;validated-hierarchy; map:50441
DATA_CHT_1_COMPGEN(0x009025ac, "t_abstract_cache<t_campaign_file>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache@Vt_campaign_file@@@@;vft=4d8884;col=5025c4;td=597020;chd=5025b4;offset=0;cdOffset=0;validated-hierarchy; map:50442
DATA_CHT_1_COMPGEN(0x009025b4, "t_abstract_cache<t_campaign_file>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache@Vt_campaign_file@@@@;vft=4d8884;col=5025c4;td=597020;chd=5025b4;offset=0;cdOffset=0;validated-hierarchy; map:50443
DATA_CHT_1_COMPGEN(0x009025c4, "const t_abstract_cache<t_campaign_file>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_pointer_cache@Vt_campaign_file@@@@;bcd=50254c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50444
DATA_CHT_1_COMPGEN(0x0090254c, "t_pointer_cache<t_campaign_file>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_pointer_cache@Vt_campaign_file@@@@;vft=4d888c;col=502580;td=596fec;chd=502570;offset=0;cdOffset=0;validated-hierarchy; map:50445
DATA_CHT_1_COMPGEN(0x00902564, "t_pointer_cache<t_campaign_file>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_pointer_cache@Vt_campaign_file@@@@;vft=4d888c;col=502580;td=596fec;chd=502570;offset=0;cdOffset=0;validated-hierarchy; map:50446
DATA_CHT_1_COMPGEN(0x00902570, "t_pointer_cache<t_campaign_file>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_pointer_cache@Vt_campaign_file@@@@;vft=4d888c;col=502580;td=596fec;chd=502570;offset=0;cdOffset=0;validated-hierarchy; map:50447
DATA_CHT_1_COMPGEN(0x00902580, "const t_pointer_cache<t_campaign_file>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_campaign_file@@@@;vft=4d8940;col=5027a0;td=59721c;chd=502824;offset=16;cdOffset=0;validated-hierarchy; map:50448
DATA_CHT_1_COMPGEN(0x009027a0, "const t_ptr_cache_data<t_campaign_file>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_cache_data@Vt_campaign_file@@@@;bcd=5027b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50449
DATA_CHT_1_COMPGEN(0x009027b4, "t_abstract_cache_data<t_campaign_file>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_resource_cache_data@Vt_campaign_file@@@@;bcd=5027cc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50450
DATA_CHT_1_COMPGEN(0x009027cc, "t_abstract_resource_cache_data<t_campaign_file>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_ptr_cache_data@Vt_campaign_file@@@@;bcd=5027e4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:50451
DATA_CHT_1_COMPGEN(0x009027e4, "t_ptr_cache_data<t_campaign_file>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_campaign_file@@@@;vft=4d8940;col=5027a0;td=59721c;chd=502824;offset=16;cdOffset=0;validated-hierarchy; map:50452
DATA_CHT_1_COMPGEN(0x009027fc, "t_ptr_cache_data<t_campaign_file>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_ptr_cache_data@Vt_campaign_file@@@@;vft=4d8940;col=5027a0;td=59721c;chd=502824;offset=16;cdOffset=0;validated-hierarchy; map:50453
DATA_CHT_1_COMPGEN(0x00902824, "t_ptr_cache_data<t_campaign_file>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50454
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_ptr_cache_data<t_campaign_file>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_campaign_file>'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_campaign_file@@@@;vft=4d8970;col=502890;td=5971d8;chd=502880;offset=16;cdOffset=0;validated-hierarchy; map:50455
DATA_CHT_1_COMPGEN(0x00902890, "const t_abstract_resource_cache_data<t_campaign_file>::`RTTI Complete Object Locator'{for `t_abstract_resource_cache_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_campaign_file@@@@;vft=4d8970;col=502890;td=5971d8;chd=502880;offset=16;cdOffset=0;validated-hierarchy; map:50456
DATA_CHT_1_COMPGEN(0x0090285c, "t_abstract_resource_cache_data<t_campaign_file>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_resource_cache_data@Vt_campaign_file@@@@;vft=4d8970;col=502890;td=5971d8;chd=502880;offset=16;cdOffset=0;validated-hierarchy; map:50457
DATA_CHT_1_COMPGEN(0x00902880, "t_abstract_resource_cache_data<t_campaign_file>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:50458
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_abstract_resource_cache_data<t_campaign_file>::`RTTI Complete Object Locator'{for `t_abstract_cache_data<t_campaign_file>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_campaign_file@@@@;vft=4d8958;col=50278c;td=597198;chd=50277c;offset=0;cdOffset=0;validated-hierarchy; map:50459
DATA_CHT_1_COMPGEN(0x00902768, "t_abstract_cache_data<t_campaign_file>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_campaign_file@@@@;vft=4d8958;col=50278c;td=597198;chd=50277c;offset=0;cdOffset=0;validated-hierarchy; map:50460
DATA_CHT_1_COMPGEN(0x0090277c, "t_abstract_cache_data<t_campaign_file>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_cache_data@Vt_campaign_file@@@@;vft=4d8958;col=50278c;td=597198;chd=50277c;offset=0;cdOffset=0;validated-hierarchy; map:50461
DATA_CHT_1_COMPGEN(0x0090278c, "const t_abstract_cache_data<t_campaign_file>::`RTTI Complete Object Locator'")

// === .data (13 symbols) ===

// name:A; map symbol; map:58119
DATA_CHT_1_COMPGEN(UNACCOUNTED, "m_body_ptr.get() != 0")

// name:A; map symbol; map:58120
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\campaign_file_ref.h...")

// confidence:A; rtti-type-name; type-name=.?AVt_campaign_file_header@@;td=597054;validated-header; map:58121
DATA_CHT_1_COMPGEN(0x00997054, "t_campaign_file_header `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_single_scenario_campaign_file_header@@;td=59707c;validated-header; map:58122
DATA_CHT_1_COMPGEN(0x0099707c, "t_single_scenario_campaign_file_header `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_data_error@t_inflate_filter@@;td=5970b4;validated-header; map:58123
DATA_CHT_1_COMPGEN(0x009970b4, "t_inflate_filter::t_data_error `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_multi_scenario_campaign_file_header@@;td=5970e0;validated-header; map:58124
DATA_CHT_1_COMPGEN(0x009970e0, "t_multi_scenario_campaign_file_header `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_campaign_file_ref_accessor@@;td=597114;validated-header; map:58125
DATA_CHT_1_COMPGEN(0x00997114, "t_campaign_file_ref_accessor `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_campaign_file_opener@?%C:\Work\game\campaign_file_header.cpp299822590@@;td=597140;validated-header; map:58126
DATA_CHT_1_COMPGEN(0x00997140, "t_campaign_file_opener `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache@Vt_campaign_file@@@@;td=597020;validated-header; map:58127
DATA_CHT_1_COMPGEN(0x00997020, "t_abstract_cache<t_campaign_file> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_pointer_cache@Vt_campaign_file@@@@;td=596fec;validated-header; map:58128
DATA_CHT_1_COMPGEN(0x00996fec, "t_pointer_cache<t_campaign_file> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_cache_data@Vt_campaign_file@@@@;td=597198;validated-header; map:58129
DATA_CHT_1_COMPGEN(0x00997198, "t_abstract_cache_data<t_campaign_file> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_resource_cache_data@Vt_campaign_file@@@@;td=5971d8;validated-header; map:58130
DATA_CHT_1_COMPGEN(0x009971d8, "t_abstract_resource_cache_data<t_campaign_file> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_ptr_cache_data@Vt_campaign_file@@@@;td=59721c;validated-header; map:58131
DATA_CHT_1_COMPGEN(0x0099721c, "t_ptr_cache_data<t_campaign_file> `RTTI Type Descriptor'")
