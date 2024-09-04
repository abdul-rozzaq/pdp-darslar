#include <iostream>


using namespace std;


int main(){

    //* 1-masala
    cout << "1-masala" << endl << endl;

    float n1, n2, n3, n4, n5, n6, n7, n8; 

    cout << "N1: "; cin >> n1;
    cout << "N2: "; cin >> n2;
    cout << "N3: "; cin >> n3;
    cout << "N4: "; cin >> n4;
    cout << "N5: "; cin >> n5;
    cout << "N6: "; cin >> n6;
    cout << "N7: "; cin >> n7;
    cout << "N8: "; cin >> n8;

    cout << "Natija: " << (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8 << endl << endl;


    //* 2-masala
    cout << "2-masala" << endl << endl;


    int a, b, c;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "A: " << a << ' ' << "B: " << b;


    //* 3-masala
    cout << "3-masala" << endl << endl;

    int minut;

    cout << "Minut: "; cin >> minut;

    cout << "Sekund: " << minut * 60 << endl;

    return 0;
}