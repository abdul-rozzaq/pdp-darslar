#include <iostream>

using namespace std;


int main() {

    int batteryPercentage = 40;

    if (batteryPercentage <= 20) {
        cout << "Mashinani qayta quvvatlang" << endl;
    } else if (batteryPercentage > 20 && batteryPercentage <= 40){
        cout << "Mashinada kam zaryad miqdori mavjud" << endl;
    } else {
        cout << "Mashinada quvvat miqdori yetarlicha" << endl;
    }



    int n;

    cout << "1 - 999 oralig'ida son kiriting: "; cin >> n;

    
    if (0 < n && n < 1000) {
        
        int x1, x2, x3;

        x1 = n % 10;
        x2 = n % 100 / 10;
        x3 = n % 1000 / 100;

        if (x3 > 0) {
            if (x3 == 1) cout << "bir yuz ";
            if (x3 == 2) cout << "ikki yuz ";
            if (x3 == 3) cout << "uch yuz ";
            if (x3 == 4) cout << "to'rt yuz ";
            if (x3 == 5) cout << "besh yuz ";
            if (x3 == 6) cout << "olti yuz ";
            if (x3 == 7) cout << "yetti yuz ";
            if (x3 == 8) cout << "sakkiz yuz ";
            if (x3 == 9) cout << "to'qqiz yuz ";
        }

        if (x2 > 0) {
            if (x2 == 1) cout << "o'n ";
            if (x2 == 2) cout << "yigirma ";
            if (x2 == 3) cout << "o'ttiz ";
            if (x2 == 4) cout << "qirq ";
            if (x2 == 5) cout << "ellik ";
            if (x2 == 6) cout << "oltmish ";
            if (x2 == 7) cout << "yetmish ";
            if (x2 == 8) cout << "sakson ";
            if (x2 == 9) cout << "to'qson ";
        }
        if (x1 > 0) {
            if (x1 == 1) cout << "bir";
            if (x1 == 2) cout << "ikki";
            if (x1 == 3) cout << "uch";
            if (x1 == 4) cout << "to'rt";
            if (x1 == 5) cout << "besh";
            if (x1 == 6) cout << "olti";
            if (x1 == 7) cout << "yetti";
            if (x1 == 8) cout << "sakkiz";
            if (x1 == 9) cout << "to'qqiz";
        }


        cout << endl;
        
    } else {
        cout << "Xato: son 1 - 999 orasida bo'lishi kerak" << endl;
    }


    
    return 0;
}