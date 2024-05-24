package tree_sitter_deb822_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-deb822"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_deb822.Language())
	if language == nil {
		t.Errorf("Error loading Deb822 grammar")
	}
}
