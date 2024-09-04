#include <iostream>

using namespace std;


int main() {
    int week_number;


    cout << "Hafta raqamini kiriting: "; cin >> week_number;

    switch(week_number) {
        case 1:
            cout << "Yanvar" << endl;
            break;
        case 2:
            cout << "Fevral" << endl;
            break;
        case 3:
            cout << "Mart" << endl;
            break;
        case 4:
            cout << "Aprel" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "Iyun" << endl;
            break;
        case 7:
            cout << "Iyul" << endl;
            break;
        case 8:
            cout << "Avgust" << endl;
            break;
        case 9:
            cout << "Sentyabr" << endl;
            break;
        case 10:
            cout << "Oktyabr" << endl;
            break;
        case 11:
            cout << "Noyabr" << endl;
            break;
        case 12:
            cout << "Dekabr" << endl;
            break;
        default:
            cout << "Bunday oy mavjud emas!" << endl;
            break;
    }



    return 0;
}
