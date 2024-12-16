
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "com33.y"

	#include <iostream>
     #include <bits/stdc++.h>
	 #include <string>
	 #include <map>


   using namespace std;
   extern int yylex();
   int yyerror(string s);
   extern int yyparse();
   extern FILE *yyin;
   extern int yylineno;

   int currentDatatype;



   int trackforloop=1;
   int trackrangeloop=1;
   int trackwhileloop=1;
    
	int trackif=-1;
	int is_nested=0;
	int is_else_if=0;
	int which_if_exe=0;
	

	int trek=0,trekflag=0,t=0;


	

   
  map <string,int> function_parameter_temp;

   int match_arg=0;
   bool condition = false;
   int p=0;

  map <string, int> functionMap;



map<string, int> variableMap;

int GetValue(const string& var) {
    auto it = variableMap.find(var);
    if (it != variableMap.end()) {
        return it->second;
    }
    return 0;
}

bool is_declared(const string& var) {
    return variableMap.find(var) != variableMap.end();
}

bool SetValue(const string& var, int val) {
    if (is_declared(var)) {
        return false; 
    }

    variableMap[var] = val;
    return true; 
}




map<string, int> intvariableMap;

   void intvalueUpdate(const string& var, int val) {
        intvariableMap[var] = val;
      }

int intGetValue(const string& var) {
    auto it = intvariableMap.find(var);
    if (it != intvariableMap.end()) {
        return it->second;
    }
    return 0;
}

bool intSetValue(const string& var, int val) {
    if (is_declared(var)) {
        return false; 
    }

    intvariableMap[var] = val;
	variableMap[var]=1;
    return true; 
}

map<string, float> floatvariableMap;

   void floatvalueUpdate(const string& var, float val) {
        floatvariableMap[var] = val;
      }

float floatGetValue(const string& var) {
    auto it = floatvariableMap.find(var);
    if (it != floatvariableMap.end()) {
        return it->second;
    }
    return 0;
}

bool floatSetValue(const string& var, float val) {
    if (is_declared(var)) {
        return false; 
    }

    floatvariableMap[var] = val;
	variableMap[var]=2;
    return true; 
}


map<string, char> charvariableMap;

   void charvalueUpdate(const string& var, char val) {
        charvariableMap[var] = val;
      }

char charGetValue(const string& var) {
    auto it = charvariableMap.find(var);
    if (it != charvariableMap.end()) {
        return it->second;
    }
    return 'a';
}

bool charSetValue(const string& var, char val) {
    if (is_declared(var)) {
        return false; 
    }

    charvariableMap[var] = val;
	variableMap[var]=3;
    return true; 
}



map<string, string> strvariableMap;

   void strvalueUpdate(const string& var, string val) {
        strvariableMap[var] = val;
      }

string strGetValue(const string& var) {
    auto it = strvariableMap.find(var);
    if (it != strvariableMap.end()) {
        return it->second;
    }
    return "null";
}


bool strSetValue(const string& var, string val) {
    if (is_declared(var)) {
        return false; 
    }

    strvariableMap[var] = val;
	variableMap[var]=5;
    return true; 
}

map<string, string> boolvariableMap;

   void boolvalueUpdate(const string& var, string val) {
        boolvariableMap[var] = val;
      }

string boolGetValue(const string& var) {
    auto it = boolvariableMap.find(var);
    if (it != boolvariableMap.end()) {
        return it->second;
    }
    return "null";
}


bool boolSetValue(const string& var, string val) {
    if (is_declared(var)) {
        return false; 
    }

    boolvariableMap[var] = val;
	variableMap[var]=5;
    return true; 
}



 
  




/* Line 189 of yacc.c  */
#line 277 "com33.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIR = 258,
     USER_DIR = 259,
     SINGLE_LINE_COMMENT = 260,
     DEFINE = 261,
     INTEGER = 262,
     FLOAT = 263,
     DOUBLE = 264,
     STRING = 265,
     CHARACTER = 266,
     BOOLEAN = 267,
     NOSPACE_SPACE_SEMICOLON = 268,
     NOSPACE_SPACE_COMMA = 269,
     MULTI_LINE_COMMENT = 270,
     ASSIGN = 271,
     LESS = 272,
     GREATER = 273,
     LESSEQ = 274,
     GREATEREQ = 275,
     EQ = 276,
     NOTEQUAL = 277,
     PLUS = 278,
     MINUS = 279,
     MUL = 280,
     DIV = 281,
     FACT = 282,
     MOD = 283,
     POW = 284,
     COLON = 285,
     OR = 286,
     AND = 287,
     NOT = 288,
     BITWISEOR = 289,
     BITWISEAND = 290,
     BITWISEXOR = 291,
     MAIN = 292,
     LeftPAR = 293,
     RightPAR = 294,
     BEGINN = 295,
     ENDD = 296,
     FUNCTION = 297,
     RETBEGIN = 298,
     RETEND = 299,
     VOID = 300,
     RETURN = 301,
     CALL = 302,
     ARG = 303,
     IF = 304,
     ELSEIF = 305,
     ELSE = 306,
     FOR = 307,
     SWITCH = 308,
     DEFAULT = 309,
     PRINT = 310,
     CASE = 311,
     CIN = 312,
     NEXT = 313,
     BREAK = 314,
     CONSTANT = 315,
     BEGIF = 316,
     ENDIF = 317,
     LOOPEND = 318,
     LOOPSTART = 319,
     RANGE = 320,
     WHILE = 321,
     BOOLVALUE1 = 322,
     BOOLVALUE0 = 323,
     CHARVALUE = 324,
     INTEGERVALUE = 325,
     FLOATVALUE = 326,
     STRINGVALUE = 327,
     IDENTIFIER = 328,
     UMINUS = 329
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 209 "com33.y"

    char* str;
	int integer;
	char c;
	float Float;



/* Line 214 of yacc.c  */
#line 396 "com33.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 408 "com33.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   964

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNRULES -- Number of states.  */
#define YYNSTATES  371

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    16,    19,    21,    23,
      25,    26,    29,    31,    34,    37,    39,    41,    44,    54,
      55,    58,    60,    63,    66,    68,    70,    73,    75,    78,
      80,    83,    86,    90,    93,    96,    99,   102,   105,   108,
     110,   112,   113,   127,   128,   130,   132,   133,   136,   140,
     141,   144,   148,   155,   156,   160,   162,   164,   166,   168,
     170,   172,   174,   178,   180,   182,   184,   186,   188,   192,
     194,   196,   200,   204,   208,   212,   216,   221,   223,   225,
     229,   231,   232,   236,   240,   245,   250,   255,   260,   265,
     273,   281,   289,   297,   305,   311,   317,   323,   329,   335,
     341,   346,   354,   360,   369,   370,   372,   374,   375,   382,
     385,   396,   402,   403,   404,   407,   410,   413,   415,   418,
     421,   424,   428,   431,   433,   445,   446,   448,   450,   453,
     456,   458,   460,   464,   468,   472,   476,   480,   484,   485,
     487,   489,   501,   502,   504,   506,   509,   512,   520,   521,
     523,   525,   528,   531,   533,   535,   540,   543,   547,   551,
     555,   559,   563,   567,   571,   574,   578,   582,   586,   589,
     593,   597,   601,   605,   609,   613,   617,   621,   623,   625,
     627,   629,   632,   636,   640,   644,   648,   652,   656,   659,
     663,   667,   671,   675,   679,   683,   687,   689,   691,   693,
     695
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    78,    82,    79,    82,    -1,    -1,
      77,    81,    -1,    77,     5,    -1,    77,    15,    -1,    81,
      -1,     5,    -1,    15,    -1,    -1,    78,    88,    -1,    88,
      -1,    78,     5,    -1,    78,    15,    -1,     5,    -1,    15,
      -1,    78,    92,    -1,    37,    38,    39,    43,    44,    40,
      80,    85,    41,    -1,    -1,    80,    88,    -1,    88,    -1,
      80,     5,    -1,    80,    15,    -1,     5,    -1,    15,    -1,
      80,    96,    -1,    96,    -1,    80,    97,    -1,    97,    -1,
      80,    98,    -1,    80,    99,    -1,    80,   115,    13,    -1,
      80,   106,    -1,    80,   111,    -1,    80,   113,    -1,    80,
      86,    -1,    80,   102,    -1,    80,    92,    -1,     3,    -1,
       4,    -1,    -1,    82,    42,    73,    38,    84,    39,    43,
      83,    44,    40,    80,    85,    41,    -1,    -1,    89,    -1,
      45,    -1,    -1,    83,    73,    -1,    84,    14,    84,    -1,
      -1,    46,    13,    -1,    46,   115,    13,    -1,    47,    73,
      38,    87,    39,    13,    -1,    -1,    87,    14,    87,    -1,
      70,    -1,    71,    -1,    72,    -1,    68,    -1,    67,    -1,
      69,    -1,    73,    -1,    89,    90,    13,    -1,     7,    -1,
       8,    -1,    11,    -1,    10,    -1,    12,    -1,    91,    14,
      90,    -1,    91,    -1,    73,    -1,    73,    16,   115,    -1,
      73,    16,   117,    -1,    73,    16,   118,    -1,    73,    16,
     116,    -1,    73,    16,   119,    -1,    60,    93,    94,    13,
      -1,     7,    -1,     8,    -1,    95,    14,    94,    -1,    95,
      -1,    -1,    73,    16,   115,    -1,    73,    16,   117,    -1,
      73,    16,   115,    13,    -1,    73,    16,   116,    13,    -1,
      73,    16,   117,    13,    -1,    73,    16,   118,    13,    -1,
      73,    16,   119,    13,    -1,    48,    38,    73,    39,    16,
     115,    13,    -1,    48,    38,    73,    39,    16,   117,    13,
      -1,    48,    38,    73,    39,    16,   118,    13,    -1,    48,
      38,    73,    39,    16,   116,    13,    -1,    48,    38,    73,
      39,    16,   119,    13,    -1,    55,    38,   115,    39,    13,
      -1,    55,    38,   117,    39,    13,    -1,    55,    38,   118,
      39,    13,    -1,    55,    38,   116,    39,    13,    -1,    55,
      38,   119,    39,    13,    -1,    55,    38,    72,    39,    13,
      -1,    55,    38,    39,    13,    -1,    55,    38,    72,    14,
     115,    39,    13,    -1,    57,    38,    73,    39,    13,    -1,
      49,    38,   115,    39,    61,   100,   101,    62,    -1,    -1,
      80,    -1,    99,    -1,    -1,    50,    38,   115,    39,   100,
     101,    -1,    51,   100,    -1,    53,    38,   105,    39,    61,
     103,    54,    30,   104,    62,    -1,    56,    70,    30,   104,
     103,    -1,    -1,    -1,   104,    96,    -1,   104,    97,    -1,
     104,    88,    -1,    88,    -1,   104,     5,    -1,   104,    15,
      -1,   104,    98,    -1,   104,   115,    13,    -1,   104,    92,
      -1,    73,    -1,    52,    38,   108,    30,   109,    30,   108,
      39,    64,   107,    63,    -1,    -1,   106,    -1,    80,    -1,
     107,    59,    -1,   107,    58,    -1,    73,    -1,    70,    -1,
     110,    18,   110,    -1,   110,    20,   110,    -1,   110,    19,
     110,    -1,   110,    17,   110,    -1,   110,    21,   110,    -1,
     110,    22,   110,    -1,    -1,    73,    -1,    70,    -1,    65,
      38,   108,    30,   108,    30,   108,    39,    64,   112,    63,
      -1,    -1,   111,    -1,    80,    -1,   112,    59,    -1,   112,
      58,    -1,    66,    38,   109,    39,    64,   114,    63,    -1,
      -1,   113,    -1,    80,    -1,   114,    59,    -1,   114,    58,
      -1,    70,    -1,    73,    -1,    48,    38,    73,    39,    -1,
      24,   115,    -1,   115,    23,   115,    -1,   115,    24,   115,
      -1,   115,    25,   115,    -1,   115,    26,   115,    -1,   115,
      28,   115,    -1,   115,    32,   115,    -1,   115,    31,   115,
      -1,    33,   115,    -1,   115,    35,   115,    -1,   115,    34,
     115,    -1,   115,    36,   115,    -1,   115,    27,    -1,   115,
      29,   115,    -1,   115,    21,   115,    -1,   115,    18,   115,
      -1,   115,    20,   115,    -1,   115,    22,   115,    -1,   115,
      17,   115,    -1,   115,    19,   115,    -1,    38,   115,    39,
      -1,    72,    -1,    73,    -1,    71,    -1,    73,    -1,    24,
     117,    -1,   117,    23,   117,    -1,   117,    24,   117,    -1,
     117,    25,   117,    -1,   117,    26,   117,    -1,   117,    32,
     117,    -1,   117,    31,   117,    -1,   117,   117,    -1,   117,
      21,   117,    -1,   117,    18,   117,    -1,   117,    20,   117,
      -1,   117,    22,   117,    -1,   117,    17,   117,    -1,   117,
      19,   117,    -1,    38,   117,    39,    -1,    69,    -1,    73,
      -1,    68,    -1,    67,    -1,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   291,   291,   295,   296,   297,   298,   299,   300,   301,
     305,   306,   307,   308,   309,   310,   311,   312,   316,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   348,
     349,   357,   358,   375,   376,   377,   379,   380,   381,   383,
     384,   385,   390,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   440,   443,   444,   445,   446,   447,   449,   450,
     453,   485,   504,   523,   539,   559,   588,   590,   591,   593,
     594,   596,   597,   619,   661,   678,   693,   709,   725,   740,
     751,   761,   774,   785,   821,   826,   832,   837,   842,   847,
     856,   859,   873,   929,   953,   954,   955,   960,   964,   972,
     986,   991,   992,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1008,  1024,  1028,  1029,  1030,  1031,  1032,
    1034,  1036,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1047,
    1049,  1052,  1080,  1081,  1084,  1085,  1086,  1089,  1091,  1092,
    1093,  1094,  1095,  1117,  1118,  1135,  1146,  1147,  1148,  1149,
    1150,  1159,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1177,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1199,  1200,  1218,
    1219,  1235,  1236,  1237,  1238,  1239,  1248,  1249,  1250,  1251,
    1252,  1253,  1254,  1255,  1256,  1257,  1264,  1265,  1282,  1283,
    1284
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIR", "USER_DIR", "SINGLE_LINE_COMMENT",
  "DEFINE", "INTEGER", "FLOAT", "DOUBLE", "STRING", "CHARACTER", "BOOLEAN",
  "NOSPACE_SPACE_SEMICOLON", "NOSPACE_SPACE_COMMA", "MULTI_LINE_COMMENT",
  "ASSIGN", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "EQ", "NOTEQUAL",
  "PLUS", "MINUS", "MUL", "DIV", "FACT", "MOD", "POW", "COLON", "OR",
  "AND", "NOT", "BITWISEOR", "BITWISEAND", "BITWISEXOR", "MAIN", "LeftPAR",
  "RightPAR", "BEGINN", "ENDD", "FUNCTION", "RETBEGIN", "RETEND", "VOID",
  "RETURN", "CALL", "ARG", "IF", "ELSEIF", "ELSE", "FOR", "SWITCH",
  "DEFAULT", "PRINT", "CASE", "CIN", "NEXT", "BREAK", "CONSTANT", "BEGIF",
  "ENDIF", "LOOPEND", "LOOPSTART", "RANGE", "WHILE", "BOOLVALUE1",
  "BOOLVALUE0", "CHARVALUE", "INTEGERVALUE", "FLOATVALUE", "STRINGVALUE",
  "IDENTIFIER", "UMINUS", "$accept", "start", "line", "globe", "main",
  "statement", "dir", "function", "datatype1", "param", "ret", "call",
  "callparam", "declaration", "datatype", "idName", "id", "const",
  "datatypeconst", "constId", "conId", "Arithmetic", "print", "input",
  "ifs", "statement11", "elseif", "switch", "rec", "stat", "value1",
  "loop", "lines", "value", "condition", "condition1", "range", "liness",
  "while", "linee", "exp", "str_exp", "float_exp", "char_exp", "bool_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    93,    93,    94,
      94,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    99,   100,   100,   100,   101,   101,   101,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   106,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   112,   112,   112,   112,   112,   113,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   119,   119,
     119
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     2,     2,     1,     1,     1,
       0,     2,     1,     2,     2,     1,     1,     2,     9,     0,
       2,     1,     2,     2,     1,     1,     2,     1,     2,     1,
       2,     2,     3,     2,     2,     2,     2,     2,     2,     1,
       1,     0,    13,     0,     1,     1,     0,     2,     3,     0,
       2,     3,     6,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     3,     3,     3,     4,     1,     1,     3,
       1,     0,     3,     3,     4,     4,     4,     4,     4,     7,
       7,     7,     7,     7,     5,     5,     5,     5,     5,     5,
       4,     7,     5,     8,     0,     1,     1,     0,     6,     2,
      10,     5,     0,     0,     2,     2,     2,     1,     2,     2,
       2,     3,     2,     1,    11,     0,     1,     1,     2,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     0,     1,
       1,    11,     0,     1,     1,     2,     2,     7,     0,     1,
       1,     2,     2,     1,     1,     4,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    39,    40,     8,     9,     0,    10,     7,     1,     5,
      63,    64,    66,    65,    67,     6,    41,     4,    12,     0,
      13,    14,     0,     0,    11,    17,    70,     0,    69,    77,
      78,    81,     0,     0,    41,     0,    62,     0,     0,     0,
      80,     0,     0,     2,     0,     0,     0,     0,   199,   198,
     196,   153,   179,   177,   154,    71,    74,    72,    73,    75,
      68,     0,    76,    81,     0,    46,   154,   156,   181,     0,
       0,   154,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   188,    82,
      83,    79,     0,    45,     0,     0,    44,   176,   195,     0,
     174,   171,   175,   172,   170,   173,   157,   158,   159,   160,
     161,   169,   163,   162,   166,   165,   167,     0,   193,   190,
     194,   191,   189,   192,   182,   181,   184,   185,   187,   186,
       0,    47,    46,     0,   155,    19,    48,    43,    24,    25,
       0,     0,     0,    49,    21,    27,    29,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,     0,    36,    20,    38,    26,    28,    30,
      31,    37,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   138,
      18,    32,    19,     0,   100,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    51,    53,     0,
       0,   131,   130,     0,   123,     0,     0,     0,   140,   139,
       0,     0,    49,     0,     0,    99,    94,    97,    95,    96,
      98,    59,    58,    60,    55,    56,    57,    61,     0,   155,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    19,     0,   112,   102,     0,    19,   135,   132,   134,
     133,   136,   137,    42,    89,    92,    90,    91,    93,   101,
      54,    52,   105,   106,   107,     0,     0,     0,     0,   150,
     149,     0,     0,    19,     0,     0,     0,     0,     0,   152,
     151,   147,     0,   109,   103,     0,   113,   113,     0,     0,
      19,   117,   112,     0,    19,    19,   127,   126,     0,   118,
     119,   116,   122,   114,   115,   120,   111,     0,   110,   144,
     143,     0,   107,   129,   128,   124,   121,   146,   145,   141,
     108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    16,    34,   312,     7,    23,   114,   115,
     183,   184,   268,   164,    19,    27,    28,   186,    31,    39,
      40,   165,   166,   189,   190,   314,   324,   191,   317,   342,
     245,   192,   348,   243,   250,   251,   193,   361,   194,   321,
     195,    56,   108,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -316
static const yytype_int16 yypact[] =
{
     172,  -316,  -316,  -316,  -316,    25,   293,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,   211,  -316,  -316,   -42,
    -316,  -316,   113,    -8,  -316,  -316,    37,    48,    65,  -316,
    -316,     8,    46,    14,  -316,   548,  -316,   -42,    79,    88,
      94,    74,    85,    90,   559,   598,   559,    96,  -316,  -316,
    -316,  -316,  -316,  -316,    26,   851,  -316,   528,  -316,  -316,
    -316,   559,  -316,     8,   104,   157,    26,  -316,    27,   598,
     598,  -316,   851,   736,   469,    80,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,  -316,   598,   598,   598,
     598,   598,   598,   598,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,  -316,   528,   851,
     528,  -316,    95,  -316,    87,     0,  -316,  -316,  -316,   124,
     865,   865,   865,   865,   865,   865,   399,   399,    11,    11,
      11,   137,   893,   879,   921,   907,   486,   190,   532,   532,
     532,   532,   532,   532,   120,    27,    27,    27,   171,   363,
     130,  -316,   157,   128,  -316,   407,   158,   275,  -316,  -316,
     136,   140,   163,    78,  -316,  -316,  -316,   145,   117,   541,
     548,  -316,  -316,   221,   125,   165,   168,   175,   179,   189,
     191,   193,   163,   194,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,   630,   192,   204,   237,     3,
     759,   212,   505,   217,   219,   656,   249,   425,   251,   262,
    -316,   676,   240,   215,   598,   -51,   216,   222,   -51,   -38,
    -316,  -316,   407,   274,  -316,   598,   279,   305,   308,   309,
     310,   319,  -316,  -316,  -316,  -316,  -316,  -316,   891,   294,
     782,  -316,  -316,   304,  -316,   296,   299,   315,  -316,  -316,
     311,   606,    78,   548,   805,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,    66,   274,
     288,   -38,   295,   352,   -51,   306,   -38,   -38,   -38,   -38,
     -38,   -38,   331,   696,   364,   447,   369,   372,   377,   891,
     379,   356,   351,   341,  -316,   370,   107,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
     389,  -316,   200,  -316,    99,   -51,   337,   354,   -51,   200,
    -316,   209,   375,   356,   348,   382,   400,   401,   393,  -316,
    -316,  -316,   598,  -316,  -316,   371,   229,   229,   373,   828,
     347,  -316,   269,   336,   368,   356,   200,  -316,   253,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,   716,  -316,   200,
    -316,   256,    99,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,  -316,  -316,  -316,  -140,   433,   406,   297,   300,
     201,  -316,   169,    -6,   -61,   422,  -316,   -15,  -316,   398,
    -316,  -160,  -158,  -214,  -282,  -315,   112,  -316,   133,   139,
    -316,   141,  -316,  -212,   206,   361,   138,  -316,   187,  -316,
     -33,  -149,   -28,  -146,  -143
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -181
static const yytype_int16 yytable[] =
{
      18,    25,    55,   187,   116,   188,   247,    57,   333,   313,
      24,    67,    72,    73,   152,   163,    68,   225,    74,   241,
     201,   206,   242,   203,   208,     8,   204,   209,   109,    32,
     362,    26,   248,   110,    33,   249,    67,    73,    86,   153,
      88,   313,   226,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    35,   130,   131,   132,   133,   134,   135,
     136,    36,   295,   313,  -180,   106,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    74,    37,
     289,    38,   252,   171,    41,    10,    11,    42,    12,    13,
      14,   116,   187,   172,   188,    61,   116,  -180,    52,  -180,
     107,    62,    69,   325,   284,   290,   328,   286,    63,    68,
     287,    45,   158,    64,    10,    11,    70,    12,    13,    14,
      29,    30,   159,    65,   173,   174,   175,   176,   355,   355,
     177,   178,    33,   161,    75,   179,   200,   205,    22,   150,
     211,   202,   207,   180,   181,   102,   103,   112,    51,   322,
     323,   182,   187,   119,   188,   160,   319,   185,   106,   187,
     151,   188,   161,   154,    10,    11,    88,    12,    13,    14,
     155,   157,   152,   181,   168,     1,     2,     3,   169,   170,
     162,   240,   353,   353,   354,   354,   187,     4,   188,   196,
     197,    52,   254,   107,   100,   101,   102,   103,   212,   187,
     346,   188,   113,   213,   359,   171,   214,    10,    11,   106,
      12,    13,    14,   215,   137,   172,    20,   216,    10,    11,
     283,    12,    13,    14,    69,   285,    21,   217,   106,   218,
     -43,   219,   222,    45,   210,   220,    10,    11,    70,    12,
      13,    14,    52,   223,   107,    69,   185,   174,   175,   176,
     224,   228,   177,   178,    45,   161,   230,   179,   231,    70,
      22,    52,   233,   107,   235,   180,   181,   329,   330,    47,
      51,    22,   331,   182,   349,   236,    10,    11,   238,    12,
      13,    14,    10,    11,   350,    12,    13,    14,   239,   244,
     253,    51,   255,    69,    71,   246,     1,     2,     9,   339,
      10,    11,    45,    12,    13,    14,   185,    70,    15,   357,
     357,   363,   364,   185,   367,   368,   365,   175,   256,   369,
     113,   257,   258,   259,   161,   316,   179,   352,   352,    22,
     341,   341,   260,   269,   271,   272,   351,   351,   273,    51,
     185,   349,   182,    10,    11,   274,    12,    13,    14,   291,
     275,   350,   158,   185,    10,    11,   293,    12,    13,    14,
      69,   158,   159,    10,    11,   294,    12,    13,    14,    45,
     296,   159,   303,   158,    70,    10,    11,   305,    12,    13,
      14,   315,   307,   159,   175,   308,   100,   101,   102,   103,
     309,   161,   311,   179,   104,   160,    22,   316,   358,   177,
     318,   106,   161,   289,   160,   176,    51,   326,   327,   182,
     334,   161,   158,   332,    10,    11,   160,    12,    13,    14,
     162,   335,   159,   161,    84,    85,    86,    87,    88,   162,
     336,   337,   338,   180,    52,   340,   107,   344,   234,    17,
      43,   162,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   156,   282,   167,   160,   104,   105,   310,    60,
     306,   111,   161,   106,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   370,   356,   343,   292,   104,   105,
     162,   347,   360,   320,     0,   106,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    52,     0,   107,     0,
     104,   105,     0,     0,     0,     0,     0,   106,   118,    82,
      83,    84,    85,    86,    87,    88,     0,     0,    52,     0,
     107,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,   104,   105,     0,     0,
      52,     0,   107,   106,   229,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   100,   101,   102,   103,   104,
     105,     0,     0,   104,   105,    44,   106,     0,     0,     0,
     106,     0,    44,     0,    45,     0,    52,     0,   107,    46,
     198,    45,     0,    44,     0,     0,    46,     0,     0,    47,
       0,     0,    45,     0,     0,     0,    47,    46,     0,    52,
       0,   107,     0,    52,     0,   107,     0,    47,    48,    49,
      50,    51,    52,   199,    54,    48,    49,    50,    51,    52,
      53,    54,    69,   276,   277,   278,   279,   280,   281,    51,
      52,    45,    66,     0,     0,     0,    70,   297,   298,   299,
     300,   301,   302,   221,     0,     0,    47,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,     0,    91,    92,    93,     0,    51,   232,
       0,    71,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,   237,
      91,    92,    93,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,   304,
      91,    92,    93,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,   366,
      91,    92,    93,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
      91,    92,    93,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
      91,    92,    93,     0,     0,   117,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,    91,    92,    93,     0,     0,   227,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,     0,    91,    92,    93,     0,
       0,   270,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,     0,    91,
      92,    93,     0,     0,   288,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,    91,    92,    93,     0,     0,   345,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,    91,    92,    93,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,     0,    91,
      92,    93,    82,    83,    84,    85,    86,    87,    88,     0,
      89,     0,     0,    91,    92,    93,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,    91,    92,    93,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,    91,     0,    93,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,    93,   261,   262,
     263,   264,   265,   266,   267
};

static const yytype_int16 yycheck[] =
{
       6,    16,    35,   163,    65,   163,   218,    35,   323,   291,
      16,    44,    45,    46,    14,   155,    44,    14,    46,    70,
     169,   170,    73,   169,   170,     0,   169,   170,    61,    37,
     345,    73,    70,    61,    42,    73,    69,    70,    27,    39,
      29,   323,    39,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    16,    87,    88,    89,    90,    91,    92,
      93,    13,   274,   345,    38,    38,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    14,
      14,    73,   222,     5,    38,     7,     8,    73,    10,    11,
      12,   152,   252,    15,   252,    16,   157,    71,    71,    73,
      73,    13,    24,   315,   253,    39,   318,   253,    14,   137,
     253,    33,     5,    39,     7,     8,    38,    10,    11,    12,
       7,     8,    15,    38,    46,    47,    48,    49,   342,   343,
      52,    53,    42,    55,    38,    57,   169,   170,    60,    44,
     173,   169,   170,    65,    66,    25,    26,    43,    70,    50,
      51,    73,   312,    73,   312,    48,   296,   163,    38,   319,
      73,   319,    55,    39,     7,     8,    29,    10,    11,    12,
      40,    43,    14,    66,    38,     3,     4,     5,    38,    16,
      73,   214,   342,   343,   342,   343,   346,    15,   346,    44,
      73,    71,   225,    73,    23,    24,    25,    26,    73,   359,
     340,   359,    45,    38,   344,     5,    38,     7,     8,    38,
      10,    11,    12,    38,    24,    15,     5,    38,     7,     8,
     253,    10,    11,    12,    24,   253,    15,    38,    38,    38,
      73,    38,    40,    33,    13,    41,     7,     8,    38,    10,
      11,    12,    71,    39,    73,    24,   252,    47,    48,    49,
      13,    39,    52,    53,    33,    55,    39,    57,    39,    38,
      60,    71,    13,    73,    13,    65,    66,    58,    59,    48,
      70,    60,    63,    73,     5,    13,     7,     8,    38,    10,
      11,    12,     7,     8,    15,    10,    11,    12,    73,    73,
      16,    70,    13,    24,    73,    73,     3,     4,     5,   332,
       7,     8,    33,    10,    11,    12,   312,    38,    15,   342,
     343,    58,    59,   319,    58,    59,    63,    48,    13,    63,
      45,    13,    13,    13,    55,    56,    57,   342,   343,    60,
     336,   337,    13,    39,    30,    39,   342,   343,    39,    70,
     346,     5,    73,     7,     8,    30,    10,    11,    12,    61,
      39,    15,     5,   359,     7,     8,    61,    10,    11,    12,
      24,     5,    15,     7,     8,    13,    10,    11,    12,    33,
      64,    15,    41,     5,    38,     7,     8,    13,    10,    11,
      12,    30,    13,    15,    48,    13,    23,    24,    25,    26,
      13,    55,    13,    57,    31,    48,    60,    56,    62,    52,
      30,    38,    55,    14,    48,    49,    70,    70,    54,    73,
      62,    55,     5,    38,     7,     8,    48,    10,    11,    12,
      73,    39,    15,    55,    25,    26,    27,    28,    29,    73,
      30,    30,    39,    65,    71,    64,    73,    64,    13,     6,
      34,    73,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   152,   252,   157,    48,    31,    32,   289,    37,
      13,    63,    55,    38,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   362,   342,   337,   271,    31,    32,
      73,   340,   344,   296,    -1,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    71,    -1,    73,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    71,    -1,
      73,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      71,    -1,    73,    38,    39,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    23,    24,    25,    26,    31,
      32,    -1,    -1,    31,    32,    24,    38,    -1,    -1,    -1,
      38,    -1,    24,    -1,    33,    -1,    71,    -1,    73,    38,
      39,    33,    -1,    24,    -1,    -1,    38,    -1,    -1,    48,
      -1,    -1,    33,    -1,    -1,    -1,    48,    38,    -1,    71,
      -1,    73,    -1,    71,    -1,    73,    -1,    48,    67,    68,
      69,    70,    71,    72,    73,    67,    68,    69,    70,    71,
      72,    73,    24,    17,    18,    19,    20,    21,    22,    70,
      71,    33,    73,    -1,    -1,    -1,    38,   276,   277,   278,
     279,   280,   281,    13,    -1,    -1,    48,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    70,    13,
      -1,    73,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    13,
      34,    35,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    13,
      34,    35,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    13,
      34,    35,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    39,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    39,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    39,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    39,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    -1,    34,    35,    36,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    36,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    67,    68,
      69,    70,    71,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    76,    77,    81,     0,     5,
       7,     8,    10,    11,    12,    15,    78,    81,    88,    89,
       5,    15,    60,    82,    88,    92,    73,    90,    91,     7,
       8,    93,    37,    42,    79,    16,    13,    14,    73,    94,
      95,    38,    73,    82,    24,    33,    38,    48,    67,    68,
      69,    70,    71,    72,    73,   115,   116,   117,   118,   119,
      90,    16,    13,    14,    39,    38,    73,   115,   117,    24,
      38,    73,   115,   115,   117,    38,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    31,
      32,    34,    35,    36,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    31,    32,    38,    73,   117,   115,
     117,    94,    43,    45,    83,    84,    89,    39,    39,    73,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,    24,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
      44,    73,    14,    39,    39,    40,    84,    43,     5,    15,
      48,    55,    73,    80,    88,    96,    97,    83,    38,    38,
      16,     5,    15,    46,    47,    48,    49,    52,    53,    57,
      65,    66,    73,    85,    86,    88,    92,    96,    97,    98,
      99,   102,   106,   111,   113,   115,    44,    73,    39,    72,
     115,   116,   117,   118,   119,   115,   116,   117,   118,   119,
      13,   115,    73,    38,    38,    38,    38,    38,    38,    38,
      41,    13,    40,    39,    13,    14,    39,    39,    39,    39,
      39,    39,    13,    13,    13,    13,    13,    13,    38,    73,
     115,    70,    73,   108,    73,   105,    73,   108,    70,    73,
     109,   110,    80,    16,   115,    13,    13,    13,    13,    13,
      13,    67,    68,    69,    70,    71,    72,    73,    87,    39,
      39,    30,    39,    39,    30,    39,    17,    18,    19,    20,
      21,    22,    85,   115,   116,   117,   118,   119,    39,    14,
      39,    61,   109,    61,    13,   108,    64,   110,   110,   110,
     110,   110,   110,    41,    13,    13,    13,    13,    13,    13,
      87,    13,    80,    99,   100,    30,    56,   103,    30,    80,
     113,   114,    50,    51,   101,   108,    70,    54,   108,    58,
      59,    63,    38,   100,    62,    39,    30,    30,    39,   115,
      64,    88,   104,   104,    64,    39,    80,   106,   107,     5,
      15,    88,    92,    96,    97,    98,   103,   115,    62,    80,
     111,   112,   100,    58,    59,    63,    13,    58,    59,    63,
     101
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 291 "com33.y"
    {cout<<"\n\n------------------Compiled Successsfully-------------------\n\n"<<endl;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 316 "com33.y"
    {cout<<" Core Function complete at line "<<yylineno<<endl;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 348 "com33.y"
    {cout<<"line "<<yylineno<<"  : System Library"<<endl;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 349 "com33.y"
    {cout<<"line "<<yylineno<<"  : User Header"<<endl;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 358 "com33.y"
    {


		                                                                                auto paramTempIter = functionMap.find((yyvsp[(3) - (13)].str));
                                                                                        if (paramTempIter != functionMap.end()) {
																							cout<<"Error : Function Already exists . line "<<yylineno<<endl;
                                         
                                                                                           } else {
																							 cout<<" Function declaration complete at line "<<yylineno<<endl;
		                                                                                          functionMap[(yyvsp[(3) - (13)].str)]=p;
																								
																								  cout<< "no_arg : "<<functionMap[(yyvsp[(3) - (13)].str)]<<endl;
                                 
                                                                                               }
			                                                                                        p=0;
																								  function_parameter_temp.clear();;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 379 "com33.y"
    {cout<<"no parameter"<<endl;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 380 "com33.y"
    {p++; function_parameter_temp[(yyvsp[(2) - (2)].str)]=0;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 390 "com33.y"
    {string functionName = (yyvsp[(2) - (6)].str);
                                                                                        if (functionMap.find(functionName) != functionMap.end()) {
                                                                                         int result = functionMap[functionName];
    
                                                                                           if(match_arg != result)
																						   {
																							 cout << "\nERROR : Function has " << result << " parameters. It does not match with "<<match_arg<<" number . line : " <<yylineno<< endl;
																						   }
																						   else 
																						   {
																							printf("\n Line - %d : Function called with %d parameters.\n",yylineno,match_arg);
																						   }
                                                                                               } else {
                                                                                          cout << "Error : Function " << functionName << " not found. line "<<yylineno << endl;
                                                                                         }
																						 match_arg=0;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 411 "com33.y"
    {match_arg++;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 412 "com33.y"
    {match_arg++;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 413 "com33.y"
    {match_arg++;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 414 "com33.y"
    {match_arg++;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 415 "com33.y"
    {match_arg++;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 416 "com33.y"
    {match_arg++;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 417 "com33.y"
    {match_arg++;if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Function %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));

									
											
		                       
	                        };}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 440 "com33.y"
    {cout<<"line "<<yylineno<<"  : Variable Declared\n"<<endl;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 443 "com33.y"
    {cout<<"\nline "<<yylineno<<" : Datatype : Integer "; currentDatatype=1;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 444 "com33.y"
    {cout<<"\nline "<<yylineno<<"  : Datatype : Float/Fraction "; currentDatatype=2;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 445 "com33.y"
    {cout<<"\nline "<<yylineno<<"  : Datatype : character/symbol "; currentDatatype=3;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 446 "com33.y"
    {cout<<"\nline "<<yylineno<<" : Datatype : string "; currentDatatype=4;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 447 "com33.y"
    {cout<<"\nline "<<yylineno<<"  : Datatype : Boolean/Binary "; currentDatatype=5;;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 453 "com33.y"
    {cout<<",Variable "<<(yyvsp[(1) - (1)].str)<<endl;

                      bool  x=0;
					if (currentDatatype==1)
					{
                               x = SetValue((yyvsp[(1) - (1)].str),1);
					}
					else if (currentDatatype==2)
					{
                               x = SetValue((yyvsp[(1) - (1)].str),2);
					}
					else if (currentDatatype==3)
					{
                               x = SetValue((yyvsp[(1) - (1)].str),3);
					}
					else if (currentDatatype==4)
					{
                             x = SetValue((yyvsp[(1) - (1)].str),4);
					}
					else if(currentDatatype==5)
					{
                               x = SetValue((yyvsp[(1) - (1)].str),5);
					}

                      
               
				 if(!x) {
						  printf("Compilation Error: Line no: %d   Variable %s is already is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
						 
						};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 485 "com33.y"
    {    if (currentDatatype !=1)

	                                      {
											cout << "\nCompilation Error : attempt to assign a integer value to a non integer variable line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nline : "<<yylineno<<" Variable : "<<(yyvsp[(1) - (3)].str)<<" "<<"initialized with "<<(yyvsp[(3) - (3)].integer)<<endl;
										bool x = intSetValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));
										if(!x) {
											cout << "\nCompilation Error : Variable "<<(yyvsp[(1) - (3)].str)<<"is already declared"<<yylineno<<endl;
											
											}

										  }
		
		                             
                             ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 504 "com33.y"
    {    if (currentDatatype !=2 )

	                                      {
											cout << "\nCompilation Error : attempt to assign a float value to a non float variable line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nline : "<<yylineno<<" Variable : "<<(yyvsp[(1) - (3)].str)<<" "<<"initialized with "<<(yyvsp[(3) - (3)].Float)<<endl;
									    float f = (yyvsp[(3) - (3)].Float)*1.0;
										bool x = floatSetValue((yyvsp[(1) - (3)].str),f);
										if(!x) {
												cout << "\nCompilation Error : Variable "<<(yyvsp[(1) - (3)].str)<<"is already declared"<<yylineno<<endl;
											
											}
										  }
		
		                             
                             ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 523 "com33.y"
    {    if (currentDatatype !=3)
	                                      {
											cout << "\nCompilation Error : attempt tp assign a symbol value to a non character variable line "<<yylineno<<endl;
										  }
		                                else
										{
                                                 cout<<"\nline : "<<yylineno<<" Variable : "<<(yyvsp[(1) - (3)].str)<<" "<<"initialized with "<<(yyvsp[(3) - (3)].c)<<endl;
										bool x = charSetValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].c));
										if(!x) {
											cout << "\nCompilation Error : Variable "<<(yyvsp[(1) - (3)].str)<<"is already declared"<<yylineno<<endl;
											
											}
										}

		                            
                             ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 539 "com33.y"
    {   
			                                    if (currentDatatype != 4)
	                                      {
											
											cout << "\nCompilation Error : attempt to assign a string value to a non string variable line "<<yylineno<<endl;
										  }
										  else
										  {
											
		                             cout<<"\nline : "<<yylineno<<" Variable : "<<(yyvsp[(1) - (3)].str)<<" "<<"initialized with "<<(yyvsp[(3) - (3)].str)<<endl;
										bool x = strSetValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));

										if(!x ) {
												cout << "\nCompilation Error : Variable "<<(yyvsp[(1) - (3)].str)<<"is already declared"<<yylineno<<endl;
											
											}

										  }
		                                
                             ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 559 "com33.y"
    {    if (currentDatatype !=5)
	                                      {
											cout << "\nCompilation Error : attempt to assign a bool value to a non boolean variable line "<<yylineno<<endl;
										  }
										  else
										  {
                                                  cout<<"\nline : "<<yylineno<<" Variable : "<<(yyvsp[(1) - (3)].str)<<" "<<"initialized with "<<(yyvsp[(3) - (3)].str)<<endl;
										bool x = boolSetValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));
										if(!x) {
											cout << "\nCompilation Error : Variable "<<(yyvsp[(1) - (3)].str)<<"is already declared"<<yylineno<<endl;
											
											}





										  }
		
		                            
                             ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 590 "com33.y"
    {currentDatatype=10;;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 591 "com33.y"
    {currentDatatype=11;;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 597 "com33.y"
    {    if (currentDatatype !=10)

	                                      {
											cout << "\nError : attempt tp assign a integer value to a non integer constant line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nIdentifier : "<<(yyvsp[(1) - (3)].str)<<" "<<"value: "<<(yyvsp[(3) - (3)].integer)<<" Line : "<<yylineno<<endl;
										//bool x = intSetValue($1,$3);
										if(!is_declared((yyvsp[(1) - (3)].str)))
										{variableMap[(yyvsp[(1) - (3)].str)]=10;
										intvariableMap[(yyvsp[(1) - (3)].str)]=(yyvsp[(3) - (3)].integer) ;
										cout<<"Line : "<<yylineno<<"Constant declared: "<<endl; }
										else {
											printf("Compilation Error:Line no: %d   Constant is already declared\n",yylineno,(yyvsp[(1) - (3)].str));
											
											}

										  }
		
		                             
                             ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 619 "com33.y"
    {    if (currentDatatype !=11)

	                                      {
											cout << "\nError : attempt to assign a float value to a non float constant line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nIdentifier : "<<(yyvsp[(1) - (3)].str)<<" "<<"value: "<<(yyvsp[(3) - (3)].Float)<<" Line : "<<yylineno<<endl;
										//bool x = intSetValue($1,$3);
										if(!is_declared((yyvsp[(1) - (3)].str)))
										{variableMap[(yyvsp[(1) - (3)].str)]=11;
										floatvariableMap[(yyvsp[(1) - (3)].str)]=(yyvsp[(3) - (3)].Float) ;
										cout<<"Constant declared"<<endl; }
										else {
											printf("Compilation Error:Line no: %d   Constant is already declared\n",yylineno,(yyvsp[(1) - (3)].str));
											
											}

										  }
		
		                             
                             ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 661 "com33.y"
    {if(!is_declared((yyvsp[(1) - (4)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (4)].str));
											
		                       
	                        }
							else if (GetValue((yyvsp[(1) - (4)].str))==1 )
							{
								
								intvalueUpdate((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer));
								cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(3) - (4)].integer)<<" assigned to "<<(yyvsp[(1) - (4)].str)<<endl;
							}
							  else{
									
									printf("Compilation Error:\nLine no: %d   Variable %s is not of integer type or is contant\n",yylineno,(yyvsp[(1) - (4)].str));
							
								  }
							;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 678 "com33.y"
    {if(!is_declared((yyvsp[(1) - (4)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (4)].str));
											
		                       
	                        }
							else if (GetValue((yyvsp[(1) - (4)].str))!=4)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is not of string type\n",yylineno,(yyvsp[(1) - (4)].str));
							}
							  else{
									strvalueUpdate((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));
									cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(3) - (4)].str)<<" assigned to "<<(yyvsp[(1) - (4)].str)<<endl;
							
								  }
							;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 693 "com33.y"
    {if(!is_declared((yyvsp[(1) - (4)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (4)].str));
											
		                       
	                        }
							else if (GetValue((yyvsp[(1) - (4)].str))==2 )
							{
								
								floatvalueUpdate((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].Float));
								cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(3) - (4)].Float)<<" assigned to "<<(yyvsp[(1) - (4)].str)<<endl;
							}
							  else{
									
							               printf("Compilation Error:\nLine no: %d   Variable %s is not of float type or is constant\n",yylineno,(yyvsp[(1) - (4)].str));
								  }
							;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 709 "com33.y"
    {if(!is_declared((yyvsp[(1) - (4)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (4)].str));
											
		                       
	                        }
							else if (GetValue((yyvsp[(1) - (4)].str))!=3)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is not of char type\n",yylineno,(yyvsp[(1) - (4)].str));
							}
							  else{
									charvalueUpdate((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].c));
									cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(3) - (4)].c)<<" assigned to "<<(yyvsp[(1) - (4)].str)<<endl;
							
								  }
							;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 725 "com33.y"
    {if(!is_declared((yyvsp[(1) - (4)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (4)].str));
											
		                       
	                        }
							else if (GetValue((yyvsp[(1) - (4)].str))!=5)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is boolean of char type\n",yylineno,(yyvsp[(1) - (4)].str));
							}
							  else{
									boolvalueUpdate((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));
									cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(3) - (4)].str)<<" assigned to "<<(yyvsp[(1) - (4)].str)<<endl;
							
								  }
							;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 740 "com33.y"
    {
		                                                              auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (7)].str));
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[(yyvsp[(3) - (7)].str)]=(yyvsp[(6) - (7)].integer);
																							cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(6) - (7)].integer)<<" assigned to arg "<<(yyvsp[(3) - (7)].str)<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }
	                                                                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 751 "com33.y"
    {
		                                                              auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (7)].str));
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[(yyvsp[(3) - (7)].str)]=(int)(yyvsp[(6) - (7)].Float);
																							cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(6) - (7)].Float)<<" assigned to arg "<<(yyvsp[(3) - (7)].str)<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 761 "com33.y"
    {
		                                                              auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (7)].str));
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[(yyvsp[(3) - (7)].str)]=(int)(yyvsp[(6) - (7)].c);
																							cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(6) - (7)].c)<<" assigned to arg "<<(yyvsp[(3) - (7)].str)<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }																						   

	 ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 774 "com33.y"
    {
		                                                              auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (7)].str));
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							int v= (yyvsp[(6) - (7)].str)[0];
																							function_parameter_temp[(yyvsp[(3) - (7)].str)]=v;
																							cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(6) - (7)].str)<<" assigned to arg "<<(yyvsp[(3) - (7)].str)<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 785 "com33.y"
    {
		                                                              auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (7)].str));
                                                                                        if (paramTempIter != function_parameter_temp.end()) { int v;

																							if((yyvsp[(6) - (7)].str)=="true")
																							{ 
																								 v= 0;

																							}
																							else
																							v= 1;
																							function_parameter_temp[(yyvsp[(3) - (7)].str)]=v;
																							cout<<"\nline : "<<yylineno<<" value "<<(yyvsp[(6) - (7)].str)<<" assigned to arg "<<(yyvsp[(3) - (7)].str)<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 821 "com33.y"
    {      cout<<"line "<<yylineno<<" print output "<<endl;
																	int v = (yyvsp[(3) - (5)].integer);
																	cout<<v<<endl;
																
															;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 826 "com33.y"
    {
		                                                            cout<<"line "<<yylineno<<" print output "<<endl;
																	float v = (yyvsp[(3) - (5)].Float);
																	cout<<v<<endl;
																
															;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 832 "com33.y"
    {          cout<<"line "<<yylineno<<" print output "<<endl;
																	char v = (yyvsp[(3) - (5)].c);
																	cout<<v<<endl;
																
															;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 837 "com33.y"
    {             cout<<"line "<<yylineno<<" print output "<<endl;
																	string v = (yyvsp[(3) - (5)].str);
																	cout<<v<<endl;
																
															;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 842 "com33.y"
    {          cout<<"line "<<yylineno<<" print output "<<endl;
																	string v = (yyvsp[(3) - (5)].str);
																	cout<<v<<endl;
																
															;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 847 "com33.y"
    {	    cout<<"line "<<yylineno<<" print output "<<endl;
	                                                                              string str=(yyvsp[(3) - (5)].str);
																int i;
																for(i = 1;  i < str.size()-1; i++) 
																	{cout<<str[i];}
																	cout<<endl;
																	
															;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 856 "com33.y"
    {  cout<<"line "<<yylineno<<" print output "<<endl;
		                                                                   cout<<endl;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 860 "com33.y"
    {	   cout<<"line "<<yylineno<<" print output "<<endl;
																 string str=(yyvsp[(3) - (7)].str);
																int i;
																for(i = 1;  i < str.size()-1; i++) 
																	{cout<<str[i];}

																	int v = (yyvsp[(5) - (7)].integer);
																	cout<<v<<endl;
																	
															;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 873 "com33.y"
    { 
																    {if(!is_declared((yyvsp[(3) - (5)].str))) {
		                                                           printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(3) - (5)].str));
											
	                                                                }
							                                    else{
																	int x=variableMap[(yyvsp[(3) - (5)].str)];
																	 cout<<"line "<<yylineno<<" take input"<<endl;
																	 switch (x) {
        case 1: {
            int n;
            std::cin >> n;
            intvalueUpdate((yyvsp[(3) - (5)].str), n);
            break;
        }
        case 2: {
            float n2;
            std::cin >> n2;
            floatvalueUpdate((yyvsp[(3) - (5)].str), n2);
            break;
        }
        case 3: {
            char n3;
            std::cin >> n3;
            charvalueUpdate((yyvsp[(3) - (5)].str), n3);
            break;
        }
        case 4: {
            std::string n4;
            std::cin >> n4;
            strvalueUpdate((yyvsp[(3) - (5)].str), n4);
            break;
        }
        default:
            std::cout << "Unable to take input" << std::endl;
    }
																	 
								                                      }
							}

;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 929 "com33.y"
    {cout<<"if statement completed of "<<yylineno<<endl;
                                                                    cout<<"about if block of "<<yylineno<<endl;
                                                                     if((yyvsp[(3) - (8)].integer))
																	 {cout<<" if block will be executed. "<<endl;}
																	 else if (trackif==-1)
																	 {cout<<" else block will be executed. "<<endl;}
																	 else
																	 {cout<<" else if block "<< which_if_exe - trackif + 1<<"will be executed"<<endl;}
																	 
																	if(is_nested)
																	 {
																		cout<<"This is nested block"<<endl;
																	 } 
																	 if(is_else_if)
																	 {
																		cout<<"This is an else if ladder block"<<endl;
																	 } 

																	      trackif=-1;
	                                                                          is_nested=0;
	                                                                      is_else_if=0;
	                                                                   which_if_exe=0;
																	 ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 955 "com33.y"
    {cout<<"NESTED IF"<<yylineno<<endl;is_nested++;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 960 "com33.y"
    {trackif=-1;
	            is_nested=0;
	            is_else_if=0;
	             which_if_exe=0;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 964 "com33.y"
    {is_else_if++;
	                                                                    which_if_exe++;
	                                                                      if((yyvsp[(3) - (6)].integer))
																		  {

																			trackif=which_if_exe;
																		  
																		  };}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 972 "com33.y"
    {
	                                                                    which_if_exe++;
																		 trackif=-1;
	                                                                    is_nested=0;
	                                                                    is_else_if=0;
	                                                                    which_if_exe=0;
																		
	                                                                      
																		  ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 986 "com33.y"
    {cout<<"switch"<<endl; if(trekflag==0){cout<<"default block is executed"<<endl;}
                                                                              else {cout<<t<<" block is executed"<<endl;}
																			  cout<<"Switch Statement Completed, line "<<yylineno<<endl;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 991 "com33.y"
    { if(trek==(yyvsp[(2) - (5)].integer)){t=(yyvsp[(2) - (5)].integer);  trekflag=1;};}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 998 "com33.y"
    {cout<<"Statement"<<endl;;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 999 "com33.y"
    {cout<<"Statement"<<endl;;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1008 "com33.y"
    {if (is_declared((yyvsp[(1) - (1)].str)) && GetValue((yyvsp[(1) - (1)].str))==1){ (yyval.integer)=intGetValue((yyvsp[(1) - (1)].str)); trek=(yyval.integer); }
	          else {cout<<"not declared or not Integer!!!"<<endl;}
			;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1024 "com33.y"
    {cout<<"This is a for loop statement line: "<<yylineno<<endl;
                                                                                        cout<<"initial value: "<<(yyvsp[(3) - (11)].integer)<<" ,Condition : "<<(yyvsp[(5) - (11)].integer)<<"increment : "<<(yyvsp[(7) - (11)].integer)<<endl;;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1029 "com33.y"
    {cout<<"NESTED FOR LOOP"<<endl;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1031 "com33.y"
    {cout<<"break"<<endl;;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1032 "com33.y"
    {cout<<"continue"<<endl;;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1034 "com33.y"
    {if (is_declared((yyvsp[(1) - (1)].str)) && GetValue((yyvsp[(1) - (1)].str))==1){ (yyval.integer)=intGetValue((yyvsp[(1) - (1)].str));}
	         else {cout<<"not declared or not Integer!!!"<<endl;} ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1039 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)>(yyvsp[(3) - (3)].integer);;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1040 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)>=(yyvsp[(3) - (3)].integer);;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1041 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)<(yyvsp[(3) - (3)].integer);;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1042 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)<=(yyvsp[(3) - (3)].integer);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1043 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)==(yyvsp[(3) - (3)].integer);;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1044 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (3)].integer)!=(yyvsp[(3) - (3)].integer);;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1047 "com33.y"
    {if (is_declared((yyvsp[(1) - (1)].str)) && GetValue((yyvsp[(1) - (1)].str))==1){ (yyval.integer)=intGetValue((yyvsp[(1) - (1)].str));}
	           else {cout<<"not declared or not Integer!!!"<<endl;};}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1052 "com33.y"
    {cout<<yylineno<<" is a Range loop statement"<<endl;
                                                                                        cout<<"initial value: "<<(yyvsp[(3) - (11)].integer)<<" ,final value: "<<(yyvsp[(5) - (11)].integer)<<"increment : "<<(yyvsp[(7) - (11)].integer)<<endl;
																						trackrangeloop=1;
					                                                                      
                                                                                           int i=0;
																						   if((yyvsp[(3) - (11)].integer)<(yyvsp[(5) - (11)].integer) && (yyvsp[(7) - (11)].integer)>0)
																						   {  while ((yyvsp[(3) - (11)].integer)<(yyvsp[(5) - (11)].integer))
																						   {
																							   (yyvsp[(3) - (11)].integer)+=(yyvsp[(7) - (11)].integer);
																							   i++;
																						   }

																						   }
																						    else if((yyvsp[(3) - (11)].integer)>(yyvsp[(5) - (11)].integer) && (yyvsp[(7) - (11)].integer)<0)
																						   {  while ((yyvsp[(3) - (11)].integer)>(yyvsp[(5) - (11)].integer))
																						   {
																							   (yyvsp[(3) - (11)].integer)-=(yyvsp[(7) - (11)].integer);
																							   i++;
																						   }

																						   }
																						   else{
																							cout<<"invalid parameters"<<endl;
																						   }
																						  
																						   cout<<"Number of execution : "<<i<<endl;
																						;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1081 "com33.y"
    {cout<<yylineno<<" : NESTED Range LOOP"<<endl;
	                trackrangeloop++;
	 				;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1085 "com33.y"
    {cout<<"break"<<endl;;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1086 "com33.y"
    {cout<<"continue"<<endl;;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1089 "com33.y"
    {cout<<yylineno<<" is a while loop statement"<<endl;;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1092 "com33.y"
    {cout<<yylineno<<" : NESTED while LOOP"<<endl;  ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1094 "com33.y"
    {cout<<"break"<<endl;;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1095 "com33.y"
    {cout<<"continue"<<endl;;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1117 "com33.y"
    {(yyval.integer)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1118 "com33.y"
    {if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
											
		                       
	                        }
							  else if(GetValue((yyvsp[(1) - (1)].str))==1 || GetValue((yyvsp[(1) - (1)].str)) ==10 )
							  {
								
								
								 int a = intGetValue((yyvsp[(1) - (1)].str));
									(yyval.integer)=a;
							  }
							  else    
							  {
									 printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,(yyvsp[(1) - (1)].str));
								  }
							;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1135 "com33.y"
    { auto paramTempIter = function_parameter_temp.find((yyvsp[(3) - (4)].str));
                                         if (paramTempIter != function_parameter_temp.end()) {
											//function_parameter_temp[$3]=(int)$6;
											(yyval.integer)=function_parameter_temp[(yyvsp[(3) - (4)].str)];
                                         
                                           } else {
									  cout<<"failed to assign,out of scope "<<endl;
                                 
                                         }		

	                                  ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1146 "com33.y"
    { (yyval.integer) = -(yyvsp[(2) - (2)].integer);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1147 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) + (yyvsp[(3) - (3)].integer);;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1148 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) - (yyvsp[(3) - (3)].integer);;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1149 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) * (yyvsp[(3) - (3)].integer);;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1150 "com33.y"
    {if((yyvsp[(3) - (3)].integer)) {
 									(yyval.integer) = (yyvsp[(1) - (3)].integer) / (yyvsp[(3) - (3)].integer);
									}
				  		else {
									(yyval.integer) = 0;
									printf("\nRuntime Error:\nLine no: %d   division by zero\n",yylineno);
									
							} 
	                    ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1159 "com33.y"
    {if((yyvsp[(3) - (3)].integer))
													(yyval.integer) = (yyvsp[(1) - (3)].integer) % (yyvsp[(3) - (3)].integer);
												else
													(yyval.integer)=0;
												;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1164 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) && (yyvsp[(3) - (3)].integer);;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1165 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) || (yyvsp[(3) - (3)].integer);;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1166 "com33.y"
    { (yyval.integer) = ! (yyvsp[(2) - (2)].integer) ;;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1167 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) & (yyvsp[(3) - (3)].integer);;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1168 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) | (yyvsp[(3) - (3)].integer);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1169 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) ^ (yyvsp[(3) - (3)].integer);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1170 "com33.y"
    { int n=(yyvsp[(1) - (2)].integer);
							  int ans=1,i;
							  for(i=n;i>1;i--)
							   ans*=i;
							   printf("%d\n",ans);
							  (yyval.integer) = ans;
							;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1177 "com33.y"
    { int n1=(yyvsp[(1) - (3)].integer);
					            int n2=(yyvsp[(3) - (3)].integer);
				               int ans=1;
								while(n2)
							{
								ans*=n1;
								n2--;
							}
														
							(yyval.integer) = ans;
							;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1188 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) == (yyvsp[(3) - (3)].integer);;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1189 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) > (yyvsp[(3) - (3)].integer);;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1190 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) >= (yyvsp[(3) - (3)].integer);;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1191 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) != (yyvsp[(3) - (3)].integer);;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1192 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) < (yyvsp[(3) - (3)].integer);;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1193 "com33.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) <= (yyvsp[(3) - (3)].integer);;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1194 "com33.y"
    {((yyvsp[(2) - (3)].integer));;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1199 "com33.y"
    { (yyval.str)=(yyvsp[(1) - (1)].str); currentDatatype=2;;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1200 "com33.y"
    {if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
											
		                       
	                        }
							  else if(GetValue((yyvsp[(1) - (1)].str))!=4)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not string\n",yylineno,(yyvsp[(1) - (1)].str));
							  }
							   else   
							  {
									string a = strGetValue((yyvsp[(1) - (1)].str));
									(yyval.str)=&a[0];
								  }
							;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1218 "com33.y"
    {(yyval.Float)=(yyvsp[(1) - (1)].Float);;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1219 "com33.y"
    {if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
											
		                       
	                        }
							  else if(GetValue((yyvsp[(1) - (1)].str))==2 || GetValue((yyvsp[(1) - (1)].str))==11)
							  {
								 
								 float a = floatGetValue((yyvsp[(1) - (1)].str));
									(yyval.Float)=a;
							  }
							   else   
							  {
									printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,(yyvsp[(1) - (1)].str));
								  }
							;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1235 "com33.y"
    { (yyval.Float) = -(yyvsp[(2) - (2)].Float);;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1236 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) + (yyvsp[(3) - (3)].Float);;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1237 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) - (yyvsp[(3) - (3)].Float);;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1238 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) * (yyvsp[(3) - (3)].Float);;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1239 "com33.y"
    {if((yyvsp[(3) - (3)].Float)) {
 									(yyval.Float) = (yyvsp[(1) - (3)].Float) / (yyvsp[(3) - (3)].Float);
									}
				  		else {
									(yyval.Float) = 0;
									printf("\nRuntime Error:\nLine no: %d   division by zero\n",yylineno);
									
							} 
	                    ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1248 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) && (yyvsp[(3) - (3)].Float);;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1249 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) || (yyvsp[(3) - (3)].Float);;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1250 "com33.y"
    { (yyval.Float) = ! (yyvsp[(2) - (2)].Float) ;;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1251 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) == (yyvsp[(3) - (3)].Float);;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1252 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) > (yyvsp[(3) - (3)].Float);;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1253 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) >= (yyvsp[(3) - (3)].Float);;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1254 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) != (yyvsp[(3) - (3)].Float);;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1255 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) < (yyvsp[(3) - (3)].Float);;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1256 "com33.y"
    { (yyval.Float) = (yyvsp[(1) - (3)].Float) <= (yyvsp[(3) - (3)].Float);;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1257 "com33.y"
    {((yyvsp[(2) - (3)].Float));;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1264 "com33.y"
    {(yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1265 "com33.y"
    {if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
											
		                       
	                        }
							  else if(GetValue((yyvsp[(1) - (1)].str))!=3)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,(yyvsp[(1) - (1)].str));
							  }
							   else   
							  {
									float a = floatGetValue((yyvsp[(1) - (1)].str));
									(yyval.c)=a;
								  }
							;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1284 "com33.y"
    {if(!is_declared((yyvsp[(1) - (1)].str))) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,(yyvsp[(1) - (1)].str));
											
		                       
	                        }
							  else if(GetValue((yyvsp[(1) - (1)].str))!=5)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not boolean\n",yylineno,(yyvsp[(1) - (1)].str));
							  }
							  else    
							  {
									string a = boolGetValue((yyvsp[(1) - (1)].str));
									(yyval.str)=&a[0];
								  }
							;}
    break;



/* Line 1455 of yacc.c  */
#line 3554 "com33.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 1314 "com33.y"


/* CFG */





int yyerror(string s) /* called by yyparse on error */
{
	//printf("%s\n",s);
    cout<<s<<endl;
	return(0);
}




int main(void)
{
	FILE* file = fopen("input.c", "r");
    if (!file) {
        perror("Error opening input file");
        return 1;
    }



  FILE* outputFile = freopen("output.txt", "w", stdout);
    if (!outputFile) {
        perror("Error opening output file");
        fclose(file);
        return 1;
    }
	

    yyin = file;
    //yyparse();
    //fclose(file);
	//yyparse();
	//exit(0);



	int result = yyparse();
	 fclose(file);
	 fclose(outputFile);

    return result;
	
}



