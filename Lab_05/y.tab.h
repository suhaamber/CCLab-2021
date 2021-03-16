/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    MAIN = 258,
    LB = 259,
    RB = 260,
    LCB = 261,
    RCB = 262,
    SC = 263,
    COMA = 264,
    VAR = 265,
    EQ = 266,
    PLUS = 267,
    MINUS = 268,
    MUL = 269,
    DIV = 270,
    MOD = 271,
    EXP = 272,
    UPLUS = 273,
    UMINUS = 274,
    IF = 275,
    ELSE = 276,
    EQCOMPARE = 277,
    NEQCOMPARE = 278,
    GTE = 279,
    LTE = 280,
    GT = 281,
    LT = 282,
    NOT = 283,
    AND = 284,
    OR = 285,
    QUESM = 286,
    COLON = 287,
    FOR = 288,
    WHILE = 289,
    DO = 290,
    NUMINT = 291,
    INCLUDE = 292,
    HASH = 293,
    DOTH = 294,
    DOUBLEQ = 295,
    INT = 296,
    CHAR = 297,
    FLOAT = 298,
    DOUBLE = 299
  };
#endif
/* Tokens.  */
#define MAIN 258
#define LB 259
#define RB 260
#define LCB 261
#define RCB 262
#define SC 263
#define COMA 264
#define VAR 265
#define EQ 266
#define PLUS 267
#define MINUS 268
#define MUL 269
#define DIV 270
#define MOD 271
#define EXP 272
#define UPLUS 273
#define UMINUS 274
#define IF 275
#define ELSE 276
#define EQCOMPARE 277
#define NEQCOMPARE 278
#define GTE 279
#define LTE 280
#define GT 281
#define LT 282
#define NOT 283
#define AND 284
#define OR 285
#define QUESM 286
#define COLON 287
#define FOR 288
#define WHILE 289
#define DO 290
#define NUMINT 291
#define INCLUDE 292
#define HASH 293
#define DOTH 294
#define DOUBLEQ 295
#define INT 296
#define CHAR 297
#define FLOAT 298
#define DOUBLE 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "project.y"

int data_type;
char var_name[30];

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
