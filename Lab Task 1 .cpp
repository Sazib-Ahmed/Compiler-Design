#include <string.h>
#include <iostream>
using namespace std;

int main ()
  {
    string equ, a;
    int i,n,flag=0;
    char key[32][10] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    char str[20],keyword[10];




    cout << "Please enter a equation: ";
    //cin >> str;
    gets(str);
    //str[20] = "float x=y+5z*20";

    for(int i=0;i<20;i++)
    {
        if(str[i]==' ')
        {

            //cout<<a;
            //a="";
            for(i = 0; i < 32; i++)
            {
                //if two strings matches strcmp returns 0
                //keyword="";
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
        keyword[i]=str[i];
        a=a+str[i];
    }

    cout<<a;

    return 0;
}

