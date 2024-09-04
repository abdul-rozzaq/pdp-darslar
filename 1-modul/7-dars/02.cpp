#include <iostream>

using namespace std;


int main(){

    int number;

    cout << "Sonni kiriting: "; cin >> number;   
    if (number > 100) number += 20;
    cout << number << endl;

    cout << "Sonni kiriting: "; cin >> number;   
    if (number % 2 == 0) number += 10;
    cout << number << endl;

    cout << "Sonni kiriting: "; cin >> number;   
    if (number % 2 == 1) number -= 10;
    cout << number << endl;
    
    return 0;
}