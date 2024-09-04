#include <iostream>

using namespace std;


int main(){

    int number, number2;
    bool ex;

    cout << "Sonni kiriting: "; cin >> number;
    ex = number % 2 == 0 && number < 10000 && number > 999;
    cout << ex << endl;
    

    cout << "1 - sonni kiriting: "; cin >> number;
    cout << "2 - sonni kiriting: "; cin >> number2;

    ex = number % 2 == 1 && number2 % 2 == 1;
    cout << ex << endl;



    cout << "1 - sonni kiriting: "; cin >> number;
    cout << "2 - sonni kiriting: "; cin >> number2;

    ex = number % 2 == 0 && number2 % 2 == 0;
    cout << ex << endl;



    return 0;
}