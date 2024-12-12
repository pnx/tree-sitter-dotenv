/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

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
      $.hexadecimal,
    ),

    integer: _ => /(\-)?[1-9]\d*/,
    hexadecimal: _ => /0[xX][0-9a-fA-F]+/,
    float: _ => /(\-)?[1-9]\d*\.\d+/,

    boolean: _ => token(choice('true', 'false')),

    value: _ => /[^\#\s\"\']+/,
  },
});
