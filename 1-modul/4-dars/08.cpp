#include <iostream> 


using namespace std;


int main(){

    int son, x1, x2, x3, natija;

    cout << "Sonni kiriting: "; cin >> son;

    
    x1 = son % 10;
    x2 = son % 100 / 10;
    x3 = son / 100;

    natija = x2 * 100 + x1 * 10 + x3;

    cout << natija << endl;

    return 0;
}