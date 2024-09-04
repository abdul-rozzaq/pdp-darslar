#include <iostream>

using namespace std;

int main()
{

    int a, count = 0, sum = 0;

    cout << "A sonini kiriting: ";
    cin >> a;

    for (int i = 1; i < a; i += 1)
    {
        if (a % i == 0)
        {
            cout << i << " ";
            count += 1;
            sum += i;
        }
    }
    cout << endl;

    cout << a << " sonining bo'luvchilar miqdori " << count << endl;
    cout << a << " sonining bo'luvchilar yig'indisi " << sum << endl;

    return 0;
}