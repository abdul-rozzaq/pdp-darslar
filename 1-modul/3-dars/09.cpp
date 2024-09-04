#include <iostream>


using namespace std;


int main() {

    int n1, n2;

    cout << "Birinchi son: "; cin >> n1;
    cout << "Ikkinchi son: "; cin >> n2;

    cout << endl;

    cout << "Yig'indi: " << n1 + n2 << endl;
    cout << "Ayirma: " << n1 - n2 << endl;
    cout << "Ko'paytma: " << n1 * n2 << endl;
    cout << "Bo'linma: " << (float)((float) n1 / (float) n2) << endl;

    return 0;
}