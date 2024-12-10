#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  sym_identifier = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_DQUOTE = 6,
  sym_string_content = 7,
  sym_string_interpolation_content = 8,
  sym_value = 9,
  sym__empty_value = 10,
  sym_document = 11,
  sym_assignment = 12,
  sym_comment = 13,
  sym__value = 14,
  sym_string = 15,
  sym_string_interpolation = 16,
  aux_sym_document_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_string_interpolation_content] = "string_content",
  [sym_value] = "value",
  [sym__empty_value] = "value",
  [sym_document] = "document",
  [sym_assignment] = "assignment",
  [sym_comment] = "comment",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_string_interpolation] = "string_interpolation",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_string_interpolation_content] = sym_string_content,
  [sym_value] = sym_value,
  [sym__empty_value] = sym_value,
  [sym_document] = sym_document,
  [sym_assignment] = sym_assignment,
  [sym_comment] = sym_comment,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_string_interpolation] = sym_string_interpolation,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation_content] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_value] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(15);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string_interpolation_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_value] = ACTIONS(1),
    [sym__empty_value] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(11),
    [sym_assignment] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_value,
    ACTIONS(15), 1,
      sym__empty_value,
    STATE(6), 3,
      sym__value,
      sym_string,
      sym_string_interpolation,
  [18] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_assignment,
      sym_comment,
      aux_sym_document_repeat1,
  [33] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(4), 3,
      sym_assignment,
      sym_comment,
      aux_sym_document_repeat1,
  [48] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [54] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [60] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [66] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [72] = 1,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
  [76] = 1,
    ACTIONS(37), 1,
      anon_sym_EQ,
  [80] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(41), 1,
      sym_string_content,
  [88] = 1,
    ACTIONS(43), 1,
      sym_string_interpolation_content,
  [92] = 1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
  [96] = 1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__empty_value = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__empty_value] = sym__empty_value,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__empty_value] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dotenv_external_scanner_create(void);
void tree_sitter_dotenv_external_scanner_destroy(void *);
bool tree_sitter_dotenv_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dotenv_external_scanner_serialize(void *, char *);
void tree_sitter_dotenv_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dotenv(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dotenv_external_scanner_create,
      tree_sitter_dotenv_external_scanner_destroy,
      tree_sitter_dotenv_external_scanner_scan,
      tree_sitter_dotenv_external_scanner_serialize,
      tree_sitter_dotenv_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
