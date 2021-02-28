%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
%}

%%
"#include<stdio.h>" {return HEADER;}
"int"|"float"|"double"|"char" {return TYPE;}
"main"	{return MAIN;}
"("	{return LB;}
")"	{return RB;}
"{"	{return LCB;}
"}"	{return RCB;}
","	{return COMA;}
";"	{return SC;}
[\+\-\*\/] {return OP;}
"="	{return EQ;}
"if"|"while"|"do"|"for"/[ \n\t(){},;]  {printf("invalid character sequence %s\n",yytext); exit(0);} 
[A-Fa-z0-9]* {return VAR;}
[\n\t ]+  {/*new line or space*/}
. {printf("invalid character sequence %s\n",yytext); exit(0);}
%%


int yywrap(void)
{
    return 1;
}