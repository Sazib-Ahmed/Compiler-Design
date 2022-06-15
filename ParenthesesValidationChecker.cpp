#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string expression;
    stack<char> stk;
    char x;
    int i,valid =1;

    cout << "\nEnter expression: ";
    cin >> expression;


    for (i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '(' || expression[i] == '['|| expression[i] == '{')
        {
            stk.push(expression[i]);
            continue;
        }

        if (stk.empty())
        {
            valid =0;
        }


        switch(expression[i])
        {
            case ')':
                x = stk.top();
                stk.pop();
                //x = stk.pop();
                if (x == '{' || x == '[')
                {
                    valid =0;
                }
                break;

            case '}':
                x = stk.top();
                stk.pop();
                //x = stk.pop();
                if (x == '(' || x == '[')
                {
                    valid =0;
                }
                break;

            case ']':
                x = stk.top();
                stk.pop();
                //x = stk.pop();
                if (x == '(' || x == '{')
                {
                    valid =0;
                }
                break;
        }
    }


    if (!stk.empty())
    {
        valid =0;
    }


    if (valid == 0)
    {
        cout << "\nExpression is Invalid";
    }
    else
    {
        cout << "\nExpression is Valid";
    }

    cout << endl;
    return 0;
}
