
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 209 "com33.y"

    char* str;
	int integer;
	char c;
	float Float;



/* Line 1676 of yacc.c  */
#line 135 "com33.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


