#include <iostream>


using namespace std;


int main(){
    //* 1-masala

    int main;

    cout << "4 xonali son kiriting: "; cin >> main;

    int x1, x2;

    x1 = main % 10;
    x2 = main % 100 / 10;

    cout << main - (x2 * 10 + x1) + (x1 * 10 + x2) << endl;


    //* 2-masala

    int number2;

    cout << "3 xonali son kiriting: "; cin >> number2;

    int y2, y3;

    y2 = number2 % 100 / 10;
    y3 = number2 / 100;

    cout << number2 - (y3 * 100 + y2 * 10) + (y3 * 10 + y2 * 100) << endl;

    return 0;
}