#include <iostream>

using namespace std;

int main() {
    int i, length,maximum,minimum;

    cout << "Enter the length of the array : ";
    cin >> length;
    int array[length];


    for(i = 0; i < length; i++) {
        cout << "Enter element number " << i << " : ";
        cin >> array[i];
    }

    maximum = array[0];
    for (i = 0; i < length; i++)
    {
        if (maximum < array[i])
            maximum = array[i];
    }
    minimum = array[0];
    for (i = 0; i < length; i++)
    {
        if (minimum > array[i])
            minimum = array[i];
    }

    cout << "Maximum Value : " << maximum<< endl;
    cout << "Minimum Value : " << minimum<< endl;
    return 0;
}
