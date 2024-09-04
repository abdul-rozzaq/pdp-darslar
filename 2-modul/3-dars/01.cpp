#include <iostream>
#include <cmath>

using namespace std;

void maxMin(int a, int b, int c, int d, int e)
{
    int mx = max(a, max(b, max(c, max(d, e))));
    int mn = min(a, min(b, min(c, min(d, e))));

    cout << "Max number: " << mx << endl;
    cout << "Min number: " << mn << endl;
}

void sum(int a, int b, int c, int d, int e)
{
    int kupaytma = a * b * c * d * e;
    int yigindi = a + b + c + d + e;

    cout << "Sonlar ko'paytmasi: " << kupaytma << endl;
    cout << "Sonlar yig'indisi: " << yigindi << endl;
}

int main()
{

    int a = 1,
        b = 8,
        c = 9,
        d = 5,
        e = 10;

    maxMin(a, b, c, d, e);
    sum(a, b, c, d, e);

    return 0;
}
