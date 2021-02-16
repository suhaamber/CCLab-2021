%{
    int op = 0, i;
    float a, b; 
    int digi();
%}

dig [0-9]+|([0-9]*)"."([0-9]+)
add "+"
sub "-"
mul "*"
div "/"
pow "^"
ln \n

%%
{dig} {digi();}
{add} {op=1;}
{sub} {op=2;} 
{mul} {op=3;}
{div} {op=4;}
{pow} {op=5;}
{ln}  {printf("\nThe answer is: %f \n", a);}

%%

digi()
{
    if(op==0)
        a = atof(yytext);
    else
    {
        b = atof(yytext);
        switch(op)
        {
            case 1: a+=b; 
                break;
            case 2: a-=b; 
                break; 
            case 3: a*=b; 
                break; 
            case 4: a/=b; 
                break; 
            case 5: for(i=a; b>1; b--)
                        a*=i;
                break; 
        }
        op=0; 
    }
}

main(int argv, char *argc[])
{
    yylex(); 
}