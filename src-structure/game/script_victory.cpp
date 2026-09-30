// script_victory.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 86/204 (A:82 B:4 C:0); unaccounted 118; skipped std 1.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (108 symbols) ===

// confidence:A; dyninit-init; owner-conf-C; map:62880; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007a77f0, 0x15, STATIC_INIT_DISPATCH, "script_victory#1")

// name:C; dyninit; see ledger; map:62881
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "script_victory#1")

// confidence:B; align-order; retn,stable; map:36733
VA_CHT_1(0x007a7810, 0x88)
void t_script_win_game::do_action(t_adventure_map* arg_0, t_player* arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36734
VA_CHT_1(0x007a78a0, 0x33)
void t_script_lose_game::do_action(t_adventure_map* arg_0, t_player* arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36735
VA_CHT_1(0x007a78e0, 0xe)
void t_script_action_disable_std_victory_condition::do_action(t_adventure_map* arg_0, t_player* arg_1) const
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:36736
VA_CHT_1(0x007a78f0, 0xe)
void t_script_action_enable_std_victory_condition::do_action(t_adventure_map* arg_0, t_player* arg_1) const
{
    // Body unavailable.
}

// confidence:A; dyninit-tinit; owner-conf-B; map:62882; name:B (dyninit; see ledger)
VA_CHT_1(0x007a7900, 0x15a)
// script_victory$tinit1
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:62884; name:C (dyninit; see ledger)
VA_CHT_1(0x007a7a80, 0x1f)
// t_script_action_base<2,t_script_player_action>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:62885; name:C (dyninit; see ledger)
VA_CHT_1(0x007a7aa0, 0x1f)
// t_script_action_base<3,t_script_player_action>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// confidence:A; align-order; atexit,stable; map:62886; name:C (dyninit; see ledger)
VA_CHT_1(0x007a7ac0, 0x1f)
// t_script_action_base<4,t_script_player_action>::k_factory$atexit
// Function body not reconstructed; signature retained as a comment.

// name:C; dyninit; see ledger; map:62887
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<5,t_script_player_action>::k_factory")

// name:C; dyninit; see ledger; map:62888
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<53,t_script_win_game>::k_factory")

// name:C; dyninit; see ledger; map:62889
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<38,t_script_lose_game>::k_factory")

// name:C; dyninit; see ledger; map:62890
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<17,t_script_action_disable_std_victory_condition>::k_factory")

// name:C; dyninit; see ledger; map:62891
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_ATEXIT, "t_script_action_base<19,t_script_action_enable_std_victory_condition>::k_factory")

// confidence:A; dyninit-tinit; owner-conf-B; map:62892; name:B (dyninit; see ledger)
VA_CHT_1(0x007a7e20, 0x5c)
// script_victory$tinit2
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62893
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_victory$tatexit10
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62894
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_victory$tatexit11
// Function body not reconstructed; signature retained as a comment.

// name:B; dyninit; see ledger; map:62895
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// script_victory$tatexit12
// Function body not reconstructed; signature retained as a comment.

// name:A; map symbol; map:36737
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_adventure_map::set_standard_victory_condition(bool arg_0)
{
    // Body unavailable.
}

// name:A; dyninit; see ledger; map:36738
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<53,t_script_win_game>::k_factory")

// name:A; dyninit; see ledger; map:36739
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<38,t_script_lose_game>::k_factory")

// name:A; dyninit; see ledger; map:36740
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<17,t_script_action_disable_std_victory_condition>::k_factory")

// name:A; dyninit; see ledger; map:36741
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "t_script_action_base<19,t_script_action_enable_std_victory_condition>::k_factory")

// name:A; dyninit; see ledger; map:36742
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<19,t_script_action_enable_std_victory_condition>::k_factory")

// name:A; dyninit; see ledger; map:36743
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<17,t_script_action_disable_std_victory_condition>::k_factory")

// name:A; dyninit; see ledger; map:36744
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<38,t_script_lose_game>::k_factory")

// name:A; dyninit; see ledger; map:36745
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_DTOR, "t_script_action_base<53,t_script_win_game>::k_factory")

// confidence:A; align-band; retn,stable,vptr; map:36746
VA_CHT_1(0x007a7ae0, 0x14)
t_script_action_factory<53>::~t_script_action_factory<53>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36747
VA_CHT_1(0x007a7bb0, 0x14)
t_script_action_factory<38>::~t_script_action_factory<38>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36748
VA_CHT_1(0x007a7c80, 0x14)
t_script_action_factory<17>::~t_script_action_factory<17>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vptr; map:36749
VA_CHT_1(0x007a7d50, 0x14)
t_script_action_factory<19>::~t_script_action_factory<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36750
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<53>::t_script_action_factory<53>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36751
VA_CHT_1(0x007a7b00, 0x42)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<53>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36752
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<53>::t_script_action<53>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36753
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<53, t_script_win_game>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36754
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<53, t_script_win_game>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36755
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<53>::t_script_action<53>(t_script_action<53> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36756
VA_CHT_1_COMPGEN(0x007a7b50, 0x4b, VECTOR_DELETING_DTOR, "t_script_action<53>")

// name:A; map symbol; map:36757
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<53>")

// name:A; map symbol; map:36758
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<53, t_script_win_game>::t_script_action_base<53, t_script_win_game>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<53, t_script_win_game>::t_script_action_base<53, t_script_win_game>(
    t_script_action_base<53, t_script_win_game> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<53>::~t_script_action<53>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<53, t_script_win_game>::~t_script_action_base<53, t_script_win_game>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36762
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<53, t_script_win_game>")

// name:A; map symbol; map:36763
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<53, t_script_win_game>")

// name:A; map symbol; map:36764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_win_game::t_script_win_game()
{
    // Body unavailable.
}

// name:A; map symbol; map:36765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_win_game::~t_script_win_game()
{
    // Body unavailable.
}

// name:A; map symbol; map:36766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_win_game::t_script_win_game(t_script_win_game const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36767
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_win_game)

// name:A; map symbol; map:36768
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_win_game)

// name:A; map symbol; map:36769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<38>::t_script_action_factory<38>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36770
VA_CHT_1(0x007a7bd0, 0x42)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<38>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<38>::t_script_action<38>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<38, t_script_lose_game>::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<38, t_script_lose_game>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<38>::t_script_action<38>(t_script_action<38> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36775
VA_CHT_1_COMPGEN(0x007a7c20, 0x4b, VECTOR_DELETING_DTOR, "t_script_action<38>")

// name:A; map symbol; map:36776
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<38>")

// name:A; map symbol; map:36777
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<38, t_script_lose_game>::t_script_action_base<38, t_script_lose_game>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36778
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<38, t_script_lose_game>::t_script_action_base<38, t_script_lose_game>(
    t_script_action_base<38, t_script_lose_game> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36779
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<38>::~t_script_action<38>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36780
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<38, t_script_lose_game>::~t_script_action_base<38, t_script_lose_game>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36781
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<38, t_script_lose_game>")

// name:A; map symbol; map:36782
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<38, t_script_lose_game>")

// name:A; map symbol; map:36783
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_lose_game::t_script_lose_game()
{
    // Body unavailable.
}

// name:A; map symbol; map:36784
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_lose_game::~t_script_lose_game()
{
    // Body unavailable.
}

// name:A; map symbol; map:36785
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_lose_game::t_script_lose_game(t_script_lose_game const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:36786
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_lose_game)

// name:A; map symbol; map:36787
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_lose_game)

// name:A; map symbol; map:36788
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<17>::t_script_action_factory<17>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36789
VA_CHT_1(0x007a7ca0, 0x42)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<17>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36790
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<17>::t_script_action<17>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36791
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<17, t_script_action_disable_std_victory_condition>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36792
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<17, t_script_action_disable_std_victory_condition>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36793
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<17>::t_script_action<17>(t_script_action<17> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36794
VA_CHT_1_COMPGEN(0x007a7cf0, 0x4b, VECTOR_DELETING_DTOR, "t_script_action<17>")

// name:A; map symbol; map:36795
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action<17>")

// name:A; map symbol; map:36796
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<17, t_script_action_disable_std_victory_condition>::t_script_action_base<17, t_script_action_disable_std_victory_condition>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36797
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<17, t_script_action_disable_std_victory_condition>::t_script_action_base<17, t_script_action_disable_std_victory_condition>(
    t_script_action_base<17, t_script_action_disable_std_victory_condition> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36798
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<17>::~t_script_action<17>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<17, t_script_action_disable_std_victory_condition>::~t_script_action_base<17, t_script_action_disable_std_victory_condition>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36800
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<17, t_script_action_disable_std_victory_condition>")

// name:A; map symbol; map:36801
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<17, t_script_action_disable_std_victory_condition>")

// name:A; map symbol; map:36802
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_disable_std_victory_condition::t_script_action_disable_std_victory_condition()
{
    // Body unavailable.
}

// name:A; map symbol; map:36803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_disable_std_victory_condition::~t_script_action_disable_std_victory_condition()
{
    // Body unavailable.
}

// name:A; map symbol; map:36804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_disable_std_victory_condition::t_script_action_disable_std_victory_condition(
    t_script_action_disable_std_victory_condition const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36805
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_action_disable_std_victory_condition)

// name:A; map symbol; map:36806
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_action_disable_std_victory_condition)

// name:A; map symbol; map:36807
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_factory<19>::t_script_action_factory<19>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36808
VA_CHT_1(0x007a7d70, 0x42)
t_counted_ptr<t_abstract_script_action> t_script_action_factory<19>::create() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36809
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<19>::t_script_action<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36810
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_script_action> t_script_action_base<19, t_script_action_enable_std_victory_condition>::clone(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:36811
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_type t_script_action_base<19, t_script_action_enable_std_victory_condition>::get_type() const
{
    // Body unavailable.
}

// name:A; map symbol; map:36812
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<19>::t_script_action<19>(t_script_action<19> const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:36813
VA_CHT_1_COMPGEN(0x007a7dc0, 0x4b, SCALAR_DELETING_DTOR, "t_script_action<19>")

// name:A; map symbol; map:36814
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action<19>")

// name:A; map symbol; map:36815
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<19, t_script_action_enable_std_victory_condition>::t_script_action_base<19, t_script_action_enable_std_victory_condition>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36816
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<19, t_script_action_enable_std_victory_condition>::t_script_action_base<19, t_script_action_enable_std_victory_condition>(
    t_script_action_base<19, t_script_action_enable_std_victory_condition> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36817
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action<19>::~t_script_action<19>()
{
    // Body unavailable.
}

// name:A; map symbol; map:36818
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_base<19, t_script_action_enable_std_victory_condition>::~t_script_action_base<19, t_script_action_enable_std_victory_condition>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:36819
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_script_action_base<19, t_script_action_enable_std_victory_condition>")

// name:A; map symbol; map:36820
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_script_action_base<19, t_script_action_enable_std_victory_condition>")

// name:A; map symbol; map:36821
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_enable_std_victory_condition::t_script_action_enable_std_victory_condition()
{
    // Body unavailable.
}

// name:A; map symbol; map:36822
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_enable_std_victory_condition::~t_script_action_enable_std_victory_condition()
{
    // Body unavailable.
}

// name:A; map symbol; map:36823
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_script_action_enable_std_victory_condition::t_script_action_enable_std_victory_condition(
    t_script_action_enable_std_victory_condition const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:36824
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_script_action_enable_std_victory_condition)

// name:A; map symbol; map:36825
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_script_action_enable_std_victory_condition)

// === .rdata (16 symbols) ===

// confidence:A; rtti-name; map:45676
DATA_CHT_1_COMPGEN(0x008ec084, "const t_script_action_factory<53>::`vftable'")

// confidence:A; rtti-name; map:45677
DATA_CHT_1_COMPGEN(0x008ec08c, "const t_script_action<53>::`vftable'")

// name:A; map symbol; map:45678
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<53, t_script_win_game>::`vftable'")

// name:A; map symbol; map:45679
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_win_game::`vftable'")

// confidence:A; rtti-name; map:45680
DATA_CHT_1_COMPGEN(0x008ec0c4, "const t_script_action_factory<38>::`vftable'")

// confidence:A; rtti-name; map:45681
DATA_CHT_1_COMPGEN(0x008ec0cc, "const t_script_action<38>::`vftable'")

// name:A; map symbol; map:45682
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<38, t_script_lose_game>::`vftable'")

// name:A; map symbol; map:45683
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_lose_game::`vftable'")

// confidence:A; rtti-name; map:45684
DATA_CHT_1_COMPGEN(0x008ec104, "const t_script_action_factory<17>::`vftable'")

// confidence:A; rtti-name; map:45685
DATA_CHT_1_COMPGEN(0x008ec10c, "const t_script_action<17>::`vftable'")

// name:A; map symbol; map:45686
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<17, t_script_action_disable_std_victory_condition>::`vftable'")

// name:A; map symbol; map:45687
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_disable_std_victory_condition::`vftable'")

// confidence:A; rtti-name; map:45688
DATA_CHT_1_COMPGEN(0x008ec144, "const t_script_action_factory<19>::`vftable'")

// confidence:A; rtti-name; map:45689
DATA_CHT_1_COMPGEN(0x008ec14c, "const t_script_action<19>::`vftable'")

// name:A; map symbol; map:45690
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<19, t_script_action_enable_std_victory_condition>::`vftable'")

// name:A; map symbol; map:45691
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_enable_std_victory_condition::`vftable'")

// === .rdata$r (64 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0DF@@@;bcd=51a328;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56081
DATA_CHT_1_COMPGEN(0x0091a328, "t_script_action_factory<53>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0DF@@@;vft=4ec084;col=51a360;td=5b8d38;chd=51a350;offset=0;cdOffset=0;validated-hierarchy; map:56082
DATA_CHT_1_COMPGEN(0x0091a340, "t_script_action_factory<53>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0DF@@@;vft=4ec084;col=51a360;td=5b8d38;chd=51a350;offset=0;cdOffset=0;validated-hierarchy; map:56083
DATA_CHT_1_COMPGEN(0x0091a350, "t_script_action_factory<53>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0DF@@@;vft=4ec084;col=51a360;td=5b8d38;chd=51a350;offset=0;cdOffset=0;validated-hierarchy; map:56084
DATA_CHT_1_COMPGEN(0x0091a360, "const t_script_action_factory<53>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_win_game@@;bcd=51a374;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56085
DATA_CHT_1_COMPGEN(0x0091a374, "t_script_win_game::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0DF@Vt_script_win_game@@@@;bcd=51a38c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56086
DATA_CHT_1_COMPGEN(0x0091a38c, "t_script_action_base<53, t_script_win_game>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0DF@@@;bcd=51a3a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56087
DATA_CHT_1_COMPGEN(0x0091a3a4, "t_script_action<53>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0DF@@@;vft=4ec08c;col=51a3ec;td=5b8dc8;chd=51a3dc;offset=0;cdOffset=0;validated-hierarchy; map:56088
DATA_CHT_1_COMPGEN(0x0091a3bc, "t_script_action<53>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0DF@@@;vft=4ec08c;col=51a3ec;td=5b8dc8;chd=51a3dc;offset=0;cdOffset=0;validated-hierarchy; map:56089
DATA_CHT_1_COMPGEN(0x0091a3dc, "t_script_action<53>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0DF@@@;vft=4ec08c;col=51a3ec;td=5b8dc8;chd=51a3dc;offset=0;cdOffset=0;validated-hierarchy; map:56090
DATA_CHT_1_COMPGEN(0x0091a3ec, "const t_script_action<53>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56091
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<53, t_script_win_game>::`RTTI Base Class Array'")

// name:A; map symbol; map:56092
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<53, t_script_win_game>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56093
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<53, t_script_win_game>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56094
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_win_game::`RTTI Base Class Array'")

// name:A; map symbol; map:56095
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_win_game::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56096
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_win_game::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0CG@@@;bcd=51a400;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56097
DATA_CHT_1_COMPGEN(0x0091a400, "t_script_action_factory<38>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0CG@@@;vft=4ec0c4;col=51a438;td=5b8df0;chd=51a428;offset=0;cdOffset=0;validated-hierarchy; map:56098
DATA_CHT_1_COMPGEN(0x0091a418, "t_script_action_factory<38>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0CG@@@;vft=4ec0c4;col=51a438;td=5b8df0;chd=51a428;offset=0;cdOffset=0;validated-hierarchy; map:56099
DATA_CHT_1_COMPGEN(0x0091a428, "t_script_action_factory<38>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0CG@@@;vft=4ec0c4;col=51a438;td=5b8df0;chd=51a428;offset=0;cdOffset=0;validated-hierarchy; map:56100
DATA_CHT_1_COMPGEN(0x0091a438, "const t_script_action_factory<38>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_lose_game@@;bcd=51a44c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56101
DATA_CHT_1_COMPGEN(0x0091a44c, "t_script_lose_game::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0CG@Vt_script_lose_game@@@@;bcd=51a464;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56102
DATA_CHT_1_COMPGEN(0x0091a464, "t_script_action_base<38, t_script_lose_game>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0CG@@@;bcd=51a47c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56103
DATA_CHT_1_COMPGEN(0x0091a47c, "t_script_action<38>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0CG@@@;vft=4ec0cc;col=51a4c4;td=5b8e88;chd=51a4b4;offset=0;cdOffset=0;validated-hierarchy; map:56104
DATA_CHT_1_COMPGEN(0x0091a494, "t_script_action<38>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0CG@@@;vft=4ec0cc;col=51a4c4;td=5b8e88;chd=51a4b4;offset=0;cdOffset=0;validated-hierarchy; map:56105
DATA_CHT_1_COMPGEN(0x0091a4b4, "t_script_action<38>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0CG@@@;vft=4ec0cc;col=51a4c4;td=5b8e88;chd=51a4b4;offset=0;cdOffset=0;validated-hierarchy; map:56106
DATA_CHT_1_COMPGEN(0x0091a4c4, "const t_script_action<38>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56107
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<38, t_script_lose_game>::`RTTI Base Class Array'")

// name:A; map symbol; map:56108
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<38, t_script_lose_game>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56109
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<38, t_script_lose_game>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56110
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_lose_game::`RTTI Base Class Array'")

// name:A; map symbol; map:56111
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_lose_game::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56112
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_lose_game::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BB@@@;bcd=51a4d8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56113
DATA_CHT_1_COMPGEN(0x0091a4d8, "t_script_action_factory<17>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BB@@@;vft=4ec104;col=51a510;td=5b8eb0;chd=51a500;offset=0;cdOffset=0;validated-hierarchy; map:56114
DATA_CHT_1_COMPGEN(0x0091a4f0, "t_script_action_factory<17>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BB@@@;vft=4ec104;col=51a510;td=5b8eb0;chd=51a500;offset=0;cdOffset=0;validated-hierarchy; map:56115
DATA_CHT_1_COMPGEN(0x0091a500, "t_script_action_factory<17>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BB@@@;vft=4ec104;col=51a510;td=5b8eb0;chd=51a500;offset=0;cdOffset=0;validated-hierarchy; map:56116
DATA_CHT_1_COMPGEN(0x0091a510, "const t_script_action_factory<17>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_action_disable_std_victory_condition@@;bcd=51a524;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56117
DATA_CHT_1_COMPGEN(0x0091a524, "t_script_action_disable_std_victory_condition::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BB@Vt_script_action_disable_std_victory_condition@@@@;bcd=51a53c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56118
DATA_CHT_1_COMPGEN(0x0091a53c, "t_script_action_base<17, t_script_action_disable_std_victory_condition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BB@@@;bcd=51a554;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56119
DATA_CHT_1_COMPGEN(0x0091a554, "t_script_action<17>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BB@@@;vft=4ec10c;col=51a59c;td=5b8f7c;chd=51a58c;offset=0;cdOffset=0;validated-hierarchy; map:56120
DATA_CHT_1_COMPGEN(0x0091a56c, "t_script_action<17>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BB@@@;vft=4ec10c;col=51a59c;td=5b8f7c;chd=51a58c;offset=0;cdOffset=0;validated-hierarchy; map:56121
DATA_CHT_1_COMPGEN(0x0091a58c, "t_script_action<17>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BB@@@;vft=4ec10c;col=51a59c;td=5b8f7c;chd=51a58c;offset=0;cdOffset=0;validated-hierarchy; map:56122
DATA_CHT_1_COMPGEN(0x0091a59c, "const t_script_action<17>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56123
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<17, t_script_action_disable_std_victory_condition>::`RTTI Base Class Array'")

// name:A; map symbol; map:56124
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<17, t_script_action_disable_std_victory_condition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56125
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<17, t_script_action_disable_std_victory_condition>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56126
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_disable_std_victory_condition::`RTTI Base Class Array'")

// name:A; map symbol; map:56127
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_disable_std_victory_condition::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56128
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_disable_std_victory_condition::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_factory@$0BD@@@;bcd=51a5b0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56129
DATA_CHT_1_COMPGEN(0x0091a5b0, "t_script_action_factory<19>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action_factory@$0BD@@@;vft=4ec144;col=51a5e8;td=5b8fa4;chd=51a5d8;offset=0;cdOffset=0;validated-hierarchy; map:56130
DATA_CHT_1_COMPGEN(0x0091a5c8, "t_script_action_factory<19>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action_factory@$0BD@@@;vft=4ec144;col=51a5e8;td=5b8fa4;chd=51a5d8;offset=0;cdOffset=0;validated-hierarchy; map:56131
DATA_CHT_1_COMPGEN(0x0091a5d8, "t_script_action_factory<19>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action_factory@$0BD@@@;vft=4ec144;col=51a5e8;td=5b8fa4;chd=51a5d8;offset=0;cdOffset=0;validated-hierarchy; map:56132
DATA_CHT_1_COMPGEN(0x0091a5e8, "const t_script_action_factory<19>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_script_action_enable_std_victory_condition@@;bcd=51a5fc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56133
DATA_CHT_1_COMPGEN(0x0091a5fc, "t_script_action_enable_std_victory_condition::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action_base@$0BD@Vt_script_action_enable_std_victory_condition@@@@;bcd=51a614;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56134
DATA_CHT_1_COMPGEN(0x0091a614, "t_script_action_base<19, t_script_action_enable_std_victory_condition>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_script_action@$0BD@@@;bcd=51a62c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56135
DATA_CHT_1_COMPGEN(0x0091a62c, "t_script_action<19>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_script_action@$0BD@@@;vft=4ec14c;col=51a674;td=5b906c;chd=51a664;offset=0;cdOffset=0;validated-hierarchy; map:56136
DATA_CHT_1_COMPGEN(0x0091a644, "t_script_action<19>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_script_action@$0BD@@@;vft=4ec14c;col=51a674;td=5b906c;chd=51a664;offset=0;cdOffset=0;validated-hierarchy; map:56137
DATA_CHT_1_COMPGEN(0x0091a664, "t_script_action<19>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_script_action@$0BD@@@;vft=4ec14c;col=51a674;td=5b906c;chd=51a664;offset=0;cdOffset=0;validated-hierarchy; map:56138
DATA_CHT_1_COMPGEN(0x0091a674, "const t_script_action<19>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56139
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<19, t_script_action_enable_std_victory_condition>::`RTTI Base Class Array'")

// name:A; map symbol; map:56140
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_base<19, t_script_action_enable_std_victory_condition>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56141
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_base<19, t_script_action_enable_std_victory_condition>::`RTTI Complete Object Locator'")

// name:A; map symbol; map:56142
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_enable_std_victory_condition::`RTTI Base Class Array'")

// name:A; map symbol; map:56143
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_script_action_enable_std_victory_condition::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56144
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_script_action_enable_std_victory_condition::`RTTI Complete Object Locator'")

// === .data (16 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0DF@@@;td=5b8d38;validated-header; map:59503
DATA_CHT_1_COMPGEN(0x009b8d38, "t_script_action_factory<53> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_win_game@@;td=5b8d68;validated-header; map:59504
DATA_CHT_1_COMPGEN(0x009b8d68, "t_script_win_game `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0DF@Vt_script_win_game@@@@;td=5b8d88;validated-header; map:59505
DATA_CHT_1_COMPGEN(0x009b8d88, "t_script_action_base<53, t_script_win_game> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0DF@@@;td=5b8dc8;validated-header; map:59506
DATA_CHT_1_COMPGEN(0x009b8dc8, "t_script_action<53> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0CG@@@;td=5b8df0;validated-header; map:59507
DATA_CHT_1_COMPGEN(0x009b8df0, "t_script_action_factory<38> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_lose_game@@;td=5b8e20;validated-header; map:59508
DATA_CHT_1_COMPGEN(0x009b8e20, "t_script_lose_game `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0CG@Vt_script_lose_game@@@@;td=5b8e48;validated-header; map:59509
DATA_CHT_1_COMPGEN(0x009b8e48, "t_script_action_base<38, t_script_lose_game> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0CG@@@;td=5b8e88;validated-header; map:59510
DATA_CHT_1_COMPGEN(0x009b8e88, "t_script_action<38> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BB@@@;td=5b8eb0;validated-header; map:59511
DATA_CHT_1_COMPGEN(0x009b8eb0, "t_script_action_factory<17> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_action_disable_std_victory_condition@@;td=5b8ee0;validated-header; map:59512
DATA_CHT_1_COMPGEN(0x009b8ee0, "t_script_action_disable_std_victory_condition `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BB@Vt_script_action_disable_std_victory_condition@@@@;td=5b8f20;validated-header; map:59513
DATA_CHT_1_COMPGEN(0x009b8f20, "t_script_action_base<17, t_script_action_disable_std_victory_condition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BB@@@;td=5b8f7c;validated-header; map:59514
DATA_CHT_1_COMPGEN(0x009b8f7c, "t_script_action<17> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_factory@$0BD@@@;td=5b8fa4;validated-header; map:59515
DATA_CHT_1_COMPGEN(0x009b8fa4, "t_script_action_factory<19> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_script_action_enable_std_victory_condition@@;td=5b8fd4;validated-header; map:59516
DATA_CHT_1_COMPGEN(0x009b8fd4, "t_script_action_enable_std_victory_condition `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action_base@$0BD@Vt_script_action_enable_std_victory_condition@@@@;td=5b9010;validated-header; map:59517
DATA_CHT_1_COMPGEN(0x009b9010, "t_script_action_base<19, t_script_action_enable_std_victory_condition> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_script_action@$0BD@@@;td=5b906c;validated-header; map:59518
DATA_CHT_1_COMPGEN(0x009b906c, "t_script_action<19> `RTTI Type Descriptor'")
