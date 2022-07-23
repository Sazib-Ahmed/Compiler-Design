%{
#include<stdio.h>
int character=0;
%}


/* Rules */
%%

.	{character++;}
 

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
	printf("  Number of character =  %d\n",character);
	return 0; 
}