/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dotenv",

  extras: _ => [
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
      $.number,
      $.boolean,
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

    // Strings

    string_content: _ => token(/[^']*/),
    string_interpolation_content: _ => token(/[^"]*/),

    // Numbers

    number: $ => choice(
      $.integer,
      $.float,
      $.hexadecimal,
    ),

    integer: _ => token(/(\-)?\d+/),
    float: _ => seq(/(\-)?\d+/, '.', /\d+/),
    hexadecimal: _ => seq('0x', /[0-9a-fA-F]+/),

    boolean: _ => token(choice('true', 'false')),

    value: _ => token(prec(-1, /[^\#\=\s]+/)),
  },
});
