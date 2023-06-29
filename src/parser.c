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
#define EXTERNAL_TOKEN_COUNT 0
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
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (('!' <= lookahead && lookahead <= ',') ||
          ('/' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (('!' <= lookahead && lookahead <= ',') ||
          ('.' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(17);
      if (('!' <= lookahead && lookahead <= ',') ||
          ('.' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (('!' <= lookahead && lookahead <= ',') ||
          ('.' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_field_name);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_folded_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__separator_line);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__separator_line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__hspace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
  [36] = 5,
    ACTIONS(16), 1,
      sym_field_name,
    ACTIONS(18), 1,
      sym__hspace,
    ACTIONS(20), 1,
      sym__separator_line,
    ACTIONS(22), 1,
      sym_comment,
    STATE(5), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [54] = 5,
    ACTIONS(18), 1,
      sym__hspace,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_field_name,
    ACTIONS(26), 1,
      sym__separator_line,
    STATE(6), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [72] = 5,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_field_name,
    ACTIONS(30), 1,
      sym__hspace,
    ACTIONS(33), 1,
      sym__separator_line,
    STATE(6), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_field_value_repeat1,
  [90] = 5,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_field_name,
    ACTIONS(37), 1,
      sym__separator_line,
    STATE(9), 1,
      aux_sym_paragraph_repeat2,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [107] = 4,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_field_name,
    ACTIONS(42), 1,
      sym__separator_line,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [121] = 5,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_field_name,
    ACTIONS(48), 1,
      sym__separator_line,
    STATE(10), 1,
      aux_sym_paragraph_repeat2,
  [137] = 5,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_field_name,
    ACTIONS(54), 1,
      sym__separator_line,
    STATE(10), 1,
      aux_sym_paragraph_repeat2,
  [153] = 3,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__separator_line,
    ACTIONS(57), 2,
      sym_field_name,
      sym__hspace,
  [164] = 3,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__separator_line,
    ACTIONS(61), 2,
      sym_field_name,
      sym__hspace,
  [175] = 3,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_simple_value,
    STATE(14), 1,
      sym_field_value,
  [185] = 3,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_field_name,
    ACTIONS(69), 1,
      sym__separator_line,
  [195] = 3,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      aux_sym_folded_line_token1,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [219] = 2,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 219,
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
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_value, 1),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_value, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_value_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_value_repeat1, 2), SHIFT_REPEAT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_line, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_line, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folded_line, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_folded_line, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
