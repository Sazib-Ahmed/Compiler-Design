%{
#include<stdio.h>
int line=0;
%}


/* Rules */
%%

\   line++; printf("  Number of line =  %d\n",line);

%%

/*User defined function */
int yywrap()
{
	return 1;
}


/* Main */
int main()
{
	yylex();
	printf("  Number of line =  %d\n",line);
}