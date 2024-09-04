#include <iostream>

using namespace std;


int main(){

    int number;


    cout << "Sonni kiriting: "; cin >> number;

    if (number % 10 == number / 10) {
        cout << number % 10 << endl;
    } else {
        cout << number / 10 << endl;
    }


    return 0;
}