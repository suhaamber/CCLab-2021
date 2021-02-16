%{
 #include<stdio.h>   
%}

digit [0-9]
letter [A-Za-z]
iden {letter}({letter}|{digit})*
%%
if  {printf("Keyword 'if'\n");}
while {printf("Keyword 'while'\n");}
{iden} {printf("identifier\n");}
%%

