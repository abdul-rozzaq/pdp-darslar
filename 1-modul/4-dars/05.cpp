#include <iostream>


using namespace std;


int main(){
    //* 1-masala

    int main;

    cout << "4 xonali son kiriting: "; cin >> main;

    int x2, x4;

    x2 = main % 100 / 10;
    x4 = main / 1000;

    cout << main - (x2 * 10 + x4 * 1000) + (x2 * 1000 + x4 * 10) << endl;

    //* 2-masala

    int gb;

    cout << "GB kiriting: "; cin >> gb;

    cout << gb << " gb = " << gb * 1024 << " mb" << endl;

    return 0;
}