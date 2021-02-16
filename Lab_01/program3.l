/*check whether input is a power of 2 in binary or not*/

%{
    #include<stdio.h>
    int flag = 0;
%}

powerof2 [1][0]*
not2 [1][01]*

%%
{powerof2}$ { printf("The given number is a power of two.\n");}
{not2} {printf("This number is not a power of two");}
%%
main(int argc, char **argv)
{
    yylex();
}