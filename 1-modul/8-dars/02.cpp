#include <iostream>

using namespace std;


int main() {

    int number;
    string xona, turi;



    cout << "Sonni kiriting: "; cin >> number;

    if (number != 0) {
        turi = number > 0 ? "musbat" : "manfiy";

        if (10 > number && number > -10) {
            xona = "bir";
        } else if (100 > number && number > -100) {
            xona = "ikki";
        } else if (1000 > number && number > -1000) {
            xona = "uch";
        }

        cout << xona << " xonali " << turi << endl;
    } else {
        cout << "nol soni";
    }




    cout << "Sonni kiriting: "; cin >> number;

    if (number != 0) {
        turi = number % 2 == 0 ? "juft" : "toq";

        if (10 > number) {
            xona = "bir";
        } else if (100 > number) {
            xona = "ikki";
        } else if (1000 > number) {
            xona = "uch";
        } else {
            xona = "to'rt";
        }

        cout << xona << " xonali " << turi << endl;
    } else {
        cout << "nol soni";
    }



    return 0;
}