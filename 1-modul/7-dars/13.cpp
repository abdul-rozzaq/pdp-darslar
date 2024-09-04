#include <iostream>

using namespace std;


int main(){

    int number, x1, x2, x3, x4, x5, kattasi;

    cout << "Sonni kiriting: "; cin >> number;

    x1 = number % 10;
    x2 = number % 100 / 10;
    x3 = number % 1000 / 100;
    x4 = number % 10000 / 1000;
    x5 = number % 100000 / 10000;

    kattasi = x1;

    if (x2 > kattasi) kattasi = x2;
    if (x3 > kattasi) kattasi = x3;
    if (x4 > kattasi) kattasi = x4;
    if (x5 > kattasi) kattasi = x5;

    cout << kattasi << endl;
    
    return 0;
}