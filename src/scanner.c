#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

enum TokenType {
    EMPTY_VALUE,
};

void *tree_sitter_dotenv_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_dotenv_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_dotenv_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_dotenv_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void advanceWS(TSLexer *lexer) {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        lexer->advance(lexer, true);
    }
}

bool tree_sitter_dotenv_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

    if (valid_symbols[EMPTY_VALUE]) {
        advanceWS(lexer);

        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, true);
        }

        if (lexer->eof(lexer) 
            || lexer->lookahead == '#'
            || lexer->lookahead == '\n') {
            lexer->result_symbol = EMPTY_VALUE;
            return true;
        }
    }

    return false;
}
