#include <iostream>

using namespace std;

int main()
{

    int baytlar, natija;

    //* 1 - misol

    cout << "Baytlar sonini kiriting: ";
    cin >> baytlar;
    
    natija = baytlar / 1024;

    cout << "Jami kilobaytlar: " << natija << endl;

    //* 2 - misol

    float data_size = 1.8;

    int internet_speed = 750;

    cout << data_size * 1024.0 * 1024.0 / (float) internet_speed << " s" << endl;

    return 0;
}