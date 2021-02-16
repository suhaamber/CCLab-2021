/*program to count number of 6-letter words, lines and characters*/

%{
    #include<stdio.h>
    int words = 0, lines = 0, chars = 0;
%}

space " "
letter [a-zA-Z]
letters {space}{letter}{letter}{letter}{letter}{letter}{letter}{space}

%%

{letters} {words++; chars+=strlen(yytext); printf("%s\n", yytext); }
\n {lines++; chars++;}
. {chars++;}

%%

main(int argc, char **argv)
{
    yylex(); 
    printf("Words: %d\nLines: %d\nCharacters: %d\n", words, lines, chars);
}