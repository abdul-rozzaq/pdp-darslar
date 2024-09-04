#include <iostream>

using namespace std;

int main()
{

    int a, count = 0, count2 = 0;

    while (a != 0)
    {
        cout << "Sonni kiriting: "; cin >> a;


        if (a != 0) count += 1;
        if (a > 10) count2 += 1;
    }


    cout << count << " ta son kiritildi " << endl;
    cout << "10 dan katta sonlar " << count2 << " ta" << endl;

    return 0;
}