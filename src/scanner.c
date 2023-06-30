#include "tree_sitter/parser.h"
#include <stdbool.h>
#include <stdio.h>

enum TokenType {
  TOKEN_PARAGRAPH_SEP = 0,
  TOKEN_COMMENT = 1,
  TOKEN_SIMPLE_VALUE = 2,
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

void take_until_new_line(TSLexer *lexer) {
  while (!lexer->eof(lexer) && lexer->lookahead != '\n') {
    lexer->advance(lexer, false);
  }
}

bool tree_sitter_deb822_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  bool valid_separator = false;
  if (lexer->lookahead == '\n') {
    lexer->result_symbol = TOKEN_PARAGRAPH_SEP;
    while (!lexer->eof(lexer)) {
      lexer->advance(lexer, true);
      int32_t ch = lexer->lookahead;
      if (ch == ' ' || ch == '\t') {
        continue;
      } else if (ch == '\n') {
        valid_separator = true;
        continue;
      } else if (ch == '\0' || valid_separator) {
        return true;
      } else if (ch == '#') {
        lexer->result_symbol = TOKEN_COMMENT;
        take_until_new_line(lexer);
        lexer->mark_end(lexer);
        return true;
      }
      return false;
    }
  } else if (lexer->lookahead == '#' && !valid_symbols[TOKEN_SIMPLE_VALUE]) {
    lexer->result_symbol = TOKEN_COMMENT;
    take_until_new_line(lexer);
    lexer->mark_end(lexer);
    return true;
  } else if (valid_symbols[TOKEN_SIMPLE_VALUE]) {
    lexer->result_symbol = TOKEN_SIMPLE_VALUE;
    take_until_new_line(lexer);
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}
