#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    string txt,fullTxt;
    int vowel = 0, consonat = 0, len = 0;

    ifstream fileContent("TestString.txt");

    while (getline (fileContent, txt))
        {
            cout << txt<<endl;
            fullTxt.append(txt);
        }
    cout<<endl;
    fileContent.close();

    len=fullTxt.size();

    for (int i = 0; i<len; ++i)
    {
        if (fullTxt[i] == 'a' || fullTxt[i] == 'e' || fullTxt[i] == 'i' || fullTxt[i] == 'o' || fullTxt[i] == 'u' || fullTxt[i] == 'A' || fullTxt[i] == 'E' || fullTxt[i] == 'I' || fullTxt[i] == 'O' || fullTxt[i] == 'U')
        {
            ++vowel;
            cout<<"("<<fullTxt[i]<<")";
        }
        else if ((fullTxt[i] >= 'a' && fullTxt[i] <= 'z') || (fullTxt[i] >= 'A' && fullTxt[i] <= 'Z'))
        {
            ++consonat;
            cout<<fullTxt[i];
        }
        else{
            cout<<fullTxt[i];
        }
    }

    cout<<endl;
    cout<<endl;
    cout << "Number of vowels are = " << vowel<<endl;
    cout << "Number of consonants are = " << consonat<<endl;

    return 0;
}
