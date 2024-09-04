#include <iostream>

using namespace std;

int main(){
    //* 1-masala
    
    long int gb;

    cout << "GB kiriting: "; cin >> gb;

    cout << gb << " gb = " << gb * 1024 * 1024 * 1024 * 8 << " bit" << endl;

    //* 2-masala

    int gb2;

    cout << "GB kiriting: "; cin >> gb2;

    cout << gb2 << " gb = " << (float) gb2 / 1024.0 << endl;

    //* 3-masala

    int gb3;

    cout << "Fleshka hajmini kiriting: "; cin >> gb3;

    cout << gb3 / 2 << " dona kino" << endl;

    return 0;
}