#include <iostream>

using namespace std;

int main()
{
    int soat, minut, sekund, natija;

    cout << "Soat: "; cin >> soat;
    cout << "Minut: "; cin >> minut;
    cout << "Sekund: "; cin >> sekund;

    natija = soat * 60 + minut + sekund / 60;

    cout << "Jami daqiqalar: " << natija << endl;
    return 0;
}
