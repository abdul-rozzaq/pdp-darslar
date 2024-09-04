#include <iostream>

using namespace std;


int main() {

    int number;

    cout << "Oy tartib raqamini kiriting: "; cin >> number;


    switch(number) {
        case 12: 
        case 1: 
        case 2:
            cout << "Qish" << endl;
            break;
        case 3: 
        case 4: 
        case 5: 
            cout << "Bahor" << endl;
            break;
        case 6: 
        case 7: 
        case 8: 
            cout << "Yoz" << endl;
            break;
        case 9: 
        case 10: 
        case 11: 
            cout << "Kuz" << endl;
            break;
    }

    return 0;

}