#include <iostream>

using namespace std;

int main()
{
    cout << "1. ";

    for (int i = 100; i < 1000; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;
        int x3 = i % 1000 / 100;

        if (x1 + x2 + x3 > 18) {
            cout << i << " ";
        }
    }

    cout << endl << endl;
    

    cout << "2. ";

    for (int i = 100; i < 1000; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;
        int x3 = i % 1000 / 100;

        if (x1 == x3) {
            cout << i << " ";
        }
    }

    cout << endl;
    
    return 0;
}