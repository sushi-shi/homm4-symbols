// mana_leech.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 122/274 (A:92 B:8 C:22); unaccounted 152; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (150 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:64560; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffd60, 0x15, STATIC_INIT_DISPATCH, "mana_leech#1")

// name:C; dyninit; see ledger; map:64561
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#1")

// confidence:A; dyninit-init; owner-conf-C; map:64562; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffd80, 0x15, STATIC_INIT_DISPATCH, "mana_leech#2")

// name:C; dyninit; see ledger; map:64563
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#2")

// confidence:A; dyninit-init; owner-conf-C; map:64564; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffda0, 0x15, STATIC_INIT_DISPATCH, "mana_leech#3")

// name:C; dyninit; see ledger; map:64565
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#3")

// confidence:A; dyninit-init; owner-conf-C; map:64566; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffdc0, 0x15, STATIC_INIT_DISPATCH, "mana_leech#4")

// name:C; dyninit; see ledger; map:64567
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#4")

// confidence:A; dyninit-init; owner-conf-C; map:64568; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffde0, 0x10, STATIC_INIT_DISPATCH, "mana_leech#5")

// name:C; dyninit; see ledger; map:64569
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#5")

// confidence:A; dyninit-init; owner-conf-C; map:64570; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffdf0, 0x15, STATIC_INIT_DISPATCH, "mana_leech#6")

// name:C; dyninit; see ledger; map:64571
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "mana_leech#6")

// confidence:A; dyninit-init; owner-conf-C; map:64572; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffe10, 0x11, STATIC_INIT_DISPATCH, "mana_leech#7")

// confidence:B; dyninit-ctor; owner-conf-C; map:64573; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006ffe30, 0xd1, STATIC_CTOR, "mana_leech#7")

// name:C; dyninit; see ledger; map:64574
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "mana_leech#7")

// confidence:B; dyninit-dtor; owner-conf-C; map:64575; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x006fff10, 0xa, STATIC_DTOR, "mana_leech#7")

// confidence:C; align-order; retn,stable; map:28705
VA_CHT_1(0x006fff20, 0x31a)
bool begin_mana_leech(t_battlefield& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:64576
VA_CHT_1(0x00700aa0, 0x4e)
static t_combat_creature* find_leech_target(t_battlefield& arg_0, t_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:64577
VA_CHT_1(0x00700af0, 0x173)
static void execute_leech(t_combat_creature& arg_0, t_combat_creature* arg_1, t_combat_action_message arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:64578
VA_CHT_1(0x00700cc0, 0x173)
static void leech_impact(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_combat_action_message arg_2
)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:64579
VA_CHT_1(0x007017d0, 0xb0)
static t_combat_creature* find_leech_recipient(t_battlefield& arg_0, t_combat_creature& arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:64580
VA_CHT_1(0x00701880, 0x21)
static bool knows_any_spells(t_combat_creature const& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:64581
VA_CHT_1(0x007018b0, 0xb0)
static void receive_mana(t_counted_ptr<t_combat_creature> arg_0, t_map_point_2d arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:64582; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x00701a40, 0x20, STATIC_INIT_DISPATCH, mana_leech)

// name:A; map symbol; map:28706
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_combat_creature::has_leeched() const
{
    // Body unavailable.
}

// name:A; map symbol; map:28707
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_combat_creature::set_leeched(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28708
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int> function_3_handler(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28709
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int> arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:28710
VA_CHT_1(0x00700860, 0x27)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28711
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28712
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> function_3_handler(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28713
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d> add_3rd_argument(
    t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> arg_0,
    t_combat_action_message arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28714
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::~t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28715
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>::~t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28716
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message> function_3_handler(
    void (* arg_0)(t_combat_creature&, t_combat_creature*, t_combat_action_message)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28717
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_combat_creature*> add_3rd_argument(
    t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message> arg_0,
    t_combat_action_message arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28718
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::~t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28719
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_combat_creature*>::~t_handler_2<t_combat_creature&, t_combat_creature*>()
{
    // Body unavailable.
}

// name:A; map symbol; map:28720
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>::~t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28721
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>::~t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28722
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> add_2nd_argument(
    t_handler_2<t_combat_creature&, t_combat_creature*> arg_0,
    t_combat_creature* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28723
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_1<t_combat_creature&> discard_argument(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28724
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28725
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28726
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28727
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>* t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28728
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>(
    t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28729
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>* t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::operator t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28730
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_2<t_combat_creature&, t_combat_creature*>::t_handler_2<t_combat_creature&, t_combat_creature*>(
    t_handler_base_2<t_combat_creature&, t_combat_creature*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28731
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_combat_creature*>* t_handler_2<t_combat_creature&, t_combat_creature*>::operator t_handler_base_2<t_combat_creature&, t_combat_creature*>*(

) const
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:28732
VA_CHT_1(0x00700240, 0x39)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28733
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    int arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28734
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>* arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:28735
VA_CHT_1(0x00700ff0, 0xc7)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28736
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(
    void (* arg_0)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_combat_action_message arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28738
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>* arg_0,
    t_combat_action_message arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; stable,vslot; map:28739
VA_CHT_1(0x007011e0, 0x171)
void t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28740
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>(
    void (* arg_0)(t_combat_creature&, t_combat_creature*, t_combat_action_message)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28741
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::operator()(
    t_combat_creature& arg_0,
    t_combat_creature* arg_1,
    t_combat_action_message arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28742
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>(
    t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>* arg_0,
    t_combat_action_message arg_1
)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28743
VA_CHT_1(0x00701430, 0x126)
void t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::operator()(
    t_combat_creature& arg_0,
    t_combat_creature* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28744
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>(
    t_handler_base_2<t_combat_creature&, t_combat_creature*>* arg_0,
    t_combat_creature* arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28745
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28746
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_handler_1<t_combat_creature&>::t_discard_handler_1<t_combat_creature&>(t_handler_base* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:28747
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_discard_handler_1<t_combat_creature&>::operator()(t_combat_creature& arg_0)
{
    // Body unavailable.
}

// confidence:C; align-band; retn,stable; map:28748
VA_CHT_1_COMPGEN(0x00701560, 0x1e, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// confidence:C; align-band; retn,stable; map:28749
VA_CHT_1_COMPGEN(0x00701620, 0x1e, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// confidence:C; align-band; retn,stable; map:28750
VA_CHT_1(0x00701740, 0x58)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28751
VA_CHT_1_COMPGEN(0x007015a0, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28752
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28753
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28754
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// confidence:C; align-band; retn,stable; map:28755
VA_CHT_1(0x00701980, 0x58)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28756
VA_CHT_1_COMPGEN(0x00701600, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28757
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28758
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28759
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// confidence:C; align-band; retn,stable; map:28760
VA_CHT_1(0x007019e0, 0x58)
t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28761
VA_CHT_1_COMPGEN(0x00701660, 0x1e, SCALAR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28762
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_combat_creature*>::t_handler_base_2<t_combat_creature&, t_combat_creature*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_combat_creature*>::~t_handler_base_2<t_combat_creature&, t_combat_creature*>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:28765
VA_CHT_1(0x00701680, 0x21)
t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::~t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28766
VA_CHT_1_COMPGEN(0x007016b0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>")

// name:A; map symbol; map:28767
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>")

// confidence:A; align-band; retn,stable,vslot; map:28768
VA_CHT_1_COMPGEN(0x007016d0, 0x1e, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>")

// name:A; map symbol; map:28769
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>")

// confidence:A; align-band; retn,stable,vslot; map:28770
VA_CHT_1_COMPGEN(0x007016f0, 0x1e, VECTOR_DELETING_DTOR, "t_discard_handler_1<t_combat_creature&>")

// name:A; map symbol; map:28771
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_discard_handler_1<t_combat_creature&>")

// name:A; map symbol; map:28772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::~t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:28774
VA_CHT_1(0x00701710, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28775
VA_CHT_1_COMPGEN(0x00701580, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28776
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28777
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28778
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// confidence:A; align-band; retn,stable,vptr; map:28779
VA_CHT_1(0x00700990, 0x4e)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28781
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::~t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28782
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::~t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:28783
VA_CHT_1(0x007017a0, 0x21)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::~t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28784
VA_CHT_1_COMPGEN(0x007015e0, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28785
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// name:A; map symbol; map:28788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28789
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::~t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::~t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::~t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:28792
VA_CHT_1(0x00700c70, 0x4e)
t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::~t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28793
VA_CHT_1_COMPGEN(0x00701640, 0x20, VECTOR_DELETING_DTOR, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28794
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28796
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// name:A; map symbol; map:28797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::~t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:28799
VA_CHT_1_COMPGEN(0x00701960, 0x1e, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_combat_creature*>")

// name:A; map symbol; map:28800
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_combat_creature*>")

// name:A; map symbol; map:28801
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::~t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:28803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_discard_handler_1<t_combat_creature&>::~t_discard_handler_1<t_combat_creature&>()
{
    // Body unavailable.
}

// name:A; map symbol; map:28804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    int arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::operator()(
    t_counted_ptr<t_combat_creature> arg_0,
    t_map_point_2d arg_1,
    t_combat_action_message arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::operator()(
    t_combat_creature& arg_0,
    t_combat_creature* arg_1,
    t_combat_action_message arg_2
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_handler_2<t_combat_creature&, t_combat_creature*>::operator()(
    t_combat_creature& arg_0,
    t_combat_creature* arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28808
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>::t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>(
    t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>* t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>::operator t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28813
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>& t_counted_ptr<t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28814
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>::t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>(
    t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>* t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>::operator t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>& t_counted_ptr<t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>::t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>(
    t_handler_base_2<t_combat_creature&, t_combat_creature*>* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:28818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_combat_creature*>* t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>::operator t_handler_base_2<t_combat_creature&, t_combat_creature*>*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28819
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler_base_2<t_combat_creature&, t_combat_creature*>& t_counted_ptr<t_handler_base_2<t_combat_creature&, t_combat_creature*>>::operator*(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:28820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// name:A; map symbol; map:28821
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_discard_handler_1<t_combat_creature&>")

// name:A; map symbol; map:28822
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_handler_base_2<t_combat_creature&, t_combat_creature*>")

// name:A; map symbol; map:28823
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// confidence:C; align-order; stable; map:28824
VA_CHT_1_COMPGEN(0x00701a70, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// confidence:C; align-order; stable; map:28825
VA_CHT_1_COMPGEN(0x00701a80, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// confidence:C; align-order; stable; map:28826
VA_CHT_1_COMPGEN(0x00701a90, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// confidence:C; align-order; stable; map:28827
VA_CHT_1_COMPGEN(0x00701aa0, 0x8, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// confidence:C; align-order; stable; map:28828
VA_CHT_1_COMPGEN(0x00701ab0, 0x8, VECTOR_DELETING_DTOR, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>")

// confidence:C; align-order; stable; map:28829
VA_CHT_1_COMPGEN(0x00701ac0, 0x8, VECTOR_DELETING_DTOR, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>")

// confidence:C; align-order; stable; map:28830
VA_CHT_1_COMPGEN(0x00701ad0, 0x8, VECTOR_DELETING_DTOR, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>")

// confidence:C; align-order; stable; map:28831
VA_CHT_1_COMPGEN(0x00701ae0, 0x8, VECTOR_DELETING_DTOR, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>")

// === .rdata (28 symbols) ===

// name:A; map symbol; map:44745
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>'}")

// name:A; map symbol; map:44746
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44747
DATA_CHT_1_COMPGEN(0x008e4cdc, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:44748
DATA_CHT_1_COMPGEN(0x008e4ce8, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44749
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>'}")

// name:A; map symbol; map:44750
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44751
DATA_CHT_1_COMPGEN(0x008e4d10, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:B; rtti-order; map:44752
DATA_CHT_1_COMPGEN(0x008e4d1c, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44753
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>'}")

// name:A; map symbol; map:44754
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44755
DATA_CHT_1_COMPGEN(0x008e4d44, "const t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>'}")

// confidence:B; rtti-order; map:44756
DATA_CHT_1_COMPGEN(0x008e4d50, "const t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44757
DATA_CHT_1_COMPGEN(0x008e4d78, "const t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:44758
DATA_CHT_1_COMPGEN(0x008e4d84, "const t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44759
DATA_CHT_1_COMPGEN(0x008e4d8c, "const t_discard_handler_1<t_combat_creature&>::`vftable'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:B; rtti-order; map:44760
DATA_CHT_1_COMPGEN(0x008e4d98, "const t_discard_handler_1<t_combat_creature&>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44761
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>'}")

// name:A; map symbol; map:44762
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44763
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>'}")

// name:A; map symbol; map:44764
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// name:A; map symbol; map:44765
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>'}")

// name:A; map symbol; map:44766
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44767
DATA_CHT_1_COMPGEN(0x008e4d58, "const t_handler_base_2<t_combat_creature&, t_combat_creature*>::`vftable'{for `t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>'}")

// confidence:B; rtti-order; map:44768
DATA_CHT_1_COMPGEN(0x008e4d64, "const t_handler_base_2<t_combat_creature&, t_combat_creature*>::`vftable'{for `t_counted_object'}")

// confidence:A; rtti-name; map:44769
DATA_CHT_1_COMPGEN(0x008e4d6c, "const t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`vftable'")

// confidence:A; rtti-name; map:44770
DATA_CHT_1_COMPGEN(0x008e4cd0, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`vftable'")

// confidence:A; rtti-name; map:44771
DATA_CHT_1_COMPGEN(0x008e4d04, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`vftable'")

// confidence:A; rtti-name; map:44772
DATA_CHT_1_COMPGEN(0x008e4d38, "const t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`vftable'")

// === .rdata$r (80 symbols) ===

// name:A; map symbol; map:53115
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>'}")

// name:A; map symbol; map:53116
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:53117
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53118
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53119
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Array'")

// name:A; map symbol; map:53120
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53121
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cdc;col=50eae0;td=5ab4d8;chd=50ead0;offset=8;cdOffset=0;validated-hierarchy; map:53122
DATA_CHT_1_COMPGEN(0x0090eae0, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;bcd=50eaa4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53123
DATA_CHT_1_COMPGEN(0x0090eaa4, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cdc;col=50eae0;td=5ab4d8;chd=50ead0;offset=8;cdOffset=0;validated-hierarchy; map:53124
DATA_CHT_1_COMPGEN(0x0090eabc, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cdc;col=50eae0;td=5ab4d8;chd=50ead0;offset=8;cdOffset=0;validated-hierarchy; map:53125
DATA_CHT_1_COMPGEN(0x0090ead0, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53126
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53127
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;bcd=50eb4c;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53128
DATA_CHT_1_COMPGEN(0x0090eb4c, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;bcd=50eb64;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53129
DATA_CHT_1_COMPGEN(0x0090eb64, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53130
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53131
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Array'")

// name:A; map symbol; map:53132
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53133
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d10;col=50ec1c;td=5ab6b8;chd=50ec0c;offset=8;cdOffset=0;validated-hierarchy; map:53134
DATA_CHT_1_COMPGEN(0x0090ec1c, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_counted_ptr<t_combat_creature>, t_map_point_2d>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;bcd=50ebe0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53135
DATA_CHT_1_COMPGEN(0x0090ebe0, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d10;col=50ec1c;td=5ab6b8;chd=50ec0c;offset=8;cdOffset=0;validated-hierarchy; map:53136
DATA_CHT_1_COMPGEN(0x0090ebf8, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d10;col=50ec1c;td=5ab6b8;chd=50ec0c;offset=8;cdOffset=0;validated-hierarchy; map:53137
DATA_CHT_1_COMPGEN(0x0090ec0c, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53138
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53139
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>'}")

// name:A; map symbol; map:53140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// name:A; map symbol; map:53141
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53142
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// name:A; map symbol; map:53143
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Array'")

// name:A; map symbol; map:53144
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53145
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d44;col=50ee14;td=5ab8e0;chd=50ee04;offset=8;cdOffset=0;validated-hierarchy; map:53146
DATA_CHT_1_COMPGEN(0x0090ee14, "const t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;bcd=50eda8;pmd=8,-1,0;attributes=0;validated-hierarchy-link; map:53147
DATA_CHT_1_COMPGEN(0x0090eda8, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`RTTI Base Class Descriptor at (8, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@PAV1@@@;bcd=50edc0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53148
DATA_CHT_1_COMPGEN(0x0090edc0, "t_handler_base_2<t_combat_creature&, t_combat_creature*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;bcd=50edd8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53149
DATA_CHT_1_COMPGEN(0x0090edd8, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d44;col=50ee14;td=5ab8e0;chd=50ee04;offset=8;cdOffset=0;validated-hierarchy; map:53150
DATA_CHT_1_COMPGEN(0x0090edf0, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d44;col=50ee14;td=5ab8e0;chd=50ee04;offset=8;cdOffset=0;validated-hierarchy; map:53151
DATA_CHT_1_COMPGEN(0x0090ee04, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53152
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@PAV1@@@;vft=4e4d78;col=50ee78;td=5ab940;chd=50ee68;offset=8;cdOffset=0;validated-hierarchy; map:53153
DATA_CHT_1_COMPGEN(0x0090ee78, "const t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@PAV1@@@;bcd=50ee3c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53154
DATA_CHT_1_COMPGEN(0x0090ee3c, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@PAV1@@@;vft=4e4d78;col=50ee78;td=5ab940;chd=50ee68;offset=8;cdOffset=0;validated-hierarchy; map:53155
DATA_CHT_1_COMPGEN(0x0090ee54, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@PAV1@@@;vft=4e4d78;col=50ee78;td=5ab940;chd=50ee68;offset=8;cdOffset=0;validated-hierarchy; map:53156
DATA_CHT_1_COMPGEN(0x0090ee68, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53157
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_discard_handler_1@AAVt_combat_creature@@@@;vft=4e4d8c;col=50eedc;td=5ab980;chd=50eecc;offset=8;cdOffset=0;validated-hierarchy; map:53158
DATA_CHT_1_COMPGEN(0x0090eedc, "const t_discard_handler_1<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_abstract_function_1<void, t_combat_creature&>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_discard_handler_1@AAVt_combat_creature@@@@;bcd=50eea0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53159
DATA_CHT_1_COMPGEN(0x0090eea0, "t_discard_handler_1<t_combat_creature&>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_discard_handler_1@AAVt_combat_creature@@@@;vft=4e4d8c;col=50eedc;td=5ab980;chd=50eecc;offset=8;cdOffset=0;validated-hierarchy; map:53160
DATA_CHT_1_COMPGEN(0x0090eeb8, "t_discard_handler_1<t_combat_creature&>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_discard_handler_1@AAVt_combat_creature@@@@;vft=4e4d8c;col=50eedc;td=5ab980;chd=50eecc;offset=8;cdOffset=0;validated-hierarchy; map:53161
DATA_CHT_1_COMPGEN(0x0090eecc, "t_discard_handler_1<t_combat_creature&>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53162
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_discard_handler_1<t_combat_creature&>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53163
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>'}")

// name:A; map symbol; map:53164
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Array'")

// name:A; map symbol; map:53165
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53166
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53167
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>'}")

// name:A; map symbol; map:53168
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Array'")

// name:A; map symbol; map:53169
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53170
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// name:A; map symbol; map:53171
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>'}")

// name:A; map symbol; map:53172
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Array'")

// name:A; map symbol; map:53173
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53174
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@PAV1@@@;vft=4e4d58;col=50ed80;td=5ab89c;chd=50ed70;offset=8;cdOffset=0;validated-hierarchy; map:53175
DATA_CHT_1_COMPGEN(0x0090ed80, "const t_handler_base_2<t_combat_creature&, t_combat_creature*>::`RTTI Complete Object Locator'{for `t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@PAV1@@@;vft=4e4d58;col=50ed80;td=5ab89c;chd=50ed70;offset=8;cdOffset=0;validated-hierarchy; map:53176
DATA_CHT_1_COMPGEN(0x0090ed60, "t_handler_base_2<t_combat_creature&, t_combat_creature*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@PAV1@@@;vft=4e4d58;col=50ed80;td=5ab89c;chd=50ed70;offset=8;cdOffset=0;validated-hierarchy; map:53177
DATA_CHT_1_COMPGEN(0x0090ed70, "t_handler_base_2<t_combat_creature&, t_combat_creature*>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53178
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_handler_base_2<t_combat_creature&, t_combat_creature*>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;bcd=50ed08;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53179
DATA_CHT_1_COMPGEN(0x0090ed08, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;vft=4e4d6c;col=50ed38;td=5ab858;chd=50ed28;offset=0;cdOffset=0;validated-hierarchy; map:53180
DATA_CHT_1_COMPGEN(0x0090ed20, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;vft=4e4d6c;col=50ed38;td=5ab858;chd=50ed28;offset=0;cdOffset=0;validated-hierarchy; map:53181
DATA_CHT_1_COMPGEN(0x0090ed28, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;vft=4e4d6c;col=50ed38;td=5ab858;chd=50ed28;offset=0;cdOffset=0;validated-hierarchy; map:53182
DATA_CHT_1_COMPGEN(0x0090ed38, "const t_abstract_function_2<void, t_combat_creature&, t_combat_creature*>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;bcd=50e9b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53183
DATA_CHT_1_COMPGEN(0x0090e9b8, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cd0;col=50e9e8;td=5ab3a0;chd=50e9d8;offset=0;cdOffset=0;validated-hierarchy; map:53184
DATA_CHT_1_COMPGEN(0x0090e9d0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cd0;col=50e9e8;td=5ab3a0;chd=50e9d8;offset=0;cdOffset=0;validated-hierarchy; map:53185
DATA_CHT_1_COMPGEN(0x0090e9d8, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;vft=4e4cd0;col=50e9e8;td=5ab3a0;chd=50e9d8;offset=0;cdOffset=0;validated-hierarchy; map:53186
DATA_CHT_1_COMPGEN(0x0090e9e8, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;bcd=50eaf4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53187
DATA_CHT_1_COMPGEN(0x0090eaf4, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d04;col=50eb24;td=5ab538;chd=50eb14;offset=0;cdOffset=0;validated-hierarchy; map:53188
DATA_CHT_1_COMPGEN(0x0090eb0c, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d04;col=50eb24;td=5ab538;chd=50eb14;offset=0;cdOffset=0;validated-hierarchy; map:53189
DATA_CHT_1_COMPGEN(0x0090eb14, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;vft=4e4d04;col=50eb24;td=5ab538;chd=50eb14;offset=0;cdOffset=0;validated-hierarchy; map:53190
DATA_CHT_1_COMPGEN(0x0090eb24, "const t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;bcd=50ec30;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53191
DATA_CHT_1_COMPGEN(0x0090ec30, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d38;col=50ec60;td=5ab730;chd=50ec50;offset=0;cdOffset=0;validated-hierarchy; map:53192
DATA_CHT_1_COMPGEN(0x0090ec48, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d38;col=50ec60;td=5ab730;chd=50ec50;offset=0;cdOffset=0;validated-hierarchy; map:53193
DATA_CHT_1_COMPGEN(0x0090ec50, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;vft=4e4d38;col=50ec60;td=5ab730;chd=50ec50;offset=0;cdOffset=0;validated-hierarchy; map:53194
DATA_CHT_1_COMPGEN(0x0090ec60, "const t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message>::`RTTI Complete Object Locator'")

// === .data (16 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;td=5ab3a0;validated-header; map:58759
DATA_CHT_1_COMPGEN(0x009ab3a0, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;td=5ab408;validated-header; map:58760
DATA_CHT_1_COMPGEN(0x009ab408, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, int> `RTTI Type Descriptor'")

// name:A; map symbol; map:58761
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, int), t_counted_ptr<t_combat_creature>, t_map_point_2d, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@H@@;td=5ab4d8;validated-header; map:58762
DATA_CHT_1_COMPGEN(0x009ab4d8, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, int> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XV?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;td=5ab538;validated-header; map:58763
DATA_CHT_1_COMPGEN(0x009ab538, "t_abstract_function_3<void, t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;td=5ab5b8;validated-header; map:58764
DATA_CHT_1_COMPGEN(0x009ab5b8, "t_handler_base_3<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> `RTTI Type Descriptor'")

// name:A; map symbol; map:58765
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message), t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@V?$t_counted_ptr@Vt_combat_creature@@@@Ut_map_point_2d@@Vt_combat_action_message@@@@;td=5ab6b8;validated-header; map:58766
DATA_CHT_1_COMPGEN(0x009ab6b8, "t_add_3rd_handler_2<t_counted_ptr<t_combat_creature>, t_map_point_2d, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_3@XAAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;td=5ab730;validated-header; map:58767
DATA_CHT_1_COMPGEN(0x009ab730, "t_abstract_function_3<void, t_combat_creature&, t_combat_creature*, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_3@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;td=5ab790;validated-header; map:58768
DATA_CHT_1_COMPGEN(0x009ab790, "t_handler_base_3<t_combat_creature&, t_combat_creature*, t_combat_action_message> `RTTI Type Descriptor'")

// name:A; map symbol; map:58769
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_function_handler_3<void (*)(t_combat_creature&, t_combat_creature*, t_combat_action_message), t_combat_creature&, t_combat_creature*, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_abstract_function_2@XAAVt_combat_creature@@PAV1@@@;td=5ab858;validated-header; map:58770
DATA_CHT_1_COMPGEN(0x009ab858, "t_abstract_function_2<void, t_combat_creature&, t_combat_creature*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_handler_base_2@AAVt_combat_creature@@PAV1@@@;td=5ab89c;validated-header; map:58771
DATA_CHT_1_COMPGEN(0x009ab89c, "t_handler_base_2<t_combat_creature&, t_combat_creature*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_3rd_handler_2@AAVt_combat_creature@@PAV1@Vt_combat_action_message@@@@;td=5ab8e0;validated-header; map:58772
DATA_CHT_1_COMPGEN(0x009ab8e0, "t_add_3rd_handler_2<t_combat_creature&, t_combat_creature*, t_combat_action_message> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_add_2nd_handler_1@AAVt_combat_creature@@PAV1@@@;td=5ab940;validated-header; map:58773
DATA_CHT_1_COMPGEN(0x009ab940, "t_add_2nd_handler_1<t_combat_creature&, t_combat_creature*> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_discard_handler_1@AAVt_combat_creature@@@@;td=5ab980;validated-header; map:58774
DATA_CHT_1_COMPGEN(0x009ab980, "t_discard_handler_1<t_combat_creature&> `RTTI Type Descriptor'")
