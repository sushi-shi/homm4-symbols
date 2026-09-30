// script_adjust_cur_spell_points.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 56/152 (A:46 B:0 C:0); unaccounted 96; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (85 symbols) ===

// name:A; map symbol; map:33743
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_increase_cur_spell_points::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33744
VA_CHT_1(0x00790bd0, 0x42)
void t_script_increase_cur_spell_points::make_adjustment(t_adventure_map* arg_0, t_hero* arg_1) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33745
VA_CHT_1(0x00790c20, 0x1b)
void t_script_decrease_cur_spell_points::add_icons(t_basic_dialog* arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:33746
VA_CHT_1(0x00790c40, 0x38)
void t_script_decrease_cur_spell_points::make_adjustment(t_adventure_map* arg_0, t_hero* arg_1) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63195; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00790c80, 0x70, STATIC_INIT_DISPATCH, script_adjust_cur_spell_points)

// name:C; dyninit; see ledger; map:63197
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<8,t_script_decrease_cur_spell_points>::k_factory")

// confidence:D; align-order; atexit,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:63198; name:C (dyninit; see ledger)
VA_CHT_1(0x00790d10, 0x1f)
// t_script_action_base<26,t_script_increase_cur_spell_points>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:33747
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::get_adjustment() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:33748
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<8,t_script_decrease_cur_spell_points>::k_factory")

// name:A; dyninit; see ledger; map:33749
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<26,t_script_increase_cur_spell_points>::k_factory")

// name:A; dyninit; see ledger; map:33750
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<26,t_script_increase_cur_spell_points>::k_factory")

// name:A; dyninit; see ledger; map:33751
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<8,t_script_decrease_cur_spell_points>::k_factory")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33752
VA_CHT_1(0x00790d30, 0x14)
t_script_action_factory<8>::~t_script_action_factory<8>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33753
VA_CHT_1(0x00791040, 0x14)
t_script_action_factory<26>::~t_script_action_factory<26>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33754
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<8>::t_script_action_factory<8>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33755
VA_CHT_1(0x00790d50, 0x3d)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<8>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33756
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<8>::t_script_action<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33757
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_hero_target>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_hero_target>::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_targeted_action<t_script_hero_target>::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned short>::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned short>::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned short>::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:33766
VA_CHT_1(0x00790eb0, 0x86)
void t_script_hero_adjustment_action<unsigned short>::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33767
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_hero_adjustment_action<unsigned short>::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<8, t_script_decrease_cur_spell_points>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<8, t_script_decrease_cur_spell_points>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<8>::t_script_action<8>(t_script_action<8> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<8>")

// name:A; map symbol; map:33772
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<8>")

// name:A; map symbol; map:33773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<8, t_script_decrease_cur_spell_points>::t_script_action_base<8, t_script_decrease_cur_spell_points>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<8, t_script_decrease_cur_spell_points>::t_script_action_base<8, t_script_decrease_cur_spell_points>(
    t_script_action_base<8, t_script_decrease_cur_spell_points> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33775
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<8>::~t_script_action<8>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<8, t_script_decrease_cur_spell_points>::~t_script_action_base<8, t_script_decrease_cur_spell_points>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33777
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<8, t_script_decrease_cur_spell_points>")

// name:A; map symbol; map:33778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<8, t_script_decrease_cur_spell_points>")

// name:A; map symbol; map:33779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_cur_spell_points::t_script_decrease_cur_spell_points()
{
    // Body unavailable.
}

// name:A; map symbol; map:33780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_cur_spell_points::~t_script_decrease_cur_spell_points()
{
    // Body unavailable.
}

// name:A; map symbol; map:33781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_cur_spell_points::t_script_decrease_cur_spell_points(
    t_script_decrease_cur_spell_points const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33782
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_decrease_cur_spell_points)

// name:A; map symbol; map:33783
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_decrease_cur_spell_points)

// name:A; map symbol; map:33784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned short>::t_script_hero_adjustment_action<unsigned short>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned short>::~t_script_hero_adjustment_action<unsigned short>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33786
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_adjustment_action<unsigned short>::t_script_hero_adjustment_action<unsigned short>(
    t_script_hero_adjustment_action<unsigned short> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_hero_adjustment_action<unsigned short>")

// name:A; map symbol; map:33788
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_hero_adjustment_action<unsigned short>")

// name:A; map symbol; map:33789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::~t_script_simple_adjustment_action<t_script_hero_target, unsigned short>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::t_script_simple_adjustment_action<t_script_hero_target, unsigned short>(
    t_script_simple_adjustment_action<t_script_hero_target, unsigned short> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_hero_target>::~t_script_targeted_action<t_script_hero_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33792
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short>")

// name:A; map symbol; map:33793
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short>")

// name:A; map symbol; map:33794
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_hero_target>::t_script_targeted_action<t_script_hero_target>(
    t_script_targeted_action<t_script_hero_target> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_targeted_action<t_script_hero_target>")

// name:A; map symbol; map:33796
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_targeted_action<t_script_hero_target>")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:33797
VA_CHT_1(0x007918b0, 0x22)
t_abstract_script_action::t_abstract_script_action(t_abstract_script_action const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_target t_script_targeted_action<t_script_hero_target>::get_target() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_hero_target get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_script_target_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_script_hero_target& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, t_script_hero_target const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:33802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::t_script_simple_adjustment_action<t_script_hero_target, unsigned short>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_read_script_target_from_map_helper<t_script_hero_target>::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_script_hero_target& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_targeted_action<t_script_hero_target>::t_script_targeted_action<t_script_hero_target>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<26>::t_script_action_factory<26>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<26>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<26>::t_script_action<26>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<26, t_script_increase_cur_spell_points>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:33809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<26, t_script_increase_cur_spell_points>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:33810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<26>::t_script_action<26>(t_script_action<26> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:33811
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<26>")

// name:A; map symbol; map:33812
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<26>")

// name:A; map symbol; map:33813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<26, t_script_increase_cur_spell_points>::t_script_action_base<26, t_script_increase_cur_spell_points>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<26, t_script_increase_cur_spell_points>::t_script_action_base<26, t_script_increase_cur_spell_points>(
    t_script_action_base<26, t_script_increase_cur_spell_points> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<26>::~t_script_action<26>()
{
    // Body unavailable.
}

// name:A; map symbol; map:33816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<26, t_script_increase_cur_spell_points>::~t_script_action_base<26, t_script_increase_cur_spell_points>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:33817
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<26, t_script_increase_cur_spell_points>")

// name:A; map symbol; map:33818
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<26, t_script_increase_cur_spell_points>")

// name:A; map symbol; map:33819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_cur_spell_points::t_script_increase_cur_spell_points()
{
    // Body unavailable.
}

// name:A; map symbol; map:33820
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_cur_spell_points::~t_script_increase_cur_spell_points()
{
    // Body unavailable.
}

// name:A; map symbol; map:33821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_cur_spell_points::t_script_increase_cur_spell_points(
    t_script_increase_cur_spell_points const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:33822
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_cur_spell_points)

// name:A; map symbol; map:33823
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_cur_spell_points)

// name:A; map symbol; map:33824
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool read_script_target_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    t_script_hero_target& arg_1
)
{
    // Body unavailable.
}

// === .rdata (11 symbols) ===

// confidence:A; rtti-name; map:45275
DATA_CHT_1_COMPGEN(0x008ea20c, "const t_script_action_factory<8>::`vftable'")

// confidence:A; rtti-name; map:45276
DATA_CHT_1_COMPGEN(0x008ea214, "const t_script_action<8>::`vftable'")

// name:A; map symbol; map:45277
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<8, t_script_decrease_cur_spell_points>::`vftable'")

// name:A; map symbol; map:45278
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_cur_spell_points::`vftable'")

// confidence:A; rtti-name; map:45279
DATA_CHT_1_COMPGEN(0x008ea33c, "const t_script_hero_adjustment_action<unsigned short>::`vftable'")

// name:A; map symbol; map:45280
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::`vftable'")

// confidence:A; rtti-name; map:45281
DATA_CHT_1_COMPGEN(0x008ea24c, "const t_script_targeted_action<t_script_hero_target>::`vftable'")

// confidence:A; rtti-name; map:45282
DATA_CHT_1_COMPGEN(0x008ea2b4, "const t_script_action_factory<26>::`vftable'")

// confidence:A; rtti-name; map:45283
DATA_CHT_1_COMPGEN(0x008ea2bc, "const t_script_action<26>::`vftable'")

// name:A; map symbol; map:45284
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<26, t_script_increase_cur_spell_points>::`vftable'")

// name:A; map symbol; map:45285
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_cur_spell_points::`vftable'")

// === .rdata$r (44 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$07@@;bcd=514cdc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54478
DATA_CHT_1_COMPGEN(0x00914cdc, "t_script_action_factory<8>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$07@@;vft=4ea20c;col=514d14;td=5b3320;chd=514d04;offset=0;cdOffset=0;validated-hierarchy; map:54479
DATA_CHT_1_COMPGEN(0x00914cf4, "t_script_action_factory<8>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$07@@;vft=4ea20c;col=514d14;td=5b3320;chd=514d04;offset=0;cdOffset=0;validated-hierarchy; map:54480
DATA_CHT_1_COMPGEN(0x00914d04, "t_script_action_factory<8>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$07@@;vft=4ea20c;col=514d14;td=5b3320;chd=514d04;offset=0;cdOffset=0;validated-hierarchy; map:54481
DATA_CHT_1_COMPGEN(0x00914d14, "const t_script_action_factory<8>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_targeted_action@W4t_script_hero_target@@@@;bcd=514d28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54482
DATA_CHT_1_COMPGEN(0x00914d28, "t_script_targeted_action<t_script_hero_target>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_hero_target@@G@@;bcd=514d40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54483
DATA_CHT_1_COMPGEN(0x00914d40, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_hero_adjustment_action@G@@;bcd=514d58;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54484
DATA_CHT_1_COMPGEN(0x00914d58, "t_script_hero_adjustment_action<unsigned short>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_decrease_cur_spell_points@@;bcd=514d70;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54485
DATA_CHT_1_COMPGEN(0x00914d70, "t_script_decrease_cur_spell_points::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$07Vt_script_decrease_cur_spell_points@@@@;bcd=514d88;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54486
DATA_CHT_1_COMPGEN(0x00914d88, "t_script_action_base<8, t_script_decrease_cur_spell_points>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$07@@;bcd=514da0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54487
DATA_CHT_1_COMPGEN(0x00914da0, "t_script_action<8>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$07@@;vft=4ea214;col=514dec;td=5b34a0;chd=514ddc;offset=0;cdOffset=0;validated-hierarchy; map:54488
DATA_CHT_1_COMPGEN(0x00914db8, "t_script_action<8>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$07@@;vft=4ea214;col=514dec;td=5b34a0;chd=514ddc;offset=0;cdOffset=0;validated-hierarchy; map:54489
DATA_CHT_1_COMPGEN(0x00914ddc, "t_script_action<8>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$07@@;vft=4ea214;col=514dec;td=5b34a0;chd=514ddc;offset=0;cdOffset=0;validated-hierarchy; map:54490
DATA_CHT_1_COMPGEN(0x00914dec, "const t_script_action<8>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54491
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<8, t_script_decrease_cur_spell_points>::`RTTI Base Class Array'")

// name:A; map symbol; map:54492
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<8, t_script_decrease_cur_spell_points>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54493
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<8, t_script_decrease_cur_spell_points>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54494
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_cur_spell_points::`RTTI Base Class Array'")

// name:A; map symbol; map:54495
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_cur_spell_points::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54496
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_cur_spell_points::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_hero_adjustment_action@G@@;vft=4ea33c;col=51507c;td=5b33e4;chd=51506c;offset=0;cdOffset=0;validated-hierarchy; map:54497
DATA_CHT_1_COMPGEN(0x00915054, "t_script_hero_adjustment_action<unsigned short>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_hero_adjustment_action@G@@;vft=4ea33c;col=51507c;td=5b33e4;chd=51506c;offset=0;cdOffset=0;validated-hierarchy; map:54498
DATA_CHT_1_COMPGEN(0x0091506c, "t_script_hero_adjustment_action<unsigned short>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_hero_adjustment_action@G@@;vft=4ea33c;col=51507c;td=5b33e4;chd=51506c;offset=0;cdOffset=0;validated-hierarchy; map:54499
DATA_CHT_1_COMPGEN(0x0091507c, "const t_script_hero_adjustment_action<unsigned short>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54500
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::`RTTI Base Class Array'")

// name:A; map symbol; map:54501
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54502
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_simple_adjustment_action<t_script_hero_target, unsigned short>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_hero_target@@@@;vft=4ea24c;col=514e50;td=5b3350;chd=514e40;offset=0;cdOffset=0;validated-hierarchy; map:54503
DATA_CHT_1_COMPGEN(0x00914e30, "t_script_targeted_action<t_script_hero_target>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_hero_target@@@@;vft=4ea24c;col=514e50;td=5b3350;chd=514e40;offset=0;cdOffset=0;validated-hierarchy; map:54504
DATA_CHT_1_COMPGEN(0x00914e40, "t_script_targeted_action<t_script_hero_target>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_targeted_action@W4t_script_hero_target@@@@;vft=4ea24c;col=514e50;td=5b3350;chd=514e40;offset=0;cdOffset=0;validated-hierarchy; map:54505
DATA_CHT_1_COMPGEN(0x00914e50, "const t_script_targeted_action<t_script_hero_target>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BK@@@;bcd=514e64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54506
DATA_CHT_1_COMPGEN(0x00914e64, "t_script_action_factory<26>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BK@@@;vft=4ea2b4;col=514e9c;td=5b34c4;chd=514e8c;offset=0;cdOffset=0;validated-hierarchy; map:54507
DATA_CHT_1_COMPGEN(0x00914e7c, "t_script_action_factory<26>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BK@@@;vft=4ea2b4;col=514e9c;td=5b34c4;chd=514e8c;offset=0;cdOffset=0;validated-hierarchy; map:54508
DATA_CHT_1_COMPGEN(0x00914e8c, "t_script_action_factory<26>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BK@@@;vft=4ea2b4;col=514e9c;td=5b34c4;chd=514e8c;offset=0;cdOffset=0;validated-hierarchy; map:54509
DATA_CHT_1_COMPGEN(0x00914e9c, "const t_script_action_factory<26>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_cur_spell_points@@;bcd=514eb0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54510
DATA_CHT_1_COMPGEN(0x00914eb0, "t_script_increase_cur_spell_points::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BK@Vt_script_increase_cur_spell_points@@@@;bcd=514ec8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54511
DATA_CHT_1_COMPGEN(0x00914ec8, "t_script_action_base<26, t_script_increase_cur_spell_points>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BK@@@;bcd=514ee0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54512
DATA_CHT_1_COMPGEN(0x00914ee0, "t_script_action<26>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BK@@@;vft=4ea2bc;col=514f2c;td=5b3578;chd=514f1c;offset=0;cdOffset=0;validated-hierarchy; map:54513
DATA_CHT_1_COMPGEN(0x00914ef8, "t_script_action<26>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BK@@@;vft=4ea2bc;col=514f2c;td=5b3578;chd=514f1c;offset=0;cdOffset=0;validated-hierarchy; map:54514
DATA_CHT_1_COMPGEN(0x00914f1c, "t_script_action<26>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BK@@@;vft=4ea2bc;col=514f2c;td=5b3578;chd=514f1c;offset=0;cdOffset=0;validated-hierarchy; map:54515
DATA_CHT_1_COMPGEN(0x00914f2c, "const t_script_action<26>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54516
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<26, t_script_increase_cur_spell_points>::`RTTI Base Class Array'")

// name:A; map symbol; map:54517
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<26, t_script_increase_cur_spell_points>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54518
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<26, t_script_increase_cur_spell_points>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54519
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_cur_spell_points::`RTTI Base Class Array'")

// name:A; map symbol; map:54520
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_cur_spell_points::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54521
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_cur_spell_points::`RTTI Complete Object Locator'")

// === .data (12 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$07@@;td=5b3320;validated-header; map:59082
DATA_CHT_1_COMPGEN(0x009b3320, "t_script_action_factory<8> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_targeted_action@W4t_script_hero_target@@@@;td=5b3350;validated-header; map:59083
DATA_CHT_1_COMPGEN(0x009b3350, "t_script_targeted_action<t_script_hero_target> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_simple_adjustment_action@W4t_script_hero_target@@G@@;td=5b3398;validated-header; map:59084
DATA_CHT_1_COMPGEN(0x009b3398, "t_script_simple_adjustment_action<t_script_hero_target, unsigned short> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_hero_adjustment_action@G@@;td=5b33e4;validated-header; map:59085
DATA_CHT_1_COMPGEN(0x009b33e4, "t_script_hero_adjustment_action<unsigned short> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_decrease_cur_spell_points@@;td=5b3418;validated-header; map:59086
DATA_CHT_1_COMPGEN(0x009b3418, "t_script_decrease_cur_spell_points `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$07Vt_script_decrease_cur_spell_points@@@@;td=5b3450;validated-header; map:59087
DATA_CHT_1_COMPGEN(0x009b3450, "t_script_action_base<8, t_script_decrease_cur_spell_points> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$07@@;td=5b34a0;validated-header; map:59088
DATA_CHT_1_COMPGEN(0x009b34a0, "t_script_action<8> `RTTI Type Descriptor'")

// name:A; map symbol; map:59089
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\script_hero_adjustm...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BK@@@;td=5b34c4;validated-header; map:59090
DATA_CHT_1_COMPGEN(0x009b34c4, "t_script_action_factory<26> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_cur_spell_points@@;td=5b34f4;validated-header; map:59091
DATA_CHT_1_COMPGEN(0x009b34f4, "t_script_increase_cur_spell_points `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BK@Vt_script_increase_cur_spell_points@@@@;td=5b3528;validated-header; map:59092
DATA_CHT_1_COMPGEN(0x009b3528, "t_script_action_base<26, t_script_increase_cur_spell_points> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BK@@@;td=5b3578;validated-header; map:59093
DATA_CHT_1_COMPGEN(0x009b3578, "t_script_action<26> `RTTI Type Descriptor'")
