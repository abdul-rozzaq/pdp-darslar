#include <iostream>

using namespace std;


int main(){
    int number, x1, x2;
    bool ex;

    cout << "Sonni kiriting: "; cin >> number;

    x1 = number / 10;
    x2 = number % 10;

    ex = x1 + x2 > 10;
    
    cout << ex << endl;


    cout << "Sonni kiriting: "; cin >> number;

    x1 = number / 10;
    x2 = number % 10;

    ex = x1 * x2 > 20;

    cout << ex << endl;



    cout << "Sonni kiriting: "; cin >> number;

    x1 = number / 10;
    x2 = number % 10;

    ex = x1 % 2 == 1 && x2 % 2 == 1;

    cout << ex << endl;

    return 0;
}