#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "N: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << " ";
        }

        cout << endl;
        
    }

    cout << "N: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int y = n - i + 1;

        for (int j = 1; j <= i; j++)
        {
            cout << i << y << " ";
            y += 1;
        }

        cout << endl;
    }

    return 0;
}