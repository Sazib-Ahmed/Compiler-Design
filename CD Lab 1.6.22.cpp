#include <iostream>

using namespace std;

int main() {

    char name1[50]="Sazib Ahmed";
    string name2="Sazib Ahmed";
    cout << endl;
    cout << "Name (Char) : " << name1<< endl;
    cout << "Name (Char 0): " << name1[0]<< endl;
    cout << "Name (Char 1): " << name1[1]<< endl;
    cout << "Name (Char 2): " << name1[2]<< endl;
    cout << "Name (Char 3): " << name1[3]<< endl;
    cout << "Name (Char 4): " << name1[4]<< endl;
    cout << "Name (Char 50): " << name1[50]<< endl;
    cout << endl;
    cout << endl;

    cout << "Name (String): " << name2<< endl;
    cout << "Name (String 0): " << name2[0]<< endl;
    cout << "Name (String 1): " << name2[1]<< endl;
    cout << "Name (String 2): " << name2[2]<< endl;
    cout << "Name (String 3): " << name2[3]<< endl;
    cout << "Name (String 4): " << name2[4]<< endl;
    cout << "Name (String 11): " << name2[11]<< endl;

    cout << endl;
    string name,spliter,nm,first,second,fname,lname;
    int len,count,compare;

    cout << "Enter your Name : ";
    getline(cin,name);
    cout << "Split by : ";
    getline(cin,spliter);


    len=name.length();
    for (int i = 0; i < len; i++)
    {
        nm=name[i];
        compare=nm.compare(spliter);
        if(compare == 0)
        {
            for (int j = 0; j < i; j++)
            {
                first += name[j];
                //cout << name[j];
            }
            cout << endl;
            for (int j = i+1; j < len; j++)
            {
                second += name[j];
                //cout << name[j];
            }
            break;
        }
        else{
                cout << "could not found a match "<< endl;
        }
    }
    cout << endl;
    cout << "First Half: " << first<< endl;
    cout << "Second Half: " << second<< endl;
    return 0;
}
