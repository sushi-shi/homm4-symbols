// overlay_adv_object_image.cpp — generated source carcass, not a buildable reconstruction.
// Source [B]: inferred .cpp basename from map object; extension not recorded
// Target: cht-1.x; sha256=e8c0ad0fac9e62bde8764761ec48bce387d0a92f1747eca9c6b79479b1f8d53f
// Accounted 172/300 (A:107 B:4 C:0); unaccounted 128; skipped std 139.
// Debug signatures; arg_N names are synthetic. Bodies and initial values are unavailable.
// map:N identifies ../symbols.tsv map_id (full signatures, evidence, and address provenance).
// VA_CHT_1/DATA_CHT_1: absolute VAs; confidence: A/B/C. Pointer-chain evidence uses RVAs.

#include "../va.h"

// === .text (178 symbols) ===

// confidence:D; dyninit-init; owner-conf-C;review-status=unreviewed;classification=D:not-a-best-guess; map:63835; name:C (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x0074c5c0, 0x15, STATIC_INIT_DISPATCH, "overlay_adv_object_image#1")

// name:C; dyninit; see ledger; map:63836
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_CTOR, "overlay_adv_object_image#1")

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=34c5e0:31151;class=t_overlay_adv_object_subimage;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=20;checked-rtti-and-raw-slots;vft=4e6e74,col=511a7c,offset=0,slot=6,entry=34c5e0; map:31151
VA_CHT_1(0x0074c5e0, 0xa9)
void t_overlay_adv_object_subimage::draw_to(
    int arg_0,
    t_screen_rect const& arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3,
    int arg_4
) const
{
    // Body unavailable.
}

// confidence:A; align-order; retn,stable,vslot;vftable-certificate=34c690:31152;class=t_overlay_adv_object_subimage;proof=unique-hierarchy-method-and-slot-cleanup;cleanup=12;checked-rtti-and-raw-slots;vft=4e6e74,col=511a7c,offset=0,slot=5,entry=34c690; map:31152
VA_CHT_1(0x0074c690, 0x4a)
void t_overlay_adv_object_subimage::draw_to(
    int arg_0,
    t_abstract_bitmap<unsigned short>& arg_1,
    t_screen_point const& arg_2
) const
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31153
VA_CHT_1(0x0074c700, 0xa5)
t_overlay_adv_object_image_base_base::t_overlay_adv_object_image_base_base(t_screen_rect const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31154
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_image_base_base::get_column_depth_offset(int arg_0) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31155
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_overlay_adv_object_image_base_base::set_column_depth_offset(int arg_0, int arg_1)
{
    // Body unavailable.
}

// name:A; map symbol; map:31156
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_image_base_base::get_column_rect(int arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31157
VA_CHT_1(0x0074c7b0, 0x5ec)
bool t_overlay_adv_object_image_base_base::read_version(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1,
    t_screen_rect const& arg_2
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31158
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_overlay_adv_object_image_base_base::write(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31159
VA_CHT_1(0x0074cdc0, 0x8ad)
void t_overlay_adv_object_image_base_base::on_rect_changed(
    t_screen_rect const& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31160
VA_CHT_1(0x0074d670, 0xc4)
t_overlay_adv_object_image_24::t_overlay_adv_object_image_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31161
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_24::t_overlay_adv_object_image_24(t_overlay_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31162
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_24::t_overlay_adv_object_image_24(t_simple_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31163
VA_CHT_1(0x0074d740, 0x1e)
void t_overlay_adv_object_image_24::accept(t_adv_object_image_visitor_24& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31164
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_overlay_adv_object_image_24::accept(t_adv_object_image_visitor_24& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31165
VA_CHT_1(0x0074d9d0, 0x139)
std::auto_ptr<t_adv_object_image_24> t_overlay_adv_object_image_24::clone() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31166
VA_CHT_1(0x0074db30, 0x124)
std::auto_ptr<t_adv_object_image> t_overlay_adv_object_image_24::clone_as_16() const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31167
VA_CHT_1(0x0074dcf0, 0x13f)
bool t_overlay_adv_object_image_24::read(std::basic_streambuf<char, std::char_traits<char>>& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31168
VA_CHT_1(0x0074de30, 0xdd)
bool t_overlay_adv_object_image_24::read_version(
    std::basic_streambuf<char, std::char_traits<char>>& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31169
VA_CHT_1(0x0074ed90, 0xd5)
bool t_overlay_adv_object_image_24::write(std::basic_streambuf<char, std::char_traits<char>>& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31170
VA_CHT_1(0x0074ee70, 0x33)
t_overlay_adv_object_image::t_overlay_adv_object_image()
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31171
VA_CHT_1(0x0074f8a0, 0x49)
t_overlay_adv_object_image::t_overlay_adv_object_image(t_overlay_adv_object_image const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31172
VA_CHT_1(0x0074fcf0, 0x65)
t_overlay_adv_object_image::t_overlay_adv_object_image(t_overlay_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31173
VA_CHT_1(0x0074fd80, 0x66)
t_overlay_adv_object_image::t_overlay_adv_object_image(t_simple_adv_object_image const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31174
VA_CHT_1(0x00750590, 0x13)
void t_overlay_adv_object_image::accept(t_adv_object_image_visitor& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31175
VA_CHT_1(0x007505b0, 0x26)
void t_overlay_adv_object_image::accept(t_adv_object_image_visitor& arg_0) const
{
    // Body unavailable.
}

// confidence:D; align-order; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31176
VA_CHT_1(0x00750660, 0x15)
std::auto_ptr<t_adv_object_image> t_overlay_adv_object_image::clone() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31177
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_overlay_adv_object_image::draw_column_to(
    int arg_0,
    int arg_1,
    t_screen_rect const& arg_2,
    t_abstract_bitmap<unsigned short>& arg_3,
    t_screen_point const& arg_4,
    int arg_5
) const
{
    // Body unavailable.
}

// confidence:D; align-order; RETN!;review-status=unreviewed;classification=D:not-a-best-guess; map:31178
VA_CHT_1(0x00750820, 0x5f)
void t_overlay_adv_object_image::draw_column_to(
    int arg_0,
    int arg_1,
    t_abstract_bitmap<unsigned short>& arg_2,
    t_screen_point const& arg_3
) const
{
    // Body unavailable.
}

// confidence:D; dyninit-tinit; owner-conf-B;review-status=unreviewed;classification=D:not-a-best-guess; map:63837; name:B (dyninit; see ledger)
VA_CHT_1_COMPGEN(0x007520a0, 0x20, STATIC_INIT_DISPATCH, overlay_adv_object_image)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31179
VA_CHT_1_COMPGEN(0x0074c6e0, 0x1e, SCALAR_DELETING_DTOR, t_overlay_adv_object_image_base_base)

// name:A; map symbol; map:31180
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_overlay_adv_object_image_base_base)

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31181
VA_CHT_1(0x0074d760, 0x1a8)
t_overlay_adv_object_image_base_base::~t_overlay_adv_object_image_base_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31182
VA_CHT_1(0x00750e50, 0x20)
int t_overlay_adv_object_image_base_base::get_left_col(int arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31183
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_image_base_base::get_right_col(int arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31184
VA_CHT_1(0x00750c30, 0x33)
int t_overlay_adv_object_image_base_base::get_left_column() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31185
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_image_base_base::get_right_column() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31186
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_overlay_adv_object_image_24)

// name:A; map symbol; map:31187
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_overlay_adv_object_image_24)

// name:A; map symbol; map:31188
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_24::~t_overlay_adv_object_image_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31189
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::~t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31190
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_24::~t_simple_adv_object_image_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31191
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::~t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31192
VA_CHT_1(0x00752170, 0x9)
t_adv_object_image_24::~t_adv_object_image_24()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31193
VA_CHT_1_COMPGEN(0x0074df10, 0x1e, SCALAR_DELETING_DTOR, t_overlay_adv_object_image)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31194
VA_CHT_1_COMPGEN(0x0074e0a0, 0x139, VECTOR_DELETING_DTOR, t_overlay_adv_object_image)

// name:A; map symbol; map:31195
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image::~t_overlay_adv_object_image()
{
    // Body unavailable.
}

// name:A; map symbol; map:31196
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::~t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31197
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image::~t_simple_adv_object_image()
{
    // Body unavailable.
}

// name:A; map symbol; map:31198
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::~t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31199
VA_CHT_1(0x00750880, 0x9)
t_adv_object_image::~t_adv_object_image()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31261
VA_CHT_1(0x0074d9a0, 0x7)
t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::~t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31262
VA_CHT_1(0x0074dce0, 0x7)
t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::~t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31263
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_frame_count(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31264
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_offset(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31265
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31266
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31267
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_sequence_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31268
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_shadow_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31269
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::get_shadow_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31270
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::hit_test(
    int arg_0,
    t_screen_point const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31271
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::toggle_base_frame_draw(
    bool arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31272
VA_CHT_1(0x00752590, 0x15)
void t_image_sequence_base_base::toggle_base_frame_draw(bool arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31273
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_frame_count(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31274
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_point t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_offset(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31275
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31276
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31277
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
unsigned short t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_sequence_type(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31278
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_shadow_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31279
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::get_shadow_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31280
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::hit_test(
    int arg_0,
    t_screen_point const& arg_1
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31281
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::toggle_base_frame_draw(
    bool arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31282
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::get_column() const
{
    // Body unavailable.
}

// name:A; map symbol; map:31283
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image const& t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::get_image(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31284
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>(
    t_simple_adv_object_image_24 const& arg_0,
    t_overlay_adv_object_image_24 const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31285
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>(
    t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24> const& arg_0,
    t_overlay_adv_object_image_24 const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31286
VA_CHT_1(0x0074db10, 0x19)
t_overlay_adv_object_subimage_24::t_overlay_adv_object_subimage_24(
    t_overlay_adv_object_image_24 const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31287
VA_CHT_1_COMPGEN(0x00750310, 0x4f, VECTOR_DELETING_DTOR, t_overlay_adv_object_subimage_24)

// name:A; map symbol; map:31288
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_overlay_adv_object_subimage_24)

// name:A; map symbol; map:31289
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_24::~t_overlay_adv_object_subimage_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31290
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::~t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>(

)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31291
VA_CHT_1(0x00752030, 0x1d)
t_adv_object_subimage_24::~t_adv_object_subimage_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31292
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>(
    t_overlay_adv_object_image_24 const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31293
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::get_depth_offset(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31294
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::get_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31295
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::get_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31296
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::is_underlay(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31297
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>(
    t_overlay_adv_object_image_24 const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31298
VA_CHT_1(0x00750a90, 0x155)
t_overlay_adv_object_image_base_base::t_overlay_adv_object_image_base_base()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31299
VA_CHT_1(0x007504a0, 0x13)
t_adv_object_subimage_24 const& t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::get_subimage(
    int arg_0
) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31300
VA_CHT_1(0x007504c0, 0x26)
int t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::get_subimage_count(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31301
VA_CHT_1(0x007504f0, 0x7e)
void t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::on_rect_changed(
    t_screen_rect const& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31302
VA_CHT_1(0x00750570, 0x15)
t_screen_rect t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::get_image_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31303
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>(
    t_simple_adv_object_image const& arg_0,
    t_overlay_adv_object_image const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31304
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>(
    t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage> const& arg_0,
    t_overlay_adv_object_image const& arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31305
VA_CHT_1(0x0074e1e0, 0x19)
t_overlay_adv_object_subimage::t_overlay_adv_object_subimage(
    t_overlay_adv_object_image const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31306
VA_CHT_1_COMPGEN(0x00750450, 0x4f, SCALAR_DELETING_DTOR, t_overlay_adv_object_subimage)

// name:A; map symbol; map:31307
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_overlay_adv_object_subimage)

// name:A; map symbol; map:31308
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage::~t_overlay_adv_object_subimage()
{
    // Body unavailable.
}

// name:A; map symbol; map:31309
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::~t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31310
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>(
    t_overlay_adv_object_image const& arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31311
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::get_depth_offset(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31312
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::get_rect(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31313
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::get_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31314
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
bool t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::is_underlay(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31315
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>(
    t_overlay_adv_object_image const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31316
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image::t_simple_adv_object_image()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31317
VA_CHT_1_COMPGEN(0x0074dc60, 0x1e, SCALAR_DELETING_DTOR, t_simple_adv_object_image)

// name:A; map symbol; map:31318
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_simple_adv_object_image)

// name:A; map symbol; map:31319
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31320
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence::t_image_sequence()
{
    // Body unavailable.
}

// name:A; map symbol; map:31321
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::on_rect_changed(
    t_screen_rect const& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31322
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage const& t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::get_subimage(
    int arg_0
) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31323
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::get_subimage_count(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31324
VA_CHT_1(0x007505e0, 0x7e)
void t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::on_rect_changed(
    t_screen_rect const& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31325
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_screen_rect t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::get_image_rect(

) const
{
    // Body unavailable.
}

// name:A; map symbol; map:31327
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>(
    t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24> const& arg_0,
    t_overlay_adv_object_image const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31328
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image::t_simple_adv_object_image(t_simple_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31329
VA_CHT_1(0x007501c0, 0x62)
t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>(
    t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24> const& arg_0
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31342
VA_CHT_1_COMPGEN(0x007507c0, 0x20, SCALAR_DELETING_DTOR, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>")

// name:A; map symbol; map:31343
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>")

// name:A; map symbol; map:31344
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>")

// name:A; map symbol; map:31345
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31346
VA_CHT_1_COMPGEN(0x00750800, 0x1e, VECTOR_DELETING_DTOR, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>")

// name:A; map symbol; map:31347
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>")

// name:A; map symbol; map:31348
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image::t_adv_object_image()
{
    // Body unavailable.
}

// name:A; map symbol; map:31349
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>")

// name:A; map symbol; map:31350
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>")

// confidence:D; align-band; retn,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31351
VA_CHT_1(0x00750890, 0x9)
t_adv_object_subimage_24::t_adv_object_subimage_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31352
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>")

// name:A; map symbol; map:31353
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>")

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31354
VA_CHT_1_COMPGEN(0x007508b0, 0x1e, VECTOR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>")

// name:A; map symbol; map:31355
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>")

// name:A; map symbol; map:31356
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_24::t_simple_adv_object_image_24(t_simple_adv_object_image_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31357
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
void t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::on_rect_changed(
    t_screen_rect const& arg_0,
    t_screen_rect const& arg_1
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31358
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_image_base_base::t_overlay_adv_object_image_base_base(
    t_overlay_adv_object_image_base_base const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31359
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_24::t_simple_adv_object_image_24()
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31360
VA_CHT_1_COMPGEN(0x00750a70, 0x1e, SCALAR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>")

// name:A; map symbol; map:31361
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>")

// name:A; map symbol; map:31362
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image::t_simple_adv_object_image(t_simple_adv_object_image const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31363
VA_CHT_1_COMPGEN(0x00750bf0, 0x1e, SCALAR_DELETING_DTOR, t_adv_object_image)

// name:A; map symbol; map:31364
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_image)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31365
VA_CHT_1(0x0074dc80, 0x5f)
t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31366
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_subimage_24)

// name:A; map symbol; map:31367
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_adv_object_subimage_24)

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31368
VA_CHT_1_COMPGEN(0x00750c10, 0x1e, SCALAR_DELETING_DTOR, t_simple_adv_object_image_24)

// name:A; map symbol; map:31369
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, VECTOR_DELETING_DTOR, t_simple_adv_object_image_24)

// name:A; map symbol; map:31414
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>(
    t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31415
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>(

)
{
    // Body unavailable.
}

// confidence:A; align-band; retn,vptr; map:31416
VA_CHT_1(0x00751ad0, 0x1d8)
t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>(
    t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31417
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
int t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::get_column(

) const
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31418
VA_CHT_1(0x00751e60, 0x1a6)
void t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::build_subimage_vector(
    int arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn;review-status=unreviewed;classification=D:not-a-best-guess; map:31419
VA_CHT_1(0x00750e70, 0x1c0)
void t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::build_subimage_vector(
    int arg_0,
    int arg_1
)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31428
VA_CHT_1_COMPGEN(0x007520c0, 0x1e, VECTOR_DELETING_DTOR, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>")

// name:A; map symbol; map:31429
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>")

// name:A; map symbol; map:31430
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_image_24::t_adv_object_image_24()
{
    // Body unavailable.
}

// name:A; map symbol; map:31431
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence::t_image_sequence(t_image_sequence const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31432
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_24& t_overlay_adv_object_subimage_24::operator=(
    t_overlay_adv_object_subimage_24 const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31433
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_24::t_overlay_adv_object_subimage_24(
    t_overlay_adv_object_subimage_24 const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31434
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage& t_overlay_adv_object_subimage::operator=(
    t_overlay_adv_object_subimage const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31435
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage::t_overlay_adv_object_subimage(t_overlay_adv_object_subimage const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-band; retn,stable,vslot;review-status=unreviewed;classification=D:not-a-best-guess; map:31436
VA_CHT_1_COMPGEN(0x00752570, 0x1e, VECTOR_DELETING_DTOR, t_adv_object_image_24)

// name:A; map symbol; map:31437
VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, SCALAR_DELETING_DTOR, t_adv_object_image_24)

// confidence:D; align-band; retn,stable,vptr;review-status=unreviewed;classification=D:not-a-best-guess; map:31438
VA_CHT_1(0x0074d910, 0x87)
t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>(

)
{
    // Body unavailable.
}

// name:A; map symbol; map:31439
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_image_sequence_base<t_bitmap_group>::t_image_sequence_base<t_bitmap_group>(
    t_image_sequence_base<t_bitmap_group> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31440
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>& t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::operator=(
    t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31441
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>(
    t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31442
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>& t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::operator=(
    t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31443
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>(
    t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image> const& arg_0
)
{
    // Body unavailable.
}

// name:A; map symbol; map:31444
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage_24& t_adv_object_subimage_24::operator=(t_adv_object_subimage_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31445
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage_24::t_adv_object_subimage_24(t_adv_object_subimage_24 const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31446
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage& t_adv_object_subimage::operator=(t_adv_object_subimage const& arg_0)
{
    // Body unavailable.
}

// name:A; map symbol; map:31447
VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)
t_adv_object_subimage_base& t_adv_object_subimage_base::operator=(t_adv_object_subimage_base const& arg_0)
{
    // Body unavailable.
}

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31460
VA_CHT_1_COMPGEN(0x007525c0, 0x8, VECTOR_DELETING_DTOR, t_overlay_adv_object_image_24)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31461
VA_CHT_1_COMPGEN(0x007525d0, 0x8, VECTOR_DELETING_DTOR, t_overlay_adv_object_image)

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31462
VA_CHT_1_COMPGEN(0x007525e0, 0x8, VECTOR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>")

// confidence:D; align-order; stable;review-status=unreviewed;classification=D:not-a-best-guess; map:31463
VA_CHT_1_COMPGEN(0x007525f0, 0x8, VECTOR_DELETING_DTOR, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>")

// === .rdata (22 symbols) ===

// confidence:A; rtti-name; map:44953
DATA_CHT_1_COMPGEN(0x008e6b14, "const t_overlay_adv_object_image_base_base::`vftable'")

// confidence:A; rtti-name; map:44954
DATA_CHT_1_COMPGEN(0x008e6b20, "const t_overlay_adv_object_image_24::`vftable'{for `t_overlay_adv_object_image_base_base'}")

// confidence:B; rtti-order; map:44955
DATA_CHT_1_COMPGEN(0x008e6b2c, "const t_overlay_adv_object_image_24::`vftable'{for `t_simple_adv_object_image_24'}")

// confidence:A; rtti-name; map:44956
DATA_CHT_1_COMPGEN(0x008e6cc8, "const t_overlay_adv_object_image::`vftable'{for `t_overlay_adv_object_image_base_base'}")

// confidence:B; rtti-order; map:44957
DATA_CHT_1_COMPGEN(0x008e6cd4, "const t_overlay_adv_object_image::`vftable'{for `t_simple_adv_object_image'}")

// confidence:A; rtti-name; map:44958
DATA_CHT_1_COMPGEN(0x008e6bc4, "const t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::`vftable'")

// confidence:A; rtti-name; map:44959
DATA_CHT_1_COMPGEN(0x008e6de4, "const t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::`vftable'")

// confidence:A; rtti-name; map:44960
DATA_CHT_1_COMPGEN(0x008e6c1c, "const t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`vftable'{for `t_overlay_adv_object_image_base_base'}")

// confidence:B; rtti-order; map:44961
DATA_CHT_1_COMPGEN(0x008e6c2c, "const t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`vftable'{for `t_simple_adv_object_image_24'}")

// confidence:A; rtti-name; map:44962
DATA_CHT_1_COMPGEN(0x008e6c04, "const t_overlay_adv_object_subimage_24::`vftable'")

// name:A; map symbol; map:44963
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::`vftable'")

// confidence:A; rtti-name; map:44964
DATA_CHT_1_COMPGEN(0x008e6d28, "const t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`vftable'{for `t_overlay_adv_object_image_base_base'}")

// confidence:B; rtti-order; map:44965
DATA_CHT_1_COMPGEN(0x008e6d34, "const t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`vftable'{for `t_simple_adv_object_image'}")

// confidence:A; rtti-name; map:44966
DATA_CHT_1_COMPGEN(0x008e6e74, "const t_overlay_adv_object_subimage::`vftable'")

// name:A; map symbol; map:44967
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::`vftable'")

// confidence:A; rtti-name; map:44968
DATA_CHT_1_COMPGEN(0x008e6d8c, "const t_simple_adv_object_image::`vftable'")

// confidence:A; rtti-name; map:44969
DATA_CHT_1_COMPGEN(0x008e6e94, "const t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::`vftable'")

// confidence:A; rtti-name; map:44970
DATA_CHT_1_COMPGEN(0x008e6e24, "const t_adv_object_image::`vftable'")

// confidence:A; rtti-name; map:44971
DATA_CHT_1_COMPGEN(0x008e6ee8, "const t_adv_object_subimage_24::`vftable'")

// confidence:A; rtti-name; map:44972
DATA_CHT_1_COMPGEN(0x008e6c7c, "const t_simple_adv_object_image_24::`vftable'")

// confidence:A; rtti-name; map:44973
DATA_CHT_1_COMPGEN(0x008e6f04, "const t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::`vftable'")

// confidence:A; rtti-name; map:44974
DATA_CHT_1_COMPGEN(0x008e6b7c, "const t_adv_object_image_24::`vftable'")

// === .rdata$r (80 symbols) ===

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_image_base_base@@;bcd=511554;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53708
DATA_CHT_1_COMPGEN(0x00911554, "t_overlay_adv_object_image_base_base::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_overlay_adv_object_image_base_base@@;vft=4e6b14;col=511584;td=5aee48;chd=511574;offset=0;cdOffset=0;validated-hierarchy; map:53709
DATA_CHT_1_COMPGEN(0x0091156c, "t_overlay_adv_object_image_base_base::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_overlay_adv_object_image_base_base@@;vft=4e6b14;col=511584;td=5aee48;chd=511574;offset=0;cdOffset=0;validated-hierarchy; map:53710
DATA_CHT_1_COMPGEN(0x00911574, "t_overlay_adv_object_image_base_base::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_overlay_adv_object_image_base_base@@;vft=4e6b14;col=511584;td=5aee48;chd=511574;offset=0;cdOffset=0;validated-hierarchy; map:53711
DATA_CHT_1_COMPGEN(0x00911584, "const t_overlay_adv_object_image_base_base::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_overlay_adv_object_image_24@@;vft=4e6b20;col=5116d0;td=5af064;chd=5116c0;offset=104;cdOffset=0;validated-hierarchy; map:53712
DATA_CHT_1_COMPGEN(0x009116d0, "const t_overlay_adv_object_image_24::`RTTI Complete Object Locator'{for `t_overlay_adv_object_image_base_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=5115dc;pmd=157,-1,0;attributes=9;validated-hierarchy-link; map:53713
DATA_CHT_1_COMPGEN(0x009115dc, "t_uncopyable::`RTTI Base Class Descriptor at (157, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_image_base_base@@;bcd=5115f4;pmd=104,-1,0;attributes=0;validated-hierarchy-link; map:53714
DATA_CHT_1_COMPGEN(0x009115f4, "t_overlay_adv_object_image_base_base::`RTTI Base Class Descriptor at (104, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image_24@@Vt_adv_object_subimage_24@@Vt_adv_object_image_visitor_24@@@@;bcd=51160c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53715
DATA_CHT_1_COMPGEN(0x0091160c, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_image_24@@;bcd=511624;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53716
DATA_CHT_1_COMPGEN(0x00911624, "t_adv_object_image_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image_24@@Vt_simple_adv_object_image_24@@Vt_image_sequence_24@@@@;bcd=51163c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53717
DATA_CHT_1_COMPGEN(0x0091163c, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_simple_adv_object_image_24@@;bcd=511654;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53718
DATA_CHT_1_COMPGEN(0x00911654, "t_simple_adv_object_image_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image_24@@Vt_overlay_adv_object_image_24@@Vt_overlay_adv_object_subimage_24@@@@;bcd=51166c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53719
DATA_CHT_1_COMPGEN(0x0091166c, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_image_24@@;bcd=511684;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53720
DATA_CHT_1_COMPGEN(0x00911684, "t_overlay_adv_object_image_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_overlay_adv_object_image_24@@;vft=4e6b20;col=5116d0;td=5af064;chd=5116c0;offset=104;cdOffset=0;validated-hierarchy; map:53721
DATA_CHT_1_COMPGEN(0x0091169c, "t_overlay_adv_object_image_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_overlay_adv_object_image_24@@;vft=4e6b20;col=5116d0;td=5af064;chd=5116c0;offset=104;cdOffset=0;validated-hierarchy; map:53722
DATA_CHT_1_COMPGEN(0x009116c0, "t_overlay_adv_object_image_24::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53723
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_image_24::`RTTI Complete Object Locator'{for `t_simple_adv_object_image_24'}")

// confidence:A; rtti-col-pointer; type-name=.?AVt_overlay_adv_object_image@@;vft=4e6cc8;col=5119b8;td=5af31c;chd=5119a8;offset=108;cdOffset=0;validated-hierarchy; map:53724
DATA_CHT_1_COMPGEN(0x009119b8, "const t_overlay_adv_object_image::`RTTI Complete Object Locator'{for `t_overlay_adv_object_image_base_base'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_uncopyable@@;bcd=5118c4;pmd=161,-1,0;attributes=9;validated-hierarchy-link; map:53725
DATA_CHT_1_COMPGEN(0x009118c4, "t_uncopyable::`RTTI Base Class Descriptor at (161, -1, 0, 9)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_image_base_base@@;bcd=5118dc;pmd=108,-1,0;attributes=0;validated-hierarchy-link; map:53726
DATA_CHT_1_COMPGEN(0x009118dc, "t_overlay_adv_object_image_base_base::`RTTI Base Class Descriptor at (108, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image@@Vt_adv_object_subimage@@Vt_adv_object_image_visitor@@@@;bcd=5118f4;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53727
DATA_CHT_1_COMPGEN(0x009118f4, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_image@@;bcd=51190c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53728
DATA_CHT_1_COMPGEN(0x0091190c, "t_adv_object_image::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image@@Vt_simple_adv_object_image@@Vt_image_sequence@@@@;bcd=511924;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53729
DATA_CHT_1_COMPGEN(0x00911924, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_simple_adv_object_image@@;bcd=51193c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53730
DATA_CHT_1_COMPGEN(0x0091193c, "t_simple_adv_object_image::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image@@Vt_overlay_adv_object_image@@Vt_overlay_adv_object_subimage@@@@;bcd=511954;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53731
DATA_CHT_1_COMPGEN(0x00911954, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_image@@;bcd=51196c;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53732
DATA_CHT_1_COMPGEN(0x0091196c, "t_overlay_adv_object_image::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_overlay_adv_object_image@@;vft=4e6cc8;col=5119b8;td=5af31c;chd=5119a8;offset=108;cdOffset=0;validated-hierarchy; map:53733
DATA_CHT_1_COMPGEN(0x00911984, "t_overlay_adv_object_image::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_overlay_adv_object_image@@;vft=4e6cc8;col=5119b8;td=5af31c;chd=5119a8;offset=108;cdOffset=0;validated-hierarchy; map:53734
DATA_CHT_1_COMPGEN(0x009119a8, "t_overlay_adv_object_image::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53735
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_image::`RTTI Complete Object Locator'{for `t_simple_adv_object_image'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image_24@@Vt_adv_object_subimage_24@@Vt_adv_object_image_visitor_24@@@@;vft=4e6bc4;col=5116fc;td=5aee80;chd=5116ec;offset=0;cdOffset=0;validated-hierarchy; map:53736
DATA_CHT_1_COMPGEN(0x009116e4, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image_24@@Vt_adv_object_subimage_24@@Vt_adv_object_image_visitor_24@@@@;vft=4e6bc4;col=5116fc;td=5aee80;chd=5116ec;offset=0;cdOffset=0;validated-hierarchy; map:53737
DATA_CHT_1_COMPGEN(0x009116ec, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image_24@@Vt_adv_object_subimage_24@@Vt_adv_object_image_visitor_24@@@@;vft=4e6bc4;col=5116fc;td=5aee80;chd=5116ec;offset=0;cdOffset=0;validated-hierarchy; map:53738
DATA_CHT_1_COMPGEN(0x009116fc, "const t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image@@Vt_adv_object_subimage@@Vt_adv_object_image_visitor@@@@;vft=4e6de4;col=5119e4;td=5af158;chd=5119d4;offset=0;cdOffset=0;validated-hierarchy; map:53739
DATA_CHT_1_COMPGEN(0x009119cc, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image@@Vt_adv_object_subimage@@Vt_adv_object_image_visitor@@@@;vft=4e6de4;col=5119e4;td=5af158;chd=5119d4;offset=0;cdOffset=0;validated-hierarchy; map:53740
DATA_CHT_1_COMPGEN(0x009119d4, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image@@Vt_adv_object_subimage@@Vt_adv_object_image_visitor@@@@;vft=4e6de4;col=5119e4;td=5af158;chd=5119d4;offset=0;cdOffset=0;validated-hierarchy; map:53741
DATA_CHT_1_COMPGEN(0x009119e4, "const t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image_24@@Vt_overlay_adv_object_image_24@@Vt_overlay_adv_object_subimage_24@@@@;vft=4e6c1c;col=51178c;td=5aefd0;chd=51177c;offset=104;cdOffset=0;validated-hierarchy; map:53742
DATA_CHT_1_COMPGEN(0x0091178c, "const t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`RTTI Complete Object Locator'{for `t_overlay_adv_object_image_base_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image_24@@Vt_overlay_adv_object_image_24@@Vt_overlay_adv_object_subimage_24@@@@;vft=4e6c1c;col=51178c;td=5aefd0;chd=51177c;offset=104;cdOffset=0;validated-hierarchy; map:53743
DATA_CHT_1_COMPGEN(0x0091175c, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image_24@@Vt_overlay_adv_object_image_24@@Vt_overlay_adv_object_subimage_24@@@@;vft=4e6c1c;col=51178c;td=5aefd0;chd=51177c;offset=104;cdOffset=0;validated-hierarchy; map:53744
DATA_CHT_1_COMPGEN(0x0091177c, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53745
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24>::`RTTI Complete Object Locator'{for `t_simple_adv_object_image_24'}")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_adv_object_subimage_24@@;bcd=5117a0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53746
DATA_CHT_1_COMPGEN(0x009117a0, "t_adv_object_subimage_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_overlay_adv_object_subimage_base@Vt_adv_object_subimage_24@@Vt_overlay_adv_object_image_24@@@@;bcd=5117b8;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53747
DATA_CHT_1_COMPGEN(0x009117b8, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_subimage_24@@;bcd=5117d0;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53748
DATA_CHT_1_COMPGEN(0x009117d0, "t_overlay_adv_object_subimage_24::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_overlay_adv_object_subimage_24@@;vft=4e6c04;col=51180c;td=5af128;chd=5117fc;offset=0;cdOffset=0;validated-hierarchy; map:53749
DATA_CHT_1_COMPGEN(0x009117e8, "t_overlay_adv_object_subimage_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_overlay_adv_object_subimage_24@@;vft=4e6c04;col=51180c;td=5af128;chd=5117fc;offset=0;cdOffset=0;validated-hierarchy; map:53750
DATA_CHT_1_COMPGEN(0x009117fc, "t_overlay_adv_object_subimage_24::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_overlay_adv_object_subimage_24@@;vft=4e6c04;col=51180c;td=5af128;chd=5117fc;offset=0;cdOffset=0;validated-hierarchy; map:53751
DATA_CHT_1_COMPGEN(0x0091180c, "const t_overlay_adv_object_subimage_24::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53752
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::`RTTI Base Class Array'")

// name:A; map symbol; map:53753
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53754
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24>::`RTTI Complete Object Locator'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image@@Vt_overlay_adv_object_image@@Vt_overlay_adv_object_subimage@@@@;vft=4e6d28;col=51189c;td=5af290;chd=51188c;offset=108;cdOffset=0;validated-hierarchy; map:53755
DATA_CHT_1_COMPGEN(0x0091189c, "const t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`RTTI Complete Object Locator'{for `t_overlay_adv_object_image_base_base'}")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image@@Vt_overlay_adv_object_image@@Vt_overlay_adv_object_subimage@@@@;vft=4e6d28;col=51189c;td=5af290;chd=51188c;offset=108;cdOffset=0;validated-hierarchy; map:53756
DATA_CHT_1_COMPGEN(0x0091186c, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image@@Vt_overlay_adv_object_image@@Vt_overlay_adv_object_subimage@@@@;vft=4e6d28;col=51189c;td=5af290;chd=51188c;offset=108;cdOffset=0;validated-hierarchy; map:53757
DATA_CHT_1_COMPGEN(0x0091188c, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53758
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage>::`RTTI Complete Object Locator'{for `t_simple_adv_object_image'}")

// confidence:A; rtti-base-descriptor; type-name=.?AV?$t_overlay_adv_object_subimage_base@Vt_adv_object_subimage@@Vt_overlay_adv_object_image@@@@;bcd=511a28;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53759
DATA_CHT_1_COMPGEN(0x00911a28, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-descriptor; type-name=.?AVt_overlay_adv_object_subimage@@;bcd=511a40;pmd=0,-1,0;attributes=0;validated-hierarchy-link; map:53760
DATA_CHT_1_COMPGEN(0x00911a40, "t_overlay_adv_object_subimage::`RTTI Base Class Descriptor at (0, -1, 0, 0)'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_overlay_adv_object_subimage@@;vft=4e6e74;col=511a7c;td=5af3b4;chd=511a6c;offset=0;cdOffset=0;validated-hierarchy; map:53761
DATA_CHT_1_COMPGEN(0x00911a58, "t_overlay_adv_object_subimage::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_overlay_adv_object_subimage@@;vft=4e6e74;col=511a7c;td=5af3b4;chd=511a6c;offset=0;cdOffset=0;validated-hierarchy; map:53762
DATA_CHT_1_COMPGEN(0x00911a6c, "t_overlay_adv_object_subimage::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_overlay_adv_object_subimage@@;vft=4e6e74;col=511a7c;td=5af3b4;chd=511a6c;offset=0;cdOffset=0;validated-hierarchy; map:53763
DATA_CHT_1_COMPGEN(0x00911a7c, "const t_overlay_adv_object_subimage::`RTTI Complete Object Locator'")

// name:A; map symbol; map:53764
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::`RTTI Base Class Array'")

// name:A; map symbol; map:53765
DATA_CHT_1_COMPGEN(UNACCOUNTED, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::`RTTI Class Hierarchy Descriptor'")

// name:A; map symbol; map:53766
DATA_CHT_1_COMPGEN(UNACCOUNTED, "const t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_simple_adv_object_image@@;vft=4e6d8c;col=511844;td=5af264;chd=511834;offset=0;cdOffset=0;validated-hierarchy; map:53767
DATA_CHT_1_COMPGEN(0x00911820, "t_simple_adv_object_image::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_simple_adv_object_image@@;vft=4e6d8c;col=511844;td=5af264;chd=511834;offset=0;cdOffset=0;validated-hierarchy; map:53768
DATA_CHT_1_COMPGEN(0x00911834, "t_simple_adv_object_image::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_simple_adv_object_image@@;vft=4e6d8c;col=511844;td=5af264;chd=511834;offset=0;cdOffset=0;validated-hierarchy; map:53769
DATA_CHT_1_COMPGEN(0x00911844, "const t_simple_adv_object_image::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image@@Vt_simple_adv_object_image@@Vt_image_sequence@@@@;vft=4e6e94;col=511ab0;td=5af1f0;chd=511aa0;offset=0;cdOffset=0;validated-hierarchy; map:53770
DATA_CHT_1_COMPGEN(0x00911a90, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image@@Vt_simple_adv_object_image@@Vt_image_sequence@@@@;vft=4e6e94;col=511ab0;td=5af1f0;chd=511aa0;offset=0;cdOffset=0;validated-hierarchy; map:53771
DATA_CHT_1_COMPGEN(0x00911aa0, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image@@Vt_simple_adv_object_image@@Vt_image_sequence@@@@;vft=4e6e94;col=511ab0;td=5af1f0;chd=511aa0;offset=0;cdOffset=0;validated-hierarchy; map:53772
DATA_CHT_1_COMPGEN(0x00911ab0, "const t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_image@@;vft=4e6e24;col=511a14;td=5af1cc;chd=511a04;offset=0;cdOffset=0;validated-hierarchy; map:53773
DATA_CHT_1_COMPGEN(0x009119f8, "t_adv_object_image::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_image@@;vft=4e6e24;col=511a14;td=5af1cc;chd=511a04;offset=0;cdOffset=0;validated-hierarchy; map:53774
DATA_CHT_1_COMPGEN(0x00911a04, "t_adv_object_image::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_image@@;vft=4e6e24;col=511a14;td=5af1cc;chd=511a04;offset=0;cdOffset=0;validated-hierarchy; map:53775
DATA_CHT_1_COMPGEN(0x00911a14, "const t_adv_object_image::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_subimage_24@@;vft=4e6ee8;col=511ae0;td=5af090;chd=511ad0;offset=0;cdOffset=0;validated-hierarchy; map:53776
DATA_CHT_1_COMPGEN(0x00911ac4, "t_adv_object_subimage_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_subimage_24@@;vft=4e6ee8;col=511ae0;td=5af090;chd=511ad0;offset=0;cdOffset=0;validated-hierarchy; map:53777
DATA_CHT_1_COMPGEN(0x00911ad0, "t_adv_object_subimage_24::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_subimage_24@@;vft=4e6ee8;col=511ae0;td=5af090;chd=511ad0;offset=0;cdOffset=0;validated-hierarchy; map:53778
DATA_CHT_1_COMPGEN(0x00911ae0, "const t_adv_object_subimage_24::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_simple_adv_object_image_24@@;vft=4e6c7c;col=511734;td=5aefa0;chd=511724;offset=0;cdOffset=0;validated-hierarchy; map:53779
DATA_CHT_1_COMPGEN(0x00911710, "t_simple_adv_object_image_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_simple_adv_object_image_24@@;vft=4e6c7c;col=511734;td=5aefa0;chd=511724;offset=0;cdOffset=0;validated-hierarchy; map:53780
DATA_CHT_1_COMPGEN(0x00911724, "t_simple_adv_object_image_24::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_simple_adv_object_image_24@@;vft=4e6c7c;col=511734;td=5aefa0;chd=511724;offset=0;cdOffset=0;validated-hierarchy; map:53781
DATA_CHT_1_COMPGEN(0x00911734, "const t_simple_adv_object_image_24::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image_24@@Vt_simple_adv_object_image_24@@Vt_image_sequence_24@@@@;vft=4e6f04;col=511b14;td=5aef20;chd=511b04;offset=0;cdOffset=0;validated-hierarchy; map:53782
DATA_CHT_1_COMPGEN(0x00911af4, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image_24@@Vt_simple_adv_object_image_24@@Vt_image_sequence_24@@@@;vft=4e6f04;col=511b14;td=5aef20;chd=511b04;offset=0;cdOffset=0;validated-hierarchy; map:53783
DATA_CHT_1_COMPGEN(0x00911b04, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image_24@@Vt_simple_adv_object_image_24@@Vt_image_sequence_24@@@@;vft=4e6f04;col=511b14;td=5aef20;chd=511b04;offset=0;cdOffset=0;validated-hierarchy; map:53784
DATA_CHT_1_COMPGEN(0x00911b14, "const t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24>::`RTTI Complete Object Locator'")

// confidence:A; rtti-base-array-pointer; type-name=.?AVt_adv_object_image_24@@;vft=4e6b7c;col=5115b4;td=5aeefc;chd=5115a4;offset=0;cdOffset=0;validated-hierarchy; map:53785
DATA_CHT_1_COMPGEN(0x00911598, "t_adv_object_image_24::`RTTI Base Class Array'")

// confidence:A; rtti-hierarchy-pointer; type-name=.?AVt_adv_object_image_24@@;vft=4e6b7c;col=5115b4;td=5aeefc;chd=5115a4;offset=0;cdOffset=0;validated-hierarchy; map:53786
DATA_CHT_1_COMPGEN(0x009115a4, "t_adv_object_image_24::`RTTI Class Hierarchy Descriptor'")

// confidence:A; rtti-col-pointer; type-name=.?AVt_adv_object_image_24@@;vft=4e6b7c;col=5115b4;td=5aeefc;chd=5115a4;offset=0;cdOffset=0;validated-hierarchy; map:53787
DATA_CHT_1_COMPGEN(0x009115b4, "const t_adv_object_image_24::`RTTI Complete Object Locator'")

// === .data (20 symbols) ===

// confidence:A; rtti-type-name; type-name=.?AVt_overlay_adv_object_image_base_base@@;td=5aee48;validated-header; map:58915
DATA_CHT_1_COMPGEN(0x009aee48, "t_overlay_adv_object_image_base_base `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image_24@@Vt_adv_object_subimage_24@@Vt_adv_object_image_visitor_24@@@@;td=5aee80;validated-header; map:58916
DATA_CHT_1_COMPGEN(0x009aee80, "t_adv_object_image_base<t_adv_object_image_24, t_adv_object_subimage_24, t_adv_object_image_visitor_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_image_24@@;td=5aeefc;validated-header; map:58917
DATA_CHT_1_COMPGEN(0x009aeefc, "t_adv_object_image_24 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image_24@@Vt_simple_adv_object_image_24@@Vt_image_sequence_24@@@@;td=5aef20;validated-header; map:58918
DATA_CHT_1_COMPGEN(0x009aef20, "t_simple_adv_object_image_base<t_adv_object_image_24, t_simple_adv_object_image_24, t_image_sequence_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_simple_adv_object_image_24@@;td=5aefa0;validated-header; map:58919
DATA_CHT_1_COMPGEN(0x009aefa0, "t_simple_adv_object_image_24 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image_24@@Vt_overlay_adv_object_image_24@@Vt_overlay_adv_object_subimage_24@@@@;td=5aefd0;validated-header; map:58920
DATA_CHT_1_COMPGEN(0x009aefd0, "t_overlay_adv_object_image_base<t_simple_adv_object_image_24, t_overlay_adv_object_image_24, t_overlay_adv_object_subimage_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_overlay_adv_object_image_24@@;td=5af064;validated-header; map:58921
DATA_CHT_1_COMPGEN(0x009af064, "t_overlay_adv_object_image_24 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_adv_object_image_base@Vt_adv_object_image@@Vt_adv_object_subimage@@Vt_adv_object_image_visitor@@@@;td=5af158;validated-header; map:58922
DATA_CHT_1_COMPGEN(0x009af158, "t_adv_object_image_base<t_adv_object_image, t_adv_object_subimage, t_adv_object_image_visitor> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_image@@;td=5af1cc;validated-header; map:58923
DATA_CHT_1_COMPGEN(0x009af1cc, "t_adv_object_image `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_simple_adv_object_image_base@Vt_adv_object_image@@Vt_simple_adv_object_image@@Vt_image_sequence@@@@;td=5af1f0;validated-header; map:58924
DATA_CHT_1_COMPGEN(0x009af1f0, "t_simple_adv_object_image_base<t_adv_object_image, t_simple_adv_object_image, t_image_sequence> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_simple_adv_object_image@@;td=5af264;validated-header; map:58925
DATA_CHT_1_COMPGEN(0x009af264, "t_simple_adv_object_image `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_overlay_adv_object_image_base@Vt_simple_adv_object_image@@Vt_overlay_adv_object_image@@Vt_overlay_adv_object_subimage@@@@;td=5af290;validated-header; map:58926
DATA_CHT_1_COMPGEN(0x009af290, "t_overlay_adv_object_image_base<t_simple_adv_object_image, t_overlay_adv_object_image, t_overlay_adv_object_subimage> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_overlay_adv_object_image@@;td=5af31c;validated-header; map:58927
DATA_CHT_1_COMPGEN(0x009af31c, "t_overlay_adv_object_image `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_adv_object_subimage_24@@;td=5af090;validated-header; map:58928
DATA_CHT_1_COMPGEN(0x009af090, "t_adv_object_subimage_24 `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AV?$t_overlay_adv_object_subimage_base@Vt_adv_object_subimage_24@@Vt_overlay_adv_object_image_24@@@@;td=5af0b8;validated-header; map:58929
DATA_CHT_1_COMPGEN(0x009af0b8, "t_overlay_adv_object_subimage_base<t_adv_object_subimage_24, t_overlay_adv_object_image_24> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_overlay_adv_object_subimage_24@@;td=5af128;validated-header; map:58930
DATA_CHT_1_COMPGEN(0x009af128, "t_overlay_adv_object_subimage_24 `RTTI Type Descriptor'")

// name:A; map symbol; map:58931
DATA_CHT_1_COMPGEN(UNACCOUNTED, "subimage_num >= 0&& subimage_nu...")

// name:A; map symbol; map:58932
DATA_CHT_1_COMPGEN(UNACCOUNTED, "C:\\\\work\\\\game\\\\overlay_adv_object_...")

// confidence:A; rtti-type-name; type-name=.?AV?$t_overlay_adv_object_subimage_base@Vt_adv_object_subimage@@Vt_overlay_adv_object_image@@@@;td=5af348;validated-header; map:58933
DATA_CHT_1_COMPGEN(0x009af348, "t_overlay_adv_object_subimage_base<t_adv_object_subimage, t_overlay_adv_object_image> `RTTI Type Descriptor'")

// confidence:A; rtti-type-name; type-name=.?AVt_overlay_adv_object_subimage@@;td=5af3b4;validated-header; map:58934
DATA_CHT_1_COMPGEN(0x009af3b4, "t_overlay_adv_object_subimage `RTTI Type Descriptor'")
