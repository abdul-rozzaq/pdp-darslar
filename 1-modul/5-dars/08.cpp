#include <iostream>

using namespace std;


int main(){
    
    //* 1-masala

    int a, b, c;

    cout << "Patrikdagi pulni kiriting: "; cin >> a;
    cout << "Juliadagi pulni kiriting: "; cin >> b;
    
    c = (a - b) / 2;

    cout << "Berishi kerak bo'lgan pul: " << c << endl;
    
    //* 2-masala

    int km, m, natija;

    cout << "Km: "; cin >> km;
    cout << "M: "; cin >> m;

    natija = (km * 1000 + m) * 10;

    cout << "Natija: " << natija << endl;

    return 0;
}