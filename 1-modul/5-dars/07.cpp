#include <iostream>

using namespace std;


int main(){
    //* 1-misol

    int a, b, c;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << endl << "A: " << a << endl;
    cout << "B: " << b << endl << endl;


    //* 2-misol
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;

    b = a ^ b;
    a = a ^ b;
    b = a ^ b;

    a = a ^ c;
    c = a ^ c;
    a = a ^ c;

    cout << endl << "A: " <<  a << endl;
    cout << "B: " <<  b << endl;
    cout << "C: " <<  c << endl;


    return 0;
}