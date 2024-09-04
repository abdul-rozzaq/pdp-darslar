#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int son;


    cout << "Sonni kiriting: ";
    cin >> son;

    cout << (son > 0 ? "Natural son" : "Natural son emas") << endl;
    cout << "Kvadrat ildiz " << sqrt(son) << endl;
    cout << "Kub ildiz " << cbrt(son) << endl;

    return 0;
}