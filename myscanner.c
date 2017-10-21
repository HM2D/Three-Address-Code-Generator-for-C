#include <stdio.h>
#include "headerForLex.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
char *names[] = {NULL, "db_type", "db_name", "db_table_prefix", "db_port"};

int main(void) 
{

	int ntoken, vtoken;

	ntoken = yylex();
	while(ntoken) {
		//printf("For Token %d\n", ntoken);
		vtoken = yylex();
		switch (ntoken) {
		case IF: printf("IF statement\n");
		case WHILE: printf("while statement\n");
		case RELOP: printf("Relop type\n");
			//default:
			//printf("Syntax error in line %d\n",yylineno);
		}
		ntoken = yylex();
	}
	return 0;
}
