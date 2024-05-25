#include "tree_sitter/parser.h"
#include <stdbool.h>
#include <stdio.h>

enum TokenType {
  TOKEN_PARAGRAPH_SEP = 0,
};

void *tree_sitter_deb822_external_scanner_create(void) { return NULL; }

void tree_sitter_deb822_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_deb822_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_deb822_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_deb822_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  bool valid_separator = false;
  if (lexer->lookahead == '\n') {
    lexer->result_symbol = TOKEN_PARAGRAPH_SEP;
    while (!lexer->eof(lexer)) {
      lexer->advance(lexer, true);
      int32_t ch = lexer->lookahead;
      if (valid_separator)
        return true;
      switch (ch) {
      case ' ':
      case '\t':
        continue;
      case '\n':
        valid_separator = true;
        continue;
      case '\0':
        return true;
      }
      return false;
    }
  }

  return false;
}
