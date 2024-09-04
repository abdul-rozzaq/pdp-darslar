#include <iostream>

using namespace std;

int main()
{

    int number, x, y, natija;

    //* 1 - misol

    cout << "Sonni kiriting: ";
    cin >> number;

    x = number * number;
    y = x * x;
    natija = y * y;

    cout << "Natija: " << natija << endl;

    //* 2-misol

    int soat, kun;

    cout << "Kunlarni kiriting: "; cin >> kun;
    cout << "Soatlarni kiriting: "; cin >> soat;

    natija = kun * 24 + soat;

    cout << "Jami soat: " << natija << endl;

    return 0;
}