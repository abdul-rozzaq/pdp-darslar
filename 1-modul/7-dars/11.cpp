#include <iostream>

using namespace std;


int main(){

    int a, b, c, d, e, f, kattasi;

    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;
    cout << "5 - sonni kiriting: "; cin >> e;
    cout << "6 - sonni kiriting: "; cin >> f;

    kattasi = a;

    if (b > kattasi) kattasi = b;
    if (c > kattasi) kattasi = c;
    if (d > kattasi) kattasi = d;
    if (e > kattasi) kattasi = e;
    if (f > kattasi) kattasi = f;

    cout << "Eng katta son: " << kattasi << endl;

    return 0;
}