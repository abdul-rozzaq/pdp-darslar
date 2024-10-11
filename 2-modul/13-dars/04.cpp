#include <iostream>

using namespace std;

void func(int n)
{

    int start = 46;

    if (start > n)
    {
        for (int i = start; i >= n; i--)
            if (i % 3 == 0)
                cout << i << " ";
    }
    else
        for (int i = start; i <= n; i++)
            if (i % 3 == 0)
                cout << i << " ";

    cout << endl;
}

int main()
{

    func(55);
    func(15);

    return 0;
}