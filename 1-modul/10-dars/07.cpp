#include <iostream>

using namespace std;

int main()
{

    int i = 0, a, b;



    cout << "a sonini kiriting: "; cin >> a;

    while (i < a) {
        cout << a << endl;

        i += 1;
    }


    cout << "a sonini kiriting: "; cin >> a;
    cout << "b sonini kiriting: "; cin >> b;
    i = 0; 

    while (i < b) {
        cout << a << endl;

        i += 1;
    }
    



    cout << "a sonini kiriting: "; cin >> a;
    cout << "b sonini kiriting: "; cin >> b;
    i = 0;

    
    while (i < a) {
        cout << b << endl;

        i += 1;
    }

    return 0;
}