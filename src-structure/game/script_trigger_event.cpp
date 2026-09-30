// script_trigger_event.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 27/63 (A:16 B:0 C:0); unaccounted 36; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (39 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:62906; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a6e30, 0x15, STATIC_INIT_DISPATCH, "script_trigger_event#1")

// name:C; dyninit; see ledger; map:62907
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_trigger_event#1")

// name:A; map symbol; map:36638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_trigger_event::read_from_map(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_script_trigger_event::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36640
VA_CHT_1(0x007a6e60, 0x6f)
bool t_script_trigger_event::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36641
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_script_trigger_event::execute(t_script_context_hero const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36642
VA_CHT_1(0x007a6ed0, 0x28)
void t_script_trigger_event::execute(t_script_context_town const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36643
VA_CHT_1(0x007a6f00, 0x28)
void t_script_trigger_event::execute(t_script_context_object const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36644
VA_CHT_1(0x007a6f30, 0x28)
void t_script_trigger_event::execute(t_script_context_army const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:36645
VA_CHT_1(0x007a6f60, 0x26)
void t_script_trigger_event::execute(t_script_context_global const& arg_0) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62908; name:B (dyninit; see ledger)
VA_CHT_1(0x007a6f90, 0x49)
// script_trigger_event$tinit1
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62910
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<52,t_script_trigger_event>::k_factory")

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:62911; name:B (dyninit; see ledger)
VA_CHT_1(0x007a7110, 0x5c)
// script_trigger_event$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62912
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_trigger_event$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62913
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_trigger_event$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62914
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_trigger_event$tatexit5
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36646
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
std::string const& t_script_trigger_event::get_event_name() const
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:36647
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<52,t_script_trigger_event>::k_factory")

// name:A; dyninit; see ledger; map:36648
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<52,t_script_trigger_event>::k_factory")

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:36649
VA_CHT_1(0x007a7000, 0x14)
t_script_action_factory<52>::~t_script_action_factory<52>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36650
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<52>::t_script_action_factory<52>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36651
VA_CHT_1(0x007a7020, 0x47)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<52>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36652
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<52>::t_script_action<52>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36653
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<52, t_script_trigger_event>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36654
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<52, t_script_trigger_event>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<52>::t_script_action<52>(t_script_action<52> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:36656
VA_CHT_1_COMPGEN(0x007a7070, 0x8f, VECTOR_DELETING_DTOR, "t_script_action<52>")

// name:A; map symbol; map:36657
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<52>")

// name:A; map symbol; map:36658
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<52, t_script_trigger_event>::t_script_action_base<52, t_script_trigger_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36659
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<52, t_script_trigger_event>::t_script_action_base<52, t_script_trigger_event>(
    t_script_action_base<52, t_script_trigger_event> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36660
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<52>::~t_script_action<52>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36661
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<52, t_script_trigger_event>::~t_script_action_base<52, t_script_trigger_event>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36662
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<52, t_script_trigger_event>")

// name:A; map symbol; map:36663
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<52, t_script_trigger_event>")

// name:A; map symbol; map:36664
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_trigger_event::t_script_trigger_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:36665
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_trigger_event::~t_script_trigger_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:36666
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_trigger_event::t_script_trigger_event(t_script_trigger_event const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36667
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_trigger_event)

// name:A; map symbol; map:36668
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_trigger_event)

// === .rdata (4 symbols) ===

// confidence:A; rtti-name; map:45662
DATA_CHT_1_COMPGEN(0x008ebfc4, "const t_script_action_factory<52>::`vftable'")

// confidence:A; rtti-name; map:45663
DATA_CHT_1_COMPGEN(0x008ebfcc, "const t_script_action<52>::`vftable'")

// name:A; map symbol; map:45664
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<52, t_script_trigger_event>::`vftable'")

// name:A; map symbol; map:45665
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_trigger_event::`vftable'")

// === .rdata$r (16 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0DE@@@;bcd=51a078;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56025
DATA_CHT_1_COMPGEN(0x0091a078, "t_script_action_factory<52>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0DE@@@;vft=4ebfc4;col=51a0b0;td=5b89e4;chd=51a0a0;offset=0;cdOffset=0;validated-hierarchy; map:56026
DATA_CHT_1_COMPGEN(0x0091a090, "t_script_action_factory<52>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0DE@@@;vft=4ebfc4;col=51a0b0;td=5b89e4;chd=51a0a0;offset=0;cdOffset=0;validated-hierarchy; map:56027
DATA_CHT_1_COMPGEN(0x0091a0a0, "t_script_action_factory<52>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0DE@@@;vft=4ebfc4;col=51a0b0;td=5b89e4;chd=51a0a0;offset=0;cdOffset=0;validated-hierarchy; map:56028
DATA_CHT_1_COMPGEN(0x0091a0b0, "const t_script_action_factory<52>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_trigger_event@@;bcd=51a0c4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56029
DATA_CHT_1_COMPGEN(0x0091a0c4, "t_script_trigger_event::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0DE@Vt_script_trigger_event@@@@;bcd=51a0dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56030
DATA_CHT_1_COMPGEN(0x0091a0dc, "t_script_action_base<52, t_script_trigger_event>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0DE@@@;bcd=51a0f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56031
DATA_CHT_1_COMPGEN(0x0091a0f4, "t_script_action<52>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0DE@@@;vft=4ebfcc;col=51a134;td=5b8a84;chd=51a124;offset=0;cdOffset=0;validated-hierarchy; map:56032
DATA_CHT_1_COMPGEN(0x0091a10c, "t_script_action<52>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0DE@@@;vft=4ebfcc;col=51a134;td=5b8a84;chd=51a124;offset=0;cdOffset=0;validated-hierarchy; map:56033
DATA_CHT_1_COMPGEN(0x0091a124, "t_script_action<52>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0DE@@@;vft=4ebfcc;col=51a134;td=5b8a84;chd=51a124;offset=0;cdOffset=0;validated-hierarchy; map:56034
DATA_CHT_1_COMPGEN(0x0091a134, "const t_script_action<52>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56035
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<52, t_script_trigger_event>::`RTTI Base Class Array'")

// name:A; map symbol; map:56036
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<52, t_script_trigger_event>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56037
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<52, t_script_trigger_event>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56038
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_trigger_event::`RTTI Base Class Array'")

// name:A; map symbol; map:56039
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_trigger_event::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56040
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_trigger_event::`RTTI Complete Object Locator'")

// === .data (4 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0DE@@@;td=5b89e4;validated-header; map:59489
DATA_CHT_1_COMPGEN(0x009b89e4, "t_script_action_factory<52> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_trigger_event@@;td=5b8a14;validated-header; map:59490
DATA_CHT_1_COMPGEN(0x009b8a14, "t_script_trigger_event `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0DE@Vt_script_trigger_event@@@@;td=5b8a40;validated-header; map:59491
DATA_CHT_1_COMPGEN(0x009b8a40, "t_script_action_base<52, t_script_trigger_event> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0DE@@@;td=5b8a84;validated-header; map:59492
DATA_CHT_1_COMPGEN(0x009b8a84, "t_script_action<52> `RTTI Type Descriptor'")
