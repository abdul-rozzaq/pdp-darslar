#include <iostream>

using namespace std;


int main(){

    //* 1-masala

    int n1;

    cout << "3 xonali son kiriting: "; cin >> n1;

    int b = n1 % 10;
    int o = n1 % 100 / 10;
    int y = n1 / 100;

    int natija = b * o * y;

    cout << "Natija: " << natija << endl;

    //* 2-masala

    int n2;
    
    cout << "2 xonali son kiriting: "; cin >> n2; 

    int b1 = n2 % 10;
    int o1 = n2 / 10;

    cout << "Natija: " << b1 * o1 << endl;

    //* 3-masala

    int main;

    cout << "5 xonali son kiriting: "; cin >> main;

    int x1, x2, x3, x4, x5;

    x1 = main % 10;
    x2 = main % 100 / 10;
    x3 = main % 1000 / 100;
    x4 = main % 10000 / 1000;
    x5 = main / 10000;

    cout << x1 + x2 + x3 + x4 + x5 << endl;

    //* 4-masala

    int n4;

    cout << "3 xonali son kiriting: "; cin >> n4;

    int b2 = n4 % 10;
    int o2 = n4 % 100 / 10;
    int y2 = n4 / 100;

    int natija1 = (b2 * 100) + (o2 * 10) + y2;

    cout << natija1 << endl;

    return 0;
}