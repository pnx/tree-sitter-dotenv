/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//
const integer_decimal = /(\-)?[1-9]\d*/
const integer_hexadecimal = /0[xX][0-9a-fA-F]+/
const float_fractional_part = /\.\d+/

module.exports = grammar({
  name: "dotenv",

  externals: $ => [
    $._end_of_assignment,
  ],

  rules: {
    document: $ => repeat(choice(
      $.comment,
      $.assignment,
    )),

    assignment: $ => seq(
      field("key", $.identifier),
      "=",
      optional(field("value", $._value)),
      $._end_of_assignment,
    ),

    comment: _ => /\#[^\n]*/,

    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

    _value: $ => choice(
      $.string,
      $.string_interpolation,
      $.number,
      $.boolean,
      $.value,
    ),

    string: $ => seq(
      "'",
      $.string_content,
      "'",
    ),

    string_interpolation: $ => seq(
      '"',
      alias($.string_interpolation_content, $.string_content),
      '"',
    ),

    // Strings

    string_content: _ => /[^']*/,
    string_interpolation_content: _ => /[^"]*/,

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

    value: _ => /[^\#\s\"\']+/,
  },
});
