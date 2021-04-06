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
	struct symbol_table{char var_name[30]; int type, is_array; int dimension_sequence[5]; }var_list[20];
	int var_count=-1;
	extern int lookup_in_table(char var[30], int this_is_array, int this_dim_seq[5]);
	extern void insert_to_table(char var[30], int type, int new_is_array, int new_dim_seq[5]);
	int empty_array[5] = {0,0,0,0,0};
	int dimension_count=0; 
%}

%union{
int data_type;
char var_name[30];
int num_int; 
}
%token MAIN LB RB LCB RCB LSB RSB SC COMA VAR EQ PLUS MINUS MUL DIV MOD EXP UPLUS UMINUS IF ELSE
%token EQCOMPARE NEQCOMPARE GTE LTE GT LT NOT AND OR QUESM COLON FOR WHILE DO NUMINT INCLUDE
%token HASH DOTH DOUBLEQ STAR AMPERSAND

%left UPLUS UMINUS
%right EXP
%left PLUS MINUS
%left MUL DIV MOD
%left OR AND 
%left EQCOMPARE NEQCOMPARE
%left GTE LTE GT LT
%right NOT QUESM COLON
%right STAR AMPERSAND

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE

%type<data_type>DATA_TYPE
%type<var_name>VAR
%type<num_int>NUMINT

%start prm

%%
prm	: HEADERS MAIN_TYPE MAIN LB RB LCB BODY RCB {
							printf("\n parsing successful\n");
						   }

HEADERS : HEADER HEADERS
		{
			printf("\nHeaders successfully parsed\n");
		}
		| HEADER

HEADER	: HASH INCLUDE LT VAR DOTH GT
		| HASH INCLUDE LT DOUBLEQ DIV PATH VAR DOTH DOUBLEQ GT

PATH	: VAR DIV PATH
		| VAR DIV

BODY	: DECLARATION_STATEMENTS BODY
		| PROGRAM_STATEMENTS BODY
		| PROGRAM_STATEMENTS
		| DECLARATION_STATEMENTS

DECLARATION_STATEMENTS : DECLARATION_STATEMENT DECLARATION_STATEMENTS 
						  {
							printf("\n Declaration section successfully parsed\n");
						  }
	| DECLARATION_STATEMENT

DECLARATION_STATEMENT	: DATA_TYPE VAR_LIST SC {}

VAR_LIST : VAR DIMENSION_SEQUENCE COMA VAR_LIST 
	{
		insert_to_table($1, current_data_type, dimension_count, empty_array); 
		dimension_count = 0; 
		for(int i=0; i<5; i++) 
		{
			empty_array[i] = 0; 
		}
	}
	|  VAR COMA VAR_LIST 
	{
		insert_to_table($1,current_data_type, 0, empty_array);
	}
	| VAR DIMENSION_SEQUENCE 
	{
		insert_to_table($1, current_data_type, dimension_count, empty_array); 
		dimension_count = 0; 
		for(int i=0; i<5; i++) 
		{
			empty_array[i] = 0; 
		}
	}
	| VAR 
	{
		insert_to_table($1,current_data_type, 0, empty_array);
	}

DIMENSION_SEQUENCE	: LSB NUMINT RSB DIMENSION_SEQUENCE
					{
						empty_array[dimension_count] = $2; 
						dimension_count++;
					}
					| LSB NUMINT RSB
					{
						empty_array[dimension_count] = $2; 
						dimension_count++; 
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

PROGRAM_STATEMENT : VAR COMPLEX_VAR EQ A_EXPN SC
					{
						if((temp=lookup_in_table($1, dimension_count, empty_array))!=-1)
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
								extern int yylineno;
								printf("\nType mismatch in the expression. Line number %d\n", yylineno);
								exit(0);
							}
						}
						else
						{
							printf("\n variable \"%s\" undeclared\n",$1);exit(0);
						}
						expn_type=-1;	
						dimension_count = 1; 
						for(int i=0; i<5; i++) 
						{
							empty_array[i] = 0; 
						}
					}
					VAR EQ A_EXPN SC 
					{	
						if((temp=lookup_in_table($1, 0, empty_array))!=-1)
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
								extern int yylineno;
								printf("\nType mismatch in the expression. Line number %d\n", yylineno);
								exit(0);
							}
						}
						else
						{
							printf("\n variable \"%s\" undeclared\n",$1);exit(0);
						}
						expn_type=-1;	
				    }
					| IF LB LOGICAL_EXPN RB LCB BODY RCB ELSE LCB BODY RCB
					| IF LB LOGICAL_EXPN RB LCB BODY RCB
                    | LB LOGICAL_EXPN RB QUESM LCB BODY RCB COLON LCB BODY RCB
                    | FOR LB PROGRAM_STATEMENT  LOGICAL_EXPN SC PROGRAM_STATEMENT RB LCB BODY RCB
                    | WHILE LB LOGICAL_EXPN RB LCB BODY RCB
                    | DO LCB BODY RCB WHILE LB LOGICAL_EXPN RB SC

COMPLEX_VAR : LSB VAR RSB COMPLEX_VAR
			{
				empty_array[dimension_count] = 0; 
				dimension_count++;
			}
			| LSB NUMINT RSB COMPLEX_VAR
			{
				empty_array[dimension_count] = $2; 
				dimension_count++;
			}
			| LSB VAR RSB
			{
				empty_array[dimension_count] = 0; 
				dimension_count++;
			}
			| LSB NUMINT RSB
			{
				empty_array[dimension_count] = $2; 
				dimension_count++;
			}

LOGICAL_EXPN : LOGICAL_EXPN OR LOGICAL_EXPN
			| LOGICAL_EXPN AND LOGICAL_EXPN
			| LOGICAL_EXPN EQCOMPARE LOGICAL_EXPN
			| LOGICAL_EXPN NEQCOMPARE LOGICAL_EXPN
			| LOGICAL_EXPN GTE LOGICAL_EXPN
			| LOGICAL_EXPN LTE LOGICAL_EXPN
			| LOGICAL_EXPN GT LOGICAL_EXPN
			| LOGICAL_EXPN LT LOGICAL_EXPN
			| NOT LOGICAL_EXPN
			| LB LOGICAL_EXPN RB
            | NUMINT
			| VAR COMPLEX_VAR
			{
				if(lookup_in_table($1, dimension_count, empty_array)==-1)
				{
					printf("\n variable \"%s\" undeclared\n",$1);
					exit(0);
				}
				dimension_count = 0; 
				for(int j=0; j<5; j++)
				{
					empty_array[j] = 0; 
				}
			}
			| VAR {
				if(lookup_in_table($1, 0, empty_array)==-1)
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
			|LB A_EXPN RB 
			|NUMINT
			|VAR COMPLEX_VAR
			{
				if((temp=lookup_in_table($1, dimension_count, empty_array))!=-1)
				{
					if(expn_type==-1)
					{
						expn_type=temp;
					}
					
					else if(expn_type!=temp)
					{
						extern int yylineno; 
						printf("\nType mismatch in the expression. Line number %d\n", yylineno);
						exit(0);
					}
				}
				else
				{
					printf("\n variable \"%s\" undeclared\n",$1);
					exit(0);
				}
				dimension_count = 0; 
				for(int j=0; j<5; j++)
				{
					empty_array[j] = 0; 
				}
			}
			|VAR 
			{
				if((temp=lookup_in_table($1, 0, empty_array))!=-1)
				{
					if(expn_type==-1)
					{
						expn_type=temp;
					}
					
					else if(expn_type!=temp)
					{
						extern int yylineno; 
						printf("\nType mismatch in the expression. Line number %d\n", yylineno);
						exit(0);
					}
				}
				else
				{
					printf("\n variable \"%s\" undeclared\n",$1);
					exit(0);
				}
			}
%%

int lookup_in_table(char var[30], int this_is_array, int this_dim_seq[5])//returns the data type associated with 
{
	int found_in_table = 0, i;
	for(i=0; i<=var_count; i++)
	{
		if(strcmp(var_list[i].var_name, var)==0)
		{
			found_in_table = 1;
			if(var_list[i].is_array==this_is_array && this_is_array!=0)
			{
				for(int j=0; j<5; j++)
				{
					if(this_dim_seq[j]<0 || var_list[i].dimension_sequence[j]<=this_dim_seq[j])
					{
						extern int yylineno; 
						printf("Array index out of bounds. Line number %d\n", yylineno); 
						exit(0); 
					}
				}
			}
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
void insert_to_table(char var[30], int newtype, int new_is_array, int new_dim_seq[5])
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
	var_list[var_count].is_array = new_is_array; 
	for(int i=0; i<5; i++)
	{
		var_list[var_count].dimension_sequence[i] = new_dim_seq[i]; 
	}

	printf("Variable name: %s\nType: %d\nDimension count: %d\nDimensions: ", var, newtype, new_is_array);
	for(int i=0; i<5; i++)
	{
		printf("%d ",var_list[var_count].dimension_sequence[i]);
	}
	printf("\n");
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

