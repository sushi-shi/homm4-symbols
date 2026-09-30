// gateway_base.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\gateway_base.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 17/33 (A:12 B:1 C:4); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (25 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:65353; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006b6040, 0x15, STATIC_INIT_DISPATCH, "gateway_base#1")

// name:C; dyninit; see ledger; map:65354
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "gateway_base#1")

// confidence:A; align-order; retn,stable,vslot; map:26685
VA_CHT_1(0x006b6060, 0x264)
std::string t_gateway_base::get_balloon_help() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26686
VA_CHT_1(0x006b62d0, 0x13f)
std::string t_gateway_base::get_name() const
{
    // Body unavailable.
}

// name:A; map symbol; map:26687
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_gateway_base::get_version() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:26688
VA_CHT_1(0x006b6410, 0x18f)
void t_gateway_base::initialize(t_adventure_map& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:26689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_gateway_base::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_qualified_adv_object_type const& arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_gateway_base::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_progress_handler* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_gateway_base::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:26692
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_exit_scanner::t_exit_scanner(t_adventure_map& arg_0, t_army* arg_1, t_gateway_base const& arg_2, bool arg_3)
{
    // Body unavailable.
}

// name:A; map symbol; map:26693
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_army* t_exit_scanner::get_blocking_army(t_adv_map_point& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn; map:26694
VA_CHT_1(0x006b65d0, 0x281)
void t_exit_scanner::scan_callback(t_adv_map_point const& arg_0, t_adv_map_point const& arg_1, bool& arg_2)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; map:26695
VA_CHT_1(0x006b6860, 0xfc2)
void t_gateway_base::teleport_army(
    t_gateway_base const& arg_0,
    t_army* arg_1,
    t_adventure_frame* arg_2,
    bool arg_3,
    std::string const& arg_4,
    t_handler_1<t_army*> arg_5
)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:65355; name:B (dyninit; see ledger)
VA_CHT_1(0x006b7890, 0x20)
// gateway_base$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; dyninit-tinit; owner-conf-B; map:65357; name:B (dyninit; see ledger)
VA_CHT_1(0x006b78b0, 0x5c)
// gateway_base$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway_base$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway_base$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:65360
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// gateway_base$tatexit4
// Function body not reconstructed; signature retained as a comment.

// confidence:C; align-band; retn; map:26696
VA_CHT_1(0x006b7830, 0x57)
t_handler_3<t_adv_map_point const&, t_adv_map_point const&, bool&> bound_handler(
    t_exit_scanner& arg_0,
    void (t_exit_scanner::*)(t_adv_map_point const&, t_adv_map_point const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26697
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>(
    t_exit_scanner& arg_0,
    void (t_exit_scanner::*)(t_adv_map_point const&, t_adv_map_point const&, bool&)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26698
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::operator()(
    t_adv_map_point const& arg_0,
    t_adv_map_point const& arg_1,
    bool& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:26699
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:26700
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// name:A; map symbol; map:26701
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::~t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>(

)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:26702
VA_CHT_1_COMPGEN(0x006b7910, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>")

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44557
DATA_CHT_1_COMPGEN(0x008e1cdc, "const t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:B; rtti-order; map:44558
DATA_CHT_1_COMPGEN(0x008e1ce8, "const t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler_3@Vt_exit_scanner@?%C:\Work\game\gateway_base.cpp86731082@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4e1cdc;col=50c824;td=5a77c8;chd=50c814;offset=8;cdOffset=0;validated-hierarchy; map:52651
DATA_CHT_1_COMPGEN(0x0090c824, "const t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_adv_map_point const&, t_adv_map_point const&, bool&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler_3@Vt_exit_scanner@?%C:\Work\game\gateway_base.cpp86731082@@ABUt_adv_map_point@@ABU3@AA_N@@;bcd=50c7e8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52652
DATA_CHT_1_COMPGEN(0x0090c7e8, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler_3@Vt_exit_scanner@?%C:\Work\game\gateway_base.cpp86731082@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4e1cdc;col=50c824;td=5a77c8;chd=50c814;offset=8;cdOffset=0;validated-hierarchy; map:52653
DATA_CHT_1_COMPGEN(0x0090c800, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler_3@Vt_exit_scanner@?%C:\Work\game\gateway_base.cpp86731082@@ABUt_adv_map_point@@ABU3@AA_N@@;vft=4e1cdc;col=50c824;td=5a77c8;chd=50c814;offset=8;cdOffset=0;validated-hierarchy; map:52654
DATA_CHT_1_COMPGEN(0x0090c814, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:52655
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (1 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler_3@Vt_exit_scanner@?%C:\Work\game\gateway_base.cpp86731082@@ABUt_adv_map_point@@ABU3@AA_N@@;td=5a77c8;validated-header; map:58648
DATA_CHT_1_COMPGEN(0x009a77c8, "t_bound_handler_3<t_exit_scanner, t_adv_map_point const&, t_adv_map_point const&, bool&> `RTTI Type Descriptor'")
