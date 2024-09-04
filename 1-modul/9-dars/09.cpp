#include <iostream>

using namespace std;


int main() {

    int amount;
    char valyuta;



    cout << "Pul miqdorini kiriting: "; cin >> amount;
    cout << "Valyuta turi [d, y, r]: "; cin >> valyuta;
    

    switch(valyuta) {
        case 'd':
            cout << (float)amount / 12688.0 << endl;
            break;
        
        case 'r':
            cout << (float)amount / 138.0 << endl;
            break;
        
        case 'y':
            cout << (float)amount / 14106.0 << endl;
            break;
        
        default:
            cout << "Bunday valyuta mavjud emas" << endl;        
    }

    return 0;
}