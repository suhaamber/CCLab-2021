%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int expn_type=-1;
	int temp;
	int check_mod = 0;
	struct symbol_table{char var_name[30]; int type;}var_list[20];
	int var_count=-1;
	extern int lookup_in_table(char var[30]);
	extern void insert_to_table(char var[30], int type);
%}

%union{
int data_type;
char var_name[30];
}
%token HEADER MAIN LB RB LCB RCB SC COMA VAR EQ PLUS MINUS MUL DIV MOD EXP UPLUS UMINUS IF ELSE
%token EQCOMPARE NEQCOMPARE GTE LTE GT LT NOT AND OR 

%left UPLUS UMINUS
%right EXP
%left PLUS MINUS
%left MUL DIV MOD
%left OR AND 
%left EQCOMPARE NEQCOMPARE
%left GTE LTE GT LT
%right NOT

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE

%type<data_type>DATA_TYPE
%type<var_name>VAR
%start prm

%%
prm	: HEADER MAIN_TYPE MAIN LB RB LCB BODY RCB {
							printf("\n parsing successful\n");
						   }

BODY	: DECLARATION_STATEMENTS BODY
		| PROGRAM_STATEMENTS BODY
		| PROGRAM_STATEMENTS
		| DECLARATION_STATEMENTS

DECLARATION_STATEMENTS : DECLARATION_STATEMENT DECLARATION_STATEMENTS 
						  {
							printf("\n Declaration section successfully parsed\n");
						  }
	| DECLARATION_STATEMENT

DECLARATION_STATEMENT: DATA_TYPE VAR_LIST SC {}

VAR_LIST : VAR COMA VAR_LIST {
				insert_to_table($1,current_data_type);
			     }
	| VAR {
		insert_to_table($1,current_data_type);
	      }

MAIN_TYPE : INT
DATA_TYPE : INT {
			$$=$1;
			current_data_type=$1;
		} 
	| CHAR  {
			$$=$1;
			current_data_type=$1;
		}
	| FLOAT {
			$$=$1;
			current_data_type=$1;
		}
	| DOUBLE {
			$$=$1;
			current_data_type=$1;
		}


PROGRAM_STATEMENTS : PROGRAM_STATEMENT PROGRAM_STATEMENTS 
						  {
							printf("\n program statements successfully parsed\n");
						  }
			| PROGRAM_STATEMENT

PROGRAM_STATEMENT : VAR EQ A_EXPN SC {	
					if((temp=lookup_in_table($1))!=-1)
					{
						if(check_mod==1)
						{
							if(expn_type!=0 && temp!=0)
							{
								printf("Both types not int.\n");
								exit(0); 
							}
							check_mod=0;
						}
						if(expn_type==-1)
						{
							expn_type=temp;
						}
						
						else if(expn_type!=temp)
						{
							printf("\ntype mismatch in the expression\n");
							exit(0);
						}
					}else
					{
						printf("\n variable \"%s\" undeclared\n",$1);exit(0);
					}
					expn_type=-1;	
				     }
					| IF LB LOGICAL_EXPN RB LCB BODY RCB ELSE LCB BODY RCB
					| IF LB LOGICAL_EXPN RB LCB BODY RCB

LOGICAL_EXPN: LOGICAL_EXPN OR LOGICAL_EXPN
			| LOGICAL_EXPN AND LOGICAL_EXPN
			| LOGICAL_EXPN EQCOMPARE LOGICAL_EXPN
			| LOGICAL_EXPN NEQCOMPARE LOGICAL_EXPN
			| LOGICAL_EXPN GTE LOGICAL_EXPN
			| LOGICAL_EXPN LTE LOGICAL_EXPN
			| LOGICAL_EXPN GT LOGICAL_EXPN
			| LOGICAL_EXPN LT LOGICAL_EXPN
			| LOGICAL_EXPN NOT LOGICAL_EXPN
			| LB LOGICAL_EXPN RB
			| VAR {
				if(lookup_in_table($1)==-1)
				{
					printf("\n variable \"%s\" undeclared\n",$1);exit(0);
				}
			}
A_EXPN		: A_EXPN PLUS A_EXPN
		|A_EXPN MINUS A_EXPN
		|A_EXPN MUL A_EXPN
		|A_EXPN DIV A_EXPN
		|A_EXPN MOD A_EXPN	{ check_mod = 1; }
		|A_EXPN EXP A_EXPN
		|A_EXPN UMINUS
		|A_EXPN UPLUS 
		| LB A_EXPN RB 
		| VAR {
			if((temp=lookup_in_table($1))!=-1)
			{
				if(expn_type==-1)
				{
					expn_type=temp;
				}
				
				else if(expn_type!=temp)
				{
					printf("\ntype mismatch in the expression\n");
					exit(0);
				}
			}else
			{
				printf("\n variable \"%s\" undeclared\n",$1);exit(0);
			}
		     }
%%

int lookup_in_table(char var[30])//returns the data type associated with 
{
	int found_in_table = 0, i;
	for(i=0; i<=var_count; i++)
	{
		if(strcmp(var_list[i].var_name, var)==0)
		{
			found_in_table = 1;
			break;
		}
	}
	//if var not found in the table
	if(!found_in_table)
	{
		return -1;
	}

	//if var found
	return var_list[i].type;
}
void insert_to_table(char var[30], int newtype)
{
	for(int i=0; i<=var_count; i++)
	{
		if(strcmp(var_list[i].var_name, var)==0)
		{
			printf("multiple declaration of %s\n", var);
			exit(0);
		}
	}

	var_count++;
	strcpy(var_list[var_count].var_name, var);
	var_list[var_count].type = newtype;
}
int main()
{
    yyparse();
/*    if(success)
    	printf("Parsing Successful\n");*/
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}

