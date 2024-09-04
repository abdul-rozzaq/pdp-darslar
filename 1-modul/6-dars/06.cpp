#include <iostream>

using namespace std;


int main() {

    int number, x1, x2, a;
    bool ex;

    cout << "Sonni kiriting: "; cin >> number;

    x1 = number / 10;
    x2 = number % 10;

    ex = x1 > 5 && x2 > 5;
    cout << ex << endl;

    cout << "a sonni kiriting: "; cin >> a;
    ex = a % 3 == 0;
    cout << ex << endl;
    
    cout << "a sonni kiriting: "; cin >> a;
    ex = a % 7 == 0;
    cout << ex << endl;


    

    return 0;
}