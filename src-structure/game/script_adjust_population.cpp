// script_adjust_population.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 46/116 (A:38 B:8 C:0); unaccounted 70; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (62 symbols) ===

// confidence:B; align-order; retn,stable; map:34147
VA_CHT_1(0x00792570, 0x58)
bool t_script_adjust_population::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34148
VA_CHT_1(0x007925d0, 0x94)
bool t_script_adjust_population::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34149
VA_CHT_1(0x00792690, 0x4d)
bool t_script_adjust_population::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34150
VA_CHT_1(0x007926e0, 0x66)
void t_script_adjust_population::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34151
VA_CHT_1(0x00792780, 0x59)
void t_script_adjust_population::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34152
VA_CHT_1(0x007927e0, 0x66)
void t_script_adjust_population::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34153
VA_CHT_1(0x00792880, 0x56)
void t_script_adjust_population::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:34154
VA_CHT_1(0x007928e0, 0x66)
void t_script_adjust_population::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:63175; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00792b40, 0x70, STATIC_INIT_DISPATCH, script_adjust_population)

// name:C; dyninit; see ledger; map:63177
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<14,t_script_decrease_population>::k_factory")

// confidence:A; align-order; atexit,stable; map:63178; name:C (dyninit; see ledger)
VA_CHT_1(0x00792bd0, 0x1f)
// t_script_action_base<34,t_script_increase_population>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:34155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_adjust_population::get_adjustment() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_script_adjust_population::get_dwelling_number() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:34157
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<14,t_script_decrease_population>::k_factory")

// name:A; dyninit; see ledger; map:34158
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<34,t_script_increase_population>::k_factory")

// name:A; dyninit; see ledger; map:34159
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<34,t_script_increase_population>::k_factory")

// name:A; dyninit; see ledger; map:34160
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<14,t_script_decrease_population>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:34161
VA_CHT_1(0x00792bf0, 0x14)
t_script_action_factory<14>::~t_script_action_factory<14>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:34162
VA_CHT_1(0x00792cc0, 0x14)
t_script_action_factory<34>::~t_script_action_factory<34>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34163
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<14>::t_script_action_factory<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<14>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34165
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<14>::t_script_action<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34166
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<14, t_script_decrease_population>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34167
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<14, t_script_decrease_population>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34168
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<14>::t_script_action<14>(t_script_action<14> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34169
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<14>")

// name:A; map symbol; map:34170
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<14>")

// name:A; map symbol; map:34171
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<14, t_script_decrease_population>::t_script_action_base<14, t_script_decrease_population>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34172
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_population::t_script_decrease_population()
{
    // Body unavailable.
}

// name:A; map symbol; map:34173
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_population::t_script_adjust_population(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34174
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_adjust_population)

// name:A; map symbol; map:34175
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_adjust_population)

// name:A; map symbol; map:34176
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_population::~t_script_adjust_population()
{
    // Body unavailable.
}

// name:A; map symbol; map:34177
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_decrease_population)

// name:A; map symbol; map:34178
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_decrease_population)

// name:A; map symbol; map:34179
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_population::~t_script_decrease_population()
{
    // Body unavailable.
}

// name:A; map symbol; map:34180
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<14, t_script_decrease_population>::t_script_action_base<14, t_script_decrease_population>(
    t_script_action_base<14, t_script_decrease_population> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34181
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<14>::~t_script_action<14>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34182
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<14, t_script_decrease_population>::~t_script_action_base<14, t_script_decrease_population>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34183
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<14, t_script_decrease_population>")

// name:A; map symbol; map:34184
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<14, t_script_decrease_population>")

// name:A; map symbol; map:34185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_decrease_population::t_script_decrease_population(t_script_decrease_population const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34186
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_adjust_population::t_script_adjust_population(t_script_adjust_population const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34187
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<34>::t_script_action_factory<34>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<34>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<34>::t_script_action<34>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<34, t_script_increase_population>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<34, t_script_increase_population>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:34192
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<34>::t_script_action<34>(t_script_action<34> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:34193
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<34>")

// name:A; map symbol; map:34194
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<34>")

// name:A; map symbol; map:34195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<34, t_script_increase_population>::t_script_action_base<34, t_script_increase_population>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_population::t_script_increase_population()
{
    // Body unavailable.
}

// name:A; map symbol; map:34197
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_increase_population)

// name:A; map symbol; map:34198
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_increase_population)

// name:A; map symbol; map:34199
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_population::~t_script_increase_population()
{
    // Body unavailable.
}

// name:A; map symbol; map:34200
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<34, t_script_increase_population>::t_script_action_base<34, t_script_increase_population>(
    t_script_action_base<34, t_script_increase_population> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:34201
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<34>::~t_script_action<34>()
{
    // Body unavailable.
}

// name:A; map symbol; map:34202
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<34, t_script_increase_population>::~t_script_action_base<34, t_script_increase_population>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:34203
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<34, t_script_increase_population>")

// name:A; map symbol; map:34204
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<34, t_script_increase_population>")

// name:A; map symbol; map:34205
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_increase_population::t_script_increase_population(t_script_increase_population const& arg_0)
{
    // Body unavailable.
}

// === .rdata (9 symbols) ===

// confidence:A; rtti-name; map:45339
DATA_CHT_1_COMPGEN(0x008ea6c4, "const t_script_action_factory<14>::`vftable'")

// confidence:A; rtti-name; map:45340
DATA_CHT_1_COMPGEN(0x008ea6cc, "const t_script_action<14>::`vftable'")

// name:A; map symbol; map:45341
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<14, t_script_decrease_population>::`vftable'")

// name:A; map symbol; map:45342
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_population::`vftable'")

// name:A; map symbol; map:45343
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_adjust_population::`vftable'")

// confidence:A; rtti-name; map:45344
DATA_CHT_1_COMPGEN(0x008ea700, "const t_script_action_factory<34>::`vftable'")

// confidence:A; rtti-name; map:45345
DATA_CHT_1_COMPGEN(0x008ea708, "const t_script_action<34>::`vftable'")

// name:A; map symbol; map:45346
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<34, t_script_increase_population>::`vftable'")

// name:A; map symbol; map:45347
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_population::`vftable'")

// === .rdata$r (36 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0O@@@;bcd=515af0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54734
DATA_CHT_1_COMPGEN(0x00915af0, "t_script_action_factory<14>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0O@@@;vft=4ea6c4;col=515b28;td=5b4098;chd=515b18;offset=0;cdOffset=0;validated-hierarchy; map:54735
DATA_CHT_1_COMPGEN(0x00915b08, "t_script_action_factory<14>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0O@@@;vft=4ea6c4;col=515b28;td=5b4098;chd=515b18;offset=0;cdOffset=0;validated-hierarchy; map:54736
DATA_CHT_1_COMPGEN(0x00915b18, "t_script_action_factory<14>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0O@@@;vft=4ea6c4;col=515b28;td=5b4098;chd=515b18;offset=0;cdOffset=0;validated-hierarchy; map:54737
DATA_CHT_1_COMPGEN(0x00915b28, "const t_script_action_factory<14>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_adjust_population@@;bcd=515b3c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54738
DATA_CHT_1_COMPGEN(0x00915b3c, "t_script_adjust_population::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_decrease_population@@;bcd=515b54;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54739
DATA_CHT_1_COMPGEN(0x00915b54, "t_script_decrease_population::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0O@Vt_script_decrease_population@@@@;bcd=515b6c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54740
DATA_CHT_1_COMPGEN(0x00915b6c, "t_script_action_base<14, t_script_decrease_population>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0O@@@;bcd=515b84;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54741
DATA_CHT_1_COMPGEN(0x00915b84, "t_script_action<14>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0O@@@;vft=4ea6cc;col=515bc8;td=5b416c;chd=515bb8;offset=0;cdOffset=0;validated-hierarchy; map:54742
DATA_CHT_1_COMPGEN(0x00915b9c, "t_script_action<14>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0O@@@;vft=4ea6cc;col=515bc8;td=5b416c;chd=515bb8;offset=0;cdOffset=0;validated-hierarchy; map:54743
DATA_CHT_1_COMPGEN(0x00915bb8, "t_script_action<14>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0O@@@;vft=4ea6cc;col=515bc8;td=5b416c;chd=515bb8;offset=0;cdOffset=0;validated-hierarchy; map:54744
DATA_CHT_1_COMPGEN(0x00915bc8, "const t_script_action<14>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54745
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<14, t_script_decrease_population>::`RTTI Base Class Array'")

// name:A; map symbol; map:54746
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<14, t_script_decrease_population>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54747
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<14, t_script_decrease_population>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54748
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_population::`RTTI Base Class Array'")

// name:A; map symbol; map:54749
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_decrease_population::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54750
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_decrease_population::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54751
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_adjust_population::`RTTI Base Class Array'")

// name:A; map symbol; map:54752
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_adjust_population::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54753
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_adjust_population::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CC@@@;bcd=515bdc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54754
DATA_CHT_1_COMPGEN(0x00915bdc, "t_script_action_factory<34>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CC@@@;vft=4ea700;col=515c14;td=5b4194;chd=515c04;offset=0;cdOffset=0;validated-hierarchy; map:54755
DATA_CHT_1_COMPGEN(0x00915bf4, "t_script_action_factory<34>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CC@@@;vft=4ea700;col=515c14;td=5b4194;chd=515c04;offset=0;cdOffset=0;validated-hierarchy; map:54756
DATA_CHT_1_COMPGEN(0x00915c04, "t_script_action_factory<34>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CC@@@;vft=4ea700;col=515c14;td=5b4194;chd=515c04;offset=0;cdOffset=0;validated-hierarchy; map:54757
DATA_CHT_1_COMPGEN(0x00915c14, "const t_script_action_factory<34>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_increase_population@@;bcd=515c28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54758
DATA_CHT_1_COMPGEN(0x00915c28, "t_script_increase_population::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CC@Vt_script_increase_population@@@@;bcd=515c40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54759
DATA_CHT_1_COMPGEN(0x00915c40, "t_script_action_base<34, t_script_increase_population>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CC@@@;bcd=515c58;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:54760
DATA_CHT_1_COMPGEN(0x00915c58, "t_script_action<34>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CC@@@;vft=4ea708;col=515c9c;td=5b423c;chd=515c8c;offset=0;cdOffset=0;validated-hierarchy; map:54761
DATA_CHT_1_COMPGEN(0x00915c70, "t_script_action<34>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CC@@@;vft=4ea708;col=515c9c;td=5b423c;chd=515c8c;offset=0;cdOffset=0;validated-hierarchy; map:54762
DATA_CHT_1_COMPGEN(0x00915c8c, "t_script_action<34>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CC@@@;vft=4ea708;col=515c9c;td=5b423c;chd=515c8c;offset=0;cdOffset=0;validated-hierarchy; map:54763
DATA_CHT_1_COMPGEN(0x00915c9c, "const t_script_action<34>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54764
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<34, t_script_increase_population>::`RTTI Base Class Array'")

// name:A; map symbol; map:54765
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<34, t_script_increase_population>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54766
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<34, t_script_increase_population>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:54767
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_population::`RTTI Base Class Array'")

// name:A; map symbol; map:54768
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_increase_population::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:54769
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_increase_population::`RTTI Complete Object Locator'")

// === .data (9 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0O@@@;td=5b4098;validated-header; map:59148
DATA_CHT_1_COMPGEN(0x009b4098, "t_script_action_factory<14> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_adjust_population@@;td=5b40c8;validated-header; map:59149
DATA_CHT_1_COMPGEN(0x009b40c8, "t_script_adjust_population `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_decrease_population@@;td=5b40f4;validated-header; map:59150
DATA_CHT_1_COMPGEN(0x009b40f4, "t_script_decrease_population `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0O@Vt_script_decrease_population@@@@;td=5b4120;validated-header; map:59151
DATA_CHT_1_COMPGEN(0x009b4120, "t_script_action_base<14, t_script_decrease_population> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0O@@@;td=5b416c;validated-header; map:59152
DATA_CHT_1_COMPGEN(0x009b416c, "t_script_action<14> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CC@@@;td=5b4194;validated-header; map:59153
DATA_CHT_1_COMPGEN(0x009b4194, "t_script_action_factory<34> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_increase_population@@;td=5b41c4;validated-header; map:59154
DATA_CHT_1_COMPGEN(0x009b41c4, "t_script_increase_population `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CC@Vt_script_increase_population@@@@;td=5b41f0;validated-header; map:59155
DATA_CHT_1_COMPGEN(0x009b41f0, "t_script_action_base<34, t_script_increase_population> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CC@@@;td=5b423c;validated-header; map:59156
DATA_CHT_1_COMPGEN(0x009b423c, "t_script_action<34> `RTTI Type Descriptor'")
