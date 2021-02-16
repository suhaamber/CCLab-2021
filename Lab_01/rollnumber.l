

/* 2018 A7 PS 0057 U */

%{
    #include<stdio.h>
%}

year [2][0][0-9][0-9]
spec A([0-9]|A)
thesis [PT][S]
rollno [0][0-3][0-9][0-9]
campus [U]

%%

{year} {printf("Year of joining: %s\n", yytext);}
{spec} {printf("Specialization: %s\n", yytext);}
{thesis} {printf("PS/TS: %s\n", yytext);}
{rollno} {printf("Roll Number: %s\n", yytext);}
{campus} {printf("Campus: %s\n", yytext);}

%%

main(int argc, char **argv)
{
    yylex();
}
