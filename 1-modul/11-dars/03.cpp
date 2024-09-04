#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "A va B sonlarini kiriting: "; cin >> a >> b;

    cout << "1. ";

    for (int i = a; i < b; i++)
    {
        if (i % 3 == 0)
            cout << i << " ";    
    }
    
    cout << endl << endl;


    cout << "A va B sonlarini kiriting: "; cin >> a >> b;

    cout << "2. ";

    for (int i = a; i < b; i++)
    {
        if (i % 5 == 0 && i % 6 == 0)
            cout << i << " ";    
    }
    
    cout << endl;

    return 0;
}