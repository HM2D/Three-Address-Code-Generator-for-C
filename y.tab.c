/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     number = 258,
     TYPE = 259,
     IF = 260,
     ELSE = 261,
     incDec = 262,
     FOR = 263,
     WHILE = 264,
     identifier = 265,
     RELOP = 266
   };
#endif
/* Tokens.  */
#define number 258
#define TYPE 259
#define IF 260
#define ELSE 261
#define incDec 262
#define FOR 263
#define WHILE 264
#define identifier 265
#define RELOP 266




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

    int yylex();
    void yyerror(char* s);
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char* symbols[1000];
    int symbolValues[1000];
    int symbolCounter = 0;
    int labelCounter = 0;
    int flagNum = 0;
    int symbolVal(char* symbol);
    char* numToString;
    char* numToString2;
    char* labels;
    void updateTable(char* symbol,int value);
    char* split(char* s, char delimeter);
    char* split2(char* s, char delimeter);
    int relopHandler(int n,int n2,int n3);
    char* Temp();
    int tempForExp;
    char* Label();
    char* idSplit;
    char* whileLabel;
     FILE* yyout; 
     FILE* yyin;
   
    

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "yacc.y"
{
    struct quadruple
    {
        int num;
        int isnum;
        char *arg1;
        char *arg2;
        char * result;
    } tuple;
    }
/* Line 193 of yacc.c.  */
#line 158 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 171 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   266

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      18,    19,    12,    14,     2,    15,     2,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    16,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    10,    15,    19,    20,    21,    22,
      23,    24,    25,    44,    45,    46,    47,    48,    49,    50,
      68,    69,    70,    81,    82,    83,    93,    94,   104,   105,
     114,   119,   123,   125,   129,   133,   137,   141,   145,   149,
     153,   155,   159,   163,   165,   169
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      24,     0,    -1,    43,    17,    -1,    24,    43,    17,    -1,
      24,     4,    10,    17,    -1,    24,    44,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,     8,    18,    43,    25,
      17,    45,    26,    17,    27,    44,    28,    19,    20,    29,
      24,    30,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    18,    43,    31,    17,    45,    32,    17,    33,    44,
      34,    19,    20,    35,    24,    36,    21,    -1,    -1,    -1,
      24,     9,    37,    18,    45,    38,    19,    20,    24,    21,
      -1,    -1,    -1,     9,    39,    18,    45,    40,    19,    20,
      24,    21,    -1,    -1,    24,     5,    18,    45,    41,    19,
      20,    24,    21,    -1,    -1,     5,    18,    45,    42,    19,
      20,    24,    21,    -1,     4,    10,    22,    44,    -1,    10,
      22,    44,    -1,    46,    -1,    15,    15,    44,    -1,    14,
      14,    44,    -1,    44,    15,    15,    -1,    44,    14,    14,
      -1,    44,    14,    46,    -1,    44,    15,    46,    -1,    44,
      11,    44,    -1,    47,    -1,    46,    12,    47,    -1,    46,
      13,    47,    -1,     3,    -1,    18,    44,    19,    -1,    10,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      70,    71,    73,    74,    75,    76,    77,    78,    79,    82,
      84,    85,    86,    88,    89,    90
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "number", "TYPE", "IF", "ELSE", "incDec",
  "FOR", "WHILE", "identifier", "RELOP", "'*'", "'/'", "'+'", "'-'",
  "'then'", "';'", "'('", "')'", "'{'", "'}'", "'='", "$accept", "line",
  "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "assignment", "exp",
  "C", "term", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    42,    47,    43,    45,   116,    59,    40,    41,
     123,   125,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    23,    24,    24,    24,    24,    25,    26,    27,    28,
      29,    30,    24,    31,    32,    33,    34,    35,    36,    24,
      37,    38,    24,    39,    40,    24,    41,    24,    42,    24,
      43,    43,    44,    44,    44,    44,    44,    44,    44,    45,
      46,    46,    46,    47,    47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     4,     3,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    17,
       0,     0,    10,     0,     0,     9,     0,     9,     0,     8,
       4,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    43,     0,     0,     0,    20,    45,
       0,     0,     0,     0,     0,    32,    40,     2,     0,    45,
       0,    28,    13,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     5,     0,     0,    30,     0,
       0,     0,    24,     4,    26,     6,     0,    34,    33,    44,
      36,    37,    35,    38,    41,    42,    39,     0,     0,     0,
       0,     0,    21,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,    29,    15,     0,     0,     0,
       0,     0,    25,    27,     8,     0,    16,     0,    22,     0,
       9,     0,     0,    17,     0,     0,    10,    18,     0,     0,
      11,    19,     0,    12
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,    71,    89,    97,   102,   108,   112,    51,    80,
      91,    99,   105,   109,    38,    78,    11,    69,    70,    50,
       7,    24,    31,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
     176,    -4,    -9,    -5,   -66,    -2,    48,     5,     6,     9,
      -3,    29,     9,   -66,   -66,    40,    36,    41,   -66,    -2,
      54,    56,     9,    59,    21,    67,   -66,   -66,     9,   -66,
      63,   -66,   -66,     9,    71,    22,     9,    -3,    65,     9,
       9,    50,   -66,    27,    57,   -66,     0,     0,    71,     9,
      75,    78,   -66,   -66,   -66,   -66,     9,   -66,   -66,   -66,
     -66,    67,   -66,    67,   -66,   -66,    71,    85,     9,    89,
      94,    90,   -66,   176,   -66,    98,    99,     9,    95,    88,
     103,   176,   176,   -66,   104,   -66,   -66,   107,   126,   106,
     176,     9,   -66,   -66,   -66,   145,    71,     9,   -66,   108,
      71,   112,   114,   -66,   117,   176,   -66,   164,   176,   105,
     164,   -66,   118,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -65,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
      -6,    -7,   -22,    44,    53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,     1,    30,    14,    32,    34,     8,     5,    79,     9,
      29,    52,    14,    10,    54,    41,    87,    88,    22,    29,
      12,    48,    27,    20,    21,    95,    30,    22,    28,    30,
      14,    55,    57,    58,    72,    43,    44,    29,    45,    53,
     107,    60,    66,   110,    28,    22,    74,    33,    13,    30,
      35,    14,    15,    16,    36,    83,    17,    18,    19,    37,
      14,    30,    20,    21,    43,    44,    22,    29,    39,    59,
      30,    40,    62,    23,    49,    22,    42,    43,    44,    46,
      47,    23,    23,    56,    96,    43,    44,    61,    63,    23,
     100,    14,    15,    16,    67,    68,    17,    18,    19,    64,
      65,    23,    20,    21,    23,    73,    22,    77,    75,    85,
      14,    15,    16,    76,    84,    17,    18,    19,    81,    82,
      86,    20,    21,    94,    90,    22,   111,   101,    92,    14,
      15,    16,   103,   104,    17,    18,    19,   106,     0,   113,
      20,    21,     0,     0,    22,     0,     0,    93,    14,    15,
      16,     0,     0,    17,    18,    19,     0,     0,     0,    20,
      21,     0,     0,    22,     0,     0,    98,    14,    15,    16,
       0,     0,    17,    18,    19,     0,     0,     0,    20,    21,
       1,     2,    22,     0,     3,     4,     5
};

static const yytype_int8 yycheck[] =
{
       6,     4,     9,     3,    10,    12,    10,    10,    73,    18,
      10,    33,     3,    18,    36,    22,    81,    82,    18,    10,
      22,    28,    17,    14,    15,    90,    33,    18,    22,    36,
       3,    37,    39,    40,    56,    14,    15,    10,    17,    17,
     105,    14,    49,   108,    22,    18,    68,    18,     0,    56,
      10,     3,     4,     5,    18,    77,     8,     9,    10,    18,
       3,    68,    14,    15,    14,    15,    18,    10,    14,    19,
      77,    15,    15,    79,    11,    18,    17,    14,    15,    12,
      13,    87,    88,    18,    91,    14,    15,    43,    44,    95,
      97,     3,     4,     5,    19,    17,     8,     9,    10,    46,
      47,   107,    14,    15,   110,    20,    18,    17,    19,    21,
       3,     4,     5,    19,    19,     8,     9,    10,    20,    20,
      17,    14,    15,    17,    20,    18,    21,    19,    21,     3,
       4,     5,    20,    19,     8,     9,    10,    20,    -1,    21,
      14,    15,    -1,    -1,    18,    -1,    -1,    21,     3,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    -1,    18,    -1,    -1,    21,     3,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,
       4,     5,    18,    -1,     8,     9,    10
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     8,     9,    10,    24,    43,    10,    18,
      18,    39,    22,     0,     3,     4,     5,     8,     9,    10,
      14,    15,    18,    43,    44,    46,    47,    17,    22,    10,
      44,    45,    43,    18,    44,    10,    18,    18,    37,    14,
      15,    44,    17,    14,    15,    17,    12,    13,    44,    11,
      42,    31,    45,    17,    45,    43,    18,    44,    44,    19,
      14,    46,    15,    46,    47,    47,    44,    19,    17,    40,
      41,    25,    45,    20,    45,    19,    19,    17,    38,    24,
      32,    20,    20,    45,    19,    21,    17,    24,    24,    26,
      20,    33,    21,    21,    17,    24,    44,    27,    21,    34,
      44,    19,    28,    20,    19,    35,    20,    24,    29,    36,
      24,    21,    30,    21
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 59 "yacc.y"
    {;}
    break;

  case 3:
#line 60 "yacc.y"
    {;}
    break;

  case 4:
#line 61 "yacc.y"
    {;}
    break;

  case 5:
#line 62 "yacc.y"
    {;}
    break;

  case 6:
#line 63 "yacc.y"
    {labels = Label(); (yyvsp[(2) - (4)].tuple).arg1 = labels; printf("%s:\n",(yyvsp[(2) - (4)].tuple).arg1);}
    break;

  case 7:
#line 63 "yacc.y"
    {labels = Label(); (yyvsp[(7) - (7)].tuple).arg1 = labels; labels = Label(); (yyvsp[(2) - (7)].tuple).arg2= labels; printf("if %s Goto %s\n Goto %s\n",(yyvsp[(7) - (7)].tuple).result,(yyvsp[(7) - (7)].tuple).arg1,(yyvsp[(2) - (7)].tuple).arg2);}
    break;

  case 8:
#line 63 "yacc.y"
    {labels = Label(); (yyvsp[(7) - (9)].tuple).arg2 = labels; printf("%s:\n",(yyvsp[(7) - (9)].tuple).arg2);}
    break;

  case 9:
#line 63 "yacc.y"
    {printf("Goto %s\n",(yyvsp[(2) - (11)].tuple).arg1);}
    break;

  case 10:
#line 63 "yacc.y"
    {printf("%s:\n",(yyvsp[(7) - (14)].tuple).arg1);}
    break;

  case 11:
#line 63 "yacc.y"
    {printf("goto %s\n %s:\n",(yyvsp[(7) - (16)].tuple).arg2,(yyvsp[(2) - (16)].tuple).arg2);}
    break;

  case 13:
#line 64 "yacc.y"
    {labels = Label(); (yyvsp[(1) - (3)].tuple).arg1 = labels; printf("%s:\n",(yyvsp[(1) - (3)].tuple).arg1);}
    break;

  case 14:
#line 64 "yacc.y"
    {labels = Label(); (yyvsp[(6) - (6)].tuple).arg1 = labels; labels = Label(); (yyvsp[(1) - (6)].tuple).arg2= labels; printf("if %s Goto %s\n Goto %s\n",(yyvsp[(6) - (6)].tuple).result,(yyvsp[(6) - (6)].tuple).arg1,(yyvsp[(1) - (6)].tuple).arg2);}
    break;

  case 15:
#line 64 "yacc.y"
    {labels = Label(); (yyvsp[(6) - (8)].tuple).arg2 = labels; printf("%s:\n",(yyvsp[(6) - (8)].tuple).arg2);}
    break;

  case 16:
#line 64 "yacc.y"
    {printf("Goto %s\n",(yyvsp[(1) - (10)].tuple).arg1);}
    break;

  case 17:
#line 64 "yacc.y"
    {printf("%s:\n",(yyvsp[(6) - (13)].tuple).arg1);}
    break;

  case 18:
#line 64 "yacc.y"
    {printf("goto %s\n %s:\n",(yyvsp[(6) - (15)].tuple).arg2,(yyvsp[(1) - (15)].tuple).arg2);}
    break;

  case 20:
#line 65 "yacc.y"
    {labels = Label(); (yyvsp[(2) - (2)].tuple).arg1 = labels; printf("%s:\n",(yyvsp[(2) - (2)].tuple).arg1);}
    break;

  case 21:
#line 65 "yacc.y"
    { labels = Label(); (yyvsp[(5) - (5)].tuple).arg2 = labels; printf("ifZ %s Goto %s\n",(yyvsp[(5) - (5)].tuple).result,(yyvsp[(5) - (5)].tuple).arg2);}
    break;

  case 22:
#line 65 "yacc.y"
    { printf("Goto %s\n %s:\n",(yyvsp[(2) - (10)].tuple).arg1,(yyvsp[(2) - (10)].tuple).arg2);}
    break;

  case 23:
#line 66 "yacc.y"
    {labels = Label(); (yyvsp[(1) - (1)].tuple).arg1 = labels; printf("%s:\n",(yyvsp[(1) - (1)].tuple).arg1);}
    break;

  case 24:
#line 66 "yacc.y"
    { labels = Label(); (yyvsp[(1) - (4)].tuple).arg2 = labels; printf("ifZ %s Goto %s\n",(yyvsp[(4) - (4)].tuple).result,(yyvsp[(1) - (4)].tuple).arg2);}
    break;

  case 25:
#line 66 "yacc.y"
    { printf("Goto %s\n %s:\n",(yyvsp[(1) - (9)].tuple).arg1,(yyvsp[(1) - (9)].tuple).arg2);}
    break;

  case 26:
#line 67 "yacc.y"
    { labels = Label(); (yyvsp[(4) - (4)].tuple).arg2 = labels; printf("IfZ %s Goto %s \n",(yyvsp[(4) - (4)].tuple).result,labels);    }
    break;

  case 27:
#line 67 "yacc.y"
    { printf("%s :\n",(yyvsp[(4) - (9)].tuple).arg2);}
    break;

  case 28:
#line 68 "yacc.y"
    { labels = Label(); (yyvsp[(3) - (3)].tuple).arg2 = labels; printf("IfZ %s Goto %s \n",(yyvsp[(3) - (3)].tuple).result,labels);    }
    break;

  case 29:
#line 68 "yacc.y"
    { printf("%s :\n",(yyvsp[(3) - (8)].tuple).arg2);}
    break;

  case 30:
#line 70 "yacc.y"
    { printf("%s = %s\n",(yyvsp[(2) - (4)].tuple).result,(yyvsp[(4) - (4)].tuple).result);}
    break;

  case 31:
#line 71 "yacc.y"
    { fprintf(yyout,"%s = %s\n",(yyvsp[(1) - (3)].tuple).result,(yyvsp[(3) - (3)].tuple).result);}
    break;

  case 32:
#line 73 "yacc.y"
    {;}
    break;

  case 33:
#line 74 "yacc.y"
    { printf("--%s\n",(yyvsp[(3) - (3)].tuple).result); }
    break;

  case 34:
#line 75 "yacc.y"
    {printf("++%s\n",(yyvsp[(3) - (3)].tuple).result);}
    break;

  case 35:
#line 76 "yacc.y"
    { printf("%s--\n",(yyvsp[(1) - (3)].tuple).result); }
    break;

  case 36:
#line 77 "yacc.y"
    {printf("%s++\n",(yyvsp[(1) - (3)].tuple).result);}
    break;

  case 37:
#line 78 "yacc.y"
    { (yyval.tuple).arg1 = (yyvsp[(1) - (3)].tuple).result; (yyval.tuple).arg2 = (yyvsp[(3) - (3)].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[(1) - (3)].tuple).isnum == 1){  printf("%s = %d + %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).num,(yyvsp[(3) - (3)].tuple).result);}else { printf("%s = %s + %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyval.tuple).arg2);}}
    break;

  case 38:
#line 79 "yacc.y"
    { (yyval.tuple).arg1 = (yyvsp[(1) - (3)].tuple).result; (yyval.tuple).arg2 = (yyvsp[(3) - (3)].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[(1) - (3)].tuple).isnum == 1){  printf("%s = %d - %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).num,(yyvsp[(3) - (3)].tuple).result);}else { printf("%s = %s - %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyval.tuple).arg2);}}
    break;

  case 39:
#line 82 "yacc.y"
    {  if((yyvsp[(3) - (3)].tuple).isnum == 1){ (yyval.tuple).arg1 = Temp(); (yyval.tuple).result = Temp(); printf("%s = %d\n",(yyval.tuple).arg1,(yyvsp[(3) - (3)].tuple).num);  printf("%s = %s %s %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).result,(yyvsp[(2) - (3)].tuple).arg1,(yyval.tuple).arg1);}else {  (yyval.tuple).result = Temp(); printf("%s = %s %s %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).result,(yyvsp[(2) - (3)].tuple).arg1,(yyvsp[(3) - (3)].tuple).result);}}
    break;

  case 40:
#line 84 "yacc.y"
    {;}
    break;

  case 41:
#line 85 "yacc.y"
    {  (yyval.tuple).arg1 = (yyvsp[(1) - (3)].tuple).result; (yyval.tuple).arg2 = (yyvsp[(3) - (3)].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[(1) - (3)].tuple).isnum == 1){  printf("%s = %d * %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).num,(yyvsp[(3) - (3)].tuple).result);}else { printf("%s = %s * %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyval.tuple).arg2);}}
    break;

  case 42:
#line 86 "yacc.y"
    { (yyval.tuple).arg1 = (yyvsp[(1) - (3)].tuple).result; (yyval.tuple).arg2 = (yyvsp[(3) - (3)].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[(1) - (3)].tuple).isnum == 1){  printf("%s = %d / %s\n",(yyval.tuple).result,(yyvsp[(1) - (3)].tuple).num,(yyvsp[(3) - (3)].tuple).result);}else { printf("%s = %s / %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyval.tuple).arg2);}}
    break;

  case 43:
#line 88 "yacc.y"
    { sprintf(numToString,"%d",(yyvsp[(1) - (1)].tuple).num); (yyvsp[(1) - (1)].tuple).isnum = 1; (yyvsp[(1) - (1)].tuple).arg1 = numToString; (yyvsp[(1) - (1)].tuple).result = numToString; (yyval.tuple) =(yyvsp[(1) - (1)].tuple);}
    break;

  case 44:
#line 89 "yacc.y"
    { (yyvsp[(2) - (3)].tuple).isnum=0;  (yyval.tuple) = (yyvsp[(2) - (3)].tuple); }
    break;

  case 45:
#line 90 "yacc.y"
    {  (yyval.tuple).result = (yyvsp[(1) - (1)].tuple).result; }
    break;


/* Line 1267 of yacc.c.  */
#line 1673 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 92 "yacc.y"


/*

int relopHandler(int n,int n2,int n3){
    //printf("relop");
    if(n2 == 1){
        
        return (n<n3);
        
    }
    if(n2 == 2){
        return (n<=n3);
        
    }
    if(n2 == 3){
        return (n>n3);
    }
    if(n2 == 4){
        return (n>=n3);
        
    }
    if( n2 == 5){
        return (n != n3);
    }
    if(n2 == 6){
        return (n == n3);
    }
    return -1;
}


int symbolVal(char* s){
    int i;
    //printf("calling symbolval:\n");
    for(i=0; i<1000;i++){
        if(strcmp(symbols[i], s)==0){
            return symbolValues[i];
            break;
        }
        
        
        
    }
    yyerror("Variable Not Found\n");
    return 0;
}
*/

char * Temp(){
    
    symbolCounter++;
    char *temp=(char *)malloc(sizeof(5*sizeof(char)));
    sprintf(temp,"t%d",symbolCounter);
    return temp;
    
    
    
}
char * Label(){
    
    labelCounter++;
    char *temp=(char *)malloc(sizeof(5*sizeof(char)));
    sprintf(temp,"L%d",labelCounter);
    return temp;
    
    
    
}
/*
void updateTable(char* s,int val){
    char delimeter = '=';
    char* temp = split(s,delimeter);
    
    symbolValues[symbolCounter] = val;
    symbols[symbolCounter++] = temp;
    //printf("the symbol %s with value: %d saved in %d element of the table", temp,val,symbolCounter-1);
    
}


char* split(char* s,char delimeter){
    char* temp;
    temp = malloc(100 * sizeof(char));
    //int compare1,compare2;
    int i,j;
    //printf("split\n");
    int n = sizeof(s) / sizeof(s[0]);
    //printf("%d\n", n );
    for(i=0;i< n;i++){
        //printf("%c\n", delimeter);
        //printf("%c\n", s[i]);
        
        if(s[i] == delimeter){
            //printf("found in %d",i);
            for(j=0;j<i;j++){
                
                temp[j] = s[j];
                
            }
            break;
            
        }
    }
    //printf("%s\n", temp);
    return temp;
}
char* split2(char* s,char delimeter){
    char* temp;
    temp = malloc(100 * sizeof(char));
    //int compare1,compare2;
    int i,j;
    //printf("split\n");
    int n = sizeof(s) / sizeof(s[0]);
    //printf("%d\n", n );
    for(i=0;i< n;i++){
        //printf("%c\n", delimeter);
        //printf("%c\n", s[i+1]);
        
        if(s[i] == delimeter){
            //printf("found in %d",i);
            
            temp[0] = s[i];
            temp[1] = s[i+1];
            break;
            
        }
    }
    //printf("%s\n", temp);
    return temp;
}
*/
int main() {
  
    FILE* yyout;

    numToString = malloc(11 * sizeof(char));
    numToString2 = malloc(10 * sizeof(char));
    labels = malloc(10 * sizeof(char));
    idSplit = malloc(10 * sizeof(char));
    whileLabel = malloc(10 * sizeof(char));
   

//fprintf(yyout, "hellohello %s\n",numToString);
 

   yyout = fopen("out.txt","w");
  yyin = fopen("input.txt", "r");
   yyparse();
   fclose(yyout);
  }

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

