/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 166 "../mex/mex_tab.y" /* yacc.c:337  */


  #define MEX_PARSER

  #include <stdio.h>
  #include <stdlib.h>
  #include <mem.h>
  #include "alc.h"
  #include "prog.h"
  #include "mex.h"

  #ifdef __TURBOC__
  #pragma warn -cln
  #endif
    
  ATTRIBUTES *curfn=NULL;

#line 88 "mex/mex_tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mex_tab.h".  */
#ifndef YY_YY_MEX_MEX_TAB_H_INCLUDED
# define YY_YY_MEX_MEX_TAB_H_INCLUDED
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
    T_BYTE = 258,
    T_WORD = 259,
    T_DWORD = 260,
    T_STRING = 261,
    T_VOID = 262,
    T_BEGIN = 263,
    T_END = 264,
    T_IF = 265,
    T_ELSE = 266,
    T_GOTO = 267,
    T_WHILE = 268,
    T_DO = 269,
    T_FOR = 270,
    T_STRUCT = 271,
    T_DOT = 272,
    T_ELLIPSIS = 273,
    T_LPAREN = 274,
    T_RPAREN = 275,
    T_LBRACKET = 276,
    T_RBRACKET = 277,
    T_REF = 278,
    T_RETURN = 279,
    T_COMMA = 280,
    T_SEMICOLON = 281,
    T_COLON = 282,
    T_ARRAY = 283,
    T_RANGE = 284,
    T_OF = 285,
    T_UNSIGNED = 286,
    T_SIGNED = 287,
    T_SIZEOF = 288,
    T_ASSIGN = 289,
    T_LAND = 290,
    T_LOR = 291,
    T_NOTEQUAL = 292,
    T_EQUAL = 293,
    T_LE = 294,
    T_LT = 295,
    T_GE = 296,
    T_GT = 297,
    T_SHL = 298,
    T_SHR = 299,
    T_BAND = 300,
    T_BOR = 301,
    T_BPLUS = 302,
    T_MINUS = 303,
    T_BMULTIPLY = 304,
    T_BDIVIDE = 305,
    T_BMODULUS = 306,
    T_CONSTBYTE = 307,
    T_CONSTWORD = 308,
    T_CONSTDWORD = 309,
    T_CONSTSTRING = 310,
    T_ID = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 187 "../mex/mex_tab.y" /* yacc.c:352  */

          IDTYPE *id;
          TYPEDESC *typedesc;
          ATTRIBUTES *attrdesc;
          DATAOBJ *dataobj;
          RANGE range;
          CONSTTYPE constant;
          TOKEN token;
          PATCH patch;
          ELSETYPE elsetype;
          FUNCARGS *arg;
          FUNCCALL fcall;
          WHILETYPE whil;
          OPTTYPE opt;
          FORTYPE fr;
          word size;
        

#line 207 "mex/mex_tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MEX_MEX_TAB_H_INCLUDED  */



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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   539

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

#define YYUNDEFTOK  2
#define YYMAXUTOK   311

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   259,   259,   262,   263,   266,   267,   272,   274,   276,
     271,   285,   287,   292,   291,   303,   304,   306,   310,   316,
     325,   326,   332,   331,   344,   345,   348,   351,   350,   356,
     360,   362,   364,   366,   368,   370,   372,   374,   376,   378,
     380,   382,   384,   389,   404,   417,   419,   424,   425,   428,
     430,   432,   438,   437,   441,   444,   443,   447,   449,   446,
     453,   452,   476,   480,   484,   475,   493,   495,   497,   502,
     506,   505,   512,   511,   518,   519,   531,   546,   548,   550,
     552,   554,   556,   562,   563,   568,   572,   574,   578,   580,
     582,   584,   586,   588,   590,   592,   594,   596,   598,   600,
     602,   604,   606,   608,   610,   612,   617,   626,   630,   634,
     638,   642,   646,   648,   650,   652,   657,   659,   662,   664,
     666,   670,   672,   674,   678
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_BYTE", "T_WORD", "T_DWORD",
  "T_STRING", "T_VOID", "T_BEGIN", "T_END", "T_IF", "T_ELSE", "T_GOTO",
  "T_WHILE", "T_DO", "T_FOR", "T_STRUCT", "T_DOT", "T_ELLIPSIS",
  "T_LPAREN", "T_RPAREN", "T_LBRACKET", "T_RBRACKET", "T_REF", "T_RETURN",
  "T_COMMA", "T_SEMICOLON", "T_COLON", "T_ARRAY", "T_RANGE", "T_OF",
  "T_UNSIGNED", "T_SIGNED", "T_SIZEOF", "T_ASSIGN", "T_LAND", "T_LOR",
  "T_NOTEQUAL", "T_EQUAL", "T_LE", "T_LT", "T_GE", "T_GT", "T_SHL",
  "T_SHR", "T_BAND", "T_BOR", "T_BPLUS", "T_MINUS", "T_BMULTIPLY",
  "T_BDIVIDE", "T_BMODULUS", "T_CONSTBYTE", "T_CONSTWORD", "T_CONSTDWORD",
  "T_CONSTSTRING", "T_ID", "$accept", "program", "top_list",
  "func_or_decl", "function", "@1", "@2", "$@3", "trailing_part",
  "function_block", "@4", "arg_list", "argument", "opt_ref", "block", "@5",
  "declarator_list", "declaration", "@6", "typename", "typedefn", "range",
  "id_list", "statement_list", "statement", "@7", "$@8", "@9", "$@10",
  "@11", "@12", "$@13", "$@14", "else_part", "@15", "function_call", "@16",
  "expr_list", "primary", "opt_expr", "paren_expr", "expr", "useless_expr",
  "useful_expr", "const_byte_p", "const_word_p", "const_dword_p",
  "const_string_p", "literal", "const_string", "ident", "lval_ident", "id", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -111,    24,   439,  -111,  -111,  -111,  -111,  -111,  -111,   -29,
      23,    59,    64,  -111,  -111,  -111,   -29,   -14,  -111,    26,
      -7,  -111,  -111,  -111,  -111,  -111,  -111,    13,  -111,  -111,
    -111,  -111,    30,    31,   -29,  -111,    33,  -111,     7,    35,
    -111,  -111,   314,  -111,   444,     8,    48,  -111,    51,   -29,
    -111,  -111,  -111,    55,    56,   444,  -111,  -111,  -111,     8,
     -29,     4,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   439,
     175,    57,  -111,  -111,    65,   -29,  -111,  -111,    66,   308,
       2,  -111,    68,    73,  -111,  -111,  -111,  -111,    -5,  -111,
    -111,  -111,  -111,  -111,   460,    62,    63,  -111,  -111,  -111,
    -111,  -111,    36,    15,    60,    -4,  -111,  -111,     2,  -111,
      67,    65,   254,     2,    70,   330,  -111,  -111,    76,    71,
     460,   444,    80,  -111,    16,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,  -111,  -111,  -111,   -29,     2,     2,  -111,  -111,
     439,   254,  -111,  -111,    87,    75,    73,  -111,  -111,    82,
     -29,     2,   475,   475,   488,   488,   340,   340,   340,   340,
     -31,   -31,   -31,   -31,    21,    21,  -111,  -111,  -111,    79,
     360,   460,     2,   254,   237,    93,   254,    65,  -111,  -111,
    -111,  -111,   390,    86,    89,   443,  -111,  -111,  -111,  -111,
    -111,    81,     2,  -111,  -111,     2,   254,  -111,    84,  -111,
    -111,  -111,     2,  -111,    96,   254,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    30,    31,    32,    40,    39,     0,
       0,     0,     0,     4,     5,     6,     0,     0,   124,    42,
       0,    36,    37,    38,    33,    34,    35,     0,    46,    29,
       7,    27,     0,     0,     0,    26,     0,    24,    44,     0,
      45,     8,     0,    43,     0,    20,     0,    25,     0,     0,
      41,    16,    21,     0,    18,     0,    28,    42,     9,    20,
       0,     0,    17,    19,    13,    12,    10,    11,    24,    47,
       0,     0,    22,    14,     0,     0,    57,    60,     0,     0,
      83,    68,     0,     0,   108,   109,   110,   116,   118,    49,
      48,    80,   107,    77,     0,    87,    86,   112,   113,   114,
     115,    81,   111,    82,     0,     0,    67,    24,     0,    52,
       0,     0,     0,    83,     0,     0,    87,    86,     0,     0,
      84,     0,   118,   105,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    50,   117,     0,     0,     0,    72,    55,
      47,     0,    54,    58,     0,     0,     0,    85,    66,     0,
       0,     0,    99,   100,   102,   101,    93,    94,   103,   104,
      96,    95,    97,    98,    91,    92,    88,    89,    90,   120,
       0,   106,    74,     0,     0,    69,     0,     0,    62,    78,
      79,   120,     0,   119,     0,    76,    56,    23,    70,    53,
      59,     0,    83,   119,    73,    74,     0,    61,     0,    75,
      71,    63,    83,    64,     0,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,    72,  -111,  -111,  -111,  -111,   -58,   121,  -111,    77,
       1,  -111,  -111,   -20,  -110,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   -72,   -79,  -104,
     -63,    32,   -69,   -65,  -111,  -111,  -111,  -111,  -111,  -111,
     -77,  -111,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    13,    14,    36,    45,    61,    66,    67,
      68,    53,    54,    55,    89,   107,    42,    47,    37,    16,
      48,    33,    27,    70,    90,   151,   183,   111,   186,   112,
     202,   212,   214,   199,   206,    91,   182,   194,    92,   119,
      93,    94,   116,   117,    97,    98,    99,   100,   101,   102,
     103,   104,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    95,   154,    17,   123,    96,   124,    28,    30,   155,
      69,   109,    64,    29,  -124,   148,   137,   138,   139,   140,
     141,    79,  -124,   149,     3,    40,    51,    18,   -15,  -121,
      65,    52,   145,   160,    31,    82,   146,   161,    34,    35,
      57,   185,    18,    95,    20,    50,    32,    96,   153,   150,
      83,    63,    41,    39,    84,    85,    86,    87,    88,    38,
      43,   105,    21,    22,    23,    44,   110,    24,    25,    26,
     139,   140,   141,   196,    56,    58,   200,   189,    29,   124,
     114,    59,    95,   106,   108,   113,    96,   121,   142,   143,
     156,   144,    79,   152,   147,   148,   210,   158,   208,  -124,
     187,   188,   190,   105,   198,   216,    82,   207,   213,   204,
     211,   115,   120,  -123,    95,    95,   215,    95,    96,    96,
    -122,    96,   159,    15,   201,    84,    85,    86,    87,   122,
     184,    62,    60,   209,     0,     0,   179,    95,     0,     0,
     115,    96,   105,     0,     0,   120,    95,     0,     0,     0,
      96,   191,     0,     0,     0,     0,     0,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   105,   105,    71,   105,   180,   181,
       0,     0,     0,    72,    73,    74,     0,    75,    76,    77,
      78,     0,     0,   192,    79,     0,     0,   105,     0,    80,
       0,    81,     0,     0,     0,     0,   105,     0,    82,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,    88,     0,     0,   120,     0,     0,   195,    71,     0,
       0,     0,     0,     0,   120,    72,   197,    74,     0,    75,
      76,    77,    78,     0,     0,    71,    79,     0,     0,     0,
       0,    80,    72,    81,    74,     0,    75,    76,    77,    78,
      82,     0,     0,    79,     0,     0,     0,     0,    80,     0,
      81,     0,     0,     0,     0,    83,     0,    82,     0,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
      88,     4,     5,     6,     7,     8,     0,     4,     5,     6,
       7,     8,     0,    46,    49,     0,     0,    79,     0,     0,
       9,     0,     0,     0,     0,     0,    10,     0,     0,    11,
      12,    82,    10,     0,     0,    11,    12,     0,     0,     0,
     157,     0,     0,     0,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,    88,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   193,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     4,     5,     6,     7,     8,     4,     5,     6,
       7,     8,     0,     0,     0,     9,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,    10,   205,     0,
      11,    12,    10,     0,     0,    11,    12,     0,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141
};

static const yytype_int16 yycheck[] =
{
       9,    70,   112,     2,    83,    70,    83,    16,    17,   113,
      68,    74,     8,    27,    19,    19,    47,    48,    49,    50,
      51,    19,    27,    27,     0,    34,    18,    56,    20,    34,
      26,    23,    17,    17,     8,    33,    21,    21,    25,    26,
      49,   151,    56,   112,    21,    44,    53,   112,   111,   107,
      48,    60,    19,    22,    52,    53,    54,    55,    56,    29,
      53,    70,     3,     4,     5,    30,    75,     3,     4,     5,
      49,    50,    51,   183,    26,    20,   186,   156,    27,   156,
      79,    25,   151,    26,    19,    19,   151,    19,    26,    26,
      20,    55,    19,    26,    34,    19,   206,    26,   202,    19,
      13,    26,    20,   112,    11,   215,    33,    26,   212,    20,
      26,    79,    80,    34,   183,   184,    20,   186,   183,   184,
      34,   186,   121,     2,   187,    52,    53,    54,    55,    56,
     150,    59,    55,   205,    -1,    -1,   145,   206,    -1,    -1,
     108,   206,   151,    -1,    -1,   113,   215,    -1,    -1,    -1,
     215,   160,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   183,   184,     1,   186,   146,   147,
      -1,    -1,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    -1,    -1,   161,    19,    -1,    -1,   206,    -1,    24,
      -1,    26,    -1,    -1,    -1,    -1,   215,    -1,    33,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    -1,    -1,   202,    -1,    -1,   205,     1,    -1,
      -1,    -1,    -1,    -1,   212,     8,     9,    10,    -1,    12,
      13,    14,    15,    -1,    -1,     1,    19,    -1,    -1,    -1,
      -1,    24,     8,    26,    10,    -1,    12,    13,    14,    15,
      33,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    48,    -1,    33,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,
      56,     3,     4,     5,     6,     7,    -1,     3,     4,     5,
       6,     7,    -1,     9,    16,    -1,    -1,    19,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    22,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    28,    25,    -1,
      31,    32,    28,    -1,    -1,    31,    32,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,     3,     4,     5,     6,     7,    16,
      28,    31,    32,    60,    61,    74,    76,    77,    56,   109,
      21,     3,     4,     5,     3,     4,     5,    79,   109,    27,
     109,     8,    53,    78,    25,    26,    62,    75,    29,    22,
     109,    19,    73,    53,    30,    63,     9,    74,    77,    16,
      77,    18,    23,    68,    69,    70,    26,   109,    20,    25,
      76,    64,    68,   109,     8,    26,    65,    66,    67,    73,
      80,     1,     8,     9,    10,    12,    13,    14,    15,    19,
      24,    26,    33,    48,    52,    53,    54,    55,    56,    71,
      81,    92,    95,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    26,    72,    19,    97,
     109,    84,    86,    19,    77,    98,    99,   100,   109,    96,
      98,    19,    56,    95,   107,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    26,    26,    55,    17,    21,    34,    19,    27,
      73,    82,    26,    97,    81,    96,    20,    20,    26,    77,
      17,    21,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,   109,
      98,    98,    93,    83,    80,    81,    85,    13,    26,    95,
      20,   109,    98,    22,    94,    98,    81,     9,    11,    90,
      81,    97,    87,    22,    20,    25,    91,    26,    96,    94,
      81,    26,    88,    96,    89,    20,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    63,    64,
      61,    65,    65,    67,    66,    68,    68,    68,    68,    69,
      70,    70,    72,    71,    73,    73,    74,    75,    74,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    81,    81,    83,    81,    84,    85,    81,
      86,    81,    87,    88,    89,    81,    81,    81,    81,    90,
      91,    90,    93,    92,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    97,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   101,   102,
     103,   104,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   108,   108,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     0,     0,     0,
       9,     1,     1,     0,     5,     0,     1,     3,     1,     3,
       0,     1,     0,     5,     0,     2,     3,     0,     7,     2,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     6,     2,     3,     2,     3,     1,     0,     2,     1,
       2,     2,     0,     5,     3,     0,     4,     0,     0,     5,
       0,     6,     0,     0,     0,    12,     3,     2,     1,     0,
       0,     3,     0,     5,     0,     3,     1,     1,     4,     4,
       1,     1,     1,     0,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       3,     1,     4,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
        case 6:
#line 268 "../mex/mex_tab.y" /* yacc.c:1652  */
    { /* nothing */ }
#line 1529 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 272 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.attrdesc)=curfn=function_begin((yyvsp[-1].typedesc), (yyvsp[0].id)); }
#line 1535 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 274 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.size)=offset; scope_open(); }
#line 1541 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 276 "../mex/mex_tab.y" /* yacc.c:1652  */
    { function_args((yyvsp[-4].attrdesc), (yyvsp[-1].arg)); }
#line 1547 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 278 "../mex/mex_tab.y" /* yacc.c:1652  */
    { VMADDR end_quad=this_quad;
                                  scope_close();
                                  function_end((yyvsp[-6].attrdesc), (yyvsp[0].size), end_quad);
                                  offset=(yyvsp[-4].size);
                                }
#line 1557 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 286 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.size)=TRUE; }
#line 1563 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 288 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.size)=FALSE; }
#line 1569 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 292 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.size)=offset; GenFuncStartQuad(curfn); }
#line 1575 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 294 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  /* Reset the value of the offset pointer  *
                                   * for the local activation record.       */

                                  offset=(yyvsp[-3].size);
                                }
#line 1586 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 303 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.arg)=NULL; }
#line 1592 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 305 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.arg)=declare_ellipsis(); }
#line 1598 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 307 "../mex/mex_tab.y" /* yacc.c:1652  */
    { if ((yyvsp[-2].arg)) (yyvsp[-2].arg)->next=(yyvsp[0].arg);
                                  (yyval.arg)=(yyvsp[-2].arg);
                                }
#line 1606 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 311 "../mex/mex_tab.y" /* yacc.c:1652  */
    { if ((yyvsp[0].arg)) (yyvsp[0].arg)->next=NULL;
                                  (yyval.arg)=(yyvsp[0].arg);
                                }
#line 1614 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 317 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.arg)=smalloc(sizeof(FUNCARGS));
                                  (yyval.arg)->type=(yyvsp[-1].typedesc); (yyval.arg)->name=sstrdup((yyvsp[0].id));
                                  (yyval.arg)->next=NULL;
                                  (yyval.arg)->ref=(yyvsp[-2].opt).bool;
                                }
#line 1624 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 325 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.opt).bool=FALSE; }
#line 1630 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 327 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.opt).bool=TRUE; }
#line 1636 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 332 "../mex/mex_tab.y" /* yacc.c:1652  */
    { scope_open(); (yyval.size)=offset; }
#line 1642 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 334 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  /* Reset the value of the offset pointer  *
                                   * for the local activation record.       */

                                  offset=(yyvsp[-3].size);
                                  scope_close();
                                }
#line 1654 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 349 "../mex/mex_tab.y" /* yacc.c:1652  */
    { declare_vars((yyvsp[-2].typedesc),(yyvsp[-1].attrdesc)); }
#line 1660 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 351 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=define_struct_id((yyvsp[-1].id)); }
#line 1666 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 353 "../mex/mex_tab.y" /* yacc.c:1652  */
    { define_struct_body((yyvsp[-3].typedesc)); }
#line 1672 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 357 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=(yyvsp[-1].typedesc); /* default action */ }
#line 1678 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 361 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&UnsignedByteType; }
#line 1684 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 363 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&WordType; }
#line 1690 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 365 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&DwordType; }
#line 1696 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 367 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&ByteType; }
#line 1702 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 369 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&WordType; }
#line 1708 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 371 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&DwordType; }
#line 1714 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 373 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&UnsignedByteType; }
#line 1720 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 375 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&UnsignedWordType; }
#line 1726 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 377 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&UnsignedDwordType; }
#line 1732 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 379 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&VoidType; }
#line 1738 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 381 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=&StringType; }
#line 1744 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 383 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=array_descriptor(&(yyvsp[-3].range),(yyvsp[0].typedesc)); }
#line 1750 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 385 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.typedesc)=declare_struct((yyvsp[0].id)); }
#line 1756 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 390 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  (yyval.range).lo=(yyvsp[-2].constant).val;
                                  (yyval.range).hi=(yyvsp[0].constant).val;

                                  if ((yyval.range).hi < (yyval.range).lo ||
                                      (yyval.range).hi > 0x7fff ||
                                      (yyval.range).lo > 0x7fff)
                                  {
                                    error(MEXERR_INVALIDRANGE,
                                          (yyval.range).lo,(yyval.range).hi);

                                    (yyval.range).hi=(yyval.range).lo;
                                  }
                                }
#line 1775 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 405 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  (yyval.range).lo = (yyvsp[-1].constant).val;
                                  (yyval.range).hi = (VMADDR)-1;

                                  if ((yyval.range).lo > 0x7fff)
                                  {
                                    error(MEXERR_INVALIDRANGE,
                                          (yyval.range).lo, -1);
                                  }
                                }
#line 1790 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 418 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.attrdesc)=var_list((yyvsp[0].id),(yyvsp[-2].attrdesc)); }
#line 1796 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 420 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.attrdesc)=var_list((yyvsp[0].id),NULL); }
#line 1802 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 429 "../mex/mex_tab.y" /* yacc.c:1652  */
    { }
#line 1808 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 431 "../mex/mex_tab.y" /* yacc.c:1652  */
    { MaybeFreeTemporary((yyvsp[-1].dataobj), TRUE); }
#line 1814 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 433 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  warn(MEXERR_WARN_MEANINGLESSEXPR);
                                  MaybeFreeTemporary((yyvsp[-1].dataobj), TRUE);
                                }
#line 1823 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 438 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.patch)=IfTest((yyvsp[0].dataobj)); }
#line 1829 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 440 "../mex/mex_tab.y" /* yacc.c:1652  */
    { IfEnd(& (yyvsp[-2].patch), & (yyvsp[0].elsetype)); }
#line 1835 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 442 "../mex/mex_tab.y" /* yacc.c:1652  */
    { ProcessGoto((yyvsp[-1].id)); }
#line 1841 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 444 "../mex/mex_tab.y" /* yacc.c:1652  */
    { DeclareLabel((yyvsp[-1].id)); }
#line 1847 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 447 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.whil).top_quad=this_quad; }
#line 1853 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 449 "../mex/mex_tab.y" /* yacc.c:1652  */
    { WhileTest(&(yyvsp[-1].whil), (yyvsp[0].dataobj)); }
#line 1859 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 451 "../mex/mex_tab.y" /* yacc.c:1652  */
    { GenWhileOut(&(yyvsp[-3].whil)); }
#line 1865 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 453 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.whil).top_quad=this_quad; }
#line 1871 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 455 "../mex/mex_tab.y" /* yacc.c:1652  */
    { GenDoWhileOut(&(yyvsp[-4].whil), (yyvsp[-1].dataobj)); }
#line 1877 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 476 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.fr).vmTest = this_quad;
                                  MaybeFreeTemporary((yyvsp[-1].dataobj), TRUE);
                                }
#line 1885 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 480 "../mex/mex_tab.y" /* yacc.c:1652  */
    { GenForTest(&(yyvsp[-2].fr), (yyvsp[-1].dataobj));
                                  (yyvsp[-2].fr).vmPost = this_quad;
                                }
#line 1893 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 484 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  GenForJmpTest(&(yyvsp[-4].fr));
                                  MaybeFreeTemporary((yyvsp[0].dataobj), TRUE);
                                  (yyvsp[-4].fr).vmBody = this_quad;
                                }
#line 1903 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 490 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  GenForJmpPostAndCleanup(&(yyvsp[-7].fr));
                                }
#line 1911 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 494 "../mex/mex_tab.y" /* yacc.c:1652  */
    { GenFuncRet((yyvsp[-1].dataobj), curfn); }
#line 1917 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 496 "../mex/mex_tab.y" /* yacc.c:1652  */
    { yyerrok; }
#line 1923 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 498 "../mex/mex_tab.y" /* yacc.c:1652  */
    { /* null statement */ }
#line 1929 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 502 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.elsetype).patchout=NULL;
                                  (yyval.elsetype).else_label=this_quad;
                                }
#line 1937 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 506 "../mex/mex_tab.y" /* yacc.c:1652  */
    { ElseHandler(&(yyval.elsetype)); }
#line 1943 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 508 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.elsetype)=(yyvsp[-1].elsetype); }
#line 1949 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 512 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.fcall)=StartFuncCall((yyvsp[-1].id)); }
#line 1955 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 514 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EndFuncCall(&(yyvsp[-2].fcall), (yyvsp[-1].dataobj)); }
#line 1961 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 518 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=NULL; }
#line 1967 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 520 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  if (!(yyvsp[-2].dataobj))
                                  {
                                    (yyvsp[-2].dataobj) = NewDataObj();
                                    (yyvsp[-2].dataobj)->type = NULL;
                                    (yyvsp[-2].dataobj)->argtype = NULL;
                                  }

                                  (yyvsp[-2].dataobj)->next_arg=(yyvsp[0].dataobj);
                                  (yyval.dataobj)=(yyvsp[-2].dataobj);
                                }
#line 1983 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 532 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  if ((yyvsp[0].dataobj))
                                    (yyvsp[0].dataobj)->next_arg=NULL;
                                  else
                                  {
                                    (yyvsp[0].dataobj) = NewDataObj();
                                    (yyvsp[0].dataobj)->type = NULL;
                                    (yyvsp[0].dataobj)->argtype = NULL;
                                  }

                                  (yyval.dataobj)=(yyvsp[0].dataobj);
                                }
#line 2000 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 547 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2006 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 549 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=TypeCast((yyvsp[0].dataobj), (yyvsp[-2].typedesc)); }
#line 2012 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 551 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalSizeof((yyvsp[-1].typedesc)); }
#line 2018 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 553 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2024 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 555 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2030 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 557 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2036 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 562 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=NULL; }
#line 2042 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 564 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2048 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 569 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[-1].dataobj); }
#line 2054 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 573 "../mex/mex_tab.y" /* yacc.c:1652  */
    {(yyval.dataobj) = (yyvsp[0].dataobj); }
#line 2060 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 575 "../mex/mex_tab.y" /* yacc.c:1652  */
    {(yyval.dataobj) = (yyvsp[0].dataobj); }
#line 2066 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 579 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BMULTIPLY,(yyvsp[0].dataobj)); }
#line 2072 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 581 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BDIVIDE,(yyvsp[0].dataobj)); }
#line 2078 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 583 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BMODULUS,(yyvsp[0].dataobj)); }
#line 2084 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 585 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BPLUS,(yyvsp[0].dataobj)); }
#line 2090 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 587 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_MINUS,(yyvsp[0].dataobj)); }
#line 2096 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 589 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_LE,(yyvsp[0].dataobj)); }
#line 2102 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 591 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_LT,(yyvsp[0].dataobj)); }
#line 2108 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 593 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_SHR,(yyvsp[0].dataobj)); }
#line 2114 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 595 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_SHL,(yyvsp[0].dataobj)); }
#line 2120 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 597 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BAND,(yyvsp[0].dataobj)); }
#line 2126 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 599 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_BOR,(yyvsp[0].dataobj)); }
#line 2132 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 601 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_LAND,(yyvsp[0].dataobj)); }
#line 2138 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 603 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_LOR,(yyvsp[0].dataobj)); }
#line 2144 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 605 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_EQUAL,(yyvsp[0].dataobj)); }
#line 2150 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 607 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_NOTEQUAL,(yyvsp[0].dataobj)); }
#line 2156 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 609 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_GE,(yyvsp[0].dataobj)); }
#line 2162 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 611 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalBinary((yyvsp[-2].dataobj),T_GT,(yyvsp[0].dataobj)); }
#line 2168 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 613 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=EvalUnary((yyvsp[0].dataobj),T_MINUS); }
#line 2174 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 618 "../mex/mex_tab.y" /* yacc.c:1652  */
    {
                                  /* The binary operator expects
                                   * assignments to be given
                                   * in the order "src -> dest";
                                   * hence the $3 $1 ordering.
                                   */
                                  (yyval.dataobj)=EvalBinary((yyvsp[0].dataobj),T_ASSIGN,(yyvsp[-2].dataobj));
                                }
#line 2187 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 627 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=(yyvsp[0].dataobj); }
#line 2193 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 631 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant) = (yyvsp[0].constant); }
#line 2199 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 635 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant) = (yyvsp[0].constant); }
#line 2205 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 639 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant) = (yyvsp[0].constant); }
#line 2211 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 643 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant) = (yyvsp[0].constant); }
#line 2217 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 647 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=byteref(&(yyvsp[0].constant)); }
#line 2223 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 649 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=wordref(&(yyvsp[0].constant)); }
#line 2229 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 651 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=dwordref(&(yyvsp[0].constant)); }
#line 2235 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 653 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=stringref(&(yyvsp[0].constant)); }
#line 2241 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 658 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant)=(yyvsp[0].constant); }
#line 2247 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 660 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.constant)=string_merge((yyvsp[-1].constant), (yyvsp[0].constant)); }
#line 2253 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 663 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=idref((yyvsp[0].id)); }
#line 2259 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 665 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=ProcessIndex((yyvsp[-3].dataobj), (yyvsp[-1].dataobj), FALSE); }
#line 2265 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 667 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=ProcessStruct((yyvsp[-2].dataobj), (yyvsp[0].id)); }
#line 2271 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 671 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=idref((yyvsp[0].id)); }
#line 2277 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 673 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=ProcessIndex((yyvsp[-3].dataobj), (yyvsp[-1].dataobj), TRUE); }
#line 2283 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 675 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.dataobj)=ProcessStruct((yyvsp[-2].dataobj), (yyvsp[0].id)); }
#line 2289 "mex/mex_tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 679 "../mex/mex_tab.y" /* yacc.c:1652  */
    { (yyval.id)=(yyvsp[0].id); }
#line 2295 "mex/mex_tab.c" /* yacc.c:1652  */
    break;


#line 2299 "mex/mex_tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 682 "../mex/mex_tab.y" /* yacc.c:1918  */




