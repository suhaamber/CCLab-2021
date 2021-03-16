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
    LSB = 263,
    RSB = 264,
    SC = 265,
    COMA = 266,
    VAR = 267,
    EQ = 268,
    PLUS = 269,
    MINUS = 270,
    MUL = 271,
    DIV = 272,
    MOD = 273,
    EXP = 274,
    UPLUS = 275,
    UMINUS = 276,
    IF = 277,
    ELSE = 278,
    EQCOMPARE = 279,
    NEQCOMPARE = 280,
    GTE = 281,
    LTE = 282,
    GT = 283,
    LT = 284,
    NOT = 285,
    AND = 286,
    OR = 287,
    QUESM = 288,
    COLON = 289,
    FOR = 290,
    WHILE = 291,
    DO = 292,
    NUMINT = 293,
    INCLUDE = 294,
    HASH = 295,
    DOTH = 296,
    DOUBLEQ = 297,
    INT = 298,
    CHAR = 299,
    FLOAT = 300,
    DOUBLE = 301
  };
#endif
/* Tokens.  */
#define MAIN 258
#define LB 259
#define RB 260
#define LCB 261
#define RCB 262
#define LSB 263
#define RSB 264
#define SC 265
#define COMA 266
#define VAR 267
#define EQ 268
#define PLUS 269
#define MINUS 270
#define MUL 271
#define DIV 272
#define MOD 273
#define EXP 274
#define UPLUS 275
#define UMINUS 276
#define IF 277
#define ELSE 278
#define EQCOMPARE 279
#define NEQCOMPARE 280
#define GTE 281
#define LTE 282
#define GT 283
#define LT 284
#define NOT 285
#define AND 286
#define OR 287
#define QUESM 288
#define COLON 289
#define FOR 290
#define WHILE 291
#define DO 292
#define NUMINT 293
#define INCLUDE 294
#define HASH 295
#define DOTH 296
#define DOUBLEQ 297
#define INT 298
#define CHAR 299
#define FLOAT 300
#define DOUBLE 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "project.y"

int data_type;
char var_name[30];
int num_int; 

#line 155 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
