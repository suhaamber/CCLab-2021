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
	int var_count=-1;
    int empty_array[5] = {0,0,0,0,0};
	int dimension_count = 0; 
    int nested_block_count = 0; 
    struct symbol_table{char var_name[30]; int type, is_array; int dimension_sequence[5], pointer_depth; } var_list[5][20];
	
    extern int lookup_in_table(char var[30], int this_is_array, int this_dim_seq[5], int this_pointer_depth);
	extern void insert_to_table(char var[30], int type, int new_is_array, int new_dim_seq[5], int this_pointer_depth);
	
%}

%union{
int data_type;
char var_name[30];
int num_int; 
}

%token INCLUDE MAIN DOTH DOTC HASH DOUBLEQ 
%token LB RB LCB RCB LSB RSB COMMA SC 
%token UPLUS UMINUS EXP QUESM COLON STAR AMPERSAND 
%token PLUS MINUS MOD MUL DIV
%token EQCOMPARE NEQCOMPARE EQ GTE LTE GT LT NOT AND OR 
%token IF ELSE FOR DO WHILE 
%token VAR NUMINT
%token COMMENT

%left UPLUS UMINUS
%left PLUS MINUS MOD MUL DIV
%left OR AND EQCOMPARE NEQCOMPARE
%left GTE GT LTE LT

%right EXP
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

prm: HEADERS MAIN_TYPE MAIN LB RB BLOCK

MAIN_TYPE : INT

HEADERS:  HEADER HEADERS
        | HEADER

HEADER	: HASH INCLUDE LT VAR DOTH GT 
        | HASH INCLUDE DOUBLEQ PATH VAR DOTH DOUBLEQ

PATH :  PATH VAR DIV      
        | DIV 
        | /*Epsilon*/

BLOCK: LCB BODY RCB 

BODY: STATEMENTS

STATEMENTS:    STATEMENT STATEMENTS
        |STATEMENT

STATEMENT:        BLOCK 
                | IF LB EXPRESSION RB BLOCK ELSE BLOCK
                | IF LB EXPRESSION RB BLOCK
                | WHILE LB EXPRESSION RB BLOCK 
                | DO LCB BLOCK RCB WHILE LB EXPRESSION RB SC 
                | LB EXPRESSION RB QUESM BLOCK COLON BLOCK SC
                | FOR LB ASSIGNMENT SC EXPRESSION SC ASSIGNMENT RB BLOCK
                | ASSIGNMENT SC 
                | DECLARATION_STATEMENT SC
                | COMMENT
                | SC

ASSIGNMENT:      VAR EQ EXPRESSION
                |VAR DIMENSION_SEQUENCE EQ EXPRESSION
                |STAR_SEQUENCE EXPRESSION EQ EXPRESSION

EXPRESSION:      AMPERSAND EXPRESSION
                |NOT EXPRESSION
                |EXPRESSION BINOP EXPRESSION
                |EXPRESSION RELOP EXPRESSION
                |EXPRESSION LOGOP EXPRESSION
                |STAR_SEQUENCE EXPRESSION
                |VAR DIMENSION_SEQUENCE
                |VAR
                |LB EXPRESSION RB
                |NUMINT

DIMENSION_SEQUENCE: LSB NUMINT RSB DIMENSION_SEQUENCE
                        | LSB NUMINT RSB

STAR_SEQUENCE: STAR STAR_SEQUENCE
                | STAR

BINOP: PLUS
        |MINUS
        |STAR
        |DIV
        |MOD

RELOP: EQCOMPARE
        |NEQCOMPARE
        |LTE
        |LT
        |GTE
        |GT

LOGOP: AND 
        |OR 

DECLARATION_STATEMENT: DATA_TYPE VAR_LIST 

VAR_LIST: VAR DECLARATION_SEQUENCE COMMA VAR_LIST 
	|  VAR COMMA VAR_LIST 
        |  POINTER_SEQUENCE VAR COMMA VAR_LIST
	|  VAR DECLARATION_SEQUENCE 
        |  POINTER_SEQUENCE VAR
	|  VAR 

DECLARATION_SEQUENCE: LSB NUMINT RSB DECLARATION_SEQUENCE
                | LSB NUMINT RSB

POINTER_SEQUENCE: STAR POINTER_SEQUENCE
                | STAR

DATA_TYPE: INT
        | CHAR
        | FLOAT
        | DOUBLE

%%

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


