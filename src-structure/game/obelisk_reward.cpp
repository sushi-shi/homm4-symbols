// obelisk_reward.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\obelisk_reward.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 34/50 (A:30 B:1 C:3); unaccounted 16; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (32 symbols) ===

namespace {

// confidence:B; align-order; retn,stable; map:30941
VA_CHT_1(0x00747680, 0x1c6)
t_counted_ptr<t_obelisk_reward> common_read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int& arg_1
)
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:C; align-order; retn,stable; map:30942
VA_CHT_1(0x00747850, 0xe9)
t_counted_ptr<t_obelisk_reward> t_obelisk_reward::read(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:30943
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_obelisk_reward::give_reward(t_army* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30944
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_obelisk_reward::add_to_basic_dialog(t_basic_dialog& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30945
VA_CHT_1(0x00747940, 0xe9)
t_counted_ptr<t_obelisk_reward> t_obelisk_reward::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:30946
VA_CHT_1(0x00747a60, 0xd4)
t_obelisk_reward_artifact::t_obelisk_reward_artifact()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:30947
VA_CHT_1(0x00747b40, 0x59)
t_obelisk_reward_artifact::t_obelisk_reward_artifact(t_artifact_type arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30948
VA_CHT_1(0x00747ba0, 0x5c)
bool t_obelisk_reward_artifact::read_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30949
VA_CHT_1(0x00747c00, 0x5d)
bool t_obelisk_reward_artifact::read_data_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30950
VA_CHT_1(0x00747c60, 0xd5)
bool t_obelisk_reward_artifact::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:30951
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_obelisk_reward_artifact::give_reward(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30952
VA_CHT_1(0x00747d40, 0x30)
void t_obelisk_reward_artifact::add_to_basic_dialog(t_basic_dialog& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:30953
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward_material::t_obelisk_reward_material()
{
    // Body unavailable.
}

// name:A; map symbol; map:30954
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward_material::t_obelisk_reward_material(t_material arg_0, unsigned long arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:30955
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_obelisk_reward_material::read_data(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30956
VA_CHT_1(0x00747d90, 0x7e)
bool t_obelisk_reward_material::read_data_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30957
VA_CHT_1(0x00747e10, 0xf2)
bool t_obelisk_reward_material::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30958
VA_CHT_1(0x00747f10, 0x3d)
void t_obelisk_reward_material::give_reward(t_army* arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:30959
VA_CHT_1(0x00747f50, 0x18)
void t_obelisk_reward_material::add_to_basic_dialog(t_basic_dialog& arg_0)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63941; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00747f70, 0x20, STATIC_INIT_DISPATCH, obelisk_reward)

// confidence:A; align-band; retn,stable,vslot; map:30960
VA_CHT_1_COMPGEN(0x00747a30, 0x1e, VECTOR_DELETING_DTOR, t_obelisk_reward_artifact)

// name:A; map symbol; map:30961
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_obelisk_reward_artifact)

// name:A; map symbol; map:30962
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward::t_obelisk_reward()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:30963
VA_CHT_1(0x00747a50, 0x10)
t_obelisk_reward::~t_obelisk_reward()
{
    // Body unavailable.
}

// name:A; map symbol; map:30964
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward_artifact::~t_obelisk_reward_artifact()
{
    // Body unavailable.
}

// name:A; map symbol; map:30965
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_obelisk_reward)

// name:A; map symbol; map:30966
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_obelisk_reward)

// name:A; map symbol; map:30967
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_obelisk_reward_material)

// name:A; map symbol; map:30968
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_obelisk_reward_material)

// name:A; map symbol; map:30969
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_obelisk_reward_material::~t_obelisk_reward_material()
{
    // Body unavailable.
}

// name:A; map symbol; map:30970
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_obelisk_reward>::t_counted_ptr<t_obelisk_reward>()
{
    // Body unavailable.
}

// name:A; map symbol; map:30971
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_obelisk_reward>& t_counted_ptr<t_obelisk_reward>::operator=(t_obelisk_reward* arg_0)
{
    // Body unavailable.
}

// === .rdata (3 symbols) ===

// confidence:A; rtti-name; map:44937
DATA_CHT_1_COMPGEN(0x008e6848, "const t_obelisk_reward_artifact::`vftable'")

// confidence:A; rtti-name; map:44938
DATA_CHT_1_COMPGEN(0x008e6880, "const t_obelisk_reward::`vftable'")

// confidence:A; rtti-name; map:44939
DATA_CHT_1_COMPGEN(0x008e6864, "const t_obelisk_reward_material::`vftable'")

// === .rdata$r (12 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_obelisk_reward@@;bcd=5111d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53659
DATA_CHT_1_COMPGEN(0x009111d8, "t_obelisk_reward::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_obelisk_reward_artifact@@;bcd=5111f0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53660
DATA_CHT_1_COMPGEN(0x009111f0, "t_obelisk_reward_artifact::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_obelisk_reward_artifact@@;vft=4e6848;col=51122c;td=5ae7dc;chd=51121c;offset=0;cdOffset=0;validated-hierarchy; map:53661
DATA_CHT_1_COMPGEN(0x00911208, "t_obelisk_reward_artifact::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_obelisk_reward_artifact@@;vft=4e6848;col=51122c;td=5ae7dc;chd=51121c;offset=0;cdOffset=0;validated-hierarchy; map:53662
DATA_CHT_1_COMPGEN(0x0091121c, "t_obelisk_reward_artifact::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_obelisk_reward_artifact@@;vft=4e6848;col=51122c;td=5ae7dc;chd=51121c;offset=0;cdOffset=0;validated-hierarchy; map:53663
DATA_CHT_1_COMPGEN(0x0091122c, "const t_obelisk_reward_artifact::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_obelisk_reward@@;vft=4e6880;col=511260;td=5ae7bc;chd=511250;offset=0;cdOffset=0;validated-hierarchy; map:53664
DATA_CHT_1_COMPGEN(0x00911240, "t_obelisk_reward::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_obelisk_reward@@;vft=4e6880;col=511260;td=5ae7bc;chd=511250;offset=0;cdOffset=0;validated-hierarchy; map:53665
DATA_CHT_1_COMPGEN(0x00911250, "t_obelisk_reward::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_obelisk_reward@@;vft=4e6880;col=511260;td=5ae7bc;chd=511250;offset=0;cdOffset=0;validated-hierarchy; map:53666
DATA_CHT_1_COMPGEN(0x00911260, "const t_obelisk_reward::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_obelisk_reward_material@@;bcd=511188;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53667
DATA_CHT_1_COMPGEN(0x00911188, "t_obelisk_reward_material::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_obelisk_reward_material@@;vft=4e6864;col=5111c4;td=5ae794;chd=5111b4;offset=0;cdOffset=0;validated-hierarchy; map:53668
DATA_CHT_1_COMPGEN(0x009111a0, "t_obelisk_reward_material::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_obelisk_reward_material@@;vft=4e6864;col=5111c4;td=5ae794;chd=5111b4;offset=0;cdOffset=0;validated-hierarchy; map:53669
DATA_CHT_1_COMPGEN(0x009111b4, "t_obelisk_reward_material::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_obelisk_reward_material@@;vft=4e6864;col=5111c4;td=5ae794;chd=5111b4;offset=0;cdOffset=0;validated-hierarchy; map:53670
DATA_CHT_1_COMPGEN(0x009111c4, "const t_obelisk_reward_material::`RTTI Complete Object Locator'")

// === .data (3 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_obelisk_reward@@;td=5ae7bc;validated-header; map:58904
DATA_CHT_1_COMPGEN(0x009ae7bc, "t_obelisk_reward `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_obelisk_reward_artifact@@;td=5ae7dc;validated-header; map:58905
DATA_CHT_1_COMPGEN(0x009ae7dc, "t_obelisk_reward_artifact `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_obelisk_reward_material@@;td=5ae794;validated-header; map:58906
DATA_CHT_1_COMPGEN(0x009ae794, "t_obelisk_reward_material `RTTI Type Descriptor'")
