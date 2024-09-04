#include <iostream>

using namespace std;



int main() {

    int a, b;

    a = 10;
    b = 100;

    cout << "1. ";

    while (a <= b)
    {
        if (a % 5 == 0) {
            cout << a << " ";
        }

        a += 1;
    }

    cout << endl << endl;


    a = 100;
    b = 450;

    cout << "2. ";

    while (a <= b)
    {
        if (a % 4 == 0 && a % 7 == 0) {
            cout << a << " ";
        }

        a += 1;
    }

    cout << endl << endl;
    


    return 0;
}