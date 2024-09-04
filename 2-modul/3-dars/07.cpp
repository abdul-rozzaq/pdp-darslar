#include <iostream>


using namespace std;


void fn1()
{
    for (int i = 100; i < 1000; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;
        int x3 = i % 1000 / 100;

        if (x1 + x2 + x3 > 20)
            cout << i << " ";
    }

    cout << endl;
}

void fn2()
{
    for (int i = 100; i < 1000; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;
        int x3 = i % 1000 / 100;

        if (x1 * x2 * x3 > 40)
            cout << i << " ";
    }

    cout << endl;
}



int main()
{

    fn1();
    cout << endl;
    fn2();

    return 0;
}