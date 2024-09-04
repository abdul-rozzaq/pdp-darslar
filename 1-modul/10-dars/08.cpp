#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "a sonini kiriting: ";
    cin >> a;

    int i = 1;
    int count = 0;
    int sum = 0;

    cout << a << " sonining bo'luvchilari: ";
    while (i <= a) {
        if (a % i == 0) {
            cout << i << " ";
            count++;
            sum += i;
        }
        i++;
    }
    cout << endl;

    cout << a << " sonining bo'luvchilari miqdori: " << count << endl;

    cout << a << " sonining bo'luvchilari yig'indisi: " << sum << endl;

    return 0;
}
