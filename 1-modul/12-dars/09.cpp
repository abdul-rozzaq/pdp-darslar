#include <iostream>


using namespace std;



int main(){
    
    cout << "1 dan 100 gacha tub sonlar" << endl;

    for (int i = 0; i < 100; i++)
    {
        bool is_tub = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0){
                is_tub = false;
                break;
            } 
        }

        if (is_tub)
            cout << i << " ";
    
    }

    cout << endl;




    int a, b;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    for (int i = a; i < b; i++)
    {
        bool is_tub = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0){
                is_tub = false;
                break;
            } 
        }

        if (is_tub)
            cout << i << " ";
    
    }

    cout << endl;

    return 0;
}