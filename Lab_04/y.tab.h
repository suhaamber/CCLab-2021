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
    HEADER = 258,
    MAIN = 259,
    LB = 260,
    RB = 261,
    LCB = 262,
    RCB = 263,
    SC = 264,
    COMA = 265,
    VAR = 266,
    EQ = 267,
    PLUS = 268,
    MINUS = 269,
    MUL = 270,
    DIV = 271,
    MOD = 272,
    EXP = 273,
    UPLUS = 274,
    UMINUS = 275,
    IF = 276,
    ELSE = 277,
    EQCOMPARE = 278,
    NEQCOMPARE = 279,
    GTE = 280,
    LTE = 281,
    GT = 282,
    LT = 283,
    NOT = 284,
    AND = 285,
    OR = 286,
    QUESM = 287,
    COLON = 288,
    FOR = 289,
    WHILE = 290,
    DO = 291,
    NUMINT = 292,
    INT = 293,
    CHAR = 294,
    FLOAT = 295,
    DOUBLE = 296
  };
#endif
/* Tokens.  */
#define HEADER 258
#define MAIN 259
#define LB 260
#define RB 261
#define LCB 262
#define RCB 263
#define SC 264
#define COMA 265
#define VAR 266
#define EQ 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define MOD 272
#define EXP 273
#define UPLUS 274
#define UMINUS 275
#define IF 276
#define ELSE 277
#define EQCOMPARE 278
#define NEQCOMPARE 279
#define GTE 280
#define LTE 281
#define GT 282
#define LT 283
#define NOT 284
#define AND 285
#define OR 286
#define QUESM 287
#define COLON 288
#define FOR 289
#define WHILE 290
#define DO 291
#define NUMINT 292
#define INT 293
#define CHAR 294
#define FLOAT 295
#define DOUBLE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "project.y"

int data_type;
char var_name[30];

#line 144 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
