// resource_dir.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 16/51 (A:0 B:0 C:0); unaccounted 35; skipped std 68.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (51 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63464; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00777670, 0x23, STATIC_INIT_DISPATCH, "resource_dir#1")

// name:C; dyninit; see ledger; map:63465
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "resource_dir#1")

// name:C; dyninit; see ledger; map:63466
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "resource_dir#1")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63467; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007776a0, 0xa, STATIC_DTOR, "resource_dir#1")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63468; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007777b0, 0x23, STATIC_INIT_DISPATCH, "resource_dir#2")

// name:C; dyninit; see ledger; map:63469
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "resource_dir#2")

// name:C; dyninit; see ledger; map:63470
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "resource_dir#2")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63471; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007777e0, 0xa, STATIC_DTOR, "resource_dir#2")

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63472; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007777f0, 0x29, STATIC_INIT_DISPATCH, "resource_dir#3")

// name:C; dyninit; see ledger; map:63473
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "resource_dir#3")

// name:C; dyninit; see ledger; map:63474
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "resource_dir#3")

// confidence:D; dyninit-dtor; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63475; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00777820, 0x43, STATIC_DTOR, "resource_dir#3")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33090
VA_CHT_1(0x00777870, 0x1be)
t_counted_ptr<t_abstract_file> find_resource_file_handle(std::string arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33091
VA_CHT_1(0x00777a30, 0xd6)
int find_resource_offset(std::string arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33092
VA_CHT_1(0x00778180, 0x4)
void close_resource_directory()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33093
VA_CHT_1(0x007783a0, 0x77)
void add_resource_folder(char const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:63476
VA_CHT_1(0x00778420, 0x12d)
static void add_alias(std::string arg_0, std::string arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33094
VA_CHT_1(0x00778550, 0x64e)
bool add_resource_file(char const* arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33095
VA_CHT_1(0x00778ba0, 0x19e)
t_resource_entry const* find_resource(std::string arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33096
VA_CHT_1(0x00778d40, 0x38)
t_resource_entry const* get_resource(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33097
VA_CHT_1(0x00778e40, 0x23)
int get_resource_count()
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63477; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00779810, 0x3f, STATIC_INIT_DISPATCH, resource_dir)

// name:A; map symbol; map:33098
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_os_file>::~t_counted_ptr<t_os_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33099
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_resource_dir_entry::get_length() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33100
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_resource_file_dir::get_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33101
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_dir_entry& t_resource_file_dir::operator[](int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33102
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_entry::t_resource_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:33103
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_entry::~t_resource_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:33104
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_file_dir::~t_resource_file_dir()
{
    // Body unavailable.
}

// name:A; map symbol; map:33105
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_abstract_file::is_open()
{
    // Body unavailable.
}

// name:A; map symbol; map:33106
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned long t_resource_dir_entry::get_uncompressed_size() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33107
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* t_shared_file::get_abstract_file() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33108
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_shared_file>::~t_counted_ptr<t_shared_file>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_resource_file>& t_counted_ptr<t_abstract_resource_file>::operator=(
    t_abstract_resource_file* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_shared_file>::t_counted_ptr<t_shared_file>(t_counted_ptr<t_shared_file> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_shared_file>::t_counted_ptr<t_shared_file>(t_shared_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_file* t_counted_ptr<t_shared_file>::operator t_shared_file*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_shared_file* t_counted_ptr<t_shared_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* t_owned_ptr<t_abstract_file>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33169
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_os_file>::t_counted_ptr<t_os_file>(t_os_file* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33170
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_os_file* t_counted_ptr<t_os_file>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_file>::t_counted_ptr<t_abstract_file>(t_counted_ptr<t_os_file> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::basic_streambuf<char, std::char_traits<char>>* t_shared_ptr<std::basic_streambuf<char, std::char_traits<char>>>::operator->(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_entry& t_resource_entry::operator=(t_resource_entry const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_resource_dir_entry)

// name:A; map symbol; map:33184
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_entry::t_resource_entry(t_resource_entry const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33185
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_resource_entry)

// name:A; map symbol; map:33186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_resource_dir_entry::~t_resource_dir_entry()
{
    // Body unavailable.
}

// name:A; map symbol; map:33187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_resource_file>::t_counted_ptr<t_abstract_resource_file>(
    t_counted_ptr<t_abstract_resource_file> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_os_file* t_counted_ptr<t_os_file>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_file* implicit_cast(t_abstract_file* arg_0)
{
    // Body unavailable.
}
