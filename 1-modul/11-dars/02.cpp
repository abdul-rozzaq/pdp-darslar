#include <iostream>

using namespace std;

int main()
{

    cout << "1. ";
    for (int i = 11; i < 88; i++)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    cout << endl
         << endl;

    cout << "2. ";
    for (int i = 12; i < 25; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl
         << endl;

    cout << "3. ";
    for (int i = 15; i < 88; i++)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    cout << endl
         << endl;

    cout << "4. ";
    for (int i = 99; i > 10; i--)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl
         << endl;

    return 0;
}