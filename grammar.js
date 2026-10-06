/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//
const integer_decimal = /(\-)?[1-9]\d*/
const integer_hexadecimal = /0[xX][0-9a-fA-F]+/
const float_fractional_part = /\.\d+/

module.exports = grammar({
  name: "dotenv",

  word: $ => $.identifier,

  externals: $ => [
    $._end_of_assignment,
  ],

  rules: {
    document: $ => repeat(choice(
      $.comment,
      $.assignment,
    )),

    assignment: $ => choice(
      seq(
        field("key", choice(
          $.identifier,
          alias("export", $.identifier),
        )),
        "=",
        optional(field("value", $._value)),
        $._end_of_assignment,
      ),
      prec(1, seq(
        "export",
        field("key", choice(
          $.identifier,
          alias("export", $.identifier),
        )),
        "=",
        optional(field("value", $._value)),
        $._end_of_assignment,
      )),
    ),

    comment: _ => /\#[^\n]*/,

    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,
    variable: $ => choice(
      seq('$', $.identifier),
      $._braced_variable,
    ),

    _braced_variable: $ => seq('$', '{', $.identifier, '}'),

    _value: $ => choice(
      $.string,
      $.number,
      $.boolean,
      $.variable,
      $.value,
    ),

    // Strings

    string: $ => choice(
      $._string,
      $._literal_string,
      $._unquoted_string,
    ),

    _unquoted_string: $ => choice(
      alias($._unquoted_content, $.string_content),
      seq(
        choice(
          alias($.value, $.string_content),
          alias($.boolean, $.string_content),
          alias($.decimal, $.string_content),
          alias($.hexadecimal, $.string_content),
          alias($.float, $.string_content),
          alias($._unquoted_content, $.string_content),
        ),
        alias($._braced_variable, $.variable),
        optional(choice(
          alias($.value, $.string_content),
          alias($._unquoted_content, $.string_content),
        )),
      ),
    ),

    _unquoted_content: _ => token(choice(
      /[^\#\s\"\'\$]+(?:[ \t]+[^\#\s\"\'\$]+)+/,
      seq(
        /[^\#\s\"\'\$]+(?:[ \t]+[^\#\s\"\'\$]+)*/,
        repeat1(seq(
          /\$[A-Za-z_][A-Za-z0-9_]*/,
          optional(/(?:[ \t]*[^\#\s\"\'\$]+)+/),
        )),
      ),
    )),

    _literal_string: $ => seq(
      "'",
      optional(alias(/[^']+/, $.string_content)),
      "'",
    ),

    _string: $ => seq(
      '"',
      optional(repeat(choice(
        alias(/[^"\$]+/, $.string_content),
        $.variable
      ))),
      '"',
    ),

    // Numbers

    number: $ => choice(
      $.integer,
      $.float,
    ),

    integer: $ => choice(
      $.decimal,
      $.hexadecimal
    ),

    decimal: _ => integer_decimal,
    hexadecimal: _ => integer_hexadecimal,
    float: _ => token(seq(integer_decimal, float_fractional_part)),

    boolean: _ => token(choice('true', 'false')),

    value: _ => /[^\#\s\"\'\$]+/,
  },
});
