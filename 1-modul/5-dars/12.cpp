#include <iostream>

using namespace std;

int main()
{
    int X, Y, A, B, X1kg, Y1kg;

    cout << "X: "; cin >> X;
    cout << "A: "; cin >> A;
    cout << "Y: "; cin >> Y;
    cout << "B: "; cin >> B;

    X1kg = A / X;
    Y1kg = B / Y;

    cout << "Shokolad konfetdan " << Y1kg - X1kg << " so'm qimmat turadi" << endl ;

    return 0;
}
