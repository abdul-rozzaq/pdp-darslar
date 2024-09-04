#include <iostream>

using namespace std;

int main()
{

    int a;
    string msg1="5 soni yo'q", msg2="juft raqam yo'q";

    cout << "A sonni kiriting: "; cin >> a;
    
    while (a > 0)
    {
        int xona = a % 10;

        if (xona == 5) msg1 = "5 raqami bor";

        if (xona % 2 == 0) msg2 = "juft raqam bor";

        a /= 10;
    }

    cout << msg1 << endl;
    cout << msg2 << endl;

    return 0;
}