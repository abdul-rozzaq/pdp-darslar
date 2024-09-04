#include <iostream>

using namespace std;


int main(){

    int number1, number2, result;

    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   

    result = number1 > number2 ? number1 : number2;
    cout << result << endl;



    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   

    result = number1 < number2 ? number1 : number2;
    cout << result << endl;



    cout << "1-sonni kiriting: "; cin >> number1;   
    cout << "2-sonni kiriting: "; cin >> number2;   

    result = number1 > 9 && number1 < 100 && number2 > 9 && number2 < 100 ? number1 + number2 : number1 * number2;
    cout << result << endl;

    return 0;
}