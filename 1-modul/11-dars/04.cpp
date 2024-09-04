#include <iostream>

using namespace std;

int main()
{
    int a, b, count = 0;

    cout << "A va B sonlarini kiriting: "; cin >> a >> b;

    cout << "1. ";

    for (int i = a; i < b; i++)
    {
        if (i % 10 == 0)
            count += 1;    
    }
    
    
    cout << a << " va " << b << " oralig'ida " << count << " ta 10 ga karrali son mavjud." << endl << endl;


    cout << "A va B sonlarini kiriting: "; cin >> a >> b;

    cout << "2. ";

    for (int i = b; i > a; i--)
    {
        if (i % 7 == 0 || i % 8 == 0)
            cout << i << " ";    
    }
    
    cout << endl;

    cout << "3. ";

    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";    
    }
    
    cout << endl;


    return 0;
}