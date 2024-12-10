/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dotenv",

  extras: $ => [
    /\s/
  ],

  externals: $ => [
    $._empty_value,
  ],

  rules: {
    document: $ => repeat(choice(
      $.comment,
      $.assignment,
    )),

    assignment: $ => seq(
      field("key", $.identifier),
      "=",
      field("value", $._value),
    ),

    comment: _ => seq('#', /.*/),

    identifier: _ => token(/[A-Za-z_][A-Za-z0-9_]*/),

    _value: $ => choice(
      $.string,
      $.string_interpolation,
      $.value,
      alias($._empty_value, $.value),
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

    string_content: _ => token(/[^']*/),
    string_interpolation_content: _ => token(/[^"]*/),
    value: _ => token(prec(-1, /[^\#\=\s]+/)),
  },
});
