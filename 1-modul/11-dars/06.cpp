#include <iostream>

using namespace std;

int main()
{
    int count = 0, sum = 0;

    cout << "1. ";

    for (int i = 10; i < 100; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;

        if (x1 * x2 > 15) {
            count += 1;
            sum += i;
        }
    }

    cout << "Miqdori " << count << " Yig'indi: " << sum << endl << endl;

    cout << "2. ";

    for (int i = 100; i < 1000; i++)
    {
        int x2 = i % 100 / 10;

        if (x2 == 4 || x2 == 7) {
            cout << i << " ";
        }
    }

    cout << endl;
    
    return 0;
}