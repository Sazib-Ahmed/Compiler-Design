#include <iostream>

using namespace std;

int main() {
    string fname,lname,fullname;

    cout << endl;
    cout << "Enter your First name : ";
    cin >> fname;
    cout << "Enter your Last name : ";
    cin >> lname;

    fullname = fname +" "+ lname;

    cout << endl;
    cout << "Full Name = "<< fullname << endl;
    return 0;
}
