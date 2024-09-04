#include <iostream>

using namespace std;

bool is_tub(int number);

int main()
{

    int a, b;

    cout << "A sonni kiriting: ";
    cin >> a;

    string message = is_tub(a) ? "true" : "false";

    cout << message << endl;

    cout << "A sonni kiriting: ";
    cin >> a;
    cout << "B sonni kiriting: ";
    cin >> b;

    if (is_tub(a) && is_tub(b))
    {
        cout << a << " + " << b << " = " << a + b << endl;
    }
    else
    {
        cout << a << " * " << b << " = " << a * b << endl;
    }

    return 0;
}

bool is_tub(int number)
{


    for (int i=2; i<number; i++)
    {
        if (number % i == 0)
            return false;

        i += 1;
    }

    return true;
}