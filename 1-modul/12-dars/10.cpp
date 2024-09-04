#include <iostream>


using namespace std;



int main(){
    
    int a;

    cout << "A: "; cin >> a;

    for (int i = 0; i < a; i++)
    {
     
        for (int j = 0; j < a; j++)
        {
            cout << "* "; 
        }

        cout << endl;
    }


    cout << "A: "; cin >> a;

    for (int i = 0; i < a; i++)
    {
     
        for (int j = 0; j < a; j++)
        {

            (j == 0 || j == a-1) ? cout << "*": cout << "  ";
        }

        cout << endl;
    }

    return 0;
}