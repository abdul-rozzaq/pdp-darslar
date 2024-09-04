#include <iostream>

using namespace std;

int main()
{

    int start = 10, stop = 100, x1, x2, count = 0, sum = 0;

    cout << "1. ";

    while (start < stop)
    {

        x1 = start % 10;
        x2 = start % 100 / 10;

        if (x1 * x2 > 12){
            count += 1;
            sum += start;
        }
        
        start += 1;
    }

    cout << "Soni: " << count << "  Yig'indi: " << sum << endl << endl;


    cout << "2. ";

    start = 100;
    stop = 1000;

    while (start < stop)
    {

        x2 = start % 100 / 10;
        
        if (x2 == 2 || x2 == 5)
            cout << start << " ";

        start += 1;
    }

    return 0;
}