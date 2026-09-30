// sound.cpp — generated source carcass, not a buildable reconstruction.
// Source [A]: anonymous-namespace source tag: C:\work\game\sound.cpp
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 82/153 (A:62 B:4 C:16); unaccounted 71; skipped std 88.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (102 symbols) ===

// confidence:C; align-order; retn,stable; map:37620
VA_CHT_1(0x007c8db0, 0x7)
t_direct_sound_wrapper_base::~t_direct_sound_wrapper_base()
{
    // Body unavailable.
}

// name:A; map symbol; map:37621
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
IDirectSound* const t_direct_sound_wrapper_base::get_directsound_ptr()
{
    // Body unavailable.
}

// name:A; map symbol; map:37622
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
_DIG_DRIVER* const t_direct_sound_wrapper_base::get_miles_digitial_driver()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:37623
VA_CHT_1(0x007c8dc0, 0x148)
t_direct_sound_object::t_direct_sound_object()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:37624
VA_CHT_1(0x007c8f60, 0x152)
t_direct_sound_object::~t_direct_sound_object()
{
    // Body unavailable.
}

// name:A; map symbol; map:37625
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_direct_sound_object::is_shut_down() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37626
VA_CHT_1(0x007c90c0, 0x7a)
void t_direct_sound_object::stop_sounds()
{
    // Body unavailable.
}

// name:A; map symbol; map:37627
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_direct_sound_object::add(t_sound_player* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37628
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
IDirectSound* const t_direct_sound_object::get_directsound_ptr()
{
    // Body unavailable.
}

// name:A; map symbol; map:37629
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
_DIG_DRIVER* const t_direct_sound_object::get_miles_digitial_driver()
{
    // Body unavailable.
}

// name:A; map symbol; map:37630
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_direct_sound_object::remove(t_sound_player* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37631
VA_CHT_1(0x007c9150, 0x7c)
void t_direct_sound_object::service_sounds()
{
    // Body unavailable.
}

// name:A; map symbol; map:37632
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
IDirectSoundBuffer* t_direct_sound_object::create_buffer(tWAVEFORMATEX* arg_0, int arg_1, int arg_2)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37633
VA_CHT_1(0x007c91d0, 0xa)
t_direct_sound_wrapper_base& get_directsound_wrapper()
{
    // Body unavailable.
}

// name:A; map symbol; map:62648
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
static t_direct_sound_object& get_direct_sound()
{
    // Body unavailable.
}

// name:B; dyninit; see ledger; map:62649
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
// get_direct_sound$sdtor
// Function body not reconstructed; signature retained as a comment.

namespace {

// confidence:A; align-order; retn,stable,vslot; map:37634
VA_CHT_1(0x007c91e0, 0x36)
unsigned long t_sound_thread::run()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:37635
VA_CHT_1(0x007c9220, 0x1e)
t_sound_header::t_sound_header()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37636
VA_CHT_1(0x007c9240, 0x15c)
bool t_sound_header::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37637
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sync_list::~t_sync_list()
{
    // Body unavailable.
}

// name:A; map symbol; map:37638
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sync_list::clear()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37639
VA_CHT_1(0x007c93a0, 0xe6)
void t_sync_list::on_idle()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-order; retn,stable,vptr; map:37640
VA_CHT_1(0x007c9490, 0xd0)
t_playing_sound::t_playing_sound(t_sound const& arg_0)
{
    // Body unavailable.
}

namespace {

// confidence:A; align-order; retn,stable,vptr; map:37641
VA_CHT_1(0x007c95f0, 0x155)
t_sound_player::t_sound_player(t_sound const& arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vptr; map:37642
VA_CHT_1(0x007c9770, 0x1cc)
t_sound_player::~t_sound_player()
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37643
VA_CHT_1(0x007c9940, 0x2e6)
void t_sound_player::create_events(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37644
VA_CHT_1(0x007c9c30, 0x2ba)
void t_sound_player::create_buffer()
{
    // Body unavailable.
}

// name:A; map symbol; map:37645
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sound_player::close_buffer()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,vslot; map:37646
VA_CHT_1(0x007c9ef0, 0xda)
int t_sound_player::get_balance() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37647
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_sound_player::get_type() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37648
VA_CHT_1(0x007c9fd0, 0xbc)
int t_sound_player::get_volume() const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37649
VA_CHT_1(0x007ca090, 0xc6)
void t_sound_player::set_balance(int arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37650
VA_CHT_1(0x007ca160, 0xdf)
void t_sound_player::set_volume(int arg_0, bool arg_1)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37651
VA_CHT_1(0x007ca240, 0x1a3)
void t_sound_player::on_stop()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37652
VA_CHT_1(0x007ca3f0, 0x107)
void t_sound_player::fill_first_half_no_verify()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37653
VA_CHT_1(0x007ca500, 0x106)
void t_sound_player::fill_first_half()
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37654
VA_CHT_1(0x007ca610, 0xbb)
void t_sound_player::fill_second_half()
{
    // Body unavailable.
}

// name:A; map symbol; map:37655
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sound_player::verify_fill_second_half()
{
    // Body unavailable.
}

// name:A; map symbol; map:37656
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_sound_player::verify_fill_first_half()
{
    // Body unavailable.
}

// name:A; map symbol; map:37657
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sound_player::check_stop()
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37658
VA_CHT_1(0x007ca6d0, 0x22d)
void t_sound_player::play(int arg_0, bool arg_1, bool arg_2)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37659
VA_CHT_1(0x007ca900, 0x299)
void t_sound_player::stop(bool arg_0)
{
    // Body unavailable.
}

// confidence:B; align-order; retn,stable; map:37660
VA_CHT_1(0x007caba0, 0x1d2)
void t_sound_player::fill_buffer(int arg_0, int arg_1)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37661
VA_CHT_1(0x007cad80, 0xc3)
void t_sound_player::fade_out(bool arg_0)
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot; map:37662
VA_CHT_1(0x007cae50, 0x1a)
bool t_sound_player::is_fading_out() const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37663
VA_CHT_1(0x007cae70, 0x1ba)
void t_sound_player::update()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:B; align-order; retn,stable; map:37664
VA_CHT_1(0x007cb030, 0x185)
t_counted_ptr<t_playing_sound> t_sound::play(int arg_0, bool arg_1, bool arg_2) const
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37665
VA_CHT_1(0x007cb1c0, 0x3d)
int get_millibel_volume(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37666
VA_CHT_1(0x007cb200, 0x50)
int get_linear_volume(int arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; retn,stable; map:37667
VA_CHT_1(0x007cb300, 0x72)
void stop_all_sounds()
{
    // Body unavailable.
}

// name:A; map symbol; map:37668
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_direct_sound_wrapper_base)

// name:A; map symbol; map:37669
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_direct_sound_wrapper_base)

// confidence:A; align-band; retn,stable,vslot; map:37670
VA_CHT_1_COMPGEN(0x007c8f10, 0x1e, SCALAR_DELETING_DTOR, t_direct_sound_object)

// name:A; map symbol; map:37671
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_direct_sound_object)

// name:A; map symbol; map:37672
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_sound_wrapper_base::t_direct_sound_wrapper_base()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37673
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_thread::t_sound_thread()
{
    // Body unavailable.
}

// name:A; map symbol; map:37674
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_thread::~t_sound_thread()
{
    // Body unavailable.
}

} // anonymous namespace

// confidence:A; align-band; retn,stable,vslot; map:37675
VA_CHT_1_COMPGEN(0x007c8f40, 0x1e, VECTOR_DELETING_DTOR, t_sound_thread)

// name:A; map symbol; map:37676
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_sound_thread)

// name:A; map symbol; map:37677
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_player>::~t_counted_ptr<t_sound_player>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37678
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_object>::~t_counted_ptr<t_direct_sound_object>()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:37679
VA_CHT_1_COMPGEN(0x007c9560, 0x1e, VECTOR_DELETING_DTOR, t_playing_sound)

// name:A; map symbol; map:37680
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_playing_sound)

// name:A; map symbol; map:37681
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound::t_sound(t_sound const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37682
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound::~t_sound()
{
    // Body unavailable.
}

// name:A; map symbol; map:37683
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_sound>::~t_counted_ptr<t_abstract_sound>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37684
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_stream>::~t_counted_ptr<t_sound_stream>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37685
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_playing_sound::~t_playing_sound()
{
    // Body unavailable.
}

// confidence:A; align-band; retn,stable,vslot; map:37686
VA_CHT_1_COMPGEN(0x007c9750, 0x1e, SCALAR_DELETING_DTOR, t_sound_player)

// name:A; map symbol; map:37687
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_sound_player)

namespace {

// confidence:C; align-band; retn,stable; map:37688
VA_CHT_1(0x007cb250, 0xab)
t_sync_list::t_sync_list()
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:37689
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_data_lock& t_direct_sound_object::get_data_lock()
{
    // Body unavailable.
}

namespace {

// name:A; map symbol; map:37690
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_sync_list::add_event(void* arg_0, t_handler arg_1)
{
    // Body unavailable.
}

} // anonymous namespace

// name:A; map symbol; map:37691
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound::t_sound(t_abstract_sound* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37759
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_sound>::t_counted_ptr<t_abstract_sound>(t_counted_ptr<t_abstract_sound> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37760
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_abstract_sound>::t_counted_ptr<t_abstract_sound>(t_abstract_sound* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37761
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_abstract_sound* t_counted_ptr<t_abstract_sound>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37762
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_stream>::t_counted_ptr<t_sound_stream>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37763
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_stream>& t_counted_ptr<t_sound_stream>::operator=(
    t_counted_ptr<t_sound_stream> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37764
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_stream* t_counted_ptr<t_sound_stream>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37765
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_object>::t_counted_ptr<t_direct_sound_object>(t_direct_sound_object* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37766
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_object>::t_counted_ptr<t_direct_sound_object>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37767
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_sound_object* t_counted_ptr<t_direct_sound_object>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37768
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_direct_sound_object>& t_counted_ptr<t_direct_sound_object>::operator=(
    t_direct_sound_object* arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37769
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_sound_object* t_counted_ptr<t_direct_sound_object>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37770
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_direct_sound_object& t_counted_ptr<t_direct_sound_object>::operator*() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37771
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_player>::t_counted_ptr<t_sound_player>(t_sound_player* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37772
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_player* t_counted_ptr<t_sound_player>::get() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37773
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_sound_player* t_counted_ptr<t_sound_player>::operator->() const
{
    // Body unavailable.
}

// name:A; map symbol; map:37774
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_handler bound_handler(t_sound_player& arg_0, void (t_sound_player::*)(void))
{
    // Body unavailable.
}

// name:A; map symbol; map:37775
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>::t_counted_ptr<t_playing_sound>(t_playing_sound* arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37776
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_playing_sound>::t_counted_ptr<t_playing_sound>(t_counted_ptr<t_sound_player> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37798
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_counted_ptr<t_sound_player>")

// name:A; map symbol; map:37799
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_sound_player>::t_bound_handler<t_sound_player>(
    t_sound_player& arg_0,
    void (t_sound_player::*)(void)
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37800
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_bound_handler<t_sound_player>::operator()()
{
    // Body unavailable.
}

// name:A; map symbol; map:37801
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_bound_handler<t_sound_player>")

// name:A; map symbol; map:37802
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_bound_handler<t_sound_player>")

// name:A; map symbol; map:37803
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_bound_handler<t_sound_player>::~t_bound_handler<t_sound_player>()
{
    // Body unavailable.
}

// name:A; map symbol; map:37804
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_player>::t_counted_ptr<t_sound_player>(t_counted_ptr<t_sound_player> const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:37805
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_counted_ptr<t_sound_player>& t_counted_ptr<t_sound_player>::operator=(
    t_counted_ptr<t_sound_player> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:37806
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_playing_sound* implicit_cast(t_playing_sound* arg_0)
{
    // Body unavailable.
}

// confidence:C; align-order; stable; map:37807
VA_CHT_1_COMPGEN(0x007cb3e0, 0x8, VECTOR_DELETING_DTOR, "t_bound_handler<t_sound_player>")

// === .rdata (11 symbols) ===

// name:A; map symbol; map:45777
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_sound>::prefix; // Initial value unavailable.

// name:A; map symbol; map:45778
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_sound>::wave_extension; // Initial value unavailable.

// name:A; map symbol; map:45779
DATA_CHT_1(UNACCOUNTED)
char const* const t_resource_traits<t_sound>::mp3_extension; // Initial value unavailable.

// confidence:A; rtti-name; map:45780
DATA_CHT_1_COMPGEN(0x008ed340, "const t_direct_sound_wrapper_base::`vftable'")

// confidence:A; rtti-name; map:45781
DATA_CHT_1_COMPGEN(0x008ed324, "const t_direct_sound_object::`vftable'")

// confidence:A; rtti-name; map:45782
DATA_CHT_1_COMPGEN(0x008ed334, "const t_sound_thread::`vftable'")

// confidence:A; rtti-name; map:45783
DATA_CHT_1_COMPGEN(0x008ed350, "const t_sound_header::`vftable'")

// confidence:A; rtti-name; map:45784
DATA_CHT_1_COMPGEN(0x008ed358, "const t_playing_sound::`vftable'")

// confidence:A; rtti-name; map:45785
DATA_CHT_1_COMPGEN(0x008ed384, "const t_sound_player::`vftable'")

// confidence:A; rtti-name; map:45786
DATA_CHT_1_COMPGEN(0x008ed3b0, "const t_bound_handler<t_sound_player>::`vftable'{for `t_abstract_function_0<void>'}")

// confidence:B; rtti-order; map:45787
DATA_CHT_1_COMPGEN(0x008ed3bc, "const t_bound_handler<t_sound_player>::`vftable'{for `t_counted_object'}")

// === .rdata$r (29 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_direct_sound_wrapper_base@@;bcd=51b5fc;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56342
DATA_CHT_1_COMPGEN(0x0091b5fc, "t_direct_sound_wrapper_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_direct_sound_wrapper_base@@;vft=4ed340;col=51b5a0;td=5ba474;chd=51b590;offset=0;cdOffset=0;validated-hierarchy; map:56343
DATA_CHT_1_COMPGEN(0x0091b584, "t_direct_sound_wrapper_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_direct_sound_wrapper_base@@;vft=4ed340;col=51b5a0;td=5ba474;chd=51b590;offset=0;cdOffset=0;validated-hierarchy; map:56344
DATA_CHT_1_COMPGEN(0x0091b590, "t_direct_sound_wrapper_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_direct_sound_wrapper_base@@;vft=4ed340;col=51b5a0;td=5ba474;chd=51b590;offset=0;cdOffset=0;validated-hierarchy; map:56345
DATA_CHT_1_COMPGEN(0x0091b5a0, "const t_direct_sound_wrapper_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_direct_sound_object@@;bcd=51b614;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56346
DATA_CHT_1_COMPGEN(0x0091b614, "t_direct_sound_object::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_direct_sound_object@@;vft=4ed324;col=51b64c;td=5ba4a0;chd=51b63c;offset=0;cdOffset=0;validated-hierarchy; map:56347
DATA_CHT_1_COMPGEN(0x0091b62c, "t_direct_sound_object::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_direct_sound_object@@;vft=4ed324;col=51b64c;td=5ba4a0;chd=51b63c;offset=0;cdOffset=0;validated-hierarchy; map:56348
DATA_CHT_1_COMPGEN(0x0091b63c, "t_direct_sound_object::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_direct_sound_object@@;vft=4ed324;col=51b64c;td=5ba4a0;chd=51b63c;offset=0;cdOffset=0;validated-hierarchy; map:56349
DATA_CHT_1_COMPGEN(0x0091b64c, "const t_direct_sound_object::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_thread@?%C:\Work\game\sound.cpp283749960@@;bcd=51b5b4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56350
DATA_CHT_1_COMPGEN(0x0091b5b4, "t_sound_thread::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sound_thread@?%C:\Work\game\sound.cpp283749960@@;vft=4ed334;col=51b5e8;td=5ba434;chd=51b5d8;offset=0;cdOffset=0;validated-hierarchy; map:56351
DATA_CHT_1_COMPGEN(0x0091b5cc, "t_sound_thread::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sound_thread@?%C:\Work\game\sound.cpp283749960@@;vft=4ed334;col=51b5e8;td=5ba434;chd=51b5d8;offset=0;cdOffset=0;validated-hierarchy; map:56352
DATA_CHT_1_COMPGEN(0x0091b5d8, "t_sound_thread::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sound_thread@?%C:\Work\game\sound.cpp283749960@@;vft=4ed334;col=51b5e8;td=5ba434;chd=51b5d8;offset=0;cdOffset=0;validated-hierarchy; map:56353
DATA_CHT_1_COMPGEN(0x0091b5e8, "const t_sound_thread::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_header@@;bcd=51b660;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56354
DATA_CHT_1_COMPGEN(0x0091b660, "t_sound_header::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sound_header@@;vft=4ed350;col=51b690;td=5ba4c4;chd=51b680;offset=0;cdOffset=0;validated-hierarchy; map:56355
DATA_CHT_1_COMPGEN(0x0091b678, "t_sound_header::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sound_header@@;vft=4ed350;col=51b690;td=5ba4c4;chd=51b680;offset=0;cdOffset=0;validated-hierarchy; map:56356
DATA_CHT_1_COMPGEN(0x0091b680, "t_sound_header::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sound_header@@;vft=4ed350;col=51b690;td=5ba4c4;chd=51b680;offset=0;cdOffset=0;validated-hierarchy; map:56357
DATA_CHT_1_COMPGEN(0x0091b690, "const t_sound_header::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_playing_sound@@;bcd=51b6a4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56358
DATA_CHT_1_COMPGEN(0x0091b6a4, "t_playing_sound::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_playing_sound@@;vft=4ed358;col=51b6d8;td=5ba4e4;chd=51b6c8;offset=0;cdOffset=0;validated-hierarchy; map:56359
DATA_CHT_1_COMPGEN(0x0091b6bc, "t_playing_sound::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_playing_sound@@;vft=4ed358;col=51b6d8;td=5ba4e4;chd=51b6c8;offset=0;cdOffset=0;validated-hierarchy; map:56360
DATA_CHT_1_COMPGEN(0x0091b6c8, "t_playing_sound::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_playing_sound@@;vft=4ed358;col=51b6d8;td=5ba4e4;chd=51b6c8;offset=0;cdOffset=0;validated-hierarchy; map:56361
DATA_CHT_1_COMPGEN(0x0091b6d8, "const t_playing_sound::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_sound_player@?%C:\Work\game\sound.cpp283749960@@;bcd=51b6ec;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56362
DATA_CHT_1_COMPGEN(0x0091b6ec, "t_sound_player::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_sound_player@?%C:\Work\game\sound.cpp283749960@@;vft=4ed384;col=51b724;td=5ba504;chd=51b714;offset=0;cdOffset=0;validated-hierarchy; map:56363
DATA_CHT_1_COMPGEN(0x0091b704, "t_sound_player::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_sound_player@?%C:\Work\game\sound.cpp283749960@@;vft=4ed384;col=51b724;td=5ba504;chd=51b714;offset=0;cdOffset=0;validated-hierarchy; map:56364
DATA_CHT_1_COMPGEN(0x0091b714, "t_sound_player::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_sound_player@?%C:\Work\game\sound.cpp283749960@@;vft=4ed384;col=51b724;td=5ba504;chd=51b714;offset=0;cdOffset=0;validated-hierarchy; map:56365
DATA_CHT_1_COMPGEN(0x0091b724, "const t_sound_player::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_bound_handler@Vt_sound_player@?%C:\Work\game\sound.cpp283749960@@@@;vft=4ed3b0;col=51b788;td=5ba548;chd=51b778;offset=8;cdOffset=0;validated-hierarchy; map:56366
DATA_CHT_1_COMPGEN(0x0091b788, "const t_bound_handler<t_sound_player>::`RTTI Complete Object Locator'{for `t_abstract_function_0<void>'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_bound_handler@Vt_sound_player@?%C:\Work\game\sound.cpp283749960@@@@;bcd=51b74c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:56367
DATA_CHT_1_COMPGEN(0x0091b74c, "t_bound_handler<t_sound_player>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_bound_handler@Vt_sound_player@?%C:\Work\game\sound.cpp283749960@@@@;vft=4ed3b0;col=51b788;td=5ba548;chd=51b778;offset=8;cdOffset=0;validated-hierarchy; map:56368
DATA_CHT_1_COMPGEN(0x0091b764, "t_bound_handler<t_sound_player>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_bound_handler@Vt_sound_player@?%C:\Work\game\sound.cpp283749960@@@@;vft=4ed3b0;col=51b788;td=5ba548;chd=51b778;offset=8;cdOffset=0;validated-hierarchy; map:56369
DATA_CHT_1_COMPGEN(0x0091b778, "t_bound_handler<t_sound_player>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:56370
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_bound_handler<t_sound_player>::`RTTI Complete Object Locator'{for `t_counted_object'}")

// === .data (11 symbols) ===

namespace {

// name:A; map symbol; map:59559
DATA_CHT_1(UNACCOUNTED)
int k_sample_rate; // Initial value unavailable.

// name:A; map symbol; map:59560
DATA_CHT_1(UNACCOUNTED)
int k_bit_per_sample; // Initial value unavailable.

// name:A; map symbol; map:59561
DATA_CHT_1(UNACCOUNTED)
int k_number_of_channels; // Initial value unavailable.

// name:A; map symbol; map:59562
DATA_CHT_1(UNACCOUNTED)
int k_miles_open_ditital_driver_flags; // Initial value unavailable.

} // anonymous namespace

// confidence:A; rtti-type-name; type-name=.?AVt_direct_sound_wrapper_base@@;td=5ba474;validated-header; map:59563
DATA_CHT_1_COMPGEN(0x009ba474, "t_direct_sound_wrapper_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_direct_sound_object@@;td=5ba4a0;validated-header; map:59564
DATA_CHT_1_COMPGEN(0x009ba4a0, "t_direct_sound_object `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sound_thread@?%C:\Work\game\sound.cpp283749960@@;td=5ba434;validated-header; map:59565
DATA_CHT_1_COMPGEN(0x009ba434, "t_sound_thread `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sound_header@@;td=5ba4c4;validated-header; map:59566
DATA_CHT_1_COMPGEN(0x009ba4c4, "t_sound_header `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_playing_sound@@;td=5ba4e4;validated-header; map:59567
DATA_CHT_1_COMPGEN(0x009ba4e4, "t_playing_sound `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_sound_player@?%C:\Work\game\sound.cpp283749960@@;td=5ba504;validated-header; map:59568
DATA_CHT_1_COMPGEN(0x009ba504, "t_sound_player `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_bound_handler@Vt_sound_player@?%C:\Work\game\sound.cpp283749960@@@@;td=5ba548;validated-header; map:59569
DATA_CHT_1_COMPGEN(0x009ba548, "t_bound_handler<t_sound_player> `RTTI Type Descriptor'")
