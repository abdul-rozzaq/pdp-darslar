#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e, result=0, sum=0;

    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;
    cout << "5 - sonni kiriting: "; cin >> e;

    if (a % 2 == 0) {
        result += 1;
        sum += a;
    }
    if (b % 2 == 0) {
        result += 1;
        sum += b;
    }
    if (c % 2 == 0) {
        result += 1;
        sum += c;
    }
    if (d % 2 == 0) {
        result += 1;
        sum += d;
    }
    if (e % 2 == 0) {
        result += 1;
        sum += e;
    }

    cout << result << " ta juft son bor. Yig'indi: " << sum << endl;




    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;
    cout << "5 - sonni kiriting: "; cin >> e;

    result = 0;

    if (a > 9 && a < 100) result += 1;
    if (b > 9 && a < 100) result += 1;
    if (c > 9 && a < 100) result += 1;
    if (d > 9 && a < 100) result += 1;
    if (e > 9 && a < 100) result += 1;

    cout << result << " ta 2 xonali son bor" << endl;

    return 0;
}