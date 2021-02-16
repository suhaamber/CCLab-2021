%{
    #include<stdio.h>
%}

%%

"+" {printf("Plus\n");}
"-" {printf("Minus\n");}
"*" {printf("Multiplication\n");}
"/" {printf("Division\n");}
"|" {printf("Absolute\n");}
[0-9]+ {printf("Number %s\n", yytext);}
\n {printf("Newline\n");}
[ \t] {printf("Blank\n");}
. {printf("Mystery character %s\n", yytext); }

%%

main(int argc, char **argv)
{
    yylex(); 
}
