#include <iostream>

using namespace std;

int main()
{

    int a, sum=0, count=0;

    while (a != 0)
    {
        cout << "Sonni kiriting: "; cin >> a;

        if (a != 0 && a > 50){
            sum += a;            
        }
    }

    cout << "50 dan kattalar yig'indisi " << sum << endl;


    while (a % 2 == 0)
    {
        cout << "Sonni kiriting: "; cin >> a;

        if (a % 2 == 0){
            count += 1;            
        }
    }

    cout << "Toq sonlar miqdori " << count << endl;

    return 0;
}