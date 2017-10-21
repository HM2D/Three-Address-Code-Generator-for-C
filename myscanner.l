%{
#include "y.tab.h"
#include <string.h>
char * split(char* s,char* delimeter);
%}


relop >=|<=|>|<|==|!=
number [0-9]+

%%

[\n\t ]+	{;}
"if" {return IF;}
"while" {return WHILE;}
"for" {return FOR;}
"else" {return ELSE;}
"int"|"string"|"char"|"double" { return TYPE;}
[a-z]([a-z]|[0-9])* 	{ yylval.tuple.result = strdup(yytext); return identifier;	}
[0-9]+  {yylval.tuple.num= atoi(yytext); return number;}
{relop} { yylval.tuple.arg1 =strdup(yytext); return RELOP;}
 [-+*=/;] {return yytext[0];}
[(){}]               {return yytext[0];}
%%

int yywrap(void)
{
	return 1;
}



