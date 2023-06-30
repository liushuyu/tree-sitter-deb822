#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_field_name = 1,
  anon_sym_DOT = 2,
  aux_sym_folded_line_token1 = 3,
  sym__hspace = 4,
  anon_sym_COLON = 5,
  aux_sym_statement_token1 = 6,
  sym__separator_line = 7,
  sym_comment = 8,
  sym_simple_value = 9,
  sym_source = 10,
  sym_escape_line = 11,
  sym_folded_line = 12,
  sym_paragraph = 13,
  sym_field_value = 14,
  sym_statement = 15,
  aux_sym_source_repeat1 = 16,
  aux_sym_paragraph_repeat1 = 17,
  aux_sym_paragraph_repeat2 = 18,
  aux_sym_field_value_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_field_name] = "field_name",
  [anon_sym_DOT] = ".",
  [aux_sym_folded_line_token1] = "folded_line_token1",
  [sym__hspace] = "_hspace",
  [anon_sym_COLON] = ":",
  [aux_sym_statement_token1] = "statement_token1",
  [sym__separator_line] = "_separator_line",
  [sym_comment] = "comment",
  [sym_simple_value] = "simple_value",
  [sym_source] = "source",
  [sym_escape_line] = "escape_line",
  [sym_folded_line] = "folded_line",
  [sym_paragraph] = "paragraph",
  [sym_field_value] = "field_value",
  [sym_statement] = "statement",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_paragraph_repeat2] = "paragraph_repeat2",
  [aux_sym_field_value_repeat1] = "field_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_field_name] = sym_field_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_folded_line_token1] = aux_sym_folded_line_token1,
  [sym__hspace] = sym__hspace,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [sym__separator_line] = sym__separator_line,
  [sym_comment] = sym_comment,
  [sym_simple_value] = sym_simple_value,
  [sym_source] = sym_source,
  [sym_escape_line] = sym_escape_line,
  [sym_folded_line] = sym_folded_line,
  [sym_paragraph] = sym_paragraph,
  [sym_field_value] = sym_field_value,
  [sym_statement] = sym_statement,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_paragraph_repeat2] = aux_sym_paragraph_repeat2,
  [aux_sym_field_value_repeat1] = aux_sym_field_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_folded_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__hspace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__separator_line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_line] = {
    .visible = true,
    .named = true,
  },
  [sym_folded_line] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= ',') ||
          ('/' <= lookahead && lookahead <= '~')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '.') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= ',') ||
          ('.' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_field_name);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_folded_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 3},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 2, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 10, .external_lex_state = 2},
};

enum {
  ts_external_token__separator_line = 0,
  ts_external_token_comment = 1,
  ts_external_token_simple_value = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__separator_line] = sym__separator_line,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_simple_value] = sym_simple_value,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__separator_line] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_simple_value] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__separator_line] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_simple_value] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__hspace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__separator_line] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_simple_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym_paragraph] = STATE(2),
    [sym_statement] = STATE(7),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_paragraph,
      aux_sym_source_repeat1,
    STATE(7), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [18] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_field_name,
    STATE(3), 2,
      sym_paragraph,
      aux_sym_source_repeat1,
    STATE(7), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [36] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym__hspace,
    ACTIONS(16), 2,
      sym__separator_line,
      sym_field_name,
    STATE(5), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [52] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym__hspace,
    ACTIONS(20), 2,
      sym__separator_line,
      sym_field_name,
    STATE(6), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [68] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym__hspace,
    ACTIONS(22), 2,
      sym__separator_line,
      sym_field_name,
    STATE(6), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(27), 1,
      sym__separator_line,
    STATE(9), 1,
      aux_sym_paragraph_repeat2,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_field_name,
    ACTIONS(32), 1,
      sym__separator_line,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__separator_line,
    STATE(10), 1,
      aux_sym_paragraph_repeat2,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_field_name,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__separator_line,
    STATE(10), 1,
      aux_sym_paragraph_repeat2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_field_name,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_simple_value,
    STATE(14), 1,
      sym_field_value,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__separator_line,
      sym_field_name,
  [179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_folded_line_token1,
  [189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 179,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 196,
  [SMALL_STATE(18)] = 203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_line, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_folded_line, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_deb822_external_scanner_create(void);
void tree_sitter_deb822_external_scanner_destroy(void *);
bool tree_sitter_deb822_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_deb822_external_scanner_serialize(void *, char *);
void tree_sitter_deb822_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_deb822(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_field_name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_deb822_external_scanner_create,
      tree_sitter_deb822_external_scanner_destroy,
      tree_sitter_deb822_external_scanner_scan,
      tree_sitter_deb822_external_scanner_serialize,
      tree_sitter_deb822_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
