%{
  #include<stdio.h>
  #include<string.h>
  int count=0;
%}
%%
. {count++;}
%%
int yywrap(void){}
int main()
{   
  yylex();
  printf("\n%d strings with 'a' as second letter",count);
  return 0;
}