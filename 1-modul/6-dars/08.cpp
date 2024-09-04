#include <iostream>

using namespace std;


int main() {

    int a, b;
    bool ex;

    cout << "a sonni kiriting: "; cin >> a;
    ex = a % 5 != 0;
    cout << ex << endl;
    

    cout << "a sonni kiriting: "; cin >> a;
    ex = a % 4 == 0 && a % 3 != 0;
    cout << ex << endl;


    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    ex = a > b;
    cout << ex << endl;
 

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    ex = a == b;
    cout << ex << endl;
 
    return 0;
}