
#include <string.h>
#include <iostream>
using namespace std;

int main ()
  {
    string eqn, a,b;
    int i,n,flag=0;
    char key[32][10] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    char str[20],keyword[10],keyword1[10];
    char iden[3][2] ={"x","y","z"};
    char oper[3][2] ={"=","+","*"};





    //cout << "Please enter a equation: ";
    //cin >>eqn;
    eqn = "float x=y+5z*20";
    strcpy(str, eqn.c_str());

    cout<<str<<endl;

    for(int i=0;i<eqn.length();i++)
    {
        if(str[i]==' ')
        {

            //cout<<a;
            //a="";
            for(i = 0; i < 32; i++)
            {
                //if two strings matches strcmp returns 0
                //keyword="";
                //cout<<keyword<<endl;
                if(strcmp(keyword, key[i])==0)
                flag=1;
            }
            //if flag=1 then keyword else not a keyword
            if (flag)
                cout<<keyword<<" is a Keyword";
            else
                cout<<keyword<<" is not a Keyword";
            a="";
            i++;
            cout<<endl;
        }
        //keyword[i]=str[i];
        a=a+str[i];
        strcpy(keyword, a.c_str());
        //cout<<keyword<<endl;
        //cout<<a<<endl;
    }

    cout<<a;

/*
    char extra1[a.length() + 1];
    strcpy(extra1, a.c_str());



    for(int i=0;i<a.length();i++)
    {
        if(strcmp(extra1, oper[i])==0)
        {

            for(i = 0; i < 3; i++)
            {
                if(strcmp(keyword1, iden[i])==0)
                flag=1;
            }
            if (flag)
                cout<<keyword1<<" is a valid idenfier";
            else
                cout<<keyword1<<" is not valid idenfier";
            i++;
            cout<<endl;
        }
        keyword[i]=extra1[i];
        b=b+extra1[i];
    }

*/

    return 0;
}

