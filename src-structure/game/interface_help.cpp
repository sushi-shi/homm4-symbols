// interface_help.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\interface_help.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/53 (A:16 B:9 C:2); unaccounted 26; skipped std 134.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (39 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64935; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006da5a0, 0x11, STATIC_INIT_DISPATCH, "interface_help#1")

// confidence:B; dyninit-ctor; owner-conf-C; map:64936; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006da5c0, 0x16e, STATIC_CTOR, "interface_help#1")

// name:C; dyninit; see ledger; map:64937
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "interface_help#1")

// confidence:B; dyninit-dtor; owner-conf-C; map:64938; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006da7d0, 0xa, STATIC_DTOR, "interface_help#1")

// confidence:B; align-order; retn,stable; map:27715
VA_CHT_1(0x006da7e0, 0x167)
std::string t_help_block::get_name(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27716
VA_CHT_1(0x006da950, 0x167)
std::string t_help_block::get_help(std::string const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27717
VA_CHT_1(0x006daac0, 0x5b)
t_item_help const& t_help_block::operator[](std::string const& arg_0) const
{
    // Body unavailable.
}

namespace {

// confidence:C; align-order; retn,stable; map:27718
VA_CHT_1(0x006dab20, 0x4ac)
t_help_table::t_help_table()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:27719
VA_CHT_1(0x006db890, 0x77)
t_help_block const& get_help_block(std::string const& arg_0)
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:64939
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_help_block$sdtor
// Function body not reconstructed; signature retained as a comment.

// confidence:B; align-order; retn,stable; map:27720
VA_CHT_1(0x006dc3d0, 0x43)
std::string get_element_name(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27721
VA_CHT_1(0x006dc970, 0x43)
std::string get_element_help(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27722
VA_CHT_1(0x006dcf40, 0x3f)
void set_help(t_window* arg_0, t_help_block const& arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:27723
VA_CHT_1(0x006dd040, 0x3f)
void set_help_balloon(t_window* arg_0, t_help_block const& arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64940; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006dd3a0, 0x20, STATIC_INIT_DISPATCH, interface_help)

// name:A; map symbol; map:27724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_item_help::t_item_help(std::string const& arg_0, std::string const& arg_1)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:27725
VA_CHT_1_COMPGEN(0x006da730, 0x1e, VECTOR_DELETING_DTOR, t_item_help)

// name:A; map symbol; map:27726
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_item_help)

// name:A; map symbol; map:27727
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_item_help::~t_item_help()
{
    // Body unavailable.
}

// name:A; map symbol; map:27728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_help_block::add(std::string const& arg_0, std::string const& arg_1, std::string const& arg_2)
{
    // Body unavailable.
}

// name:A; map symbol; map:27730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_help_block>::~t_counted_ptr<t_help_block>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_block::t_help_block()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:27733
VA_CHT_1_COMPGEN(0x006db2c0, 0x1e, VECTOR_DELETING_DTOR, t_help_block)

// name:A; map symbol; map:27734
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_help_block)

// name:A; map symbol; map:27735
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_block::~t_help_block()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:27737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_block const& t_help_table::operator[](std::string const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:27738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_table::~t_help_table()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:27756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_item_help>::~t_counted_ptr<t_item_help>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27858
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_item_help>::t_counted_ptr<t_item_help>(t_counted_ptr<t_item_help> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27859
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_item_help>::t_counted_ptr<t_item_help>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27860
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_item_help>& t_counted_ptr<t_item_help>::operator=(t_item_help* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27861
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_item_help* t_counted_ptr<t_item_help>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27862
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_item_help& t_counted_ptr<t_item_help>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27863
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_help_block>::t_counted_ptr<t_help_block>(t_counted_ptr<t_help_block> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27864
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_help_block>::t_counted_ptr<t_help_block>()
{
    // Body unavailable.
}

// name:A; map symbol; map:27865
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_help_block>& t_counted_ptr<t_help_block>::operator=(t_counted_ptr<t_help_block> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27866
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_help_block>& t_counted_ptr<t_help_block>::operator=(t_help_block* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:27867
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_block* t_counted_ptr<t_help_block>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:27868
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_help_block& t_counted_ptr<t_help_block>::operator*() const
{
    // Body unavailable.
}

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:44621
DATA_CHT_1_COMPGEN(0x008e38cc, "const t_item_help::`vftable'")

// confidence:A; rtti-name; map:44622
DATA_CHT_1_COMPGEN(0x008e38d4, "const t_help_block::`vftable'")

// === .rdata$r (8 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AUt_item_help@@;bcd=50d50c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52835
DATA_CHT_1_COMPGEN(0x0090d50c, "t_item_help::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AUt_item_help@@;vft=4e38cc;col=50d540;td=5a9bf0;chd=50d530;offset=0;cdOffset=0;validated-hierarchy; map:52836
DATA_CHT_1_COMPGEN(0x0090d524, "t_item_help::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AUt_item_help@@;vft=4e38cc;col=50d540;td=5a9bf0;chd=50d530;offset=0;cdOffset=0;validated-hierarchy; map:52837
DATA_CHT_1_COMPGEN(0x0090d530, "t_item_help::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AUt_item_help@@;vft=4e38cc;col=50d540;td=5a9bf0;chd=50d530;offset=0;cdOffset=0;validated-hierarchy; map:52838
DATA_CHT_1_COMPGEN(0x0090d540, "const t_item_help::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_help_block@@;bcd=50d554;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:52839
DATA_CHT_1_COMPGEN(0x0090d554, "t_help_block::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_help_block@@;vft=4e38d4;col=50d588;td=5a9c0c;chd=50d578;offset=0;cdOffset=0;validated-hierarchy; map:52840
DATA_CHT_1_COMPGEN(0x0090d56c, "t_help_block::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_help_block@@;vft=4e38d4;col=50d588;td=5a9c0c;chd=50d578;offset=0;cdOffset=0;validated-hierarchy; map:52841
DATA_CHT_1_COMPGEN(0x0090d578, "t_help_block::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_help_block@@;vft=4e38d4;col=50d588;td=5a9c0c;chd=50d578;offset=0;cdOffset=0;validated-hierarchy; map:52842
DATA_CHT_1_COMPGEN(0x0090d588, "const t_help_block::`RTTI Complete Object Locator'")

// === .data (2 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AUt_item_help@@;td=5a9bf0;validated-header; map:58702
DATA_CHT_1_COMPGEN(0x009a9bf0, "t_item_help `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_help_block@@;td=5a9c0c;validated-header; map:58703
DATA_CHT_1_COMPGEN(0x009a9c0c, "t_help_block `RTTI Type Descriptor'")

// === .bss (2 symbols) ===

// name:A; map symbol; map:60255
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_counted_ptr<t_item_help>>, std::map<std::string, t_counted_ptr<t_item_help>, t_string_insensitive_less, std::allocator<t_counted_ptr<t_item_help>>>::_Kfn, t_string_insensitive_less, std::allocator<t_counted_ptr<t_item_help>>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_counted_ptr<t_item_help>>, std::map<std::string, t_counted_ptr<t_item_help>, t_string_insensitive_less, std::allocator<t_counted_ptr<t_item_help>>>::_Kfn, t_string_insensitive_less, std::allocator<t_counted_ptr<t_item_help>>>::_Nil; // Initial value unavailable.

// name:A; map symbol; map:60257
DATA_CHT_1(UNACCOUNTED)
std::_Tree<std::string, std::pair<std::string const, t_counted_ptr<t_help_block>>, std::map<std::string, t_counted_ptr<t_help_block>, t_string_insensitive_less, std::allocator<t_counted_ptr<t_help_block>>>::_Kfn, t_string_insensitive_less, std::allocator<t_counted_ptr<t_help_block>>>::_Node*std::_Tree<std::string, std::pair<std::string const, t_counted_ptr<t_help_block>>, std::map<std::string, t_counted_ptr<t_help_block>, t_string_insensitive_less, std::allocator<t_counted_ptr<t_help_block>>>::_Kfn, t_string_insensitive_less, std::allocator<t_counted_ptr<t_help_block>>>::_Nil; // Initial value unavailable.
