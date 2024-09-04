#include <iostream>

using namespace std;

int main() {

    int sugar_price = 7000, i=3, count=0, n;

    while (i <= 60) {
        cout << i << " kg shakar narxi " << sugar_price * i << " so'm" << endl;


        i += 1;
    }

    cout << endl << endl;

    i = 23;

    cout << "N sonni kiriting: "; cin >> n;

    while(i < n) {

        if (i % 3 != 0){
            count += 1;

            cout << i << " ";
        }

        i += 1;
    }

    cout << endl << "Count: " << count << endl;

    return 0;
}