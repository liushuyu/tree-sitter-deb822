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
  aux_sym_simple_line_token1 = 6,
  sym__separator_line = 7,
  sym_comment = 8,
  sym_field_value = 9,
  sym_source = 10,
  sym_escape_line = 11,
  sym_folded_line = 12,
  sym_statement = 13,
  sym_paragraph = 14,
  sym_simple_line = 15,
  aux_sym_source_repeat1 = 16,
  aux_sym_statement_repeat1 = 17,
  aux_sym_paragraph_repeat1 = 18,
  aux_sym_paragraph_repeat2 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_field_name] = "field_name",
  [anon_sym_DOT] = ".",
  [aux_sym_folded_line_token1] = "folded_line_token1",
  [sym__hspace] = "_hspace",
  [anon_sym_COLON] = ":",
  [aux_sym_simple_line_token1] = "simple_line_token1",
  [sym__separator_line] = "_separator_line",
  [sym_comment] = "comment",
  [sym_field_value] = "field_value",
  [sym_source] = "source",
  [sym_escape_line] = "escape_line",
  [sym_folded_line] = "folded_line",
  [sym_statement] = "statement",
  [sym_paragraph] = "paragraph",
  [sym_simple_line] = "simple_line",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_paragraph_repeat2] = "paragraph_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_field_name] = sym_field_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_folded_line_token1] = aux_sym_folded_line_token1,
  [sym__hspace] = sym__hspace,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_simple_line_token1] = aux_sym_simple_line_token1,
  [sym__separator_line] = sym__separator_line,
  [sym_comment] = sym_comment,
  [sym_field_value] = sym_field_value,
  [sym_source] = sym_source,
  [sym_escape_line] = sym_escape_line,
  [sym_folded_line] = sym_folded_line,
  [sym_statement] = sym_statement,
  [sym_paragraph] = sym_paragraph,
  [sym_simple_line] = sym_simple_line,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_paragraph_repeat2] = aux_sym_paragraph_repeat2,
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
  [aux_sym_simple_line_token1] = {
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
  [sym_field_value] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
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
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
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
      ACCEPT_TOKEN(aux_sym_simple_line_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_simple_line_token1);
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
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_field_value);
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
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 18},
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
    [sym_source] = STATE(16),
    [sym_statement] = STATE(4),
    [sym_paragraph] = STATE(3),
    [sym_simple_line] = STATE(2),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_field_name,
    ACTIONS(13), 1,
      sym__hspace,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    STATE(5), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_statement_repeat1,
  [19] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_simple_line,
    STATE(4), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
    STATE(6), 2,
      sym_paragraph,
      aux_sym_source_repeat1,
  [40] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_field_name,
    ACTIONS(24), 1,
      sym__separator_line,
    STATE(2), 1,
      sym_simple_line,
    STATE(9), 1,
      aux_sym_paragraph_repeat2,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [63] = 5,
    ACTIONS(13), 1,
      sym__hspace,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_field_name,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    STATE(7), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_statement_repeat1,
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_field_name,
    STATE(2), 1,
      sym_simple_line,
    STATE(4), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
    STATE(6), 2,
      sym_paragraph,
      aux_sym_source_repeat1,
  [103] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_field_name,
    ACTIONS(39), 1,
      sym__hspace,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    STATE(7), 3,
      sym_escape_line,
      sym_folded_line,
      aux_sym_statement_repeat1,
  [122] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_field_name,
    STATE(2), 1,
      sym_simple_line,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    STATE(8), 2,
      sym_statement,
      aux_sym_paragraph_repeat1,
  [140] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_field_name,
    ACTIONS(51), 1,
      sym__separator_line,
    STATE(12), 1,
      aux_sym_paragraph_repeat2,
  [156] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    ACTIONS(55), 2,
      sym_field_name,
      sym__hspace,
  [168] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    ACTIONS(59), 2,
      sym_field_name,
      sym__hspace,
  [180] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_field_name,
    ACTIONS(65), 1,
      sym__separator_line,
    STATE(12), 1,
      aux_sym_paragraph_repeat2,
  [196] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym__separator_line,
    ACTIONS(70), 2,
      sym_field_name,
      sym__hspace,
  [208] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      aux_sym_folded_line_token1,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COLON,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [232] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_simple_line_token1,
  [239] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_field_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_line, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_line, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_folded_line, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folded_line, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_line, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_line, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
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
