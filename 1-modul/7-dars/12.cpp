#include <iostream>

using namespace std;


int main(){

    int a, b, c, d, kichigi;

    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;

    kichigi = a;

    if (b < kichigi) kichigi = b;
    if (c < kichigi) kichigi = c;
    if (d < kichigi) kichigi = d;

    cout << "Eng kichik son: " << kichigi << endl;

    return 0;
}