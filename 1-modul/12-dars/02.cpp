#include <iostream>

using namespace std;

int main()
{

    int a, i, toq = 0, juft = 0;

    cout << "A: "; cin >> a;

    i = a;
    while (i > 0)
    {
        int xona = i % 10;

        if (xona % 2 == 0) 
            juft += 1;
        else
            toq += 1;

        i /= 10;
    }


    cout << a << " sonida " << toq << " ta toq va " << juft << " ta juft mavjud" << endl;

    return 0;
}