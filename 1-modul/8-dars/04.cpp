#include <iostream>

using namespace std;

int main()
{

    int a, b, x1, x2, x3;
    string amal;

    cout << "a = "; cin >> a;
    cout << "amal = "; cin >> amal;
    cout << "b = "; cin >> b;

    if (amal == "+")
    {
        cout << "output: " << a + b << endl;
    }
    else if (amal == "-")
    {
        cout << "output: " << a - b << endl;
    }
    else if (amal == "*")
    {
        cout << "output: " << a * b << endl;
    }
    else if (amal == "/")
    {
        cout << "output: " << a / b << endl;
    }
    else if (amal == "%")
    {
        cout << "output: " << a % b << endl;
    }




    cout << "a = "; cin >> a;

    x1 = a % 10;
    x2 = a % 100 / 10;
    x3 = a % 1000 / 100;


    if (x1 > x2 && x2 > x3 || x3 > x2 && x2 > x1) {
        cout << "To'g'ri" << endl;
    } else {
        cout << "Noto'g'ri" << endl;
    }

    return 0;
}