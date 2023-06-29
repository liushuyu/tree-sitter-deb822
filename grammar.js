module.exports = grammar({
  name: "deb822",
  extras: ($) => [$.comment, "\n"],
  conflicts: ($) => [[$.paragraph]],
  word: ($) => $.field_name,
  rules: {
    source: ($) => repeat($.paragraph),
    escape_line: ($) => seq($._hspace, "."),
    field_name: ($) => /[!"$-,\.-9;-~][!-9;-~]*/,
    folded_line: ($) => seq($._hspace, /.+/),
    _hspace: ($) => /[ \t]+/,
    paragraph: ($) => seq(repeat1($.statement), repeat1($._separator_line)),
    field_value: ($) =>
      seq($.simple_value, repeat(choice($.escape_line, $.folded_line))),
    statement: ($) => seq($.field_name, ":", token(/\s*/), $.field_value),
    _separator_line: ($) => /\n[ \t]*\n/,
    comment: ($) => token(seq("#", /.*/)),
    // catch-all
    simple_value: ($) => /.*/,
  },
});
