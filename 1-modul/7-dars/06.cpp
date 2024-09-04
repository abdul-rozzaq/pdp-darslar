#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e, result;
    int x1, x2, x3, x4;

    cout << "4 xonali son kiriting: "; cin >> a;

    x1 = a % 10;
    x2 = a % 100 / 10;
    x3 = a % 1000 / 100;
    x4 = a % 10000 / 1000;

    result = 0;

    if (x1 % 2 == 0) result += 1;
    if (x2 % 2 == 0) result += 1;
    if (x3 % 2 == 0) result += 1;
    if (x4 % 2 == 0) result += 1;

    cout << a << " tarkibida " << result << " ta juft raqam bor" << endl;



    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;
    cout << "5 - sonni kiriting: "; cin >> e;

    result = 0;

    if (a % 2 == 0) result += 1;
    if (b % 2 == 0) result += 1;
    if (c % 2 == 0) result += 1;
    if (d % 2 == 0) result += 1;
    if (e % 2 == 0) result += 1;

    cout << result << " ta juft son bor" << endl;



    cout << "1 - sonni kiriting: "; cin >> a;
    cout << "2 - sonni kiriting: "; cin >> b;
    cout << "3 - sonni kiriting: "; cin >> c;
    cout << "4 - sonni kiriting: "; cin >> d;
    cout << "5 - sonni kiriting: "; cin >> e;

    result = 0;

    if (a > 0) result += 1;
    if (b > 0) result += 1;
    if (c > 0) result += 1;
    if (d > 0) result += 1;
    if (e > 0) result += 1;

    cout << result << " ta musbat son bor" << endl;


    return 0;
}