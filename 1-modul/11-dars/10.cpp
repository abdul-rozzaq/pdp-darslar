#include <iostream>

using namespace std;

int main()
{

    int sugar_price = 7000, start = 35, n, count = 0;

    for (int i = 13; i <= 60; i++)
    {
        cout << i << " kg shakar narxi " << i * sugar_price << " so'm" << endl;
    }

    cout << endl;

    cout << "N sonini kiriting: ";
    cin >> n;

    for (int i = start; i < n; i++)
    {
        if (i % 3 != 0)
        {
            cout << i << " ";
            count += 1;
        }
    }

    cout << endl;

    cout << "3 ga bo'linmaydigan sonlar " << count << " ta" << endl;

    return 0;
}