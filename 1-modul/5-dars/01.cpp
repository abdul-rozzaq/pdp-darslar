#include <iostream>

using namespace std;

int main() {
 
    //* 1 - misol

    int number, x, y, natija;

    cout << "Sonni kiriting: ";
    cin >> number;

    x = number * number;
    natija = x * x;

    cout << "Natija: " << natija << endl;

    //* 2-misol

    cout << "Sonni kiriting: ";
    cin >> number;

    x = number * number;
    natija = x * x * x;

    cout << "Natija: " << natija << endl;

    return 0;
}