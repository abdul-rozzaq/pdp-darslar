#include <iostream>

using namespace std;

int main()
{

    int start = 100, stop = 1000, x1, x2, x3;

    cout << "1. ";

    while (start < stop)
    {

        x1 = start % 10;
        x2 = start % 100 / 10;
        x3 = start % 1000 / 100;

        if (x1 + x2 + x3 > 20)
            cout << start << " ";

        start += 1;
    }

    cout << endl
         << endl;



    cout << "2. ";

    start = 100;
    stop = 1000;

    while (start < stop)
    {

        x1 = start % 10;
        x3 = start % 1000 / 100;

        if (x1 == x3)
            cout << start << " ";

        start += 1;
    }

    return 0;
}