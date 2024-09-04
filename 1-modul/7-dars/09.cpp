#include <iostream>

using namespace std;


int main(){

    int number, x1, x2, x3;


    cout << "Sonni kiriting: "; cin >> number;

    x1 = number % 10;
    x2 = number % 100 / 10;
    x3 = number % 1000 / 100;

    if (x1 == x2 && x1 == x3) {
        cout << x2 << endl;
    } else {
        cout << x1 << endl;
    }


    return 0;
}