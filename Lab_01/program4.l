%{ 
    #include<stdio.h>
    #include<stdlib.h>
    int line_number = 1;  
%} 
  
line .*\n     
  
%% 

{line} { printf("%10d %s", line_number++, yytext); }  
  
%% 
  
int yywrap(){}  
  
int main(int argc, char*argv[]) 
{  
  
    yylex();   
    return 0; 
}