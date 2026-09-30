"""Guard inventory accounting and conservative standard-library filtering."""
import unittest

import gen_structure as structure


def symbol(demangled, kind="func", **extra):
    return dict(demangled=demangled, kind=kind, **extra)


class StructureTests(unittest.TestCase):
    def address_example(self, kind="func", size="1e", image_base="0x400000", mapped=True):
        s = dict(id="1", demangled="void __cdecl example(void)", display_name="void __cdecl example(void)",
                 mangled="?example@@YAXXZ", kind=kind, category="functions", static="0",
                 name_tier="A", name_evidence="debug map symbol")
        r = dict(rva="27fcf0", size=size, kind=kind, tier="B", method="align-order", evidence="retn,stable", name=s['mangled'])
        meta = dict(address_tag="CHT_1", image_base=image_base)
        return structure.render_symbol(s, [r] if mapped else [], meta)[0]

    def test_target_va_uses_image_base(self):
        text = self.address_example()
        self.assertIn("// confidence:B; align-order; retn,stable; map:1\nVA_CHT_1(0x0067fcf0, 0x1e)", text)
        self.assertNotIn("retail:B", text)
        self.assertNotIn("STATE[", text)
        self.assertIn("map:1", text)
        self.assertIn("VA_CHT_1(0x0087fcf0, 0x1e)", self.address_example(image_base="0x600000"))

    def test_data_addresses_and_unknown_function_extents(self):
        self.assertIn("DATA_CHT_1(0x0067fcf0)", self.address_example(kind="data"))
        self.assertIn("VA_CHT_1(0x0067fcf0, UNKNOWN_SIZE)", self.address_example(size=""))
        text = self.address_example(mapped=False)
        self.assertIn("VA_CHT_1(UNACCOUNTED, UNKNOWN_SIZE)", text)
        self.assertNotIn("// VA_CHT_1: UNACCOUNTED", text)
        self.assertIn("name:A; map symbol; map:1", text)
        self.assertIn("// name:A; map symbol; map:1\nDATA_CHT_1(UNACCOUNTED)",
                      self.address_example(kind="data", mapped=False))

    def test_compiler_generated_kind_and_owner(self):
        s = dict(kind="func", category="static_initializers", display_name="abbreviate_number$tinit", mangled="_$E21")
        self.assertEqual(structure.compiler_identity(s), ("STATIC_INIT_DISPATCH", "abbreviate_number"))
        self.assertEqual(structure.compiler_identity(s, dict(name="t_table<int, float>$atexit")),
                         ("STATIC_ATEXIT", '"t_table<int, float>"'))
        self.assertEqual(structure.compiler_identity(s, dict(name="dialog#1$ctor")),
                         ("STATIC_CTOR", '"dialog#1"'))
        s = dict(kind="func", category="inline_and_template_functions", mangled="??_Et_dialog@@UAEPAXI@Z",
                 demangled="public: virtual void * __thiscall t_dialog::`vector deleting dtor'(unsigned int)")
        self.assertEqual(structure.compiler_identity(s), ("VECTOR_DELETING_DTOR", "t_dialog"))
        s['mangled'] = "??_Gt_dialog@@UAEPAXI@Z"
        self.assertEqual(structure.compiler_identity(s)[0], "SCALAR_DELETING_DTOR")

    def test_generated_dispatch_is_a_compgen_annotation(self):
        s = dict(id="71482", kind="func", category="static_initializers", demangled="", static="1",
                 display_name="abbreviate_number$tinit", mangled="_$E21", name_tier="B", name_evidence="dyninit: template statics")
        r = dict(kind="func", rva="2410", size="20", name=s['display_name'], tier="A", method="dyninit-tinit", evidence="owner-conf-C")
        text, _ = structure.render_symbol(s, [r], dict(address_tag="CHT_1", image_base="0x400000"))
        self.assertIn("VA_CHT_1_COMPGEN(0x00402410, 0x20, STATIC_INIT_DISPATCH, abbreviate_number)", text)
        self.assertIn("confidence:A", text)
        self.assertIn("name:B", text)
        self.assertNotIn("STATE[", text)
        self.assertNotIn("// abbreviate_number$tinit", text)
        text, _ = structure.render_symbol(s, [], dict(address_tag="CHT_1", image_base="0x400000"))
        self.assertIn("VA_CHT_1_COMPGEN(UNACCOUNTED, UNKNOWN_SIZE, STATIC_INIT_DISPATCH, abbreviate_number)", text)
        self.assertNotIn("// abbreviate_number$tinit", text)

    def test_compiler_data_symbol_stays_visible_in_macro(self):
        name = "t_object_factory<t_adv_arena>::`RTTI Base Class Descriptor at (0, -1, 0, 0)'"
        s = dict(id="47780", kind="data", category="compiler_data", demangled=name, static="0",
                 display_name=name, mangled="??_R1example", name_tier="A", name_evidence="debug map symbol")
        r = dict(kind="data", rva="4f5fc8", size="18", name=s['mangled'], tier="A", method="rtti-base-descriptor", evidence="checked pointers")
        meta = dict(address_tag="CHT_1", image_base="0x400000")
        text, _ = structure.render_symbol(s, [r], meta)
        self.assertIn(f'DATA_CHT_1_COMPGEN(0x008f5fc8, "{name}")', text)
        self.assertNotIn("// " + name, text)
        text, _ = structure.render_symbol(s, [], meta)
        self.assertIn(f'DATA_CHT_1_COMPGEN(UNACCOUNTED, "{name}")', text)
        self.assertIn("name:A; map symbol; map:47780", text)

    def declaration(self, demangled, **extra):
        return structure.cpp_declaration(dict(demangled=demangled, kind="func", category="functions",
                                             static=extra.get("static", "0")))

    def test_real_function_stubs(self):
        self.assertEqual(self.declaration("public: virtual bool __thiscall t_actor::visible(int) const"),
                         ("bool t_actor::visible(int arg_0) const", False))
        self.assertEqual(self.declaration("public: __thiscall t_actor::t_actor(void)"),
                         ("t_actor::t_actor()", False))
        self.assertEqual(self.declaration("public: static void __cdecl t_actor::clear(void)"),
                         ("void t_actor::clear()", False))
        self.assertEqual(self.declaration("void __cdecl helper(int)", static="1"),
                         ("static void helper(int arg_0)", False))

    def test_anonymous_namespace_and_pointer_parameters(self):
        self.assertEqual(self.declaration(r"int __cdecl ?%C:\work\game\thing.cpp123::helper(int)"),
                         ("int helper(int arg_0)", True))
        self.assertEqual(structure.argument("int (__cdecl *)(int)", 0), "int (* arg_0)(int)")
        self.assertEqual(structure.argument("int (&)[4]", 1), "int (& arg_1)[4]")
        self.assertEqual(structure.argument("char [8]", 2), "char arg_2[8]")
        self.assertEqual(structure.argument("...", 3), "...")

    def test_compiler_symbols_do_not_become_fake_definitions(self):
        self.assertEqual(self.declaration("public: virtual void * __thiscall t_actor::`scalar deleting dtor'(unsigned int)"),
                         (None, False))
        self.assertEqual(self.declaration("not a signature"), (None, False))

    def test_missing_initializer_confidence_is_explicitly_c(self):
        name, tier, evidence = structure.display_name({}, dict(sema="thing#1$init", conf="", evidence="owner unknown"))
        self.assertEqual((name, tier), ("thing#1$init", "C"))
        self.assertIn("owner unknown", evidence)

    def test_game_functions_keep_standard_types(self):
        for dem in (
            "class std::basic_string<char> __cdecl abbreviate_number(int, int)",
            "void __cdecl load(class std::basic_string<char> const &)",
            "public: void __thiscall t_cache<class std::basic_string<char>>::clear(void)",
        ):
            with self.subTest(dem=dem):
                self.assertFalse(structure.is_std(symbol(dem), None))

    def test_std_functions_skip_even_with_game_template_arguments(self):
        for dem in (
            "public: void __thiscall std::vector<class t_actor>::clear(void)",
            "void __cdecl std::swap<class t_actor>(class t_actor &, class t_actor &)",
        ):
            with self.subTest(dem=dem):
                self.assertTrue(structure.is_std(symbol(dem), None))

    def test_data_owner_not_data_type(self):
        self.assertFalse(structure.is_std(symbol("class std::vector<int> g_values", "data"), None))
        self.assertFalse(structure.is_std(symbol("int t_cache<class std::vector<int>>::count", "data"), None))
        self.assertTrue(structure.is_std(symbol("public: static class std::locale::id std::ctype<char>::id", "data"), None))

    def test_initializer_owner_not_signature(self):
        self.assertTrue(structure.is_std(symbol(""), {"owner": "std::ctype<char>::id"}))
        self.assertFalse(structure.is_std(symbol(""), {"owner": "t_table<class std::string>::instance"}))

    def test_multiple_retail_pieces_count_once(self):
        rows = [dict(id=str(i), skipped=(i == 3)) for i in range(4)]
        retail = {"0": [{"tier": "A"}, {"tier": "B"}], "1": [{"tier": "C"}],
                  "2": [], "3": [{"tier": "A"}]}
        result = structure.counts(rows, retail)
        self.assertEqual(result, dict(total=4, skipped_std=1, included=3,
                                  accounted=2, unaccounted=1, A=1, B=0, C=1, D=0))

    def test_source_tag_requires_same_object_basename(self):
        rows = [dict(mangled=r"?f@?%C:\work\game\other.cpp123@@YAXXZ"),
                dict(mangled=r"?f@?%C:\work\game\thing.cpp456@@YAXXZ")]
        name, tier, evidence = structure.source_info("thing.obj", rows)
        self.assertEqual((name, tier), ("thing.cpp", "A"))
        self.assertIn("thing.cpp", evidence)
        self.assertEqual(structure.source_info("unknown.obj", rows)[:2], ("unknown.cpp", "B"))


if __name__ == "__main__":
    unittest.main()
