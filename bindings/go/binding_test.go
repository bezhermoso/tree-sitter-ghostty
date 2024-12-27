package tree_sitter_ghostty_test

import (
	"testing"

	tree_sitter_ghostty "github.com/bezhermoso/tree-sitter-ghostty/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ghostty.Language())
	if language == nil {
		t.Errorf("Error loading Ghostty grammar")
	}
}
