#include <iostream>

using namespace std;


int main() {

    int a, b, c;
    bool ex;

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    cout << "c sonni kiriting: "; cin >> c;
    ex = b < a && b < c;
    cout << ex << endl;
    

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;

    ex = a == b * 2;
    cout << ex << endl;
    

    return 0;
}