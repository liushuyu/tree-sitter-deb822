#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_field_name = 1,
  anon_sym_DOT = 2,
  aux_sym_folded_line_token1 = 3,
  anon_sym_POUND = 4,
  aux_sym_comment_token1 = 5,
  sym__hspace = 6,
  anon_sym_COLON = 7,
  aux_sym_statement_token1 = 8,
  sym__separator_line = 9,
  sym_source = 10,
  sym_escape_line = 11,
  sym_folded_line = 12,
  sym_comment = 13,
  sym_paragraph = 14,
  sym_simple_value = 15,
  sym_field_value = 16,
  sym_statement = 17,
  aux_sym_source_repeat1 = 18,
  aux_sym_paragraph_repeat1 = 19,
  aux_sym_paragraph_repeat2 = 20,
  aux_sym_field_value_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_field_name] = "field_name",
  [anon_sym_DOT] = ".",
  [aux_sym_folded_line_token1] = "folded_line_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__hspace] = "_hspace",
  [anon_sym_COLON] = ":",
  [aux_sym_statement_token1] = "statement_token1",
  [sym__separator_line] = "_separator_line",
  [sym_source] = "source",
  [sym_escape_line] = "escape_line",
  [sym_folded_line] = "folded_line",
  [sym_comment] = "comment",
  [sym_paragraph] = "paragraph",
  [sym_simple_value] = "simple_value",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__hspace] = sym__hspace,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [sym__separator_line] = sym__separator_line,
  [sym_source] = sym_source,
  [sym_escape_line] = sym_escape_line,
  [sym_folded_line] = sym_folded_line,
  [sym_comment] = sym_comment,
  [sym_paragraph] = sym_paragraph,
  [sym_simple_value] = sym_simple_value,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('!' <= lookahead && lookahead <= ',') ||
          ('/' <= lookahead && lookahead <= '~')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('!' <= lookahead && lookahead <= ',') ||
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
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
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
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 1},
  [4] = {.lex_state = 2, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 2, .external_lex_state = 1},
  [11] = {.lex_state = 2, .external_lex_state = 1},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 2, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 1},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 2, .external_lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym__hspace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__separator_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(23),
    [sym_comment] = STATE(1),
    [sym_paragraph] = STATE(18),
    [sym_statement] = STATE(17),
    [aux_sym_source_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_field_name,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_statement,
    STATE(18), 1,
      sym_paragraph,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_repeat1,
  [23] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(16), 1,
      sym__hspace,
    ACTIONS(14), 2,
      sym__separator_line,
      sym_field_name,
    STATE(3), 2,
      sym_comment,
      aux_sym_field_value_repeat1,
    STATE(14), 2,
      sym_escape_line,
      sym_folded_line,
  [42] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym__hspace,
    STATE(3), 1,
      aux_sym_field_value_repeat1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(19), 2,
      sym__separator_line,
      sym_field_name,
    STATE(14), 2,
      sym_escape_line,
      sym_folded_line,
  [63] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym__hspace,
    STATE(4), 1,
      aux_sym_field_value_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(23), 2,
      sym__separator_line,
      sym_field_name,
    STATE(14), 2,
      sym_escape_line,
      sym_folded_line,
  [84] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_statement,
    STATE(18), 1,
      sym_paragraph,
  [109] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(27), 1,
      sym__separator_line,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_paragraph_repeat2,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_statement,
  [131] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__separator_line,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_field_name,
    STATE(8), 2,
      sym_comment,
      aux_sym_paragraph_repeat2,
  [146] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__separator_line,
    STATE(8), 1,
      aux_sym_paragraph_repeat2,
    STATE(9), 1,
      sym_comment,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_field_name,
  [163] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_field_name,
    ACTIONS(39), 1,
      sym__separator_line,
    STATE(17), 1,
      sym_statement,
    STATE(10), 2,
      sym_comment,
      aux_sym_paragraph_repeat1,
  [180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(41), 3,
      sym__separator_line,
      ts_builtin_sym_end,
      sym_field_name,
  [192] = 5,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_simple_value,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      sym_field_value,
  [208] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(47), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(49), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [232] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(51), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [244] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(53), 3,
      sym__separator_line,
      sym_field_name,
      sym__hspace,
  [256] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym__separator_line,
      sym_field_name,
  [267] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_field_name,
  [278] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(59), 2,
      sym__separator_line,
      sym_field_name,
  [289] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      aux_sym_folded_line_token1,
    STATE(20), 1,
      sym_comment,
  [302] = 3,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      aux_sym_statement_token1,
    STATE(21), 1,
      sym_comment,
  [312] = 3,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
  [322] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
  [332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_comment,
  [342] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2, 0, 0),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_line, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_folded_line, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__separator_line = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__separator_line] = sym__separator_line,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__separator_line] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_deb822_external_scanner_create(void);
void tree_sitter_deb822_external_scanner_destroy(void *);
bool tree_sitter_deb822_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_deb822_external_scanner_serialize(void *, char *);
void tree_sitter_deb822_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_deb822(void) {
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
