#include <iostream>

using namespace std;


int main() {

    int number;


    cout << "Fasl raqamini kiriting: "; cin >> number;


    switch(number) {
        case 1:
            cout << "Qish" << endl;
            break;
        
        case 2:
            cout << "Bahor" << endl;
            break;
        
        case 3:
            cout << "Yoz" << endl;
            break;
        
        case 4:
            cout << "Kuz" << endl;
            break;

        default:
            cout << "Bunday fasl mavjud emas" << endl;        
    }

    return 0;
}