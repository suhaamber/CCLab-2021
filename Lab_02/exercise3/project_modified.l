%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
%}

%%
"#include<stdio.h>" {return HEADER;}
"int" {return TYPE;}
"float" {return TYPE;}
"double" {return TYPE;}
"char"	{return TYPE;}
"main"	{return MAIN;}
"("	{return LB;}
")"	{return RB;}
"{"	{return LCB;}
"}"	{return RCB;}
","	{return COMA;}
";"	{return SC;}
[\+\-\*\/] {return OP;}
"="	{return EQ;}
"if" {printf("invalid character sequence %s\n",yytext); exit(0);} 
"while" {printf("invalid character sequence %s\n",yytext); exit(0);} 
"do" {printf("invalid character sequence %s\n",yytext); exit(0);} 
"for" {printf("invalid character sequence %s\n",yytext); exit(0);} 
[a-zA-F][A-Fa-z0-9]*  {return VAR;}
[\n\t ]+  {/*new line or space*/}
. {printf("invalid character sequence %s\n",yytext); exit(0);}
%%


int yywrap(void)
{
    return 1;
}
