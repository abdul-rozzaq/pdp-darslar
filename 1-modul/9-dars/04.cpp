#include <iostream>

using namespace std;

int main(){

    int number, x1, x2;

    cout << "Raqam kiriting: "; cin >> number;

    x1 = number % 10;
    x2 = number % 100 / 10;

    switch(x2) {
        case 1:     
            cout << "o'n ";
            break;

        case 2:     
            cout << "yigirma ";
            break;

        case 3:     
            cout << "o'ttiz ";
            break;

        case 4:     
            cout << "qirq ";
            break;

        case 5:     
            cout << "ellik ";
            break;

        case 6:     
            cout << "oltmish ";
            break;

        case 7:     
            cout << "yetmish ";
            break;

        case 8:     
            cout << "sakson ";
            break;

        case 9:     
            cout << "to'qson ";
            break;
    }

    switch(x1) {
        case 1:     
            cout << "bir";
            break;

        case 2:     
            cout << "ikki";
            break;

        case 3:     
            cout << "uch";
            break;

        case 4:     
            cout << "to'rt";
            break;

        case 5:     
            cout << "besh";
            break;

        case 6:     
            cout << "olti";
            break;

        case 7:     
            cout << "yetti";
            break;

        case 8:     
            cout << "sakkiz";
            break;

        case 9:     
            cout << "to'qqiz";
            break;
        }

    cout << endl;
    
    return 0;
}



