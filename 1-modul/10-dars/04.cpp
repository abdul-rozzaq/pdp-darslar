#include <iostream>

using namespace std;



int main() {

    int a, b, sum;

    a = 10;
    b = 100;

    cout << "1. ";

    while (a <= b)
    {
        if (a % 8 == 0) {
            cout << a << " ";
        }

        a += 1;
    }

    cout << endl << endl;



    a = 50;
    b = 250;

    cout << "2. ";

    while (a <= b)
    {
        if (a % 9 == 0 || a % 5 == 0) {
            cout << a << " ";
        }

        a += 1;
    }

    cout << endl << endl;



    a = 1;
    b = 100;
    sum = 0;

    cout << "3. ";

    while (a <= b)
    {
        if (a % 2 == 1) {
            sum += a;
        }

        a += 1;
    }

    cout << "1 - 100 orasidagi toq sonlar yig'indisi " << sum << " ga teng" << endl;

    return 0;
}