/* Rules */
%%
"hello world"	{printf("GOODBYE\n");}
.	{printf("Wrong Input\n");}
[a-zA-Z]  	{printf("alpha numeric\n");}
[0-9]  	{printf("Number\n");}
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