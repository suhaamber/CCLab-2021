/*program to count number of words, lines and characters*/

%{
    #include<stdio.h>
    int words = 0, lines = 0, chars = 0;
%}

%%

[a-zA-Z]+ {words++; chars+=strlen(yytext); }
\n {lines++; chars++;}
. {chars++;}

%%

main(int argc, char **argv)
{
    yylex(); 
    printf("Words: %d\nLines: %d\nCharacters: %d\n", words, lines, chars);
}