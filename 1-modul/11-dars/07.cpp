#include <iostream>

using namespace std;

int main()
{
    
    int a, b;


    cout << "A sonini kiriting: "; cin >> a;

    for (int i = 0; i < a; i += 1)
    {
        cout << a << endl;
    }
    
    
    
    cout << "A va B sonini kiriting: "; cin >> a >> b;

    for (int i = 0; i < b; i += 1)
    {
        cout << a << endl;
    }



    cout << "A va B sonini kiriting: "; cin >> a >> b;

    for (int i = 0; i < a; i += 1)
    {
        cout << b << endl;
    }
    

    return 0;
}