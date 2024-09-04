#include <iostream>

using namespace std;


int main() {

    int a, b, c;
    bool ex;

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    
    ex = a * 5 == b;
    cout << ex << endl;
    

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;

    ex = a == b * 4 || a * 4 == b;
    cout << ex << endl;
    

    return 0;
}