#include <iostream>

using namespace std;

/*

1. int type da dollar va yevro berilgan. Ular jami necha so'm bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.


*/

int main()
{

    //* 1-masala

    int dollar, yevro, natija;

    int dollar_kursi = 12600,
        yevro_kursi = 14500;

    cout << "Dollar: ";
    cin >> dollar;
    
    cout << "Yevro: ";
    cin >> yevro;

    natija = dollar * dollar_kursi + yevro * yevro_kursi;

    cout << "Jami summa: " << natija << endl;


    //* 2-masala

    long int son;
    int x, y, z;

    cout << "Sonni kiriting: "; cin >> son;

    x = son * son;
    y = x * x;
    z = y * y * x;

    cout << z << endl;

    return 0;
}