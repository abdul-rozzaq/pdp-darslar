#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {38, 8, 15, 178, 143, 25, 158, 99, 196, 95, 60, 148, 56, 147, 21, 92, 23, 37, 131, 69};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int mxNumber = numbers[0];
    int mnNumber = numbers[0];

    bool exp;

    exp = numbers[0] % 2 == 0 && numbers[1] % 2 == 0 &&
          numbers[size - 1] % 2 == 1 && numbers[size - 2] % 2 == 1;

    cout << boolalpha << exp << endl;

    

    for (int i = 0; i < size; i++)
    {
        if ( numbers[i] < mnNumber ) mnNumber = numbers[i];
    }

    cout << "Massiv ning eng kichik elementi " << mnNumber << endl;
    




    for (int i = 0; i < size; i++)
    {
        if ( numbers[i] > mxNumber ) mxNumber = numbers[i];
        if ( numbers[i] < mnNumber ) mnNumber = numbers[i];
    }

    cout << "Massiv ning eng katta elementi " << mxNumber << endl;
    cout << "Massiv ning eng kichik elementi " << mnNumber << endl;
    
    return 0;
}