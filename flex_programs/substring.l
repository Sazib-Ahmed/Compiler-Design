/* Rules */
%%

[.1][0][1][1]+  	{printf("  Accepted\n");}


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