#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "A sonni kiriting: "; cin >> a;
    
    while (a >= 3)
    {
        a -= 3;
    }

    if (a == 0)
        cout << "3 ning darajasi" << endl;
    else
        cout << "3 ning darajasi emas" << endl;

    return 0;
}