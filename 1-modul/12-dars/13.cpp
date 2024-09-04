#include <iostream>


using namespace std;



int main(){
    
    int n = 5, b = -1;

    cout << "N: "; cin >> n;

    for (int i = 0; i < n; i++)
    {
    
        for (int j = 0; j < n; j++)
        {
            (j > b) ? cout << "* ": cout << "  ";
        }   

        b += 1;
        cout << endl;
    }

    cout << endl;

    cout << "N: "; cin >> n;


    for (int i = 1; i <= n; i++)
    {
    
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }   

        cout << endl;
    }



    return 0;
}