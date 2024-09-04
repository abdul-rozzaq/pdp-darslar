#include <iostream>

using namespace std;


int main(){

    int number1, number2, number3, result;


    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   

    result = number1 % 2 == 0 && number2 % 2 == 0 ? number1 + number2 : number1 * number2;
    cout << result << endl;


    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   


    if (number1 % 2 == 1 && number2 % 2 == 1) {
        cout << number1 * number2 << endl;
    } else {
        cout << number1 << ", " <<  number2 << endl;
    }


    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   
    cout << "3-sonni kiriting: "; cin >> number3;  

    result = 0;

    if (number1 % 2 == 1) result += 1;
    if (number2 % 2 == 1) result += 1;
    if (number3 % 2 == 1) result += 1;

    cout << "Toq sonlar " << result << " ta" <<  endl;

    return 0;
}