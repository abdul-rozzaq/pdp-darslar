#include <iostream>

using namespace std;


int main() {
    int week_number;


    cout << "Hafta raqamini kiriting: "; cin >> week_number;

    switch(week_number) {
        case 1:
            cout << "Dushanba" << endl;
            break;
        case 2:
            cout << "Seshanba" << endl;
            break;
        case 3:
            cout << "Chorchanba" << endl;
            break;
        case 4:
            cout << "Payshanba" << endl;
            break;
        case 5:
            cout << "Juma" << endl;
            break;
        case 6:
            cout << "Shanba" << endl;
            break;
        case 7:
            cout << "Yakshanba" << endl;
            break;
        default:
            cout << "Bunday hafta kuni mavjud emas!" << endl;
            break;
    }

    return 0;
}
