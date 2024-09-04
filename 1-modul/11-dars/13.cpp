#include <iostream>

using namespace std;


int main(){


    int n=2, k=10, result=1;

    // cout << "N va K sonlarini kiriting: "; cin >> n >> k;


    for(int i=1; i <= k; i++){
        result *= n;        
    }

    cout << n << " ning " << k << "-darajasi " << result << "ga teng" << endl;

    return 0;
}