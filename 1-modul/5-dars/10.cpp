#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, stullar, partalar;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;
    cout << "D: "; cin >> d;

    stullar = a * b * c * d; 
    partalar = stullar / 2;

    cout << "Partalar soni: " << partalar << endl;

    return 0;
}