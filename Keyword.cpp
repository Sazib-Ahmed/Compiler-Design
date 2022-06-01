#include <string.h>
#include<iostream>
using namespace std;

int main(){
    string keyword;
    int compare,detect;
    char key[32][10] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    char str[20];

    cout << "Enter a string : ";
    cin >> str;


    for (int i = 0; i < 32; i++)
    {
        keyword=key[i];
        cout << key[i]<< endl;
        compare=keyword.compare(str);

        if(compare == 0)
        {
            detect=1;
        }
        else
            detect=0;
    }
    cout<<detect;

    if(detect == 1)
    {
        cout<<str<<" is a Keyword";
    }
    else
        cout<<str<<" is not a Keyword";

    return 0;
}
