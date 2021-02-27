

/* 2018 A7 PS 0057 U */

%{
    #include<stdio.h>
  
%}

year [2][0][0-9][0-9]
spec A([0-9]|A)
thesis [PT][S]
rollno [0][0-9][0-9][0-9]
campus [U]


%%

{year}{spec}{thesis}{rollno}{campus}    { printf("Year of joining: %.4s\n", yytext);
          printf("Specialization: %.2s\n", yytext+4);
          printf("PS/TS: %.2s\n", yytext+6);
          printf("Roll Number: %.4s\n", yytext+8);
          printf("Campus: %.1s\n", yytext+12);
        }
.[\n" "]       {
                printf("%s is an invalid ID\n", yytext);
            
        }

%%

main(int argc, char **argv)
{
    yylex();
    
}
