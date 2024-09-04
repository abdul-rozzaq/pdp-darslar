#include <iostream>

using namespace std;

void fn1(int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}

void fn2(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{

    fn1(23);
    fn2(27);

    return 0;
}