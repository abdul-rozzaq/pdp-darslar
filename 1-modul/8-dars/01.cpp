#include <iostream>

using namespace std;

int main()
{

    int a, b, c;



    cout << "A: ";cin >> a;
    cout << "B: ";cin >> b;
    cout << "C: ";cin >> c;

    if (a > b && a > c)
    {
        cout << "max=" << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "max=" << b << endl;
    }
    else
    {
        cout << "max=" << c << endl;
    }



    cout << "A: ";cin >> a;
    cout << "B: ";cin >> b;
    cout << "C: ";cin >> c;

    if (a > b && b > c)
    {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
    else if (a > c && c > b)
    {
        cout << "a = " << a << ", c = " << c << ", b = " << b << endl;
    }
    else if (c > a && a > b)
    {
        cout << "c = " << c << ", a = " << a << ", b = " << b << endl;
    }
    else if (c > b && b > a)
    {
        cout << "c = " << c << ", b = " << b << ", a = " << a << endl;
    }
    else if (b > a && a > c)
    {
        cout << "b = " << b << ", a = " << a << ", c = " << c << endl;
    }
    else if (b > c && c > a)
    {
        cout << "b = " << b << ", c = " << c << ", a = " << a << endl;
    }

    return 0;
}