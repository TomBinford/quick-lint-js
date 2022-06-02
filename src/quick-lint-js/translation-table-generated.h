// Code generated by tools/compile-translations.go. DO NOT EDIT.
// source: po/*.po

// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/assert.h>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 5;
constexpr std::uint16_t translation_table_mapping_table_size = 284;
constexpr std::size_t translation_table_string_table_size = 60504;
constexpr std::size_t translation_table_locale_table_size = 37;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {178, "missing condition for if statement"},
          {0, ""},
          {0, ""},
          {0, ""},
          {26, "'}' is not allowed directly in JSX text; write {{'}'} instead"},
          {164, "missing body for 'if' statement"},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {0, ""},
          {0, ""},
          {229, "switch statement is missing '{1}' around condition"},
          {0, ""},
          {0, ""},
          {256, "unexpected expression; missing key for object entry"},
          {0, ""},
          {25, "'{0}' operator cannot be used before '**' without parentheses"},
          {158, "missing '<>' and '</>' to enclose multiple children"},
          {31, "JSON syntax error"},
          {137, "index signature must be a field, not a method"},
          {91, "continue can only be used inside of a loop"},
          {107, "expected expression before newline"},
          {125, "function called before declaration in block scope: {0}"},
          {226, "something happened"},
          {250, "unexpected '{0}'"},
          {202, "missing semicolon after field"},
          {0, ""},
          {82, "children end here"},
          {134, "if statement needs parentheses around condition"},
          {173, "missing body for {1:headlinese}"},
          {191, "missing name of exported function"},
          {151, "let statement cannot declare variables named 'let'"},
          {168, "missing body for do-while loop"},
          {0, ""},
          {0, ""},
          {255, "unexpected control character"},
          {6, "\"globals\" must be an object"},
          {150, "legacy octal literals may not contain underscores"},
          {0, ""},
          {258, "unexpected literal in parameter list; expected parameter name"},
          {0, ""},
          {193, "missing operand for operator"},
          {233, "try statement starts here"},
          {0, ""},
          {273, "variable declared here"},
          {184, "missing function parameter list"},
          {0, ""},
          {0, ""},
          {257, "unexpected identifier in expression; missing operator before"},
          {0, ""},
          {270, "use of undeclared variable: {0}"},
          {0, ""},
          {129, "generator function '*' belongs after keyword function"},
          {123, "free {1} and {0} {1} {2}"},
          {43, "TypeScript optional properties are not allowed in JavaScript code"},
          {0, ""},
          {50, "a 'while' loop"},
          {0, ""},
          {33, "RegExp literal flags cannot contain Unicode escapes"},
          {219, "private properties are not allowed in object literals"},
          {0, ""},
          {62, "assignment to const variable"},
          {0, ""},
          {81, "character is not allowed in identifiers"},
          {0, ""},
          {15, "'do-while' loop"},
          {0, ""},
          {0, ""},
          {80, "cannot update variable with '{0}' while declaring it"},
          {32, "React/JSX is not yet implemented"},
          {73, "cannot declare and export variable with 'export default'"},
          {29, "C-style for loop is missing its third component"},
          {101, "expected ',' between object literal entries"},
          {0, ""},
          {120, "for-in loop expression cannot have semicolons"},
          {45, "TypeScript's 'enum' feature is not yet implemented by quick-lint-js"},
          {0, ""},
          {30, "C-style for loops have only three semicolon-separated components"},
          {37, "TypeScript interface methods cannot be marked 'async'"},
          {186, "missing initializer in const declaration"},
          {276, "while loop is missing '{1}' around condition"},
          {0, ""},
          {0, ""},
          {140, "integer cannot be represented and will be rounded to '{1}'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {65, "assignment to undeclared variable"},
          {90, "const variable declared here"},
          {155, "missing ',' between variable declarations"},
          {0, ""},
          {0, ""},
          {40, "TypeScript interface properties cannot be 'static'"},
          {47, "TypeScript's 'readonly' feature is not allowed in JavaScript code"},
          {79, "cannot reference private variables without object; use 'this.'"},
          {87, "commas are not allowed after spread parameter"},
          {132, "hex number literal has no digits"},
          {144, "invalid function parameter"},
          {105, "expected '{{'"},
          {75, "cannot export variable named 'let'"},
          {13, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {157, "missing ':' in conditional expression"},
          {0, ""},
          {268, "use 'while' instead to loop until a condition is false"},
          {177, "missing comparison; '{1}' does not extend to the right side of '{0}'"},
          {181, "missing end of array; expected ']'"},
          {51, "a 'with' statement"},
          {133, "if statement is missing '{1}' around condition"},
          {0, ""},
          {235, "unclosed class; expected '}' by end of file"},
          {0, ""},
          {0, ""},
          {0, ""},
          {220, "redeclaration of global variable"},
          {241, "unclosed string literal"},
          {271, "variable already declared here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {265, "unmatched indexing bracket"},
          {262, "unexpected token in variable declaration; expected variable name"},
          {277, "while loop needs parentheses around condition"},
          {20, "'readonly static' is not allowed; write 'static readonly' instead"},
          {103, "expected 'from \"name_of_module.mjs\"'"},
          {124, "function call started here"},
          {162, "missing arrow operator for arrow function"},
          {156, "missing '...' in JSX attribute spread"},
          {0, ""},
          {0, ""},
          {267, "unopened block comment"},
          {0, ""},
          {166, "missing body for catch clause"},
          {84, "classes cannot be named 'let'"},
          {174, "missing catch or finally clause for try statement"},
          {0, ""},
          {185, "missing header and body for 'for' loop"},
          {238, "unclosed interface; expected '}' by end of file"},
          {112, "expected variable name for 'catch'"},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {41, "TypeScript interface properties cannot be private"},
          {0, ""},
          {194, "missing operator between expression and arrow function"},
          {119, "for loop needs an iterable, or condition and update clauses"},
          {0, ""},
          {282, "{0} with no bindings"},
          {109, "expected hexadecimal digits in Unicode escape sequence"},
          {67, "binary number literal has no digits"},
          {279, "with statement needs parentheses around expression"},
          {0, ""},
          {142, "invalid UTF-8 sequence"},
          {24, "'{0}' is not allowed for strings; use {1} instead"},
          {141, "interface properties are always public and cannot be marked {0}"},
          {121, "for-of loop expression cannot have semicolons"},
          {214, "object literal started here"},
          {207, "missing value for object property"},
          {266, "unmatched parenthesis"},
          {0, ""},
          {242, "unclosed template"},
          {225, "see here"},
          {0, ""},
          {0, ""},
          {92, "depth limit exceeded"},
          {0, ""},
          {187, "missing name for class method"},
          {18, "'if' statement"},
          {60, "assigning to 'async' in a for-of loop requires parentheses"},
          {251, "unexpected characters in binary literal"},
          {218, "opening '<{1}>' tag here"},
          {0, ""},
          {283, "~~~ invalid string, do not use outside benchmark ~~~"},
          {55, "a {{0} b }} c"},
          {118, "extra ',' is not allowed between function call arguments"},
          {153, "methods should not use the 'function' keyword"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {200, "missing property name between '.' and '.'"},
          {171, "missing body for try statement"},
          {0, ""},
          {0, ""},
          {49, "a 'for' loop"},
          {192, "missing name or parentheses for function"},
          {0, ""},
          {163, "missing body for 'for' loop"},
          {0, ""},
          {230, "switch statement needs parentheses around condition"},
          {0, ""},
          {195, "missing parameters for arrow function"},
          {145, "invalid hex escape sequence: {0}"},
          {72, "cannot declare 'yield' inside generator function"},
          {231, "this {0} looks fishy"},
          {0, ""},
          {135, "imported variable declared here"},
          {34, "TypeScript call signatures are only allowed in classes"},
          {69, "cannot access private identifier outside class"},
          {221, "redeclaration of variable: {0}"},
          {99, "existing variable declared here"},
          {127, "function starts here"},
          {240, "unclosed regexp literal"},
          {0, ""},
          {254, "unexpected characters in octal literal"},
          {281, "{0} is not allowed in JavaScript"},
          {98, "event attributes must be camelCase: '{1}'"},
          {154, "mismatched JSX tags; expected '</{1}>'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {83, "classes cannot be named 'await' in async function"},
          {0, ""},
          {136, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {0, ""},
          {35, "TypeScript generics are not allowed in JavaScript code"},
          {64, "assignment to imported variable"},
          {0, ""},
          {0, ""},
          {138, "index signatures require a value type"},
          {275, "what is this '{1}' nonsense?"},
          {196, "missing parentheses around left-hand side of '**'"},
          {0, ""},
          {0, ""},
          {71, "cannot declare 'await' inside async function"},
          {102, "expected 'as' between '{1}' and '{2}'"},
          {0, ""},
          {0, ""},
          {128, "functions/methods should not have '=>'"},
          {0, ""},
          {104, "expected 'from' before module specifier"},
          {244, "unexpected '@'"},
          {264, "unmatched '}'"},
          {0, ""},
          {46, "TypeScript's 'interface' feature is not allowed in JavaScript code"},
          {0, ""},
          {17, "'for' loop"},
          {48, "a 'do-while' loop"},
          {170, "missing body for function"},
          {42, "TypeScript interfaces cannot be named 'await' in async function"},
          {0, ""},
          {147, "keywords cannot contain escape sequences"},
          {246, "unexpected 'case' outside switch statement"},
          {165, "missing body for 'switch' statement"},
          {27, "BigInt literal contains decimal point"},
          {0, ""},
          {180, "missing condition for while statement"},
          {263, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {189, "missing name of class"},
          {161, "missing 'while (condition)' for do-while statement"},
          {54, "a lexical declaration is not allowed as the body of {1:singular}"},
          {216, "octal literal may not have exponent"},
          {205, "missing semicolon between condition and update parts of for loop"},
          {0, ""},
          {280, "write a name to declare a class method"},
          {269, "use of undeclared type: {0}"},
          {0, ""},
          {0, ""},
          {253, "unexpected characters in number literal"},
          {261, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {52, "a class statement is not allowed as the body of {1:singular}"},
          {58, "array started here"},
          {0, ""},
          {19, "'in' disallowed in C-style for loop initializer"},
          {148, "label named 'await' not allowed in async function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {9, "'=' changes variables; to compare, use '===' instead"},
          {0, ""},
          {198, "missing parentheses around self-invoked function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {274, "variable used before declaration: {0}"},
          {213, "number literal contains trailing underscore(s)"},
          {110, "expected parameter for arrow function, but got a literal instead"},
          {0, ""},
          {159, "missing '=' after variable"},
          {208, "missing variable name"},
          {0, ""},
          {78, "cannot import variable named keyword '{0}'"},
          {39, "TypeScript interface methods cannot contain a body"},
          {0, ""},
          {206, "missing semicolon between init and condition parts of for loop"},
          {278, "with statement is missing '{1}' around expression"},
          {11, "'?' creates a conditional expression"},
          {0, ""},
          {63, "assignment to const variable before its declaration"},
          {10, "'>' is not allowed directly in JSX text; write {{'>'} or &gt; instead"},
          {0, ""},
          {85, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {131, "here"},
          {0, ""},
          {143, "invalid expression left of assignment"},
          {209, "misspelled React attribute; write '{1}' instead"},
          {249, "unexpected 'finally' without 'try'"},
          {182, "missing expression between parentheses"},
          {12, "'async static' is not allowed; write 'static async' instead"},
          {139, "indexing requires an expression"},
          {117, "exporting requires '{{' and '}'"},
          {224, "return statement returns nothing (undefined)"},
          {44, "TypeScript type annotations are not allowed in JavaScript code"},
          {237, "unclosed identifier escape sequence"},
          {0, ""},
          {0, ""},
          {38, "TypeScript interface methods cannot be marked as a generator"},
          {222, "redundant delete statement on variable"},
          {0, ""},
          {68, "break can only be used inside of a loop or switch"},
          {7, "'**' operator cannot be used after unary '{1}' without parentheses"},
          {130, "generator function '*' belongs before function name"},
          {8, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {0, ""},
          {97, "escaping '-' is not allowed in tag names; write '-' instead"},
          {259, "unexpected statement before first switch case, expected 'case' or 'default'"},
          {36, "TypeScript interface fields cannot be initalized"},
          {126, "function declared here"},
          {0, ""},
          {152, "methods cannot be readonly"},
          {272, "variable assigned before its declaration"},
          {57, "another invalid string, do not use outside benchmark"},
          {86, "code point out of range"},
          {197, "missing parentheses around operand of '{0}'"},
          {201, "missing quotes around module name '{0}'"},
          {66, "attribute has wrong capitalization; write '{1}' instead"},
          {172, "missing body for while loop"},
          {23, "'{0}' found here"},
          {94, "do-while loop needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {190, "missing name of exported class"},
          {0, ""},
          {0, ""},
          {113, "expected variable name for 'import'-'as'"},
          {239, "unclosed object literal; expected '}'"},
          {96, "escaped character is not allowed in identifiers"},
          {245, "unexpected '\\' in identifier"},
          {0, ""},
          {0, ""},
          {0, ""},
          {176, "missing comma between object literal entries"},
          {146, "invalid lone literal in object literal"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {70, "cannot assign to loop variable in for of/in loop"},
          {160, "missing 'if' after 'else'"},
          {0, ""},
          {0, ""},
          {228, "stray comma in let statement"},
          {22, "'with' statement"},
          {0, ""},
          {116, "exporting requires 'default'"},
          {217, "octal number literal has no digits"},
          {210, "new variable shadows existing variable"},
          {0, ""},
          {59, "arrow is here"},
          {169, "missing body for finally clause"},
          {0, ""},
          {76, "cannot export variable named keyword '{0}'"},
          {188, "missing name in function statement"},
          {223, "remove '{0}' to update an existing variable"},
          {0, ""},
          {248, "unexpected 'default' outside switch statement"},
          {111, "expected parameter for arrow function, but got an expression instead"},
          {0, ""},
          {243, "unexpected '#'"},
          {1, "\"global-groups\" entries must be strings"},
          {108, "expected expression before semicolon"},
          {236, "unclosed code block; expected '}' by end of file"},
          {106, "expected expression after 'case'"},
          {77, "cannot import 'let'"},
          {115, "expected {1:singular}"},
          {199, "missing property name after '.' operator"},
          {16, "'else' has no corresponding 'if'"},
          {74, "cannot declare variable named keyword '{0}'"},
          {0, ""},
          {215, "octal literal may not have decimal"},
          {56, "an 'if' statement"},
          {252, "unexpected characters in hex literal"},
          {211, "newline is not allowed between 'async' and arrow function parameter list"},
          {61, "assignment to const global variable"},
          {0, ""},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {53, "a function statement is not allowed as the body of {1:singular}"},
          {167, "missing body for class"},
          {234, "unclosed block comment"},
          {95, "do-while statement starts here"},
          {204, "missing semicolon after statement"},
          {212, "number literal contains consecutive underscores"},
          {0, ""},
          {149, "legacy octal literal may not be BigInt"},
          {21, "'while' loop"},
          {93, "do-while loop is missing '{1}' around condition"},
          {183, "missing for loop header"},
          {232, "this {1} looks fishy"},
          {14, "'await' is only allowed in async functions"},
          {227, "stray comma in function parameter"},
          {0, ""},
          {122, "forwarding exports are only allowed in export-from"},
          {0, ""},
          {179, "missing condition for switch statement"},
          {88, "commas are not allowed between class methods"},
          {114, "expected {1:headlinese}"},
          {203, "missing semicolon after index signature"},
          {260, "unexpected token"},
          {0, ""},
          {175, "missing catch variable name between parentheses"},
          {0, ""},
          {0, ""},
          {247, "unexpected 'catch' without 'try'"},
          {28, "BigInt literal contains exponent"},
          {2, "\"global-groups\" must be a boolean or an array"},
          {89, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {0, ""},
          {100, "expected ')' to close function call"},
          {0, ""},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346658274ULL);
  std::uint64_t table_size = 425;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry =
        const_hash_table[(hash + attempt * attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }

  // If you see an error with the following line, translation-table-generated.h
  // is out of date. Run tools/update-translator-sources to rebuild this file.
  QLJS_CONSTEXPR_ASSERT(false);

  return 0;
}
}

#endif

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
