#include <iostream>

using namespace std;


int main(){

    int number;

    cout << "Sonni kiriting: "; cin >> number;   
    if (number % 2 == 0) number += 10;
    cout << number << endl;


    cout << "Sonni kiriting: "; cin >> number;   
    if (number % 2 == 1) number -= 10;
    cout << number << endl;


    cout << "Sonni kiriting: "; cin >> number;   
    if (number > 9 && number < 100) number += 100;
    cout << number << endl;


    return 0;
}