module.exports = grammar({
  name: "deb822",
  extras: ($) => [$.comment, "\n"],
  word: ($) => $.field_name,
  externals: ($) => [$._separator_line],
  rules: {
    source: ($) => repeat($.paragraph),
    escape_line: ($) => seq($._hspace, "."),
    field_name: ($) => /[!"$-,\.-9;-~][!-9;-~]*/,
    folded_line: ($) => seq($._hspace, /.+/),
    comment: ($) => seq("#", /[^\n]*/),
    _hspace: ($) => /[ \t]+/,
    paragraph: ($) => seq(repeat1($.statement), repeat1($._separator_line)),
    simple_value: ($) => /[^\n]*/,
    field_value: ($) =>
      seq($.simple_value, repeat(choice($.escape_line, $.folded_line))),
    statement: ($) => seq($.field_name, ":", /[ \t]*/, $.field_value),
  },
});
