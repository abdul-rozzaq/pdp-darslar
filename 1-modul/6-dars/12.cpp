#include <iostream>

using namespace std;


int main() {

    int a, b, c, d;
    bool ex;

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    
    ex = a == b + 30;
    cout << ex << endl;
    

    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    cout << "c sonni kiriting: "; cin >> c;
    cout << "d sonni kiriting: "; cin >> d;

    ex = b % 2 == 0 && b > a && b > c && b > d;
    cout << ex << endl;


    cout << "a sonni kiriting: "; cin >> a;
    cout << "b sonni kiriting: "; cin >> b;
    cout << "c sonni kiriting: "; cin >> c;
    cout << "d sonni kiriting: "; cin >> d;

    ex = c % 2 == 0 && c < a && c < b && c < d;
    cout << ex << endl;
    
    return 0;
}