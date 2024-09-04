#include <iostream>

using namespace std;

int main()
{

    int a, kopaytma = 1, yigindi = 0;

    while (a != 0)
    {
        cout << "Sonni kiriting: "; cin >> a;


        if (a != 0){
            kopaytma *= a;
            yigindi += a;
        }
    }


    cout << "Yigindi " << yigindi << endl;
    cout << "Ko'paytma " << kopaytma << endl;

    return 0;
}