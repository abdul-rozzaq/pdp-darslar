#include <iostream>

using namespace std;


int main(){
    int number, number2, x1, x2;
    bool ex;

    cout << "1 - sonni kiriting: "; cin >> number;
    cout << "2 - sonni kiriting: "; cin >> number2;

    ex = number % 2 == 1 && number2 % 2 == 1 && number > 9 && number2 > 9 && number < 100 && number2 < 100;
    cout << ex << endl;
 

    cout << "Sonni kiriting: "; cin >> number;

    x1 = number / 10;
    x2 = number % 10;

    ex = x1 == x2;
    cout << ex << endl;

    return 0;
}