from unittest import TestCase

import tree_sitter, tree_sitter_ghostty


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            Parser(Language(tree_sitter_ghostty.language()))
        except Exception:
            self.fail("Error loading Ghostty grammar")
