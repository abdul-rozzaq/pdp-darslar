#include <iostream>


using namespace std;



int main(){
    
    int a;

    cout << "A: "; cin >> a;

    for (int i = 0; i < a; i++)
    {
     
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a-1) {
                cout << "* ";
            }
        }

        cout << endl;
    }



    cout << "A: "; cin >> a;

    for (int i = 0; i < a; i++)
    {
     
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a -  1)
                cout << "* ";
            else if (j == 0 || j == a - 1)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}