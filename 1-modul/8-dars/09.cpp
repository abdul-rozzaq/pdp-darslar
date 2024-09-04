#include <iostream>

using namespace std;


int main() {

    string password, real_password = "Aziz20";

    cout << "Parolni kiriting: "; cin >> password;

    if (password == real_password) {
        cout << "Assalomu alaykum Azizbek, Xush kelibsiz" << endl;
    } else {
        cout << "Siz xato passwordni kiritidingiz" << endl;
    }


    int a, b, c;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;

    if (a == b && b == c){
        cout << "Natija 20" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Natija 10" << endl;
    } else {
        cout << "Natija 0" << endl;
    }


    return 0;
}