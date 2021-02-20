

/* 2018 A7 PS 0057 U */

%{
    #include<stdio.h>
    int flag = 1;
%}

year [2][0][0-9][0-9]
spec A([0-9]|A)
thesis [PT][S]
rollno [0][0-3][0-9][0-9]
campus [U]
id {year}{spec}{thesis}{rollno}{campus}

%%

{id}    { printf("Year of joining: %.4s\n", yytext);
          printf("Specialization: %.2s\n", yytext+4);
          printf("PS/TS: %.2s\n", yytext+6);
          printf("Roll Number: %.4s\n", yytext+8);
          printf("Campus: %.1s\n", yytext+12);
        }
.       {if(flag==1)
            {
                printf("invalid ID");
                flag =0; 
            }
        }

%%

main(int argc, char **argv)
{
    yylex();
    if(flag==0)
    {
        printf("Invalid ID");
    }
}
