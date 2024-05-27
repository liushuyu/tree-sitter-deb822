package tree_sitter_deb822_test

import (
	"testing"

	tree_sitter_deb822 "github.com/liushuyu/tree-sitter-deb822/bindings/go"
	tree_sitter "github.com/smacker/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_deb822.Language())
	if language == nil {
		t.Errorf("Error loading Deb822 grammar")
	}
}
