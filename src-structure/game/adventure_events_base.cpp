// adventure_events_base.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 26/60 (A:7 B:1 C:0); unaccounted 34; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (51 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:70633; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00490c30, 0x15, STATIC_INIT_DISPATCH, "adventure_events_base#1")

// name:C; dyninit; see ledger; map:70634
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "adventure_events_base#1")

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8239
VA_CHT_1(0x00490c50, 0x1ba)
t_counted_ptr<t_memory_buffer_counted> t_adventure_event_functions::create_event_buffer(
    t_adventure_object* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:8240
VA_CHT_1(0x00490ec0, 0x1a6)
t_counted_ptr<t_memory_buffer_counted> t_adventure_event_functions::create_state_cahce_buffer(
    t_adventure_object* arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:8241
VA_CHT_1(0x00491070, 0x272)
void t_adventure_event_functions::read_object_from_state_cache(
    t_adventure_object* arg_0,
    t_counted_ptr<t_memory_buffer_counted> arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; review-status=unreviewed;classification=D:not-a-best-guess; map:8242
VA_CHT_1(0x00491300, 0xfd)
t_adventure_object* t_adventure_event_functions::create_and_place_adv_object(
    t_adventure_map* arg_0,
    t_counted_ptr<t_memory_buffer_counted> arg_1,
    t_saved_game_header const& arg_2
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:8243
VA_CHT_1(0x00491400, 0x77)
t_adventure_event_base::t_adventure_event_base(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:8244
VA_CHT_1(0x00491510, 0x2e)
bool t_adventure_event_base::attach_event_to_cache(t_adventure_map* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8245
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_base::cancel_event()
{
    // Body unavailable.
}

// name:A; map symbol; map:8246
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_base::execute_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:8247
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_event_base::undo_event(t_adventure_map* arg_0, t_saved_game_header const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8248
VA_CHT_1(0x00491540, 0x1a)
bool t_adventure_event_base::finished()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8249
VA_CHT_1(0x00491560, 0x4)
bool t_adventure_event_base::is_valid()
{
    // Body unavailable.
}

// name:A; map symbol; map:8250
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_event_base::get_team_turn_on()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8251
VA_CHT_1(0x00491570, 0x8c)
bool t_adventure_event_base::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=91600:8252;class=t_adventure_event_base;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=4;checked-rtti-and-raw-slots;vft=4d3864,col=4fa514,offset=0,slot=6,entry=91600; map:8252
VA_CHT_1(0x00491600, 0x73)
bool t_adventure_event_base::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8253
VA_CHT_1(0x00491680, 0x1e)
void t_adventure_event_base::update()
{
    // Body unavailable.
}

// name:A; map symbol; map:8254
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_adventure_event_base::get_event_type()
{
    // Body unavailable.
}

// confidence:D; align-order; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8255
VA_CHT_1(0x004916a0, 0x2f)
void t_adventure_event_base::set_handler(t_handler_1<t_adventure_event_base*> const& arg_0)
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70635; name:B (dyninit; see ledger)
VA_CHT_1(0x004916d0, 0x20)
// adventure_events_base$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:70637; name:B (dyninit; see ledger)
VA_CHT_1(0x004916f0, 0x5c)
// adventure_events_base$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_base$tatexit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70639
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_base$tatexit3
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:70640
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// adventure_events_base$tatexit4
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:8256
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>::~t_counted_ptr<t_memory_buffer_counted>()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:8257
VA_CHT_1(0x004914a0, 0x68)
t_saved_game_header::t_saved_game_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:8258
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref::t_campaign_file_ref()
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:8259
VA_CHT_1(0x00490e10, 0xa3)
t_saved_game_header::~t_saved_game_header()
{
    // Body unavailable.
}

// name:A; map symbol; map:8260
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_campaign_file_ref::~t_campaign_file_ref()
{
    // Body unavailable.
}

// name:A; map symbol; map:8261
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_ref_body>::~t_counted_ptr<t_campaign_file_ref_body>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8262
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_float_object::t_float_object(t_adventure_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_float_object::~t_float_object()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:8264
VA_CHT_1_COMPGEN(0x00491480, 0x1e, SCALAR_DELETING_DTOR, t_adventure_event_base)

// name:A; map symbol; map:8265
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adventure_event_base)

// name:A; map symbol; map:8266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adventure_event_base::~t_adventure_event_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:8267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adventure_event_base*>::~t_handler_1<t_adventure_event_base*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>::~t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:8269
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adventure_event_base*>& t_handler_1<t_adventure_event_base*>::operator=(
    t_handler_1<t_adventure_event_base*> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8270
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_adventure_event_base*>::t_handler_1<t_adventure_event_base*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8271
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_1<t_adventure_event_base*>::operator()(t_adventure_event_base* arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:8272
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>::t_counted_ptr<t_memory_buffer_counted>(
    t_counted_ptr<t_memory_buffer_counted> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_memory_buffer_counted>::t_counted_ptr<t_memory_buffer_counted>(t_memory_buffer_counted* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8274
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_buffer_counted* t_counted_ptr<t_memory_buffer_counted>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_memory_buffer_counted& t_counted_ptr<t_memory_buffer_counted>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:8276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>::t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:8277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>& t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>::operator=(
    t_counted_ptr<t_handler_base_1<t_adventure_event_base*>> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:8278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_1<t_adventure_event_base*>& t_counted_ptr<t_handler_base_1<t_adventure_event_base*>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:8279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_campaign_file_ref_body>::t_counted_ptr<t_campaign_file_ref_body>()
{
    // Body unavailable.
}

// name:A; map symbol; map:8280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned int get(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:8281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void put(std::basic_streambuf<char, std::char_traits<char>>& arg_0, unsigned int const& arg_1)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:8282
VA_CHT_1_COMPGEN(0x00491750, 0x8, VECTOR_DELETING_DTOR, t_adventure_event_base)

// === .rdata (2 symbols) ===

// confidence:A; rtti-name; map:43168
DATA_CHT_1_COMPGEN(0x008d388c, "const t_adventure_event_base::`vftable'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:B; rtti-order; map:43169
DATA_CHT_1_COMPGEN(0x008d3864, "const t_adventure_event_base::`vftable'{for `t_counted_object'}")

// === .rdata$r (5 symbols) ===

// confidence:A; rtti-col-pointer; type-name=.?AVt_adventure_event_base@@;vft=4d388c;col=4fa4c8;td=58bf80;chd=4fa504;offset=8;cdOffset=0;validated-hierarchy; map:48654
DATA_CHT_1_COMPGEN(0x008fa4c8, "const t_adventure_event_base::`RTTI Complete Object Locator'{for `t_adventure_object_memory_cache_refrence'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adventure_event_base@@;bcd=4fa4dc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:48655
DATA_CHT_1_COMPGEN(0x008fa4dc, "t_adventure_event_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adventure_event_base@@;vft=4d388c;col=4fa4c8;td=58bf80;chd=4fa504;offset=8;cdOffset=0;validated-hierarchy; map:48656
DATA_CHT_1_COMPGEN(0x008fa4f4, "t_adventure_event_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adventure_event_base@@;vft=4d388c;col=4fa4c8;td=58bf80;chd=4fa504;offset=8;cdOffset=0;validated-hierarchy; map:48657
DATA_CHT_1_COMPGEN(0x008fa504, "t_adventure_event_base::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:48658
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_adventure_event_base::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (2 symbols) ===

// name:A; map symbol; map:57645
DATA_CHT_1(UNACCOUNTED)
int t_adventure_event_functions::k_memory_event_buffer_size; // Initial value unavailable.

// confidence:A; rtti-type-name; type-name=.?AVt_adventure_event_base@@;td=58bf80;validated-header; map:57646
DATA_CHT_1_COMPGEN(0x0098bf80, "t_adventure_event_base `RTTI Type Descriptor'")
