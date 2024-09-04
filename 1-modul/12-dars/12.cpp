#include <iostream>


using namespace std;



int main(){
    
    int n, b = 0;

    cout << "A: "; cin >> n;

    for (int i = 0; i < n; i++)
    {
    
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
                cout << "* ";
            else if (j == b && i != 0)
                cout << "* ";
            else
                cout << "  ";
        }   
        b += 1;
        cout << endl;
    }


    cout << "A: "; cin >> n;
    
    b = 0;

    for (int i = 0; i < n; i++)
    {
    
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
                cout << "* ";
            else if (j == b && i != 0)
                cout << "* ";
            else
                cout << "  ";
        }   
        b += 1;
        cout << endl;
    }


    return 0;
}