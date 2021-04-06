/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project_redesigned.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);

	int success = 1;
	int current_data_type;
	int expn_type=-1;
	int temp;
	int check_mod = 0;
	int var_count=-1;
	int empty_array[5] = {0,0,0,0,0};
	int dimension_count = 0; 
	int nested_block_count = 0; 
	int number_of_stars = 0; 
	
	struct symbol_table{char var_name[30]; int type, is_array; int dimension_sequence[5], pointer_depth; } var_list[20];
	extern int lookup_in_table(char var[30], int this_is_array, int this_dim_seq[5], int this_pointer_depth);
	extern void insert_to_table(char var[30], int type, int new_is_array, int new_dim_seq[5], int this_pointer_depth);
	

#line 90 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INCLUDE = 258,
    HEADER_FILE = 259,
    MAIN = 260,
    DOTH = 261,
    DOTC = 262,
    HASH = 263,
    DOUBLEQ = 264,
    LB = 265,
    RB = 266,
    LCB = 267,
    RCB = 268,
    LSB = 269,
    RSB = 270,
    COMMA = 271,
    SC = 272,
    UPLUS = 273,
    UMINUS = 274,
    EXP = 275,
    QUESM = 276,
    COLON = 277,
    STAR = 278,
    AMPERSAND = 279,
    PLUS = 280,
    MINUS = 281,
    MOD = 282,
    MUL = 283,
    DIV = 284,
    EQCOMPARE = 285,
    NEQCOMPARE = 286,
    EQ = 287,
    GTE = 288,
    LTE = 289,
    GT = 290,
    LT = 291,
    NOT = 292,
    AND = 293,
    OR = 294,
    IF = 295,
    ELSE = 296,
    FOR = 297,
    DO = 298,
    WHILE = 299,
    VAR = 300,
    NUMINT = 301,
    COMMENT = 302,
    INT = 303,
    CHAR = 304,
    FLOAT = 305,
    DOUBLE = 306
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define HEADER_FILE 259
#define MAIN 260
#define DOTH 261
#define DOTC 262
#define HASH 263
#define DOUBLEQ 264
#define LB 265
#define RB 266
#define LCB 267
#define RCB 268
#define LSB 269
#define RSB 270
#define COMMA 271
#define SC 272
#define UPLUS 273
#define UMINUS 274
#define EXP 275
#define QUESM 276
#define COLON 277
#define STAR 278
#define AMPERSAND 279
#define PLUS 280
#define MINUS 281
#define MOD 282
#define MUL 283
#define DIV 284
#define EQCOMPARE 285
#define NEQCOMPARE 286
#define EQ 287
#define GTE 288
#define LTE 289
#define GT 290
#define LT 291
#define NOT 292
#define AND 293
#define OR 294
#define IF 295
#define ELSE 296
#define FOR 297
#define DO 298
#define WHILE 299
#define VAR 300
#define NUMINT 301
#define COMMENT 302
#define INT 303
#define CHAR 304
#define FLOAT 305
#define DOUBLE 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "project_redesigned.y" /* yacc.c:355  */

int data_type;
char var_name[30];
int num_int; 

#line 238 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 255 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    66,    68,    68,    69,    69,    70,    70,
      70,    72,    74,    76,    77,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    91,   123,   159,   161,
     162,   163,   164,   165,   166,   167,   190,   207,   208,   210,
     215,   220,   225,   231,   232,   234,   235,   236,   237,   238,
     240,   241,   242,   243,   244,   245,   247,   248,   250,   253,
     252,   263,   275,   274,   279,   285,   291,   298,   302,   304,
     308,   312,   316
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "HEADER_FILE", "MAIN", "DOTH",
  "DOTC", "HASH", "DOUBLEQ", "LB", "RB", "LCB", "RCB", "LSB", "RSB",
  "COMMA", "SC", "UPLUS", "UMINUS", "EXP", "QUESM", "COLON", "STAR",
  "AMPERSAND", "PLUS", "MINUS", "MOD", "MUL", "DIV", "EQCOMPARE",
  "NEQCOMPARE", "EQ", "GTE", "LTE", "GT", "LT", "NOT", "AND", "OR", "IF",
  "ELSE", "FOR", "DO", "WHILE", "VAR", "NUMINT", "COMMENT", "INT", "CHAR",
  "FLOAT", "DOUBLE", "$accept", "prm", "MAIN_TYPE", "HEADERS", "HEADER",
  "HEADER2", "BLOCK", "BODY", "STATEMENTS", "STATEMENT", "ASSIGNMENT",
  "EXPRESSION", "DIMENSION_SEQUENCE", "STAR_SEQUENCE", "BINOP", "RELOP",
  "LOGOP", "DECLARATION_STATEMENT", "VAR_LIST", "$@1", "$@2",
  "DECLARATION_SEQUENCE", "POINTER_SEQUENCE", "DATA_TYPE", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    19,    25,   -15,    12,     2,  -111,  -111,    29,  -111,
       1,    31,    30,  -111,     0,     6,    28,    34,    15,  -111,
      40,  -111,  -111,    76,  -111,     5,  -111,    23,    43,    44,
      45,    46,    -1,  -111,  -111,  -111,  -111,  -111,  -111,    42,
    -111,    76,    49,     5,    50,    37,     5,     5,     5,    47,
    -111,   106,     5,  -111,     5,   -13,    40,     5,   -19,     5,
      38,  -111,  -111,  -111,   211,  -111,    37,  -111,    17,   123,
      48,    48,  -111,    51,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,     5,     5,     5,
     228,   140,    52,    60,   157,    59,    62,   228,     5,     5,
    -111,     4,  -111,    40,   228,   228,   228,    40,     5,    35,
      40,    47,    47,   228,   228,    32,    64,    58,    41,    53,
     194,    71,  -111,  -111,  -111,    67,    37,    68,    40,    40,
     -13,     5,    75,  -111,    37,    78,  -111,    74,   174,  -111,
    -111,  -111,    40,    79,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     5,     0,     1,     3,     0,     4,
      10,     0,     0,     9,     0,     0,     0,     0,     0,     6,
       0,     7,     8,     0,     2,     0,    25,    44,     0,     0,
       0,     0,     0,    24,    69,    70,    71,    72,    15,     0,
      12,    14,     0,     0,     0,    68,     0,     0,     0,    36,
      38,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    11,    13,    22,     0,    23,    68,    58,     0,     0,
      29,    30,    35,     0,    47,    45,    46,    49,    48,    50,
      51,    54,    52,    55,    53,    56,    57,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      67,    62,    37,     0,    31,    32,    33,     0,     0,     0,
       0,    41,    42,    27,    28,     0,     0,    59,     0,    17,
       0,     0,    18,    40,    39,     0,    68,     0,     0,     0,
       0,     0,    66,    63,    68,     0,    16,     0,     0,    65,
      60,    20,     0,     0,    21,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,    88,  -111,  -111,   -20,  -111,    56,  -111,
     -54,   -40,   -47,   -18,  -111,  -111,  -111,  -111,  -110,  -111,
    -111,   -34,    36,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     8,     3,     4,    14,    38,    39,    40,    41,
      42,    51,    60,    52,    87,    88,    89,    44,    67,   127,
     116,   117,    68,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    92,    72,    64,    17,    43,    69,    70,    71,    53,
      27,    10,    90,    58,    91,    46,   133,    94,   115,    97,
       1,   -64,     5,    43,   140,     6,    95,    96,    27,    47,
      13,    59,    32,     7,    12,    15,    93,    43,    11,    20,
      16,    19,    48,    21,    22,    18,    27,   104,   105,   106,
      49,    50,    23,    54,    55,    61,    57,    56,   113,   114,
      66,    58,   101,   128,   123,   124,    63,    65,   120,   108,
      98,    74,   103,   109,   111,   -61,   137,   112,   125,   121,
     126,   131,   132,   118,   134,   142,    25,   119,    23,   115,
     122,   138,     9,    26,   129,   141,   145,    62,   139,    27,
       0,     0,   100,     0,     0,     0,     0,     0,   135,   136,
       0,     0,    43,     0,     0,     0,    28,    73,    29,    30,
      31,    32,   144,    33,    34,    35,    36,    37,     0,    74,
       0,    75,    76,    77,   102,    78,    79,    80,     0,    81,
      82,    83,    84,     0,    85,    86,    74,     0,    75,    76,
      77,   107,    78,    79,    80,     0,    81,    82,    83,    84,
       0,    85,    86,    74,     0,    75,    76,    77,   110,    78,
      79,    80,     0,    81,    82,    83,    84,     0,    85,    86,
      74,     0,    75,    76,    77,   143,    78,    79,    80,     0,
      81,    82,    83,    84,     0,    85,    86,    74,     0,    75,
      76,    77,     0,    78,    79,    80,     0,    81,    82,    83,
      84,   130,    85,    86,     0,     0,     0,    74,     0,    75,
      76,    77,     0,    78,    79,    80,     0,    81,    82,    83,
      84,     0,    85,    86,    74,     0,    75,    76,    77,     0,
      78,    79,    80,    99,    81,    82,    83,    84,     0,    85,
      86,    74,     0,    75,    76,    77,     0,    78,    79,    80,
       0,    81,    82,    83,    84,     0,    85,    86
};

static const yytype_int16 yycheck[] =
{
      20,    55,    49,    43,     4,    23,    46,    47,    48,    27,
      23,     9,    52,    14,    54,    10,   126,    57,    14,    59,
       8,    17,     3,    41,   134,     0,    45,    46,    23,    24,
      29,    32,    45,    48,     5,     4,    56,    55,    36,    11,
      10,    35,    37,     9,    29,    45,    23,    87,    88,    89,
      45,    46,    12,    10,    10,    13,    10,    12,    98,    99,
      23,    14,    45,    22,   111,   112,    17,    17,   108,    17,
      32,    23,    21,    13,    15,    17,   130,    15,    46,    44,
      16,    10,    15,   103,    16,    11,    10,   107,    12,    14,
     110,   131,     4,    17,    41,    17,    17,    41,   132,    23,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,   128,   129,
      -1,    -1,   130,    -1,    -1,    -1,    40,    11,    42,    43,
      44,    45,   142,    47,    48,    49,    50,    51,    -1,    23,
      -1,    25,    26,    27,    11,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    38,    39,    23,    -1,    25,    26,
      27,    11,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    38,    39,    23,    -1,    25,    26,    27,    11,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    38,    39,
      23,    -1,    25,    26,    27,    11,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    38,    39,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,    17,    38,    39,    -1,    -1,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    38,    39,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    53,    55,    56,     3,     0,    48,    54,    55,
       9,    36,     5,    29,    57,     4,    10,     4,    45,    35,
      11,     9,    29,    12,    58,    10,    17,    23,    40,    42,
      43,    44,    45,    47,    48,    49,    50,    51,    58,    59,
      60,    61,    62,    65,    69,    75,    10,    24,    37,    45,
      46,    63,    65,    65,    10,    10,    12,    10,    14,    32,
      64,    13,    60,    17,    63,    17,    23,    70,    74,    63,
      63,    63,    64,    11,    23,    25,    26,    27,    29,    30,
      31,    33,    34,    35,    36,    38,    39,    66,    67,    68,
      63,    63,    62,    58,    63,    45,    46,    63,    32,    32,
      74,    45,    11,    21,    63,    63,    63,    11,    17,    13,
      11,    15,    15,    63,    63,    14,    72,    73,    58,    58,
      63,    44,    58,    64,    64,    46,    16,    71,    22,    41,
      17,    10,    15,    70,    16,    58,    58,    62,    63,    73,
      70,    17,    11,    11,    58,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    56,    56,    57,    57,
      57,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    71,
      70,    70,    72,    70,    70,    73,    73,    74,    74,    75,
      75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     2,     1,     5,     6,     3,     1,
       0,     3,     1,     2,     1,     1,     7,     5,     5,     9,
       8,     9,     2,     2,     1,     1,     3,     4,     4,     2,
       2,     3,     3,     3,     2,     2,     1,     3,     1,     4,
       4,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       6,     3,     0,     5,     2,     4,     3,     2,     0,     1,
       1,     1,     1
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 62 "project_redesigned.y" /* yacc.c:1646  */
    {
							printf("\n parsing successful\n");
						   }
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "project_redesigned.y" /* yacc.c:1646  */
    {	
					
					if((temp=lookup_in_table((yyvsp[-2].var_name), 0, empty_array, 0))!=-1)
					{
						if(check_mod==1)
						{
							if(expn_type!=0 && temp!=0)
							{
								printf("Both types not int.\n");
								exit(0); 
							}
							check_mod=0;
						}
						if(expn_type==-1)
						{
							expn_type=temp;
						}
						
						else if(expn_type!=temp)
						{
							extern int yylineno;
							printf("\nType mismatch in the expression. Line number %d\n", yylineno);
							exit(0);
						}
					}
					else
					{
						printf("\n variable \"%s\" undeclared\n",(yyvsp[-2].var_name));exit(0);
					}
					expn_type=-1;	
				}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "project_redesigned.y" /* yacc.c:1646  */
    {
					if((temp=lookup_in_table((yyvsp[-3].var_name), dimension_count, empty_array, 0))!=-1)
					{
						if(check_mod==1)
						{
							if(expn_type!=0 && temp!=0)
							{
								printf("Both types not int.\n");
								exit(0); 
							}
							check_mod=0;
						}
						if(expn_type==-1)
						{
							expn_type=temp;
						}
						
						else if(expn_type!=temp)
						{
							extern int yylineno;
							printf("\nType mismatch in the expression. Line number %d\n", yylineno);
							exit(0);
						}
					}
					else
					{
						printf("\n variable \"%s\" undeclared\n",(yyvsp[-3].var_name));exit(0);
					}
					expn_type=-1;	
					dimension_count = 1; 
					for(int i=0; i<5; i++) 
					{
						empty_array[i] = 0; 
					}
				}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 168 "project_redesigned.y" /* yacc.c:1646  */
    {
					printf("DIM_COUNT %d\n", dimension_count); 
					if(lookup_in_table((yyvsp[-1].var_name), dimension_count, empty_array, 0)==-1)
					{
						if(expn_type==-1)
						{
							expn_type=temp;
						}
						
						else if(expn_type!=temp)
						{
							extern int yylineno; 
							printf("\nType mismatch in the expression. Line number %d\n", yylineno);
							exit(0);
						}
					}
					dimension_count = 0; 
					for(int j=0; j<5; j++)
					{
						empty_array[j] = 0; 
					}
				}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "project_redesigned.y" /* yacc.c:1646  */
    {
					if(lookup_in_table((yyvsp[0].var_name), 0, empty_array, 0)==-1)
					{
						if(expn_type==-1)
						{
							expn_type=temp;
						}
						
						else if(expn_type!=temp)
						{
							extern int yylineno; 
							printf("\nType mismatch in the expression. Line number %d\n", yylineno);
							exit(0);
						}
					}
				}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 211 "project_redesigned.y" /* yacc.c:1646  */
    {
						empty_array[dimension_count] = (yyvsp[-2].num_int); 
						dimension_count++;
					}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 216 "project_redesigned.y" /* yacc.c:1646  */
    {
						empty_array[dimension_count] = 0; 
						dimension_count++;
					}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 221 "project_redesigned.y" /* yacc.c:1646  */
    {
						empty_array[dimension_count] = 0; 
						dimension_count++;
					}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 226 "project_redesigned.y" /* yacc.c:1646  */
    {
						empty_array[dimension_count] = (yyvsp[-1].num_int); 
						dimension_count++;
					}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 253 "project_redesigned.y" /* yacc.c:1646  */
    {
			printf("here.\n");
			insert_to_table((yyvsp[-1].var_name), current_data_type, dimension_count, empty_array, number_of_stars); 
			dimension_count = 0; 
			for(int i=0; i<5; i++) 
			{
				empty_array[i] = 0; 
			}
			number_of_stars = 0; 
		}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 264 "project_redesigned.y" /* yacc.c:1646  */
    {
			
			insert_to_table((yyvsp[-1].var_name), current_data_type, dimension_count, empty_array, number_of_stars); 
			dimension_count = 0; 
			for(int i=0; i<5; i++) 
			{
				empty_array[i] = 0; 
			}
			number_of_stars = 0; 
		}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 275 "project_redesigned.y" /* yacc.c:1646  */
    {
			insert_to_table((yyvsp[0].var_name),current_data_type, dimension_count, empty_array, number_of_stars);
			number_of_stars = 0; 
		}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 280 "project_redesigned.y" /* yacc.c:1646  */
    {
			insert_to_table((yyvsp[0].var_name),current_data_type, dimension_count, empty_array, number_of_stars);
			number_of_stars = 0; 
		}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 286 "project_redesigned.y" /* yacc.c:1646  */
    {
						
						empty_array[dimension_count] = (yyvsp[-2].num_int); 
						dimension_count++;
					}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 292 "project_redesigned.y" /* yacc.c:1646  */
    {
						printf("also here.\n");
						empty_array[dimension_count] = (yyvsp[-1].num_int); 
						dimension_count++;
					}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 299 "project_redesigned.y" /* yacc.c:1646  */
    {
					number_of_stars++; 
				}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 304 "project_redesigned.y" /* yacc.c:1646  */
    {
			(yyval.data_type)=(yyvsp[0].data_type);
			current_data_type=(yyvsp[0].data_type);
		}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 308 "project_redesigned.y" /* yacc.c:1646  */
    {
			(yyval.data_type)=(yyvsp[0].data_type);
			current_data_type=(yyvsp[0].data_type);
		}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 312 "project_redesigned.y" /* yacc.c:1646  */
    {
			(yyval.data_type)=(yyvsp[0].data_type);
			current_data_type=(yyvsp[0].data_type);
		}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 316 "project_redesigned.y" /* yacc.c:1646  */
    {
			(yyval.data_type)=(yyvsp[0].data_type);
			current_data_type=(yyvsp[0].data_type);
		}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1736 "y.tab.c" /* yacc.c:1646  */
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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 321 "project_redesigned.y" /* yacc.c:1906  */


int lookup_in_table(char var[30], int this_is_array, int this_dim_seq[5], int this_pointer_depth)
{
	int found_in_table = 0, i;
	for(i=0; i<=var_count; i++)
	{
		extern int yylineno; 
		if(strcmp(var_list[i].var_name, var)==0)
		{
			if(var_list[i].is_array!=this_is_array)
			{
				printf("Array dimensions of %s in line number %d do not match.\n", var, yylineno);
				exit(0); 
			}
			found_in_table = 1;
			if(var_list[i].is_array==this_is_array && this_is_array!=0)
			{
				for(int j=0; j<5; j++)
				{
					if(this_dim_seq[j]<0 || var_list[i].dimension_sequence[j]<=this_dim_seq[j])
					{
						printf("Array index out of bounds. Line number %d\n", yylineno); 
						exit(0); 
					}
				}
			}
			break;
		}
	}
	//if var not found in the table
	if(!found_in_table)
	{
		return -1;
	}

	//if var found
	return var_list[i].type;
}
void insert_to_table(char var[30], int newtype, int new_is_array, int new_dim_seq[5], int new_pointer_depth)
{
	for(int i=0; i<=var_count; i++)
	{
		if(strcmp(var_list[i].var_name, var)==0)
		{
			printf("multiple declaration of %s\n", var);
			exit(0);
		}
	}

	var_count++;
	strcpy(var_list[var_count].var_name, var);
	var_list[var_count].type = newtype;
	var_list[var_count].is_array = new_is_array; 
	var_list[var_count].pointer_depth = new_pointer_depth;
	for(int i=0; i<5; i++)
	{
		var_list[var_count].dimension_sequence[i] = new_dim_seq[i]; 
	}

	printf("Variable name: %s\nType: %d\nDimension count: %d\nPointer depth: %d\nDimensions: ", var, newtype, new_is_array, new_pointer_depth);
	for(int i=0; i<5; i++)
	{
		printf("%d ",var_list[var_count].dimension_sequence[i]);
	}
	printf("\n");
}

int main()
{
    yyparse();
/*    if(success)
    	printf("Parsing Successful\n");*/
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}


