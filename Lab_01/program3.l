/*check whether input is a power of 2 in binary or not*/

%{
    #include<stdio.h>
    int flag = 0;
%}

one "1"
zero "0"
powerof2 [{one}{zero}*]
%%
{powerof2}$ { printf("The given number is a power of two.\n");}
%%
main(int argc, char **argv)
{
    yylex();
    if(flag==0)
        printf("The given number is NOT a power of 2");
}