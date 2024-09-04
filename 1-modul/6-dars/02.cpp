#include <iostream>

using namespace std;


int main(){
    int number;
    bool ex;

    cout << "Sonni kiriting: "; cin >> number;
    ex = 999 < number && number < 10000;
    cout << ex << endl;
    

    cout << "Sonni kiriting: "; cin >> number;
    ex = number % 2 == 0 && number < 100 && number > 9;
    cout << ex << endl;


    cout << "Sonni kiriting: "; cin >> number;
    ex = number % 2 == 1 && number > 99 && number < 1000;
    cout << ex << endl;


    return 0;
}