#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  aux_sym_integer_token1 = 9,
  anon_sym_DOT = 10,
  aux_sym_float_token1 = 11,
  anon_sym_0x = 12,
  aux_sym_hexadecimal_token1 = 13,
  sym_boolean = 14,
  sym_value = 15,
  sym__empty_value = 16,
  sym_document = 17,
  sym_assignment = 18,
  sym_comment = 19,
  sym__value = 20,
  sym_string = 21,
  sym_string_interpolation = 22,
  sym_number = 23,
  sym_integer = 24,
  sym_float = 25,
  sym_hexadecimal = 26,
  aux_sym_document_repeat1 = 27,
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
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_float_token1] = "float_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_hexadecimal_token1] = "hexadecimal_token1",
  [sym_boolean] = "boolean",
  [sym_value] = "value",
  [sym__empty_value] = "value",
  [sym_document] = "document",
  [sym_assignment] = "assignment",
  [sym_comment] = "comment",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_string_interpolation] = "string_interpolation",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_hexadecimal] = "hexadecimal",
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
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_hexadecimal_token1] = aux_sym_hexadecimal_token1,
  [sym_boolean] = sym_boolean,
  [sym_value] = sym_value,
  [sym__empty_value] = sym_value,
  [sym_document] = sym_document,
  [sym_assignment] = sym_assignment,
  [sym_comment] = sym_comment,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_hexadecimal] = sym_hexadecimal,
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
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hexadecimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '"', 17,
        '#', 6,
        '\'', 16,
        '-', 35,
        '.', 24,
        '=', 5,
        'f', 9,
        't', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 't') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_interpolation_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_value] = ACTIONS(1),
    [sym__empty_value] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym_assignment] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_integer_token1,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      sym_value,
    ACTIONS(17), 2,
      sym__empty_value,
      sym_boolean,
    STATE(9), 3,
      sym_integer,
      sym_float,
      sym_hexadecimal,
    STATE(8), 4,
      sym__value,
      sym_string,
      sym_string_interpolation,
      sym_number,
  [31] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_assignment,
      sym_comment,
      aux_sym_document_repeat1,
  [46] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(4), 3,
      sym_assignment,
      sym_comment,
      aux_sym_document_repeat1,
  [61] = 2,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [70] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [76] = 1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [82] = 1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [88] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [94] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [100] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [106] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_identifier,
  [112] = 1,
    ACTIONS(49), 1,
      anon_sym_EQ,
  [116] = 1,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
  [120] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(55), 1,
      sym_string_content,
  [128] = 1,
    ACTIONS(57), 1,
      sym_string_interpolation_content,
  [132] = 1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
  [136] = 1,
    ACTIONS(61), 1,
      aux_sym_float_token1,
  [140] = 1,
    ACTIONS(63), 1,
      aux_sym_hexadecimal_token1,
  [144] = 1,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 124,
  [SMALL_STATE(17)] = 128,
  [SMALL_STATE(18)] = 132,
  [SMALL_STATE(19)] = 136,
  [SMALL_STATE(20)] = 140,
  [SMALL_STATE(21)] = 144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
