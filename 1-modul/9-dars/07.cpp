#include <iostream>

using namespace std;


int main() {

    int number1, number2;
    char amal;


    cout << "1-raqam: "; cin >> number1;
    cout << "amal: "; cin >> amal;
    cout << "2-raqam: "; cin >> number2;


    switch(amal) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break;
        
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;
        
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            break;
        
        case '/':
            cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
            break;
    }


    return 0;

}