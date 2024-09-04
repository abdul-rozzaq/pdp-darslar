#include <iostream>
#include <cmath>

using namespace std;


int main(){

    float price;

    cout << "1 kg konfet narxini kiriting: "; cin >> price;

    for(int i=1; i<=10; i++){
        float kg = i * 0.1 + 1;

        cout << kg << " kg: " << kg * price << endl;
    }




    int n;

    cout << "N: sonini kiriting: "; cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << i << " ning ildizi " << sqrt(i) << " ga teng" << endl;
    }
    


    return 0;
}