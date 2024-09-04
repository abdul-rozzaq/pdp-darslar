#include <iostream>

using namespace std;

int main()
{

    int haftalar, soatlar, minutlar, natija;

    //* 1 - misol

    cout << "Haftalar sonini kiriting: ";
    cin >> haftalar;
    
    cout << "Soatlar sonini kiriting: ";
    cin >> soatlar;

    natija = haftalar * 7 + soatlar / 24;

    cout << "Jami kunlar: " << natija << endl;

    //* 2 - misol

    cout << "Soatlar sonini kiriting: ";
    cin >> soatlar;

    cout << "Minutlar sonini kiriting: ";
    cin >> minutlar;

    natija = soatlar * 3600 + minutlar * 60;

    cout << "Sekundlar: " << natija << endl;
    
    return 0;
}