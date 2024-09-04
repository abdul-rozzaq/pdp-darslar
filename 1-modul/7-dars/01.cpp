#include <iostream>

using namespace std;


int main(){

    int number;
    string message;

    cout << "Sonni kiriting: "; cin >> number;
    message = number > 0 ? "musbat" : "musbat emas";
    cout << message << endl;

    cout << "Sonni kiriting: "; cin >> number;
    message = number > 9 && number < 100 ? "C++" : "C#";
    cout << message << endl;

    cout << "Sonni kiriting: "; cin >> number;
    message = number % 2 == 0 ? "juft" : "juft emas";
    cout << message << endl;

    return 0;
}