#include <iostream>

using namespace std;


int main() {

    int a;
    bool ex;

    cout << "a sonni kiriting: "; cin >> a;

    ex = a % 3 == 0 && a % 8 == 0;
    cout << ex << endl;
    
    cout << "a sonni kiriting: "; cin >> a;
    
    ex = a % 7 == 0 || a % 9 == 0;
    cout << ex << endl;


    cout << "a sonni kiriting: "; cin >> a;
    ex = a % 3 == 0;
    cout << ex << endl;
 
    return 0;
}