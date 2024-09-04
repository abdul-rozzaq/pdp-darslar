#include <iostream>

using namespace std;

int main(){
    int number;
    bool ex = true;

    cout << "Sonni kiriting: "; cin >> number;
    ex = number % 2 == 0;
    cout << ex << endl;
    
    cout << "Sonni kiriting: "; cin >> number;
    ex = number % 2 == 1;
    cout << ex << endl;

    cout << "Sonni kiriting: "; cin >> number;
    ex = number > 9 && number < 100;
    cout << ex << endl;
    
    return 0;
}