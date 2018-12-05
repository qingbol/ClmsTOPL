/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COMMA = 270,
    CONTINUE = 271,
    DEDENT = 272,
    DEF = 273,
    DEL = 274,
    DOT = 275,
    DOUBLESLASH = 276,
    DOUBLESLASHEQUAL = 277,
    DOUBLESTAR = 278,
    DOUBLESTAREQUAL = 279,
    ELIF = 280,
    ELSE = 281,
    ENDMARKER = 282,
    EQEQUAL = 283,
    EQUAL = 284,
    EXCEPT = 285,
    EXEC = 286,
    FINALLY = 287,
    FOR = 288,
    FROM = 289,
    GLOBAL = 290,
    GREATER = 291,
    GREATEREQUAL = 292,
    GRLT = 293,
    IF = 294,
    IMPORT = 295,
    IN = 296,
    INDENT = 297,
    IS = 298,
    LAMBDA = 299,
    LBRACE = 300,
    LEFTSHIFT = 301,
    LEFTSHIFTEQUAL = 302,
    LESS = 303,
    LESSEQUAL = 304,
    LPAR = 305,
    LSQB = 306,
    MINEQUAL = 307,
    MINUS = 308,
    NEWLINE = 309,
    NOT = 310,
    NOTEQUAL = 311,
    NUMBER = 312,
    OR = 313,
    PASS = 314,
    PERCENT = 315,
    PERCENTEQUAL = 316,
    PLUS = 317,
    PLUSEQUAL = 318,
    PRINT = 319,
    RAISE = 320,
    RBRACE = 321,
    RETURN = 322,
    RIGHTSHIFT = 323,
    RIGHTSHIFTEQUAL = 324,
    RPAR = 325,
    RSQB = 326,
    SEMI = 327,
    SLASH = 328,
    SLASHEQUAL = 329,
    STAR = 330,
    STAREQUAL = 331,
    TILDE = 332,
    TRY = 333,
    VBAREQUAL = 334,
    WHILE = 335,
    WITH = 336,
    YIELD = 337,
    INT_NUM = 338,
    FLOAT_NUM = 339,
    NAME = 340,
    STRING = 341,
    COLON = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "includes/parse.y" /* yacc.c:1919  */

  Node* node_type;
  int int_type;
  /* float float_type; */
  double float_type;
  char *str_type;
  char operator_type;

#line 151 "parse.tab.h" /* yacc.c:1919  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
