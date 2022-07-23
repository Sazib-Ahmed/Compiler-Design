/* Rules */
%%


[+]?[0-9]+	{printf("  Positive Number\n");}
[-][0-9]+  	{printf("  Negative Number\n");}
[a-zA-Z]	{printf("  Not a Number\n");}

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
	return 0;
}