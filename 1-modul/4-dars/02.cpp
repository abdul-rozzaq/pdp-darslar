#include <iostream>

using namespace std;


int main(){


    //* 1-masala


    int n1;
    cout << "5 xonali son kiriting: "; cin >> n1;

    int minglar = n1 / 1000 % 10;

    cout << "Minglar: " << minglar << endl;
    
    
    //* 2-masala

    int n2;
    cout << "4 xonali son kiriting: "; cin >> n2;

    int yuzlar = n2 / 100 % 10;

    cout << "Yuzlar: " << yuzlar << endl;


    //* 3-masala

    int n3;

    cout << "3 xonali son kiriting: "; cin >> n3;

    int b = n3 % 10;
    int o = n3 % 100 / 10;
    int y = n3 / 100;

    int natija = b + o + y;

    cout << "Natija: " << natija << endl;

    return 0;
}