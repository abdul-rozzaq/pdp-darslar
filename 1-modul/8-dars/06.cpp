#include <iostream>

using namespace std;


int main() {

    int day, amount;

    cout << "Kun: "; cin >> day;
    cout << "Jarima miqdori: "; cin >> amount;

    if (day <= 3) {
        amount = amount - (amount / 100 * 10);
    } else if (day > 15) {
        amount = amount + (amount / 100 * 15);
    }

    cout << "Jarima miqdori: " << amount << endl;

    
    
    float n;

    cout << "Issiqxona haroratini kiriting: ";
    cin >> n;

    if (n > 25.0) {
        cout << "Oynalar ochilsin" << endl;
    } else if (n < 25.0) {
        cout << "Oynalar yopilsin" << endl;
    } else {
        cout << "Harorat 25^0, hech narsa qilinmaydi" << endl;
    }

    return 0;
}