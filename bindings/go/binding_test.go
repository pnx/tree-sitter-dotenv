package tree_sitter_dotenv_test

import (
	"testing"

	tree_sitter_dotenv "github.com/pnx/tree-sitter-dotenv/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dotenv.Language())
	if language == nil {
		t.Errorf("Error loading Dotenv grammar")
	}
}
