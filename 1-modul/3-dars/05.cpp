#include <iostream>

using namespace std;

int main(){

    cout << "1-masala" << endl << endl;

    int soat;
    cout << "Soat: "; cin >> soat;

    int sekund = soat * 3600;
    cout << "Sekund: " << sekund << endl << endl;

    cout << "2-masala" << endl << endl;

    int kun;
    cout << "Kun: "; cin >> kun;

    int minut = kun * 1440;
    cout << "Minut: " << minut << endl << endl;

    cout << "3-masala" << endl << endl;

    cout << "Minut: "; cin >> minut;

    soat = minut / 60;
    cout << "Soat: " << soat << endl << endl;

    cout << "4-masala" << endl << endl;

    cout << "Minut: "; cin >> minut;

    kun = minut / 1440;
    cout << "Kun: " << kun << endl;

    return 0;
}
