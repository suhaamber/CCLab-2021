%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
	extern int var_count;

%}

%%
"#include<stdio.h>" {return HEADER;}
"int"	{yylval.data_type=0;return INT;}
"char" {yylval.data_type=1; return CHAR;}
"double" {yylval.data_type=2; return CHAR;}
"float" {yylval.data_type=3; return CHAR;}
"main" {return MAIN;}
"("	{return LB;}
")"	{return RB;}
"{"	{return LCB;}
"}"	{return RCB;}
","	{return COMA;}
";"	{return SC;}
"++" {return UPLUS;}
"--" {return UMINUS;}
"^" {return EXP;}
"?" {return QUESM;}
":" { return COLON; }
[+] {return PLUS;}
[-] {return MINUS;}
"%" {return MOD;}
[*] {return MUL;}
[/] {return DIV;}
"==" {return EQCOMPARE;}
"!=" {return NEQCOMPARE;}
"="	{return EQ;}
">=" {return GTE;}
"<=" {return LTE;}
">" {return GT;}
"<" {return LT;}
"!" {return NOT;}
"&&" {return AND;}
"||" {return OR;}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR; }
"while" {return WHILE;}
"do" {return DO; }
[a-z]+  {strcpy(yylval.var_name,yytext);return VAR;}
[1-9][0-9]* {return NUMINT; }
[0] {return NUMINT; }
[\n\t" "]+  {/*new line or space*/}
. {printf("invalid character sequence %s\n",yytext); exit(0);}
%%


int yywrap(void)
{
    return 1;
}
