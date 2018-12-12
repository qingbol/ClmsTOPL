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

  #include "includes/ast.h"
  #include <iostream>
  #include <string>
  #include <typeinfo>
  #include <climits>

  int yylex (void);
  extern char *yytext;
  extern int yylineno;
  void yyerror (const char *);
  /* std::string slice_str(""); */
  int slice_left = 0 , slice_right = 0;
  int org_str_len = 0;
  /* c++ 中包含已定义的最大值INT_MAX */
  /* const int MAX_INT= Integer.MAX_VALUE; */  
  /* const unsigned int MAX_INT= -1; */  
  /* int max_integer = MAX_INT; */

  //used to indicate the parenthesis or square bracket
  std::string bracket_type = "";
  
  PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 91 "parse.tab.c" /* yacc.c:339  */

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
#line 27 "includes/parse.y" /* yacc.c:355  */

  Node* node_type;
  int int_type;
  /* float float_type; */
  double float_type;
  char *str_type;
  char operator_type;

#line 228 "parse.tab.c" /* yacc.c:355  */
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

#line 259 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   884

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

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
       0,    73,    73,    76,    79,    84,    92,    93,    96,    97,
     100,   102,   106,   107,   110,   112,   116,   124,   126,   130,
     131,   134,   135,   138,   139,   142,   144,   147,   149,   154,
     155,   158,   160,   163,   164,   167,   168,   171,   173,   177,
     179,   183,   184,   187,   189,   191,   193,   195,   197,   199,
     201,   203,   207,   267,   275,   277,   288,   298,   302,   304,
     306,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     328,   336,   341,   343,   347,   349,   353,   354,   357,   358,
     361,   364,   367,   369,   371,   373,   375,   379,   382,   385,
     390,   397,   400,   401,   404,   405,   408,   409,   412,   413,
     416,   419,   422,   423,   426,   427,   428,   431,   435,   439,
     441,   444,   445,   448,   449,   452,   453,   456,   458,   462,
     466,   468,   471,   472,   475,   476,   479,   481,   483,   485,
     487,   489,   491,   493,   497,   504,   513,   529,   535,   536,
     539,   540,   543,   544,   547,   548,   551,   552,   555,   556,
     559,   562,   563,   566,   567,   570,   571,   574,   575,   578,
     579,   583,   585,   589,   594,   602,   603,   606,   607,   610,
     611,   614,   615,   622,   624,   628,   630,   634,   636,   640,
     642,   646,   648,   652,   654,   692,   694,   696,   698,   700,
     702,   704,   706,   708,   710,   712,   716,   718,   722,   724,
     728,   730,   734,   736,   740,   741,   744,   746,   764,   766,
     770,   772,   801,   803,   805,   807,   811,   835,   839,   841,
     843,   847,   853,   907,   913,   917,   919,   921,   923,   925,
     931,   940,   944,   948,   950,   954,   956,   960,   961,   964,
     965,   968,   981,  1001,  1002,  1005,  1007,  1011,  1012,  1015,
    1021,  1027,  1033,  1034,  1038,  1039,  1042,  1044,  1049,  1077,
    1079,  1083,  1085,  1089,  1091,  1095,  1096,  1099,  1100,  1104,
    1105,  1108,  1109,  1112,  1113,  1116,  1117,  1120,  1121,  1124,
    1126,  1130,  1131,  1134,  1138,  1139,  1142,  1143,  1146,  1147,
    1150,  1152,  1154,  1158,  1160,  1163,  1164,  1167,  1168,  1171,
    1172,  1175,  1176,  1179,  1180,  1184,  1185,  1188,  1189,  1192,
    1193,  1196,  1197,  1200,  1201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COMMA", "CONTINUE", "DEDENT", "DEF", "DEL",
  "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NEWLINE", "NOT", "NOTEQUAL", "NUMBER",
  "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "PRINT",
  "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR",
  "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "TILDE",
  "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT_NUM", "FLOAT_NUM",
  "NAME", "STRING", "COLON", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
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

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -261

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -272,    54,  -272,   401,  -272,   735,   -23,   735,  -272,    -3,
    -272,    26,   798,  -272,   798,   798,  -272,    45,   735,   -23,
      57,   735,   283,   735,  -272,  -272,   785,  -272,  -272,   339,
     735,   735,  -272,    64,   735,   735,   735,  -272,  -272,  -272,
    -272,  -272,  -272,    42,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,     5,   101,  -272,   501,   122,   145,   155,    56,
      87,    50,  -272,   798,  -272,  -272,    81,  -272,    74,  -272,
    -272,   157,  -272,    18,  -272,   137,   -14,   129,   122,  -272,
      35,   140,   142,     3,  -272,    91,  -272,   169,   116,   735,
     102,    43,    -1,   127,  -272,   165,  -272,   130,  -272,  -272,
     166,   132,  -272,  -272,   735,  -272,  -272,   191,  -272,    30,
     123,  -272,   208,  -272,  -272,  -272,  -272,    55,   203,   785,
     785,  -272,   785,  -272,  -272,  -272,  -272,  -272,   167,  -272,
    -272,   179,  -272,   798,   798,   798,   798,  -272,  -272,   798,
    -272,  -272,   798,  -272,  -272,  -272,  -272,   798,  -272,   118,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   195,   283,   735,   141,   160,  -272,  -272,
     735,   735,    30,   162,   152,   210,   735,   735,   -16,   187,
     224,   230,    30,   -23,   161,  -272,   735,   170,    -7,   171,
    -272,  -272,   222,   798,   735,   237,  -272,  -272,  -272,   237,
    -272,  -272,   798,   237,  -272,  -272,   242,   237,   735,  -272,
     216,  -272,    71,    30,    13,   798,  -272,   641,   735,    21,
     101,  -272,  -272,  -272,   122,   145,   155,    56,    87,    50,
    -272,   175,   798,   160,   684,  -272,   283,  -272,  -272,  -272,
    -272,  -272,   192,  -272,   111,  -272,  -272,   193,  -272,  -272,
     194,    30,   798,   246,   180,   183,  -272,   263,  -272,  -272,
    -272,   185,  -272,  -272,  -272,  -272,  -272,  -272,   201,   257,
     735,   258,   235,   165,   735,  -272,  -272,   238,  -272,   735,
     265,  -272,  -272,   246,   561,   735,   200,    25,   204,   255,
     735,    30,   122,  -272,  -272,  -272,   735,  -272,  -272,   212,
     270,   206,   226,  -272,   211,  -272,   245,   735,   735,   100,
    -272,   289,   219,  -272,  -272,   122,   735,  -272,    30,   239,
     223,   297,  -272,   149,   298,  -272,   291,  -272,  -272,   -30,
    -272,   785,   300,  -272,  -272,   748,  -272,   735,  -272,  -272,
    -272,   481,   139,    30,   234,   292,   243,    30,   248,  -272,
    -272,  -272,  -272,   305,  -272,   317,   735,  -272,  -272,  -272,
     735,  -272,  -272,   267,  -272,    30,  -272,   313,  -272,  -272,
     183,   735,   253,    -7,   256,     9,   735,  -272,   259,    19,
     327,  -272,   285,  -272,  -272,  -272,  -272,  -272,   735,  -272,
    -272,    30,   260,  -272,    30,  -272,    30,  -272,   233,  -272,
     262,   329,  -272,  -272,   264,  -272,   266,    30,  -272,  -272,
     748,  -272,  -272,  -272,   268,   748,   269,   748,  -272,  -272,
    -272,   748,   335,  -272,  -272,    30,  -272,  -272,  -272,   735,
    -272,  -272,   698,  -272,    30,    30,  -272,   138,   735,  -272,
     748,    19,  -272,   748,  -272,  -272,  -272,   735,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    87,     0,
      88,     0,     0,     3,     0,     0,   314,     0,     0,     0,
      24,   240,   236,   238,   219,     4,     0,    81,   218,    75,
      93,    90,   220,     0,     0,     0,   312,   230,   231,   229,
     242,     6,    13,     0,   133,   131,     5,    37,    42,    43,
      44,    45,    46,    47,    82,    83,    84,    86,    85,    48,
      98,    99,    49,    50,    51,    38,   126,   127,   128,   129,
     130,    73,   176,   177,   179,   182,   183,   196,   198,   200,
     202,   206,   210,     0,   217,   224,   232,   174,    57,   132,
      91,   125,   117,     0,   309,     0,     0,     0,   268,    80,
     123,     0,     0,     0,   121,     0,   115,   100,   110,     0,
       0,     0,    73,     0,   239,    73,   235,     0,   234,   233,
      73,     0,   237,   181,     0,    70,    73,    97,    89,     0,
       0,   152,   154,   311,    12,    15,    14,     0,   270,     0,
       0,   173,     0,   187,   186,   188,   190,   192,   194,   185,
     189,     0,   191,     0,     0,     0,     0,   204,   205,     0,
     209,   208,     0,   215,   214,   213,   212,     0,   216,   222,
     241,    63,    65,    69,    68,    66,    59,    62,    58,    67,
      61,    60,    64,    53,     0,     0,     0,   285,     9,   228,
       0,   282,     0,    24,     0,   266,     0,     0,     0,   313,
     102,   119,     0,     0,     0,   248,     0,     0,     0,     0,
      31,    19,    22,     0,     0,    30,   272,   277,   227,    30,
     245,   225,     0,    30,   243,   226,    79,    30,     0,    92,
       0,   161,     0,     0,     0,     0,    40,     0,   269,     0,
     178,   180,   195,   193,   184,   197,   199,   201,   203,   207,
     211,     0,     0,   285,   260,   223,     0,    52,    55,    54,
     124,   118,     0,    10,     0,   310,   281,     0,   280,    18,
       0,     0,   265,    95,     0,     0,   104,   108,   101,   114,
     106,     0,   137,   116,   109,   247,    28,    36,     0,    26,
       0,    30,     0,   274,    29,   278,   246,     0,   244,     0,
      30,    71,    74,    95,     0,   156,     0,   147,     0,   139,
       0,     0,   153,    39,    41,    72,     0,   251,   221,     0,
       0,   257,     0,   255,     0,    56,     0,     0,     0,   296,
     283,    30,     0,    17,    16,   267,     0,   122,     0,     0,
       0,   112,   120,   135,    34,    32,     0,    27,    21,    23,
      20,     0,    30,   271,   275,     0,    77,    29,    78,    96,
     164,     0,   160,     0,     0,   149,     0,     0,     0,   151,
     150,   175,   249,     0,   250,   253,   260,     8,   292,   287,
       0,   293,   295,   284,   290,     0,    94,   141,   105,   107,
     111,     0,     0,    33,     0,   306,    29,   276,    24,   300,
     166,   170,   169,    76,   162,   163,   157,   158,     0,   155,
     143,     0,     0,   142,     0,   145,     0,   256,   252,   259,
     262,   289,   294,   279,     0,   113,     0,     0,    35,    25,
       0,   305,   303,   304,     0,     0,     0,     0,   299,   297,
     298,     0,    30,   159,   146,     0,   144,   138,   254,   264,
     258,   261,     0,   291,     0,     0,   134,   308,     0,   172,
       0,   302,   168,    29,   165,   148,   263,     0,   286,   140,
     136,   307,   273,   171,   301,   167,   288
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,  -272,  -272,   311,   104,  -272,  -272,   315,
    -272,  -186,  -272,  -272,  -272,  -272,  -192,  -189,  -272,  -272,
    -271,    -2,  -272,   124,  -272,   106,  -272,  -272,  -272,   128,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,    60,  -272,  -272,  -272,  -272,  -272,  -272,   -26,   173,
      95,  -272,  -272,    14,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    62,
      66,  -272,  -272,  -180,  -272,  -272,  -272,  -222,  -272,    -5,
    -272,  -134,   240,     0,  -272,  -272,    -6,   220,   227,   221,
    -272,   228,  -272,   217,  -272,   -62,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,   -40,    12,  -272,  -272,   -11,  -272,   -21,  -272,  -272,
    -272,  -272,   338,  -272,  -272,  -272,  -272,  -272,  -272,   -67,
    -272,   -68,   275,  -272,   -61,  -101,  -272,  -272,   -19,  -272
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,     3,    42,   262,    43,    44,    45,
     194,   110,   291,   111,   347,   211,   295,   212,   288,   344,
      46,   231,   137,    48,    49,   257,   183,   184,    50,   138,
     125,   300,   301,    51,    52,    53,    54,    55,    56,    57,
      58,   337,   229,    59,    60,    61,   102,   278,   279,   106,
     280,   341,   107,   108,    62,   201,    63,    64,    65,    66,
     343,    67,    68,    69,   307,   365,   413,    70,   234,   131,
     308,   408,   409,   232,   361,   399,   442,   400,   401,    71,
     141,    72,    73,    74,    75,   153,    76,    77,    78,    79,
     159,    80,   162,    81,   167,    82,    83,    84,   169,    85,
     116,   117,   121,   113,    86,   122,   118,    87,   255,   322,
     375,   323,   324,   450,   451,    99,   195,    88,   114,   352,
     353,   216,    89,   267,   263,   264,   421,   453,   330,   331,
     381,   438,   439,   440,   431,   432,   433,    95,    90,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    47,    94,   119,   101,   239,    98,   270,   100,    98,
     128,   217,   268,   105,   220,   133,   112,   115,   120,   287,
      93,   168,   282,   199,   126,   127,   123,   296,   310,   130,
     132,   298,   213,   360,   275,   302,   191,     5,   186,     7,
     -29,     8,   213,   208,   139,   154,    10,   316,   430,    12,
       6,   364,   222,   309,     4,   305,     9,   -29,   437,   276,
      11,    14,    92,   140,    16,    17,   207,   140,   187,   277,
      19,   163,   188,   192,    20,    21,   196,   171,   210,   140,
      22,    23,    96,    24,   230,    26,   214,   172,    92,    27,
     405,   334,    28,   208,    29,    30,   173,    31,   174,   350,
     311,   305,   157,   306,   205,   250,   142,    32,   358,   236,
     164,    97,    36,    37,    38,    39,    40,   200,   209,   226,
       7,   175,   204,   165,   158,   166,   176,   237,   210,   380,
     104,   370,   154,   213,   327,   177,   186,   178,   251,   384,
     160,   252,   241,   179,   109,   406,   189,   244,   180,   161,
     181,   129,   190,   182,   407,    20,    21,   155,   387,   156,
     397,    22,    23,   258,    24,   259,    26,   170,   253,   254,
     266,   213,   185,    28,   391,   392,   274,   430,   202,   193,
     260,   197,   198,   410,   203,   265,   328,   415,    32,   206,
     318,   273,   354,   218,    37,    38,    39,    40,   213,   222,
     221,   285,   292,   225,   428,   423,   228,    98,   457,   293,
     233,   297,   436,   459,   235,   461,    98,   395,   238,   462,
     243,   402,   242,   303,   256,   272,   261,  -103,   382,   312,
     -11,   444,   269,   315,   446,   258,   447,   259,   473,   271,
     215,   475,     7,   219,   186,   281,   284,   456,   223,   321,
     464,   290,   294,   320,   227,   286,   289,   299,   304,   329,
     317,   336,   326,   332,   333,   465,   335,   338,   277,   340,
     342,   345,   346,   349,   469,   470,   351,    20,    21,   355,
     357,   368,   372,    22,    23,   348,    24,   363,    26,   315,
     373,   367,     7,  -259,   356,    28,   402,   374,   376,   377,
     362,   402,    47,   402,   383,   132,   385,   402,   389,   388,
      32,   371,   390,   393,   394,   396,    37,    38,    39,    40,
    -260,   411,   378,   379,   412,   417,   402,    20,    21,   402,
     414,   386,   418,    22,    23,   416,    24,   -29,    26,   424,
     427,   429,   441,   140,   452,    28,   435,   445,     7,   449,
     463,   454,   403,   455,   134,   458,   460,   319,   135,    47,
      32,   314,   325,   359,   425,    36,    37,    38,    39,    40,
     339,   419,   369,   366,   245,   422,   283,   247,   448,   249,
     240,   136,   246,    20,    21,   468,   426,   248,   420,    22,
      23,   434,    24,   474,    26,   224,   471,     0,     0,     0,
       0,    28,     0,   443,     0,     0,     0,   124,     5,     6,
       7,     0,     8,   321,     0,     9,    32,    10,     0,    11,
      12,     0,    37,    38,    39,    40,     0,     0,    13,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
      18,    19,     0,     0,   466,    20,    21,   329,     0,     0,
       0,    22,    23,   472,    24,    25,    26,     0,     0,     0,
      27,     0,   476,    28,     0,    29,    30,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,    34,    35,    36,    37,    38,    39,    40,     5,     6,
       7,     0,     8,     0,     0,     9,     0,    10,   404,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
      18,    19,     0,     0,     0,    20,    21,     0,     0,   143,
       0,    22,    23,     0,    24,     0,    26,   144,   145,   146,
      27,     0,   147,    28,   148,    29,    30,     0,    31,   149,
     150,     0,     0,     0,     0,     0,   151,   152,    32,    33,
       0,    34,    35,    36,    37,    38,    39,    40,     5,     6,
       7,     0,     8,     0,     0,     9,     0,    10,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
      18,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,     0,    26,     0,     0,     0,
      27,     0,     0,    28,     0,    29,    30,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,    34,    35,    36,    37,    38,    39,    40,     5,     0,
       7,     0,     8,     0,     0,     0,     0,    10,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,    16,    17,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     7,    24,   313,    26,     0,     0,     0,
      27,     0,     0,    28,   320,    29,    30,     7,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,   467,     0,    36,    37,    38,    39,    40,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,     0,    26,
       0,     0,    20,    21,     7,     0,    28,     0,    22,    23,
       0,    24,     0,    26,     0,     0,     0,     7,     0,     0,
      28,    32,     0,     0,     0,     0,     0,    37,    38,    39,
      40,     0,     0,     0,     0,    32,     0,     0,     0,    20,
      21,    37,    38,    39,    40,    22,    23,     0,    24,     0,
      26,     0,   398,    21,     7,     0,     0,    28,    22,    23,
       0,    24,     0,    26,     0,     0,     0,     7,     0,     0,
      28,     0,    32,     0,     0,     0,     0,     0,    37,    38,
      39,    40,     0,     0,     0,    32,     0,     0,     0,     0,
      21,    37,    38,    39,    40,    22,    23,     0,    24,     0,
      26,     0,     0,    21,     0,     0,     0,    28,    22,    23,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    32,     0,     0,     0,     0,     0,    37,    38,
      39,    40,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    37,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,    22,    15,   139,    12,   193,    14,    15,
      31,   112,   192,    18,   115,    36,    21,    22,    23,   208,
       6,    83,   202,    20,    29,    30,    26,   219,    15,    34,
      35,   223,    33,   304,    50,   227,    50,     7,    20,     9,
      70,    11,    33,    50,    39,    10,    16,    26,    39,    19,
       8,    26,    33,   233,     0,    30,    14,    87,    39,    75,
      18,    31,    85,    58,    34,    35,    23,    58,    50,    85,
      40,    21,    54,    87,    44,    45,    41,     3,    85,    58,
      50,    51,    85,    53,    54,    55,    87,    13,    85,    59,
     361,   271,    62,    50,    64,    65,    22,    67,    24,   291,
      87,    30,    46,    32,   109,   167,     5,    77,   300,    54,
      60,    85,    82,    83,    84,    85,    86,   103,    75,   124,
       9,    47,     6,    73,    68,    75,    52,    72,    85,    29,
      85,   311,    10,    33,    23,    61,    20,    63,    20,   331,
      53,    23,   142,    69,    87,     6,     9,   153,    74,    62,
      76,    87,    15,    79,    15,    44,    45,    12,   338,     4,
     352,    50,    51,   184,    53,   184,    55,    86,    50,    51,
     191,    33,    15,    62,    25,    26,   197,    39,    87,    50,
     185,    41,    40,   363,    15,   190,    75,   367,    77,    87,
     252,   196,   293,    66,    83,    84,    85,    86,    33,    33,
      70,   206,   213,    71,   393,   385,    15,   213,   430,   214,
      87,   222,   398,   435,     6,   437,   222,   351,    15,   441,
      41,   355,    55,   228,    29,    15,    85,    40,   329,   235,
      70,   411,    70,   238,   414,   256,   416,   256,   460,    87,
     112,   463,     9,   115,    20,    15,    85,   427,   120,   254,
     442,    29,    15,    20,   126,    85,    85,    15,    42,   264,
      85,    15,    70,    70,    70,   445,   272,    87,    85,     6,
      85,    70,    15,    15,   454,   455,    41,    44,    45,    41,
      15,    26,    70,    50,    51,   290,    53,    87,    55,   294,
      20,    87,     9,    87,   299,    62,   430,    71,    87,    54,
     305,   435,   304,   437,    15,   310,    87,   441,    85,    70,
      77,   316,    15,    15,    23,    15,    83,    84,    85,    86,
      87,    87,   327,   328,    32,    20,   460,    44,    45,   463,
      87,   336,    15,    50,    51,    87,    53,    70,    55,    26,
      87,    85,    15,    58,    15,    62,    87,    87,     9,    87,
      15,    87,   357,    87,    43,    87,    87,   253,    43,   361,
      77,   237,   256,   303,   390,    82,    83,    84,    85,    86,
     275,   376,   310,   307,   154,   380,   203,   156,   418,   162,
     140,    43,   155,    44,    45,   452,   391,   159,   376,    50,
      51,   396,    53,   461,    55,   120,   457,    -1,    -1,    -1,
      -1,    62,    -1,   408,    -1,    -1,    -1,    68,     7,     8,
       9,    -1,    11,   418,    -1,    14,    77,    16,    -1,    18,
      19,    -1,    83,    84,    85,    86,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,   449,    44,    45,   452,    -1,    -1,
      -1,    50,    51,   458,    53,    54,    55,    -1,    -1,    -1,
      59,    -1,   467,    62,    -1,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    28,
      -1,    50,    51,    -1,    53,    -1,    55,    36,    37,    38,
      59,    -1,    41,    62,    43,    64,    65,    -1,    67,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    55,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,     9,    53,    54,    55,    -1,    -1,    -1,
      59,    -1,    -1,    62,    20,    64,    65,     9,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    23,    -1,    82,    83,    84,    85,    86,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,    55,
      -1,    -1,    44,    45,     9,    -1,    62,    -1,    50,    51,
      -1,    53,    -1,    55,    -1,    -1,    -1,     9,    -1,    -1,
      62,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    44,
      45,    83,    84,    85,    86,    50,    51,    -1,    53,    -1,
      55,    -1,    44,    45,     9,    -1,    -1,    62,    50,    51,
      -1,    53,    -1,    55,    -1,    -1,    -1,     9,    -1,    -1,
      62,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      45,    83,    84,    85,    86,    50,    51,    -1,    53,    -1,
      55,    -1,    -1,    45,    -1,    -1,    -1,    62,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      16,    18,    19,    27,    31,    33,    34,    35,    39,    40,
      44,    45,    50,    51,    53,    54,    55,    59,    62,    64,
      65,    67,    77,    78,    80,    81,    82,    83,    84,    85,
      86,    91,    93,    95,    96,    97,   108,   109,   111,   112,
     116,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     132,   133,   142,   144,   145,   146,   147,   149,   150,   151,
     155,   167,   169,   170,   171,   172,   174,   175,   176,   177,
     179,   181,   183,   184,   185,   187,   192,   195,   205,   210,
     226,   167,    85,   141,   167,   225,    85,    85,   174,   203,
     174,   203,   134,   227,    85,   167,   137,   140,   141,    87,
      99,   101,   167,   191,   206,   167,   188,   189,   194,   226,
     167,   190,   193,   171,    68,   118,   167,   167,   205,    87,
     167,   157,   167,   205,    93,    97,   210,   110,   117,    39,
      58,   168,     5,    28,    36,    37,    38,    41,    43,    48,
      49,    55,    56,   173,    10,    12,     4,    46,    68,   178,
      53,    62,   180,    21,    60,    73,    75,   182,   183,   186,
      86,     3,    13,    22,    24,    47,    52,    61,    63,    69,
      74,    76,    79,   114,   115,    15,    20,    50,    54,     9,
      15,    50,    87,    50,    98,   204,    41,    41,    40,    20,
     141,   143,    87,    15,     6,   167,    87,    23,    50,    75,
      85,   103,   105,    33,    87,   117,   209,   223,    66,   117,
     223,    70,    33,   117,   220,    71,   167,   117,    15,   130,
      54,   109,   161,    87,   156,     6,    54,    72,    15,   169,
     170,   171,    55,    41,   174,   175,   176,   177,   179,   181,
     183,    20,    23,    50,    51,   196,    29,   113,   205,   226,
     167,    85,    94,   212,   213,   167,   205,   211,   161,    70,
      99,    87,    15,   167,   205,    50,    75,    85,   135,   136,
     138,    15,   161,   137,    85,   167,    85,   105,   106,    85,
      29,   100,   203,   167,    15,   104,   104,   203,   104,    15,
     119,   120,   104,   167,    42,    30,    32,   152,   158,   161,
      15,    87,   174,    54,   111,   167,    26,    85,   183,    94,
      20,   167,   197,   199,   200,   113,    70,    23,    75,   167,
     216,   217,    70,    70,   161,   174,    15,   129,    87,   138,
       6,   139,    85,   148,   107,    70,    15,   102,   167,    15,
     104,    41,   207,   208,   223,    41,   167,    15,   104,   129,
     108,   162,   167,    87,    26,   153,   158,    87,    26,   157,
     161,   167,    70,    20,    71,   198,    87,    54,   167,   167,
      29,   218,   223,    15,   104,    87,   167,   161,    70,    85,
      15,    25,    26,    15,    23,   169,    15,   104,    44,   163,
     165,   166,   169,   167,    17,   108,     6,    15,   159,   160,
     161,    87,    32,   154,    87,   161,    87,    20,    15,   167,
     200,   214,   167,   161,    26,   136,   167,    87,   105,    85,
      39,   222,   223,   224,   167,    87,    99,    39,   219,   220,
     221,    15,   164,   167,   161,    87,   161,   161,   199,    87,
     201,   202,    15,   215,    87,    87,   161,   165,    87,   165,
      87,   165,   165,    15,   104,   161,   167,    23,   217,   161,
     161,   222,   167,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     3,     0,     3,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     1,     1,
       2,     4,     2,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     5,     5,     0,     7,     4,
       9,     6,     6,     6,     4,     3,     3,     0,     3,     0,
       5,     3,     0,     3,     1,     3,     1,     1,     1,     2,
       0,     1,     4,     2,     1,     3,     1,     3,     2,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     3,     2,     3,     4,     3,     3,
       3,     2,     3,     2,     3,     0,     3,     1,     4,     1,
       0,     1,     0,     2,     1,     3,     2,     3,     0,     3,
       2,     4,     2,     5,     0,     1,     2,     1,     2,     7,
       4,     1,     0,     2,     3,     0,     3,     0,     3,     0,
       2,     4,     2,     2,     3,     1,     0,     1,     1,     5,
       4,     3,     2,     1,     1,     5,     4,     3,     2,     1,
       3,     2,     1,     2,     0
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
        case 4:
#line 80 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = new PrintNode(0);
      pool.add((yyval.node_type));
    }
#line 1921 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 5:
#line 85 "includes/parse.y" /* yacc.c:1666  */
    {
      if ((yyvsp[0].node_type)) {
        (yyvsp[0].node_type)->eval();
      }
    }
#line 1931 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 10:
#line 101 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 1937 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 11:
#line 103 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 1943 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 14:
#line 111 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 1949 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 15:
#line 113 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 1955 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 16:
#line 117 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = new FunctionNode((yyvsp[-3].str_type), (yyvsp[0].node_type));
      pool.add((yyval.node_type));
      delete[] (yyvsp[-3].str_type);
    }
#line 1965 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 17:
#line 125 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 1971 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 18:
#line 127 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 1977 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 25:
#line 143 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 1983 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 27:
#line 148 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[-1].str_type); }
#line 1989 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 28:
#line 150 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 1995 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 31:
#line 159 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2001 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 37:
#line 172 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2007 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 38:
#line 174 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2013 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 39:
#line 178 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-3].node_type); }
#line 2019 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 40:
#line 180 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-2].node_type); }
#line 2025 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 43:
#line 188 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2031 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 44:
#line 190 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2037 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 45:
#line 192 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2043 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 46:
#line 194 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2049 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 47:
#line 196 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2055 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 48:
#line 198 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2061 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 49:
#line 200 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2067 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 50:
#line 202 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2073 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 51:
#line 204 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr; }
#line 2079 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 52:
#line 208 "includes/parse.y" /* yacc.c:1666  */
    { if((yyvsp[-2].node_type) && (yyvsp[0].node_type)) {
        switch ((yyvsp[-1].operator_type)) {
          case '0': {
            Node* temp = new AddBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type),temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            //($$)->eval()->print();
            break;
          }
          case '1': {
            Node* temp = new SubBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type),temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            //($$)->eval()->print();
            break;                  
          }
          case '2': {
            Node* temp = new MulBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type),temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            //($$)->eval()->print();
            break; 
            }
          case '3': {
            Node* temp = new DivBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type),temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            //($$)->eval()->print();
            break; 
          }
          case '4': {
            Node* temp = new PctBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type),temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            //($$)->eval()->print();
            break; 
          }
          case 11: {
            Node* temp = new DbStarBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type), temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            break;
          }
          case 12: {
            Node* temp = new DbSlashBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
            (yyvsp[-2].node_type) = new AsgBinaryNode((yyvsp[-2].node_type), temp);
            pool.add((yyvsp[-2].node_type));
            delete temp;
            break;               
          }
        }
      }
    }
#line 2143 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 53:
#line 268 "includes/parse.y" /* yacc.c:1666  */
    { if ((yyvsp[0].node_type) != 0) {
        (yyval.node_type) = new AsgBinaryNode((yyvsp[-1].node_type),(yyvsp[0].node_type));
        pool.add((yyval.node_type));
      }
    }
#line 2153 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 54:
#line 276 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2159 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 55:
#line 278 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2165 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 56:
#line 289 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = (yyvsp[0].node_type);
    //    if ($3 == 0) {
    //     $$ = $2;
    //   } else {
    //     $$ = new AsgBinaryNode($2,$3);
    //     pool.add($$);
    //   }
    }
#line 2179 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 57:
#line 299 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2185 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 58:
#line 303 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '0'; }
#line 2191 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 59:
#line 305 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '1'; }
#line 2197 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 60:
#line 307 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '2'; }
#line 2203 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 61:
#line 309 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '3';}
#line 2209 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 62:
#line 311 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '4'; }
#line 2215 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 63:
#line 313 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0; }
#line 2221 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 64:
#line 315 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0; }
#line 2227 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 65:
#line 317 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0; }
#line 2233 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 66:
#line 319 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0; }
#line 2239 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 67:
#line 321 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0; }
#line 2245 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 68:
#line 323 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 11; }
#line 2251 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 69:
#line 325 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 12; }
#line 2257 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 70:
#line 329 "includes/parse.y" /* yacc.c:1666  */
    { 
      if ((yyvsp[0].node_type)) {
        (yyval.node_type) = new PrintNode((yyvsp[0].node_type));
        pool.add((yyval.node_type));
      }
    //   $2->eval()->print();
    }
#line 2269 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 71:
#line 337 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2275 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 72:
#line 342 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2281 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 73:
#line 344 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2287 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 74:
#line 348 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-2].node_type); }
#line 2293 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 75:
#line 350 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2299 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 82:
#line 368 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2305 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 83:
#line 370 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2311 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 84:
#line 372 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type);}
#line 2317 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 85:
#line 374 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2323 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 86:
#line 376 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2329 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 89:
#line 386 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = new ReturnNode((yyvsp[0].node_type));
      pool.add((yyval.node_type));
    }
#line 2338 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 90:
#line 391 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = new ReturnNode(nullptr);
      pool.add((yyval.node_type));
    }
#line 2347 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 107:
#line 432 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[-2].str_type); 
      delete[] (yyvsp[0].str_type);
    }
#line 2355 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 108:
#line 436 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2361 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 109:
#line 440 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2367 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 117:
#line 457 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2373 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 118:
#line 459 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2379 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 119:
#line 463 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[-1].str_type); }
#line 2385 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 120:
#line 467 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[0].str_type); }
#line 2391 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 126:
#line 480 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type);}
#line 2397 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 127:
#line 482 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2403 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 128:
#line 484 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2409 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 129:
#line 486 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2415 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 130:
#line 488 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2421 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 131:
#line 490 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type);}
#line 2427 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 132:
#line 492 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = nullptr;}
#line 2433 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 133:
#line 494 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type);}
#line 2439 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 134:
#line 498 "includes/parse.y" /* yacc.c:1666  */
    {
      if ((yyvsp[-6].node_type)) {
        (yyval.node_type) = new IfNode((yyvsp[-6].node_type), (yyvsp[-4].node_type), (yyvsp[-3].node_type), (yyvsp[0].node_type));
        pool.add((yyval.node_type));
      }
    }
#line 2450 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 135:
#line 505 "includes/parse.y" /* yacc.c:1666  */
    {
      if ((yyvsp[-3].node_type)) {
        (yyval.node_type) = new IfNode((yyvsp[-3].node_type), (yyvsp[-1].node_type), (yyvsp[0].node_type), nullptr);
        pool.add((yyval.node_type));
      }
    }
#line 2461 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 136:
#line 514 "includes/parse.y" /* yacc.c:1666  */
    {
      if ((yyvsp[-4].node_type)) {
        Node* elif_node = new ElifNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
        (yyval.node_type) = (yyvsp[-4].node_type);
        dynamic_cast<ElifVectorNode*>((yyval.node_type))->InsertElifNode(elif_node);
        pool.add(elif_node);
        // pool.add($$);
      } else {
        (yyval.node_type) = new ElifVectorNode();
        Node* elif_node = new ElifNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
        dynamic_cast<ElifVectorNode*>((yyval.node_type))->InsertElifNode(elif_node);
        pool.add(elif_node);
        pool.add((yyval.node_type));
      }
    }
#line 2481 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 137:
#line 530 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = nullptr;
    }
#line 2489 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 161:
#line 584 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type);}
#line 2495 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 162:
#line 586 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type);}
#line 2501 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 163:
#line 590 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = (yyvsp[-1].node_type);
      dynamic_cast<SuiteNode*>((yyval.node_type))->set_suite_stmts((yyvsp[0].node_type));
    }
#line 2510 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 164:
#line 595 "includes/parse.y" /* yacc.c:1666  */
    {
      (yyval.node_type) = new SuiteNode();
      dynamic_cast<SuiteNode*>((yyval.node_type))->set_suite_stmts((yyvsp[0].node_type));
      pool.add((yyval.node_type));
    }
#line 2520 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 173:
#line 623 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type); }
#line 2526 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 174:
#line 625 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2532 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 175:
#line 629 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2538 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 176:
#line 631 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2544 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 177:
#line 635 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2550 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 178:
#line 637 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2556 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 179:
#line 641 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2562 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 180:
#line 643 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2568 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 181:
#line 647 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2574 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 182:
#line 649 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2580 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 183:
#line 653 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2586 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 184:
#line 655 "includes/parse.y" /* yacc.c:1666  */
    {
      switch((yyvsp[-1].operator_type)) {
        case '1': {
          (yyval.node_type) = new LessBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
        case '2': {
          (yyval.node_type) = new GreaterBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
        case '3': {
          (yyval.node_type) = new EqualEqualBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
        //   std::cerr << "comparison ==" << $$->eval() << std::endl;
          pool.add((yyval.node_type));
          break;
        }
        case '4': {
          (yyval.node_type) = new GreaterEqualBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
        case '5': {
          (yyval.node_type) = new LessEqualBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
        case '6': {
          (yyval.node_type) = new NotEqualBinaryNode((yyvsp[-2].node_type), (yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
      }
    }
#line 2626 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 185:
#line 693 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '1';}
#line 2632 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 186:
#line 695 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '2';}
#line 2638 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 187:
#line 697 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '3';}
#line 2644 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 188:
#line 699 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '4';}
#line 2650 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 189:
#line 701 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '5';}
#line 2656 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 190:
#line 703 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0;}
#line 2662 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 191:
#line 705 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '6';}
#line 2668 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 192:
#line 707 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0;}
#line 2674 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 193:
#line 709 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0;}
#line 2680 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 194:
#line 711 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0;}
#line 2686 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 195:
#line 713 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = 0;}
#line 2692 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 196:
#line 717 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2698 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 197:
#line 719 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2704 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 198:
#line 723 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2710 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 199:
#line 725 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2716 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 200:
#line 729 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2722 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 201:
#line 731 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2728 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 202:
#line 735 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2734 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 203:
#line 737 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2740 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 206:
#line 745 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2746 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 207:
#line 747 "includes/parse.y" /* yacc.c:1666  */
    { switch((yyvsp[-1].operator_type)) {
        case '+': {
          (yyval.node_type) = new AddBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          //($$)->eval();
          break;
        }
        case '-': {
          (yyval.node_type) = new SubBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          //($$)->eval();
          break;
        }
      }
    }
#line 2766 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 208:
#line 765 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '+'; }
#line 2772 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 209:
#line 767 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '-'; }
#line 2778 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 210:
#line 771 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2784 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 211:
#line 773 "includes/parse.y" /* yacc.c:1666  */
    { switch ((yyvsp[-1].operator_type)) {
        case '*' : {
          (yyval.node_type) = new MulBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          //($$)->eval()->print();
          break;
        }
        case '/' : {
          (yyval.node_type) = new DivBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          //($$)->eval()->print();
          break;
        }
        case '%' : {
          (yyval.node_type) = new PctBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          //($$)->eval()->print();
          break;
        }
        case '1' : {
          (yyval.node_type) = new DbSlashBinaryNode((yyvsp[-2].node_type),(yyvsp[0].node_type));
          pool.add((yyval.node_type));
          break;
        }
      }
    }
#line 2815 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 212:
#line 802 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '*'; }
#line 2821 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 213:
#line 804 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '/'; }
#line 2827 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 214:
#line 806 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '%'; }
#line 2833 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 215:
#line 808 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '1'; }
#line 2839 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 216:
#line 812 "includes/parse.y" /* yacc.c:1666  */
    { if ((yyvsp[0].node_type)) {
        switch((yyvsp[-1].operator_type)) {
          case '+': {
            (yyval.node_type) = (yyvsp[0].node_type);
            break;
          }
          case '-': {
            /* Get the minus value used for string slicing. */
            /* slice_left = static_cast<IntLiteral*>$2->get_val(); */
            /* slice_left = -slice_left; */
            /* std::cerr << "minus slice_left is " << slice_left <<std::endl; */
            (yyval.node_type) = new UnaryNode((yyvsp[0].node_type));
            pool.add((yyval.node_type));
            //($$)->eval();
            break;
          }
          default: {
            (yyval.node_type) = (yyvsp[0].node_type);
            break;
          }
        }
      }     
    }
#line 2867 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 217:
#line 836 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 2873 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 218:
#line 840 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '+'; }
#line 2879 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 219:
#line 842 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '-'; }
#line 2885 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 220:
#line 844 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.operator_type) = '~'; }
#line 2891 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 221:
#line 848 "includes/parse.y" /* yacc.c:1666  */
    { if ((yyvsp[-3].node_type) && (yyvsp[0].node_type)) {
        (yyval.node_type) = new DbStarBinaryNode((yyvsp[-3].node_type),(yyvsp[0].node_type));
        pool.add((yyval.node_type));
      }
    }
#line 2901 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 222:
#line 854 "includes/parse.y" /* yacc.c:1666  */
    {
    //   std::cerr << "in atom star_trailer " << bracket_type << std::endl;
    //if ($2) {
      if ((yyvsp[0].node_type) && "LPAR" == bracket_type) {
        // std::cerr << "in LPaR" << std::endl;
        std::string func_name = reinterpret_cast<IdentifierNode*>((yyvsp[-1].node_type))->get_identifier();
        (yyval.node_type) = new CallNode(func_name);
        pool.add((yyval.node_type));
      } else if ((yyvsp[0].node_type) && "LSQB" == bracket_type) {
        /* std::cerr << "the 2nd time " << slice_str <<std::endl; */
        /* here $1 is IndentNode,$1->eval() is const Literal *. */
        std::string original_str = static_cast<const StringLiteral*>((yyvsp[-1].node_type)->eval())->get_val();
        org_str_len = original_str.length();
        
        if (INT_MAX == slice_right) {
        slice_right = org_str_len;
        }
        
        std::string t("");
        int sub_str_len;
        int slice_minus;
        /* std::cerr << "slice_left is " << slice_left <<std::endl; */
        /* std::cerr << "slice_right is " << slice_right <<std::endl; */
        /* std::cerr << "org_str_len is " << org_str_len <<std::endl; */
        if (0 == slice_right) {
        if (-org_str_len <= slice_left && slice_left<=-1) {
            slice_minus = slice_left + org_str_len;
            t = original_str[slice_minus];
        } else if (0 <= slice_left && slice_left<=(org_str_len-1)) {
            t = original_str[slice_left];
        } else {
        std::cout << "IndexError: string index out of range" << std::endl;
        yyparse();
        /* return 0; */
        /* throw std::string("IndexError: string index out of range"); */
        }
        } else {
        if (slice_left < 0) {
            t = "";
        } else {
            sub_str_len = slice_right - slice_left;
            t = original_str.substr(slice_left, sub_str_len);
        }
        }
        (yyval.node_type) = new StringLiteral(t);
        pool.add((yyval.node_type));
      } else {
        // std::cerr << $1 << std::endl;
        (yyval.node_type) = (yyvsp[-1].node_type);
      }
    }
#line 2957 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 223:
#line 908 "includes/parse.y" /* yacc.c:1666  */
    { 
      (yyval.node_type) = (yyvsp[0].node_type);
    //   std::cerr << "$$ in star_trailer is " << typeid($$).name() << std::endl;
    //   std::cerr << "$$ in star_trailer is " << $$->eval() << std::endl;
    }
#line 2967 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 224:
#line 914 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2973 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 225:
#line 918 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type); }
#line 2979 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 226:
#line 920 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2985 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 227:
#line 922 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2991 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 228:
#line 924 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 2997 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 229:
#line 926 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = new IdentifierNode((yyvsp[0].str_type));
      // std::cerr << $1 << std::endl; 
      delete[] (yyvsp[0].str_type);
      pool.add((yyval.node_type));
    }
#line 3007 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 230:
#line 932 "includes/parse.y" /* yacc.c:1666  */
    { 
      // std::cerr << $1 << std::endl; 
      /* slice_left = $1; */
      /* slice_left = static_cast<IntLiteral*>$1->get_val(); */
      /* std::cerr << "slice_left in subscript|test  is " << slice_left <<std::endl; */
      (yyval.node_type) = new IntLiteral((yyvsp[0].int_type));
      pool.add((yyval.node_type));
    }
#line 3020 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 231:
#line 941 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = new FloatLiteral((yyvsp[0].float_type));
      pool.add((yyval.node_type));
    }
#line 3028 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 232:
#line 945 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3034 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 233:
#line 949 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3040 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 234:
#line 951 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3046 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 235:
#line 955 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3052 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 236:
#line 957 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3058 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 241:
#line 970 "includes/parse.y" /* yacc.c:1666  */
    { std::string s((yyvsp[0].str_type)), t("");
        /* std::cerr << "atom star_trailer " << $2 <<std::endl; */
        /* std::cerr << "atom star_trailer " << *$1 <<std::endl; */
        /* std::cerr << "type of $1 is  " << typeid($2).name(); */
      for (unsigned int i = 1; i <s.size()-1; ++i) {
        t = t + s[i];
      }
      (yyval.node_type) = new StringNode(t);
      pool.add((yyval.node_type));
      delete[] (yyvsp[0].str_type);
    }
#line 3074 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 242:
#line 982 "includes/parse.y" /* yacc.c:1666  */
    { 
      //std::cerr << $1 <<std::endl;
      std::string s((yyvsp[0].str_type)), t("");
        /* std::cerr << "atom star_trailer " << $1 <<std::endl; */
        /* std::cerr << "atom star_trailer " << *$1 <<std::endl; */
        /* std::cerr << "type of $1 is  " << typeid($1).name(); */
      for (unsigned int i = 1; i <s.size()-1; ++i) {
        t = t + s[i];
      }
      /* slice_str = t; */
      /* std::cerr << "the 1st time " << slice_str <<std::endl; */
      /* std::cerr <<"t value is " << $1 <<std::endl; */
      /* $$ = new StringNode(t); */
      (yyval.node_type) = new StringLiteral(t);
      pool.add((yyval.node_type));
      delete[] (yyvsp[0].str_type);
    }
#line 3096 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 245:
#line 1006 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3102 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 246:
#line 1008 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-2].node_type); }
#line 3108 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 249:
#line 1016 "includes/parse.y" /* yacc.c:1666  */
    { 
    //   $$ = $1;  //why can't use $$=$1 ?
      bracket_type = "LPAR";
    //   std::cerr << "LPAR is found " << bracket_type << std::endl;
    }
#line 3118 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 250:
#line 1022 "includes/parse.y" /* yacc.c:1666  */
    { 
      (yyval.node_type) = (yyvsp[-1].node_type);
      bracket_type = "LSQB";
      /* std::cerr << "here" << std::endl; */ 
    }
#line 3128 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 251:
#line 1028 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0;
      delete[] (yyvsp[0].str_type);
    }
#line 3136 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 253:
#line 1035 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type); }
#line 3142 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 256:
#line 1043 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3148 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 257:
#line 1045 "includes/parse.y" /* yacc.c:1666  */
    {
      slice_left = static_cast<const IntLiteral*>((yyvsp[0].node_type)->eval())->get_val();
      (yyval.node_type) = (yyvsp[0].node_type);
    }
#line 3157 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 258:
#line 1050 "includes/parse.y" /* yacc.c:1666  */
    { 
      if ((yyvsp[-3].node_type)) {
        /* std::cerr << "In subscript $1's type is " << typeid($1).name() <<std::endl; */
        slice_left = static_cast<const IntLiteral*>((yyvsp[-3].node_type)->eval())->get_val();
        /* slice_left = slice_left; */
        /* $$ = $1; */
      } else {
        slice_left = 0;
      }

      if ((yyvsp[-1].node_type)) {
        /* std::cerr << "In subscript $1's type is " << typeid($1).name() <<std::endl; */
        slice_right = static_cast<const IntLiteral*>((yyvsp[-1].node_type)->eval())->get_val();
        /* slice_right = slice_right; */
        /* $$ = $3; */
      } else {
        slice_right = INT_MAX;
      }

      /* std::cerr << "In subscript MAX_INT is " << INT_MAX <<std::endl; */
      /* std::cerr << "In subscript original_str length is " << org_str_len <<std::endl; */
      /* std::cerr << "slice_left in subscript  is " << slice_left <<std::endl; */
      /* std::cerr << "slice_right in subscript  is " << slice_right <<std::endl; */
      /* std::cerr << "there" << std::endl; */
    }
#line 3187 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 259:
#line 1078 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3193 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 260:
#line 1080 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3199 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 261:
#line 1084 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3205 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 262:
#line 1086 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3211 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 263:
#line 1090 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3217 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 264:
#line 1092 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3223 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 279:
#line 1125 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[-5].str_type); }
#line 3229 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 280:
#line 1127 "includes/parse.y" /* yacc.c:1666  */
    { delete[] (yyvsp[-2].str_type); }
#line 3235 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 283:
#line 1135 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[0].node_type); }
#line 3241 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 290:
#line 1151 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type); }
#line 3247 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 291:
#line 1153 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3253 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 292:
#line 1155 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = 0; }
#line 3259 "parse.tab.c" /* yacc.c:1666  */
    break;

  case 293:
#line 1159 "includes/parse.y" /* yacc.c:1666  */
    { (yyval.node_type) = (yyvsp[-1].node_type); }
#line 3265 "parse.tab.c" /* yacc.c:1666  */
    break;


#line 3269 "parse.tab.c" /* yacc.c:1666  */
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
#line 1204 "includes/parse.y" /* yacc.c:1910  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)   {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                         yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}



