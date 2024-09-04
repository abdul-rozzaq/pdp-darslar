#include <iostream>

using namespace std;

int cMax(int a, int b){
    return a > b ? a : b;
}

int cAbs(int a){
    return a > 0 ? a : a + (0 - a) * 2;
}


int main(){
    
    cout << cMax(1000, 98) << endl;

    cout << cAbs(-2) << endl;
    cout << cAbs(-98) << endl;
    cout << cAbs(64) << endl;
    cout << cAbs(0) << endl;

    return 0;
}
