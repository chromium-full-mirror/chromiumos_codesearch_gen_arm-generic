// A Bison parser, made by GNU Bison 3.7.3.

// Skeleton interface for Bison GLR parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// C++ GLR parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_NET_WIRELESS_FLOSS_OUT_DEFAULT_GEN_BT_SYSTEM_GD_PACKET_PARSER_LANGUAGE_Y_H_INCLUDED
# define YY_YY_BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_NET_WIRELESS_FLOSS_OUT_DEFAULT_GEN_BT_SYSTEM_GD_PACKET_PARSER_LANGUAGE_Y_H_INCLUDED
// "%code requires" blocks.
#line 1 "../../../../../../../tmp/portage/net-wireless/floss-0.0.2-r1295/work/floss-0.0.2/platform2/bt/system/gd/packet/parser/language_y.yy"

  #include <iostream>
  #include <vector>
  #include <list>
  #include <map>

  #include "declarations.h"
  #include "logging.h"
  #include "field_list.h"
  #include "fields/all_fields.h"

#line 55 "/build/arm-generic/var/cache/portage/net-wireless/floss/out/Default/gen/bt/system/gd/packet/parser/language_y.h"

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

// This skeleton is based on C, yet compiles it as C++.
// So expect warnings about C style casts.
#if defined __clang__ && 306 <= __clang_major__ * 100 + __clang_minor__
# pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined __GNUC__ && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

// On MacOS, PTRDIFF_MAX is defined as long long, which Clang's
// -pedantic reports as being a C++11 extension.
#if defined __APPLE__ && YY_CPLUSPLUS < 201103L \
    && defined __clang__ && 4 <= __clang_major__
# pragma clang diagnostic ignored "-Wc++11-long-long"
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 196 "/build/arm-generic/var/cache/portage/net-wireless/floss/out/Default/gen/bt/system/gd/packet/parser/language_y.h"




  /// A Bison parser.
  class parser
  {
  public:
#ifndef YYSTYPE
    /// Symbol semantic values.
    union semantic_type
    {
#line 36 "../../../../../../../tmp/portage/net-wireless/floss-0.0.2-r1295/work/floss-0.0.2/platform2/bt/system/gd/packet/parser/language_y.yy"

  uint64_t integer;
  std::string* string;

  EnumDef* enum_definition;
  std::map<uint64_t, std::string>* enumeration_values;
  std::pair<uint64_t, std::string>* enumeration_value;

  PacketDef* packet_definition_value;
  FieldList* packet_field_definitions;
  PacketField* packet_field_type;

  StructDef* struct_definition_value;

  std::set<std::string*>* test_cases_t;
  std::string* test_case_t;

  std::map<std::string, std::variant<int64_t, std::string>>* constraint_list_t;
  std::pair<std::string, std::variant<int64_t, std::string>>* constraint_t;

#line 230 "/build/arm-generic/var/cache/portage/net-wireless/floss/out/Default/gen/bt/system/gd/packet/parser/language_y.h"

    };
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    INTEGER = 258,                 // INTEGER
    IS_LITTLE_ENDIAN = 259,        // IS_LITTLE_ENDIAN
    IDENTIFIER = 260,              // IDENTIFIER
    SIZE_MODIFIER = 261,           // SIZE_MODIFIER
    STRING = 262,                  // STRING
    ENUM = 263,                    // "enum"
    PACKET = 264,                  // "packet"
    PAYLOAD = 265,                 // "payload"
    BODY = 266,                    // "body"
    STRUCT = 267,                  // "struct"
    SIZE = 268,                    // "size"
    COUNT = 269,                   // "count"
    FIXED = 270,                   // "fixed"
    RESERVED = 271,                // "reserved"
    GROUP = 272,                   // "group"
    CUSTOM_FIELD = 273,            // "custom_field"
    CHECKSUM = 274,                // "checksum"
    CHECKSUM_START = 275,          // "checksum_start"
    PADDING = 276,                 // "padding"
    TEST = 277                     // "test"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 32, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_INTEGER = 3,                           // INTEGER
        S_IS_LITTLE_ENDIAN = 4,                  // IS_LITTLE_ENDIAN
        S_IDENTIFIER = 5,                        // IDENTIFIER
        S_SIZE_MODIFIER = 6,                     // SIZE_MODIFIER
        S_STRING = 7,                            // STRING
        S_ENUM = 8,                              // "enum"
        S_PACKET = 9,                            // "packet"
        S_PAYLOAD = 10,                          // "payload"
        S_BODY = 11,                             // "body"
        S_STRUCT = 12,                           // "struct"
        S_SIZE = 13,                             // "size"
        S_COUNT = 14,                            // "count"
        S_FIXED = 15,                            // "fixed"
        S_RESERVED = 16,                         // "reserved"
        S_GROUP = 17,                            // "group"
        S_CUSTOM_FIELD = 18,                     // "custom_field"
        S_CHECKSUM = 19,                         // "checksum"
        S_CHECKSUM_START = 20,                   // "checksum_start"
        S_PADDING = 21,                          // "padding"
        S_TEST = 22,                             // "test"
        S_23_ = 23,                              // ':'
        S_24_ = 24,                              // '{'
        S_25_ = 25,                              // ','
        S_26_ = 26,                              // '}'
        S_27_ = 27,                              // '='
        S_28_ = 28,                              // '('
        S_29_ = 29,                              // ')'
        S_30_ = 30,                              // '['
        S_31_ = 31,                              // ']'
        S_YYACCEPT = 32,                         // $accept
        S_file = 33,                             // file
        S_declarations = 34,                     // declarations
        S_declaration = 35,                      // declaration
        S_enum_definition = 36,                  // enum_definition
        S_enumeration_list = 37,                 // enumeration_list
        S_enumeration = 38,                      // enumeration
        S_group_definition = 39,                 // group_definition
        S_checksum_definition = 40,              // checksum_definition
        S_custom_field_definition = 41,          // custom_field_definition
        S_test_definition = 42,                  // test_definition
        S_test_case_list = 43,                   // test_case_list
        S_test_case = 44,                        // test_case
        S_struct_definition = 45,                // struct_definition
        S_packet_definition = 46,                // packet_definition
        S_field_definition_list = 47,            // field_definition_list
        S_field_definition = 48,                 // field_definition
        S_group_field_definition = 49,           // group_field_definition
        S_constraint_list = 50,                  // constraint_list
        S_constraint = 51,                       // constraint
        S_type_def_field_definition = 52,        // type_def_field_definition
        S_scalar_field_definition = 53,          // scalar_field_definition
        S_body_field_definition = 54,            // body_field_definition
        S_payload_field_definition = 55,         // payload_field_definition
        S_checksum_start_field_definition = 56,  // checksum_start_field_definition
        S_padding_field_definition = 57,         // padding_field_definition
        S_size_field_definition = 58,            // size_field_definition
        S_fixed_field_definition = 59,           // fixed_field_definition
        S_reserved_field_definition = 60,        // reserved_field_definition
        S_array_field_definition = 61            // array_field_definition
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;


    /// Build a parser object.
    parser (void* scanner_yyarg, Declarations* decls_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (symbol_kind_type yykind,
                                         const semantic_type* yyvaluep,
                                         const location_type* yylocationp) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (symbol_kind_type yykind,
                                   const semantic_type* yyvaluep,
                                   const location_type* yylocationp) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


    // User arguments.
    void* scanner;
    Declarations* decls;
  };

} // yy
#line 435 "/build/arm-generic/var/cache/portage/net-wireless/floss/out/Default/gen/bt/system/gd/packet/parser/language_y.h"




#endif // !YY_YY_BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_NET_WIRELESS_FLOSS_OUT_DEFAULT_GEN_BT_SYSTEM_GD_PACKET_PARSER_LANGUAGE_Y_H_INCLUDED
