/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */
 
        #include <iostream>
        #include <map>
        #include <vector>
	#include <cmath>
        #include <string>
	#include "includes/ast.h"
        #include "includes/symbolTableManager.h"

	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);
        PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 81 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    TILDE = 334,
    TRY = 335,
    VBAREQUAL = 336,
    WHILE = 337,
    WITH = 338,
    YIELD = 339,
    INTNUMBER = 340,
    FLOATNUMBER = 341,
    STRING = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "includes/parse.y" /* yacc.c:355  */

	char* id;
	char* strId;
  	int intNumber;
 	long double floatNumber;
  	Node* node;
        std::vector<Node *> * stmts;

#line 218 "parse.tab.c" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 249 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   926

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    56,    59,    64,    75,    76,    79,    80,
      83,    84,    87,    88,    91,    92,    95,    95,   118,   119,
     122,   123,   139,   140,   143,   157,   160,   161,   164,   165,
     168,   169,   172,   178,   181,   182,   185,   186,   189,   196,
     199,   202,   207,   208,   211,   212,   213,   214,   215,   218,
     219,   224,   225,   228,   280,   295,   296,   299,   302,   314,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   331,   344,   347,   348,   351,   352,   355,   356,
     359,   360,   363,   366,   369,   377,   378,   391,   392,   395,
     398,   401,   402,   405,   408,   409,   412,   413,   416,   417,
     420,   421,   424,   427,   430,   431,   434,   435,   436,   439,
     440,   443,   444,   447,   448,   451,   452,   455,   456,   459,
     460,   463,   485,   505,   508,   509,   512,   513,   516,   517,
     518,   519,   520,   521,   522,   523,   526,   532,   542,   559,
     562,   564,   568,   569,   572,   573,   576,   577,   580,   581,
     584,   585,   588,   591,   592,   595,   596,   599,   600,   603,
     604,   607,   608,   611,   617,   623,   628,   636,   637,   640,
     641,   644,   645,   648,   649,   652,   653,   656,   657,   660,
     661,   664,   665,   668,   669,   672,   673,   710,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   723,   724,
     727,   728,   731,   732,   735,   736,   739,   740,   743,   747,
     762,   763,   766,   770,   795,   796,   797,   798,   801,   819,
     823,   824,   825,   828,   836,   867,   868,   871,   873,   875,
     877,   879,   885,   890,   895,   897,   901,   902,   905,   906,
     909,   910,   913,   914,   917,   927,   939,   940,   943,   944,
     947,   948,   951,   963,   964,   967,   968,   971,   972,   975,
     976,   977,   980,   981,   984,   985,   988,   989,   992,   993,
     996,   997,  1000,  1001,  1004,  1005,  1008,  1009,  1012,  1013,
    1016,  1017,  1020,  1021,  1024,  1025,  1028,  1044,  1058,  1061,
    1062,  1065,  1066,  1069,  1070,  1071,  1074,  1075,  1078,  1079,
    1082,  1083,  1086,  1087,  1090,  1091,  1094,  1095,  1098,  1099,
    1102,  1103,  1106,  1107,  1110,  1111,  1114,  1115
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL",
  "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INTNUMBER",
  "FLOATNUMBER", "STRING", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "$@1", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "star_EQUAL_Right", "augassign", "print_stmt", "star_COMMA_test",
  "opt_test", "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "yield_stmt",
  "raise_stmt", "opt_COMMA_test", "opt_test_3", "import_stmt",
  "import_name", "import_from", "pick_dotted_name", "pick_STAR_import",
  "import_as_name", "dotted_as_name", "import_as_names",
  "star_COMMA_import_as_name", "dotted_as_names", "dotted_name",
  "global_stmt", "star_COMMA_NAME", "exec_stmt", "assert_stmt",
  "compound_stmt", "if_stmt", "star_ELIF", "while_stmt", "for_stmt",
  "try_stmt", "plus_except", "opt_ELSE", "opt_FINALLY", "with_stmt",
  "star_COMMA_with_item", "with_item", "except_clause", "pick_AS_COMMA",
  "opt_AS_COMMA", "suite", "plus_stmt", "testlist_safe",
  "plus_COMMA_old_test", "old_test", "old_lambdef", "test", "opt_IF_ELSE",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -313

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-313)))

#define YYTABLE_NINF -264

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -313,    52,  -313,   378,  -313,   280,     3,   280,  -313,    56,
    -313,    63,   839,  -313,   839,   839,  -313,    69,   280,     3,
      46,   280,   154,   280,  -313,  -313,  -313,   825,  -313,  -313,
    -313,   707,   280,   280,  -313,   126,   280,   280,   280,  -313,
    -313,  -313,  -313,  -313,    34,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,    -4,   140,  -313,   215,   136,   138,   152,
      40,   -10,     6,  -313,   839,  -313,  -313,    70,  -313,    96,
    -313,  -313,   142,  -313,    18,  -313,    87,    19,  -313,   136,
    -313,    37,   118,   124,    22,  -313,   151,  -313,   153,    44,
     280,   155,     9,    23,   100,  -313,   137,  -313,   110,  -313,
    -313,   139,   108,  -313,  -313,   280,  -313,  -313,   169,  -313,
     602,   171,  -313,   181,  -313,  -313,  -313,  -313,    39,   174,
     825,   825,  -313,   825,  -313,  -313,  -313,  -313,  -313,   134,
    -313,  -313,   150,  -313,   839,   839,   839,   839,  -313,  -313,
     839,  -313,  -313,   839,  -313,  -313,  -313,  -313,   839,  -313,
      38,  -313,  -313,  -313,  -313,  -313,   154,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   154,   280,   141,
     122,  -313,  -313,   280,   602,   280,   161,   186,   280,   280,
     -14,   163,   193,   200,   602,     3,   162,  -313,   280,   167,
      61,  -313,   168,  -313,   197,   280,   839,   212,  -313,  -313,
    -313,   212,  -313,  -313,   839,   212,  -313,  -313,   214,   212,
     280,  -313,   191,  -313,    71,   602,   121,   839,  -313,   663,
     280,    24,   140,  -313,  -313,  -313,   136,   138,   152,    40,
     -10,     6,  -313,   182,   839,   122,   724,  -313,   206,  -313,
    -313,  -313,  -313,  -313,   175,  -313,    21,  -313,  -313,  -313,
     176,   177,   228,   839,   234,   240,   201,   252,  -313,  -313,
    -313,  -313,   207,  -313,  -313,  -313,  -313,  -313,  -313,   194,
     247,   280,   251,   137,   226,   280,  -313,  -313,   229,  -313,
     280,   258,  -313,  -313,   234,   541,   280,   260,   103,   261,
     250,   602,   280,   136,  -313,  -313,  -313,   280,  -313,  -313,
     208,   257,   264,   209,  -313,   268,  -313,   231,   280,   280,
     101,  -313,   269,   273,  -313,   219,   602,   136,   280,  -313,
     602,   220,   238,   278,  -313,   112,   281,  -313,   272,  -313,
    -313,    -1,  -313,   283,  -313,  -313,   825,   787,  -313,   280,
    -313,  -313,  -313,   460,   109,   602,   285,   276,   291,   602,
     295,  -313,  -313,  -313,  -313,   263,  -313,   297,   280,  -313,
    -313,  -313,   280,  -313,  -313,   242,  -313,   602,  -313,  -313,
    -313,   288,  -313,  -313,   201,   280,   301,    61,   265,   280,
    -313,    54,   303,    15,   305,  -313,   259,  -313,  -313,  -313,
    -313,  -313,   280,  -313,  -313,   602,   307,  -313,   602,  -313,
     602,  -313,   296,  -313,   313,   320,  -313,  -313,   314,  -313,
     323,   602,  -313,  -313,   325,   787,  -313,  -313,  -313,   787,
     328,   787,  -313,  -313,  -313,   787,   329,  -313,  -313,   602,
    -313,  -313,  -313,   280,  -313,  -313,   771,  -313,   602,   602,
    -313,   280,    57,  -313,   787,    15,  -313,   787,  -313,  -313,
    -313,   280,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    89,     0,
      90,     0,     0,     3,     0,     0,   317,     0,     0,     0,
      25,   243,   239,   241,   221,   231,     4,     0,   234,    83,
     220,    77,    95,    92,   222,     0,     0,     0,   315,   232,
     233,   245,     6,    13,     0,   135,   133,     5,    38,    43,
      44,    45,    46,    47,    48,    84,    85,    86,    88,    87,
      49,   100,   101,    50,    51,    52,    39,   128,   129,   130,
     131,   132,    75,   178,   179,   181,   184,   185,   198,   200,
     202,   204,   208,   212,     0,   219,   226,   235,   176,    59,
     134,    93,   127,   119,     0,   312,     0,     0,    16,   271,
      82,   125,     0,     0,     0,   123,     0,   117,   102,   112,
       0,     0,     0,    75,     0,   242,    75,   238,     0,   237,
     236,    75,     0,   240,   183,     0,    72,    75,    99,    91,
       0,     0,   154,   156,   314,    12,    15,    14,     0,   273,
       0,     0,   175,     0,   189,   188,   190,   192,   194,   196,
     187,   191,     0,   193,     0,     0,     0,     0,   206,   207,
       0,   211,   210,     0,   217,   216,   215,   214,     0,   218,
     224,   244,    65,    67,    71,    70,     0,    68,    61,    64,
      60,    69,    63,    62,    66,    54,    57,     0,     0,     0,
     288,     9,   230,     0,     0,   285,     0,   269,     0,     0,
       0,   316,   104,   121,     0,     0,     0,   251,     0,     0,
       0,    32,     0,    20,    23,     0,     0,    31,   275,   280,
     229,    31,   248,   227,     0,    31,   246,   228,    81,    31,
       0,    94,     0,   163,     0,     0,     0,     0,    41,     0,
     272,     0,   180,   182,   197,   195,   186,   199,   201,   203,
     205,   209,   213,     0,     0,   288,   263,   225,    59,    56,
      55,    53,   126,   120,     0,    10,     0,   313,   283,   284,
       0,    25,     0,   268,    97,     0,     0,   110,   106,   103,
     116,   108,     0,   139,   118,   111,   250,    29,    37,     0,
      27,     0,    31,   277,     0,    30,   281,   249,     0,   247,
       0,    31,    73,    76,    97,     0,   158,     0,   149,     0,
     141,     0,     0,   155,    40,    42,    74,     0,   254,   223,
       0,     0,   260,     0,   258,     0,    58,     0,     0,     0,
     299,   286,    31,     0,    19,     0,     0,   270,     0,   124,
       0,     0,     0,   114,   122,   137,    35,    33,     0,    28,
      22,    24,    21,    31,   274,   278,     0,     0,    79,    30,
      80,    98,   166,     0,   162,     0,     0,   151,     0,     0,
       0,   152,   153,   177,   252,     0,   253,   256,   263,     8,
     295,   290,     0,   296,   298,   287,   293,     0,    18,    17,
      96,   143,   107,   109,   113,     0,     0,    34,     0,    30,
     279,   309,    25,   303,   168,   172,   171,    78,   164,   165,
     159,   160,     0,   157,   145,     0,     0,   144,     0,   147,
       0,   259,   255,   262,   265,   292,   297,   282,     0,   115,
       0,     0,    36,    26,     0,     0,   308,   306,   307,     0,
       0,     0,   302,   300,   301,     0,    31,   161,   148,     0,
     146,   140,   257,   267,   261,   264,     0,   294,     0,     0,
     136,     0,   311,   174,     0,   305,   170,    30,   167,   150,
     266,     0,   289,   142,   138,   276,   310,   173,   304,   169,
     291
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,  -313,   302,    94,  -313,  -313,   308,
    -313,  -313,  -260,  -313,  -313,  -313,  -313,  -200,  -202,  -313,
    -313,  -281,    -2,  -313,   117,  -313,   170,  -313,   104,  -313,
    -313,    27,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,    59,  -313,  -313,  -313,  -313,  -313,  -313,
     -36,   159,    92,  -313,  -313,    13,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,    58,    64,  -313,  -313,  -189,  -313,  -313,  -313,  -312,
    -313,    -5,  -313,  -137,   230,   -15,  -313,  -313,     8,   221,
     213,   217,  -313,   218,  -313,   216,  -313,   -75,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,   -42,    10,  -313,  -313,    -9,  -313,     2,
    -313,  -313,  -313,  -313,   340,  -313,  -313,  -313,  -313,  -313,
    -313,   -65,  -313,   -72,   275,  -313,   -63,  -109,  -313,  -313,
     -12,  -313
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    42,     3,    43,   264,    44,    45,    46,
     196,   272,   111,   292,   112,   349,   213,   296,   214,   289,
     346,    47,   233,   138,    49,    50,   258,   185,   186,   187,
      51,   139,   126,   301,   302,    52,    53,    54,    55,    56,
      57,    58,    59,   339,   231,    60,    61,    62,   103,   279,
     280,   107,   281,   343,   108,   109,    63,   203,    64,    65,
      66,    67,   345,    68,    69,    70,   308,   367,   417,    71,
     236,   132,   309,   412,   413,   234,   363,   403,   446,   404,
     405,    72,   142,    73,    74,    75,    76,   154,    77,    78,
      79,    80,   160,    81,   163,    82,   168,    83,    84,    85,
     170,    86,   117,   118,   122,   114,    87,   123,   119,    88,
     257,   323,   377,   324,   325,   454,   455,   100,   197,    89,
     115,   353,   354,   218,    90,   270,   265,   266,   425,   457,
     331,   332,   383,   442,   443,   444,   436,   437,   438,    96,
      91,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    48,    95,   241,   219,   268,   102,   222,   288,   169,
     120,   335,   124,   106,   -30,   283,   113,   116,   121,    94,
      99,   297,   101,    99,   362,   299,   127,   128,   164,   303,
       7,   131,   133,   209,   194,   129,   140,   276,   215,   189,
     134,   277,     6,   201,   161,   328,   310,   155,     9,   224,
     206,   317,     4,    11,   162,   441,   141,   216,    93,   253,
     210,   110,   254,   278,   211,   189,    20,    21,   165,   190,
     195,   -30,    22,    23,   191,    24,    25,    93,    27,   198,
      28,   166,   409,   167,   141,    30,   212,   158,   216,   255,
     256,   216,   352,   252,   435,   238,   192,   435,   329,   172,
      34,   360,   306,   193,   307,   207,    39,    40,    41,   173,
     159,    97,   210,   239,   141,   410,   211,   202,    98,   174,
     228,   175,   371,   462,   105,   411,   176,   463,   243,   465,
     366,   382,   386,   466,   306,   216,   311,   312,   395,   396,
     217,   130,   440,   221,   177,   143,   155,   389,   225,   178,
     156,   391,   477,   400,   229,   479,   157,   171,   188,   179,
     199,   180,   246,     7,   260,   200,   204,   181,   220,   205,
     208,   216,   182,   224,   183,   260,   414,   184,   259,   319,
     419,   227,   223,   262,   355,   230,   235,   237,   267,   259,
     240,   244,   245,   274,   -11,   432,   263,   269,   427,    20,
      21,   275,   273,   286,  -105,    22,    23,   294,    24,    25,
     293,    27,   271,    28,   189,   298,   282,   285,    30,   401,
     406,   384,   287,   290,    99,   304,   448,   291,   295,   450,
     300,   451,    99,    34,   305,   316,   176,   318,    38,    39,
      40,    41,   460,   336,   144,   313,   468,   327,   333,   334,
     338,   322,   145,   146,   147,   340,   277,   148,   342,   149,
     469,   330,   344,   348,   150,   151,   347,   351,   356,   473,
     474,   357,   152,   153,   359,   365,   369,   370,   375,  -262,
     374,   337,   376,   378,   421,   385,   350,   379,   387,     7,
     316,   388,   392,   393,   394,   358,   398,   397,   406,   399,
     415,   364,   406,    48,   406,     7,   418,   133,   406,   416,
     420,  -263,   373,   422,   -30,   428,   431,   321,   439,   141,
     433,   445,   449,   380,   381,    20,    21,   406,   453,   458,
     406,    22,    23,   390,    24,    25,   456,    27,   459,    28,
     461,    20,    21,   464,    30,   467,   135,    22,    23,   320,
      24,    25,   136,    27,   407,    28,   315,   261,   429,    34,
      30,    48,   326,   361,   284,    39,    40,    41,   341,   248,
     372,   242,   368,   423,   249,    34,   247,   426,   250,   251,
     452,    39,    40,    41,   137,     5,     6,     7,   424,     8,
     430,   472,     9,   478,   434,    10,   226,    11,    12,   476,
       0,     0,     0,     0,     0,     0,    13,   447,     0,     0,
      14,     0,    15,    16,    17,     0,     0,   322,    18,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,    25,    26,    27,     0,    28,     0,    29,
       0,     0,    30,     0,    31,    32,     0,    33,   470,     0,
       0,   330,     0,     0,     0,     0,   475,    34,    35,     0,
      36,    37,    38,    39,    40,    41,   480,     5,     6,     7,
       0,     8,     0,     0,     9,     0,     0,    10,   408,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
      18,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,    25,     0,    27,     0,    28,
       0,    29,     0,     0,    30,     0,    31,    32,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,    36,    37,    38,    39,    40,    41,     5,     6,
       7,     0,     8,     0,     0,     9,     0,     0,    10,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,    15,    16,    17,     0,     0,
       0,    18,    19,     0,     0,     0,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    24,    25,     0,    27,     0,
      28,     0,    29,     0,     0,    30,     0,    31,    32,     5,
      33,     7,     0,     8,     0,     0,     0,     0,     0,    10,
      34,    35,    12,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,    14,     0,     0,    16,    17,     0,
       0,     0,     0,    19,     0,     0,     0,    20,    21,     0,
       0,     0,     0,    22,    23,     0,    24,    25,   232,    27,
       0,    28,     0,    29,     0,     0,    30,     0,    31,    32,
       5,    33,     7,     0,     8,     0,     0,     0,     0,     0,
      10,    34,     0,    12,     0,     0,    38,    39,    40,    41,
       0,     0,     0,     0,     0,    14,     0,     0,    16,    17,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
       0,     0,     0,     0,    22,    23,     7,    24,    25,   314,
      27,     0,    28,     0,    29,     0,     0,    30,     0,    31,
      32,     0,    33,     7,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,   321,     0,    38,    39,    40,
      41,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,    25,     0,    27,     0,    28,     0,     0,    20,
      21,    30,     0,     0,     0,    22,    23,   125,    24,    25,
       7,    27,     0,    28,     0,     0,    34,     0,    30,     0,
       0,     0,    39,    40,    41,   471,     7,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,    39,
      40,    41,     0,     0,     0,     0,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    24,    25,     0,    27,     0,
      28,     0,   402,    21,     7,    30,     0,     0,    22,    23,
       0,    24,    25,     0,    27,     0,    28,     0,     7,     0,
      34,    30,     0,     0,     0,     0,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,    21,    39,    40,    41,     0,    22,    23,     0,    24,
      25,     0,    27,     0,    28,    21,     0,     0,     0,    30,
      22,    23,     0,    24,    25,     0,     0,     0,    28,     0,
       0,     0,     0,    30,    34,     0,     0,     0,     0,     0,
      39,    40,    41,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   140,   113,   194,    15,   116,   210,    84,
      22,   271,    27,    18,    15,   204,    21,    22,    23,     6,
      12,   221,    14,    15,   305,   225,    31,    32,    22,   229,
       9,    36,    37,    24,    15,    33,    40,    51,    15,    21,
      38,    55,     8,    21,    54,    24,   235,    10,    14,    34,
       6,    27,     0,    19,    64,    40,    60,    34,    55,    21,
      51,    15,    24,    77,    55,    21,    45,    46,    62,    51,
      51,    72,    51,    52,    56,    54,    55,    55,    57,    42,
      59,    75,   363,    77,    60,    64,    77,    47,    34,    51,
      52,    34,   292,   168,    40,    56,     9,    40,    77,     3,
      79,   301,    31,    16,    33,   110,    85,    86,    87,    13,
      70,    55,    51,    74,    60,     6,    55,   104,    55,    23,
     125,    25,   311,   435,    55,    16,    30,   439,   143,   441,
      27,    30,   332,   445,    31,    34,    15,    16,    26,    27,
     113,    15,   402,   116,    48,     5,    10,   336,   121,    53,
      12,   340,   464,   353,   127,   467,     4,    87,    16,    63,
      42,    65,   154,     9,   176,    41,    15,    71,    68,    16,
      15,    34,    76,    34,    78,   187,   365,    81,   176,   254,
     369,    73,    72,   188,   293,    16,    15,     6,   193,   187,
      16,    57,    42,   198,    72,   397,    55,   195,   387,    45,
      46,   199,    16,   208,    41,    51,    52,   216,    54,    55,
     215,    57,    51,    59,    21,   224,    16,    55,    64,   356,
     357,   330,    55,    55,   216,   230,   415,    30,    16,   418,
      16,   420,   224,    79,    43,   240,    30,    55,    84,    85,
      86,    87,   431,    15,    29,   237,   446,    72,    72,    72,
      16,   256,    37,    38,    39,    15,    55,    42,     6,    44,
     449,   266,    55,    16,    49,    50,    72,    16,    42,   458,
     459,    42,    57,    58,    16,    15,    15,    27,    21,    15,
      72,   273,    73,    15,    21,    16,   291,    56,    15,     9,
     295,    72,    72,    55,    16,   300,    24,    16,   435,    16,
      15,   306,   439,   305,   441,     9,    15,   312,   445,    33,
      15,    15,   317,    16,    72,    27,    15,    21,    15,    60,
      55,    16,    15,   328,   329,    45,    46,   464,    15,    15,
     467,    51,    52,   338,    54,    55,    16,    57,    15,    59,
      15,    45,    46,    15,    64,    16,    44,    51,    52,   255,
      54,    55,    44,    57,   359,    59,   239,   187,   394,    79,
      64,   363,   258,   304,   205,    85,    86,    87,   276,   156,
     312,   141,   308,   378,   157,    79,   155,   382,   160,   163,
     422,    85,    86,    87,    44,     7,     8,     9,   378,    11,
     395,   456,    14,   465,   399,    17,   121,    19,    20,   462,
      -1,    -1,    -1,    -1,    -1,    -1,    28,   412,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,   422,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,    -1,    69,   453,    -1,
      -1,   456,    -1,    -1,    -1,    -1,   461,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,   471,     7,     8,     9,
      -1,    11,    -1,    -1,    14,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    -1,    64,    -1,    66,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    -1,    64,    -1,    66,    67,     7,
      69,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      79,    80,    20,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    -1,    61,    -1,    -1,    64,    -1,    66,    67,
       7,    69,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    79,    -1,    20,    -1,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,     9,    54,    55,    56,
      57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,    66,
      67,    -1,    69,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    21,    -1,    84,    85,    86,
      87,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    45,
      46,    64,    -1,    -1,    -1,    51,    52,    70,    54,    55,
       9,    57,    -1,    59,    -1,    -1,    79,    -1,    64,    -1,
      -1,    -1,    85,    86,    87,    24,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,
      59,    -1,    45,    46,     9,    64,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,     9,    -1,
      79,    64,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    46,    85,    86,    87,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    -1,    59,    46,    -1,    -1,    -1,    64,
      51,    52,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    64,    79,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    57,    59,    61,
      64,    66,    67,    69,    79,    80,    82,    83,    84,    85,
      86,    87,    91,    93,    95,    96,    97,   109,   110,   112,
     113,   118,   123,   124,   125,   126,   127,   128,   129,   130,
     133,   134,   135,   144,   146,   147,   148,   149,   151,   152,
     153,   157,   169,   171,   172,   173,   174,   176,   177,   178,
     179,   181,   183,   185,   186,   187,   189,   194,   197,   207,
     212,   228,   169,    55,   143,   169,   227,    55,    55,   176,
     205,   176,   205,   136,   229,    55,   169,   139,   142,   143,
      15,   100,   102,   169,   193,   208,   169,   190,   191,   196,
     228,   169,   192,   195,   173,    70,   120,   169,   169,   207,
      15,   169,   159,   169,   207,    93,    97,   212,   111,   119,
      40,    60,   170,     5,    29,    37,    38,    39,    42,    44,
      49,    50,    57,    58,   175,    10,    12,     4,    47,    70,
     180,    54,    64,   182,    22,    62,    75,    77,   184,   185,
     188,    87,     3,    13,    23,    25,    30,    48,    53,    63,
      65,    71,    76,    78,    81,   115,   116,   117,    16,    21,
      51,    56,     9,    16,    15,    51,    98,   206,    42,    42,
      41,    21,   143,   145,    15,    16,     6,   169,    15,    24,
      51,    55,    77,   104,   106,    15,    34,   119,   211,   225,
      68,   119,   225,    72,    34,   119,   222,    73,   169,   119,
      16,   132,    56,   110,   163,    15,   158,     6,    56,    74,
      16,   171,   172,   173,    57,    42,   176,   177,   178,   179,
     181,   183,   185,    21,    24,    51,    52,   198,   114,   207,
     228,   114,   169,    55,    94,   214,   215,   169,   163,   207,
     213,    51,    99,    16,   169,   207,    51,    55,    77,   137,
     138,   140,    16,   163,   139,    55,   169,    55,   106,   107,
      55,    30,   101,   169,   205,    16,   105,   105,   205,   105,
      16,   121,   122,   105,   169,    43,    31,    33,   154,   160,
     163,    15,    16,   176,    56,   112,   169,    27,    55,   185,
      94,    21,   169,   199,   201,   202,   116,    72,    24,    77,
     169,   218,   219,    72,    72,   100,    15,   176,    16,   131,
      15,   140,     6,   141,    55,   150,   108,    72,    16,   103,
     169,    16,   105,   209,   210,   225,    42,    42,   169,    16,
     105,   131,   109,   164,   169,    15,    27,   155,   160,    15,
      27,   163,   159,   169,    72,    21,    73,   200,    15,    56,
     169,   169,    30,   220,   225,    16,   105,    15,    72,   163,
     169,   163,    72,    55,    16,    26,    27,    16,    24,    16,
     105,   171,    45,   165,   167,   168,   171,   169,    18,   109,
       6,    16,   161,   162,   163,    15,    33,   156,    15,   163,
      15,    21,    16,   169,   202,   216,   169,   163,    27,   138,
     169,    15,   106,    55,   169,    40,   224,   225,   226,    15,
     100,    40,   221,   222,   223,    16,   166,   169,   163,    15,
     163,   163,   201,    15,   203,   204,    16,   217,    15,    15,
     163,    15,   167,   167,    15,   167,   167,    16,   105,   163,
     169,    24,   219,   163,   163,   169,   224,   167,   221,   167,
     169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    98,    97,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   124,   125,   125,   125,   125,   125,   126,
     127,   128,   128,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   136,   136,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   176,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   184,   184,   185,   185,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   201,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     0,     6,     3,     2,
       2,     4,     2,     0,     4,     0,     3,     0,     3,     2,
       1,     0,     1,     3,     3,     2,     3,     0,     1,     1,
       4,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     0,     3,     0,     3,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     4,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     3,     0,     1,     3,     1,
       3,     3,     3,     0,     5,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     5,     5,     0,
       7,     4,     9,     6,     6,     6,     4,     3,     3,     0,
       3,     0,     5,     3,     0,     3,     1,     3,     1,     1,
       1,     2,     0,     1,     4,     2,     1,     3,     1,     3,
       2,     1,     1,     4,     3,     2,     1,     4,     0,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     4,     2,     2,     0,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     2,     3,     2,     3,
       4,     3,     3,     3,     2,     3,     2,     3,     0,     3,
       1,     4,     1,     0,     1,     0,     2,     1,     3,     2,
       3,     0,     3,     2,     4,     2,     5,     0,     1,     2,
       1,     2,     7,     4,     1,     0,     2,     3,     0,     3,
       0,     3,     0,     2,     4,     2,     2,     3,     1,     0,
       1,     1,     5,     4,     3,     2,     1,     1,     5,     4,
       3,     2,     1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 56 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1922 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 4:
#line 59 "includes/parse.y" /* yacc.c:1666  */
    { 
		(yyval.node) = new PrintNode(0); 
		pool.add((yyval.node));
		// return NEWLINE; 
		}
#line 1932 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 5:
#line 65 "includes/parse.y" /* yacc.c:1666  */
    { 
		if((yyvsp[0].node))
		{
		(yyvsp[0].node)->eval();
		//    std::cout << "$1 is" <<$1->eval()->getVal()<< std::endl;
		   (yyval.node) = (yyvsp[0].node);
		}
	}
#line 1945 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 6:
#line 75 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1951 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 7:
#line 76 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 1957 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 10:
#line 83 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = (yyvsp[0].stmts); }
#line 1963 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 11:
#line 84 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 1969 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 16:
#line 95 "includes/parse.y" /* yacc.c:1666  */
    { SymbolTableManager::getInstance().funcDepth += 1; }
#line 1975 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 17:
#line 96 "includes/parse.y" /* yacc.c:1666  */
    { 
              if((yyvsp[-4].id) != nullptr && (yyvsp[0].stmts) != nullptr)
              {   
              	  Node* n = new IdentNode((yyvsp[-4].id));
		       	  if((yyvsp[-2].stmts) == nullptr)
                  {
		      	  	(yyvsp[-2].stmts) = new std::vector<Node*>;
		      		pool.addVec((yyvsp[-2].stmts));
		  		  }
                  Node* func = new FuncNode(n, (yyvsp[-2].stmts), (yyvsp[0].stmts), SymbolTableManager::getInstance().funcDepth);
                  if(SymbolTableManager::getInstance().funcDepth == 0) { (yyval.node) = func; }
                  else { (yyval.node) = nullptr; }
                  const std::string id = static_cast<IdentNode*>(n)->getIdent();
	          SymbolTableManager::getInstance().setFunctionTable(id,func);
                  pool.add(n);
                  pool.add(func);
              }
	      SymbolTableManager::getInstance().funcDepth -= 1;
              delete [] (yyvsp[-4].id); 
          }
#line 2000 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 18:
#line 118 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = (yyvsp[-1].stmts);}
#line 2006 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 19:
#line 119 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 2012 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 20:
#line 122 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 2018 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 21:
#line 124 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[-3].stmts) == nullptr)
              {							
                  (yyval.stmts) = new std::vector<Node*>;
		  (yyval.stmts)->push_back((yyvsp[-2].node)); 
		  pool.addVec((yyval.stmts));
	      }
              else
              {
		  (yyvsp[-3].stmts)->push_back((yyvsp[-2].node));
		  (yyval.stmts) = (yyvsp[-3].stmts);
	      }
          }
#line 2036 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 24:
#line 144 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[-3].stmts) == nullptr)
              {							
                  (yyval.stmts) = new std::vector<Node*>;
		  (yyval.stmts)->push_back((yyvsp[-2].node)); 
		  pool.addVec((yyval.stmts));
	      }
              else
              {
		  (yyvsp[-3].stmts)->push_back((yyvsp[-2].node));
		  (yyval.stmts) = (yyvsp[-3].stmts);
	      }
          }
#line 2054 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 25:
#line 157 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 2060 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 26:
#line 160 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2066 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 27:
#line 161 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2072 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 28:
#line 164 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[-1].id); }
#line 2078 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 29:
#line 165 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2084 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 32:
#line 173 "includes/parse.y" /* yacc.c:1666  */
    { 
              (yyval.node) = new IdentNode((yyvsp[0].id)); 
              delete [] (yyvsp[0].id); 
              pool.add((yyval.node)); 
          }
#line 2094 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 33:
#line 178 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr;}
#line 2100 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 38:
#line 190 "includes/parse.y" /* yacc.c:1666  */
    { 
              (yyval.node) = (yyvsp[0].node);
              //$1->eval();
            //   if(SymbolTableManager::getInstance().funcDepth == 0) { $1->eval(); }
            //   std::cout << "simple_stmt" << $1->eval()->getVal() << std::endl;
          }
#line 2111 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 39:
#line 196 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2117 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 40:
#line 199 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-3].node); 
            //   std::cout << "simple_stmt" << $1->eval()->getVal() << std::endl;
	}
#line 2125 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 41:
#line 202 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-2].node);
            //   std::cout << "simple_stmt" << $1->eval()->getVal() << std::endl;
	 }
#line 2133 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 44:
#line 211 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2139 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 45:
#line 212 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2145 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 46:
#line 213 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2151 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 47:
#line 214 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2157 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 48:
#line 215 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); 
            //   std::cout << "simple_stmt" << $1->eval()->getVal() << std::endl;
	}
#line 2165 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 49:
#line 218 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2171 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 50:
#line 220 "includes/parse.y" /* yacc.c:1666  */
    { 
              (yyval.node) = new GlobalNode((yyvsp[0].stmts)); 
              pool.add((yyval.node));
          }
#line 2180 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 51:
#line 224 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2186 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 52:
#line 225 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2192 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 53:
#line 229 "includes/parse.y" /* yacc.c:1666  */
    { 
              if((yyvsp[-1].intNumber) == PLUSEQUAL)
              {
                  Node* rhs = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == MINEQUAL)
              {
                  Node* rhs = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == STAREQUAL)
              {
                  Node* rhs = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == SLASHEQUAL)
              {
                  Node* rhs = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == PERCENTEQUAL)
              {
                  Node* rhs = new PercentBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == DOUBLESTAREQUAL)
              {
                  Node* rhs = new DoubleStarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
              if((yyvsp[-1].intNumber) == DOUBLESLASHEQUAL)
              {
                  Node* rhs = new DoubleSlashBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  (yyval.node) = new SuiteNode((yyvsp[-2].node), rhs);
                  pool.add(rhs);
                  pool.add((yyval.node));
              }
          }
#line 2248 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 54:
#line 281 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[0].node) != nullptr)
              {
				(yyval.node) = new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
                //   $$ = new SuiteNode($1, $2);
                  pool.add((yyval.node));
              }
              else
              {
                  (yyval.node) = (yyvsp[-1].node);
              } 
          }
#line 2265 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 55:
#line 295 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2271 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 56:
#line 296 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2277 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 57:
#line 299 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2283 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 58:
#line 303 "includes/parse.y" /* yacc.c:1666  */
    { 
              if((yyvsp[0].node) == nullptr)
              {
                  (yyval.node) = (yyvsp[-1].node);
              }
              else
              { 
                  (yyval.node) = new SuiteNode((yyvsp[-1].node), (yyvsp[0].node));
                  pool.add((yyval.node));
              }
          }
#line 2299 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 59:
#line 314 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2305 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 60:
#line 317 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = PLUSEQUAL; }
#line 2311 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 61:
#line 318 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = MINEQUAL; }
#line 2317 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 62:
#line 319 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = STAREQUAL; }
#line 2323 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 63:
#line 320 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = SLASHEQUAL; }
#line 2329 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 64:
#line 321 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 2335 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 65:
#line 322 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = AMPEREQUAL; }
#line 2341 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 66:
#line 323 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = VBAREQUAL; }
#line 2347 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 67:
#line 324 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = CIRCUMFLEXEQUAL; }
#line 2353 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 68:
#line 325 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = LEFTSHIFTEQUAL; }
#line 2359 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 69:
#line 326 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = RIGHTSHIFTEQUAL; }
#line 2365 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 70:
#line 327 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 2371 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 71:
#line 328 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 2377 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 72:
#line 332 "includes/parse.y" /* yacc.c:1666  */
    { 
              if((yyvsp[0].node) != nullptr)
              {
              	(yyval.node) = new PrintNode((yyvsp[0].node)); 
                pool.add((yyval.node));
          
              } 
              else
              {
              	(yyval.node) = nullptr;
              } 
          }
#line 2394 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 73:
#line 344 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2400 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 74:
#line 347 "includes/parse.y" /* yacc.c:1666  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2406 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 75:
#line 348 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = 0;}
#line 2412 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 76:
#line 351 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2418 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 77:
#line 352 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2424 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 84:
#line 370 "includes/parse.y" /* yacc.c:1666  */
    { 
	      if((yyvsp[0].node) == nullptr)
	      {
	          (yyval.node) = new BreakNode(nullptr);
                  pool.add((yyval.node));
	      }
          }
#line 2436 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 85:
#line 377 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2442 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 86:
#line 379 "includes/parse.y" /* yacc.c:1666  */
    {
	      if((yyvsp[0].node) == nullptr)
	      {
	          (yyval.node) = new ReturnNode(nullptr);
                  pool.add((yyval.node));
	      }
              else
              {
	          (yyval.node) = new ReturnNode((yyvsp[0].node));
	          pool.add((yyval.node));
	      }
	  }
#line 2459 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 87:
#line 391 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2465 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 88:
#line 392 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2471 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 89:
#line 395 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr;}
#line 2477 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 91:
#line 401 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2483 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 92:
#line 402 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr;}
#line 2489 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 109:
#line 439 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[-2].id); delete [] (yyvsp[0].id); }
#line 2495 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 110:
#line 440 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2501 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 111:
#line 443 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2507 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 119:
#line 459 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2513 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 120:
#line 460 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[0].id); }
#line 2519 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 121:
#line 464 "includes/parse.y" /* yacc.c:1666  */
    {
	      if((yyvsp[0].stmts) == nullptr)
              {
                  (yyval.stmts) = new std::vector<Node*>;
                  Node* n = new IdentNode((yyvsp[-1].id));
                  (yyval.stmts) ->push_back(n);
                  pool.add(n);
                  pool.addVec((yyval.stmts));
                  delete [] (yyvsp[-1].id);
              }
              else
              {
                  Node* n = new IdentNode((yyvsp[-1].id));
                  (yyvsp[0].stmts)->push_back(n);
                  (yyval.stmts) = (yyvsp[0].stmts);
	          pool.add(n);
                  delete [] (yyvsp[-1].id);
              }
	  }
#line 2543 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 122:
#line 486 "includes/parse.y" /* yacc.c:1666  */
    { 
	      if((yyvsp[-2].stmts) == nullptr)
              {
                  (yyval.stmts) = new std::vector<Node*>;
                  Node* n = new IdentNode((yyvsp[0].id));
                  (yyval.stmts) ->push_back(n);
                  pool.add(n);
	          pool.addVec((yyval.stmts));
	          delete [] (yyvsp[0].id);
              }
              else
              {
	          Node* n = new IdentNode((yyvsp[0].id));
                  (yyvsp[-2].stmts)->push_back(n);
                  (yyval.stmts) = (yyvsp[-2].stmts);
                  pool.add(n);
	          delete [] (yyvsp[0].id);
              }
          }
#line 2567 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 123:
#line 505 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 2573 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 128:
#line 516 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2579 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 129:
#line 517 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2585 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 130:
#line 518 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2591 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 131:
#line 519 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2597 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 132:
#line 520 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2603 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 133:
#line 521 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2609 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 134:
#line 522 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2615 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 135:
#line 523 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2621 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 136:
#line 527 "includes/parse.y" /* yacc.c:1666  */
    { 
			//   $$ = new IfNode($2,$4,$8);
			  (yyval.node) = new IfNode((yyvsp[-6].node), (yyvsp[-4].stmts), (yyvsp[-3].stmts),(yyvsp[0].stmts)); 
			  pool.add((yyval.node)); 
			  }
#line 2631 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 137:
#line 533 "includes/parse.y" /* yacc.c:1666  */
    { 

			//   $$ = new IfNode($2,$4,nullptr);
			  (yyval.node) = new IfNode((yyvsp[-3].node), (yyvsp[-1].stmts), (yyvsp[0].stmts),nullptr); 
			  pool.add((yyval.node)); 
		  
		  }
#line 2643 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 138:
#line 543 "includes/parse.y" /* yacc.c:1666  */
    {
		if((yyvsp[-4].stmts) == nullptr)
		{
			(yyval.stmts) = new std::vector<Node*>;
			Node* elif_node = new ElifNode((yyvsp[-2].node),(yyvsp[0].stmts));
			(yyval.stmts)->push_back(elif_node);
			pool.add(elif_node);
			pool.addVec((yyval.stmts));
		} else 
		{
			Node* elif_node = new ElifNode((yyvsp[-2].node),(yyvsp[0].stmts));
			(yyval.stmts)->push_back(elif_node);
			pool.add(elif_node);
			//pool.addVec($$);
		}
	}
#line 2664 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 139:
#line 559 "includes/parse.y" /* yacc.c:1666  */
    {(yyval.stmts) = nullptr;}
#line 2670 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 140:
#line 563 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = new WhileNode((yyvsp[-5].node), (yyvsp[-3].stmts)); (yyval.node)-> eval(); pool.add((yyval.node)); }
#line 2676 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 141:
#line 565 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = new WhileNode((yyvsp[-2].node), (yyvsp[0].stmts)); (yyval.node)-> eval(); pool.add((yyval.node)); }
#line 2682 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 163:
#line 612 "includes/parse.y" /* yacc.c:1666  */
    {
	      (yyval.stmts) = new std::vector<Node*>;
              (yyval.stmts) -> push_back((yyvsp[0].node));
              pool.addVec((yyval.stmts));
	  }
#line 2692 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 164:
#line 618 "includes/parse.y" /* yacc.c:1666  */
    {   
              (yyval.stmts) = (yyvsp[-1].stmts); 
          }
#line 2700 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 165:
#line 624 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[0].node)!=nullptr) (yyvsp[-1].stmts) -> push_back((yyvsp[0].node)); 
	      (yyval.stmts) = (yyvsp[-1].stmts);
	  }
#line 2709 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 166:
#line 629 "includes/parse.y" /* yacc.c:1666  */
    {
	      (yyval.stmts) = new std::vector<Node*>;
              if((yyvsp[0].node) !=nullptr) (yyval.stmts) -> push_back((yyvsp[0].node));
              pool.addVec((yyval.stmts));
	  }
#line 2719 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 175:
#line 652 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2725 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 176:
#line 653 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2731 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 179:
#line 660 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2737 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 180:
#line 661 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2743 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 181:
#line 664 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2749 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 182:
#line 665 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2755 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 183:
#line 668 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2761 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 184:
#line 669 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2767 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 185:
#line 672 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2773 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 186:
#line 674 "includes/parse.y" /* yacc.c:1666  */
    { 
              if((yyvsp[-1].intNumber) == 1)
	      { 
	             (yyval.node) = new LessBinaryNode((yyvsp[-2].node), (yyvsp[0].node));

                  pool.add((yyval.node));							
              }
              if((yyvsp[-1].intNumber) == 2)
              {
	              (yyval.node) = new GreaterBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  pool.add((yyval.node));
	      }
              if((yyvsp[-1].intNumber) == 3)
              {
	              (yyval.node) = new EqEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
	              //std::cout << "comp"<< $$->eval()->getVal()<< std::endl;
                  pool.add((yyval.node));
	      }
              if((yyvsp[-1].intNumber) == 4)
              {
	          (yyval.node) = new GreaterEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  pool.add((yyval.node));									
              } 
              if((yyvsp[-1].intNumber) == 5)
              {
	          (yyval.node) = new LessEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  pool.add((yyval.node));
	      } 
              if((yyvsp[-1].intNumber) == 7)
              {
	          (yyval.node) = new NotEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
                  pool.add((yyval.node));									
              } 
          }
#line 2812 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 187:
#line 710 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 1; }
#line 2818 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 188:
#line 711 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 2; }
#line 2824 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 189:
#line 712 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 3; }
#line 2830 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 190:
#line 713 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 4; }
#line 2836 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 191:
#line 714 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 5; }
#line 2842 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 192:
#line 715 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 6; }
#line 2848 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 193:
#line 716 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 7; }
#line 2854 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 194:
#line 717 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 8; }
#line 2860 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 195:
#line 718 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 9; }
#line 2866 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 196:
#line 719 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 10; }
#line 2872 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 197:
#line 720 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = 11; }
#line 2878 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 198:
#line 723 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2884 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 199:
#line 724 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2890 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 200:
#line 727 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2896 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 201:
#line 728 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2902 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 202:
#line 731 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2908 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 203:
#line 732 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2914 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 204:
#line 735 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2920 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 205:
#line 736 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 2926 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 208:
#line 744 "includes/parse.y" /* yacc.c:1666  */
    { 
              (yyval.node) = (yyvsp[0].node); 
          }
#line 2934 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 209:
#line 748 "includes/parse.y" /* yacc.c:1666  */
    { 
              if ((yyvsp[-1].intNumber) == PLUS)
              {
                  (yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
              if ((yyvsp[-1].intNumber) == MINUS)
              {
                  (yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
          }
#line 2951 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 210:
#line 762 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = PLUS; }
#line 2957 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 211:
#line 763 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = MINUS; }
#line 2963 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 212:
#line 767 "includes/parse.y" /* yacc.c:1666  */
    { 
              (yyval.node) = (yyvsp[0].node); 
          }
#line 2971 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 213:
#line 771 "includes/parse.y" /* yacc.c:1666  */
    { 
              if ((yyvsp[-1].intNumber) == STAR)
              {
                  (yyval.node) = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
              if ((yyvsp[-1].intNumber) == SLASH)
              {
                  (yyval.node) = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
              if ((yyvsp[-1].intNumber) == PERCENT)
              {
                  (yyval.node) = new PercentBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
              if ((yyvsp[-1].intNumber) == DOUBLESLASH)
              {
                  (yyval.node) = new DoubleSlashBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
          }
#line 2998 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 214:
#line 795 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = STAR; }
#line 3004 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 215:
#line 796 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = SLASH; }
#line 3010 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 216:
#line 797 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = PERCENT; }
#line 3016 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 217:
#line 798 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = DOUBLESLASH; }
#line 3022 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 218:
#line 802 "includes/parse.y" /* yacc.c:1666  */
    { 
              if ((yyvsp[-1].intNumber) == PLUS)  (yyval.node) = (yyvsp[0].node);
              if ((yyvsp[-1].intNumber) == MINUS) 
              {
                  Node* tmp = new IntLiteral(0);
                  (yyval.node) = new SubBinaryNode(tmp, (yyvsp[0].node)); 
                  pool.add(tmp);
                  pool.add((yyval.node));
              }
              if ((yyvsp[-1].intNumber) == TILDE) 
              {
                  Node* tmp = new IntLiteral(-1);
                  (yyval.node) = new SubBinaryNode(tmp, (yyvsp[0].node)); 
                  pool.add(tmp);
                  pool.add((yyval.node));
              }
          }
#line 3044 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 219:
#line 820 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3050 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 220:
#line 823 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = PLUS; }
#line 3056 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 221:
#line 824 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = MINUS; }
#line 3062 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 222:
#line 825 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.intNumber) = TILDE; }
#line 3068 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 223:
#line 829 "includes/parse.y" /* yacc.c:1666  */
    { 
              if ((yyvsp[-2].stmts) == nullptr && (yyvsp[-3].node) != nullptr)
              {
                  (yyval.node) = new DoubleStarBinaryNode((yyvsp[-3].node), (yyvsp[0].node)); 
                  pool.add((yyval.node));
              }
          }
#line 3080 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 224:
#line 837 "includes/parse.y" /* yacc.c:1666  */
    { 
              if ((yyvsp[0].stmts) != nullptr && (yyvsp[-1].node) != nullptr)
              {
                  Node* call = new CallNode((yyvsp[-1].node), (yyvsp[0].stmts));
                  pool.add(call);
	          if(SymbolTableManager::getInstance().funcDepth == 0)
	          {
                      const Node* res = call->eval();			
                      if(res != nullptr)	
                      {				
                          (yyval.node)= const_cast<Node*>(res);
                      }					
                      else
                      {							
		          (yyval.node) = new IntLiteral(1000000000);
                          pool.add((yyval.node));	
                      }
                  }									
                  else 
                  {        
                      (yyval.node) = call;
                  }							
              } 
              else 
              {
                  (yyval.node) = (yyvsp[-1].node);
              } 			
          }
#line 3113 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 225:
#line 867 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = (yyvsp[0].stmts); }
#line 3119 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 226:
#line 868 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 3125 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 227:
#line 872 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = (yyvsp[-1].node);   }
#line 3131 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 228:
#line 874 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = nullptr;   }
#line 3137 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 229:
#line 876 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = nullptr;   }
#line 3143 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 230:
#line 878 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = nullptr;   }
#line 3149 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 231:
#line 880 "includes/parse.y" /* yacc.c:1666  */
    {
              (yyval.node) = new IdentNode((yyvsp[0].id));        
              delete [] (yyvsp[0].id);
              pool.add((yyval.node));
          }
#line 3159 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 232:
#line 886 "includes/parse.y" /* yacc.c:1666  */
    {
              (yyval.node) = new IntLiteral((yyvsp[0].intNumber));        
              pool.add((yyval.node));
          }
#line 3168 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 233:
#line 891 "includes/parse.y" /* yacc.c:1666  */
    {
              (yyval.node) = new FloatLiteral((yyvsp[0].floatNumber));      
              pool.add((yyval.node));
          }
#line 3177 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 234:
#line 896 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = nullptr;   }
#line 3183 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 235:
#line 898 "includes/parse.y" /* yacc.c:1666  */
    {   (yyval.node) = (yyvsp[0].node);   }
#line 3189 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 236:
#line 901 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3195 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 237:
#line 902 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3201 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 238:
#line 905 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3207 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 239:
#line 906 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3213 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 244:
#line 918 "includes/parse.y" /* yacc.c:1666  */
    {
		std::string s((yyvsp[0].strId)), t("");
	  	for(unsigned int i = 1; i < s.size()-1; ++i){
	  		t = t + s[i];
	  	}
	  	(yyval.node) = new StringLiteral(t);
	  	pool.add((yyval.node));
	  	delete [] (yyvsp[0].strId);
	}
#line 3227 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 245:
#line 928 "includes/parse.y" /* yacc.c:1666  */
    {
		std::string s((yyvsp[0].strId)), t("");
	  	for(unsigned int i = 1; i < s.size()-1; ++i){
	  		t = t + s[i];
	  	}
	  	(yyval.node) = new StringLiteral(t);
	  	pool.add((yyval.node));
	  	delete [] (yyvsp[0].strId);
	}
#line 3241 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 248:
#line 943 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3247 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 249:
#line 944 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 3253 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 252:
#line 952 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[-1].stmts) == nullptr)
              {
	          (yyval.stmts) = new std::vector<Node*>;
		  pool.addVec((yyval.stmts));
              }
	      else
              {                    
                  (yyval.stmts) = (yyvsp[-1].stmts);
	      }
          }
#line 3269 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 253:
#line 963 "includes/parse.y" /* yacc.c:1666  */
    {(yyval.stmts) = 0;}
#line 3275 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 254:
#line 964 "includes/parse.y" /* yacc.c:1666  */
    {(yyval.stmts) = 0; delete [] (yyvsp[0].id);}
#line 3281 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 272:
#line 1000 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3287 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 273:
#line 1001 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3293 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 282:
#line 1020 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[-5].id); }
#line 3299 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 283:
#line 1021 "includes/parse.y" /* yacc.c:1666  */
    { delete [] (yyvsp[-2].id); }
#line 3305 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 286:
#line 1029 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[-1].stmts) == nullptr)
              {
	          (yyval.stmts) = new std::vector<Node*>; 
                  (yyval.stmts)->push_back((yyvsp[0].node));
		  pool.addVec((yyval.stmts));
              }
	      else
              {       
                  (yyvsp[-1].stmts)->push_back((yyvsp[0].node));             
                  (yyval.stmts) = (yyvsp[-1].stmts);
	      }
          }
#line 3323 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 287:
#line 1045 "includes/parse.y" /* yacc.c:1666  */
    {
              if((yyvsp[-2].stmts) == nullptr)
              {
	          (yyval.stmts) = new std::vector<Node*>; 
                  (yyval.stmts)->push_back((yyvsp[-1].node));
		  pool.addVec((yyval.stmts));
              }
	      else
              {       
                  (yyvsp[-2].stmts)->push_back((yyvsp[-1].node));             
                  (yyval.stmts) = (yyvsp[-2].stmts);
	      }
          }
#line 3341 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 288:
#line 1058 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.stmts) = nullptr; }
#line 3347 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 293:
#line 1069 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-1].node);}
#line 3353 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 294:
#line 1070 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3359 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 295:
#line 1071 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = nullptr; }
#line 3365 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 296:
#line 1074 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3371 "parse.tab.c" /* yacc.c:1666  */
    break;


#line 3375 "parse.tab.c" /* yacc.c:1666  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1118 "includes/parse.y" /* yacc.c:1910  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

