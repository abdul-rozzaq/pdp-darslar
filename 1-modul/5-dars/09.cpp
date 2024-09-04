#include <iostream>

using namespace std;


int main(){

    long int number, a, b, c, natija;
 
    cout << "Number: "; cin >> number;

    a = number * number;
    b = a * a;
    c = b * number;
    natija = c * c * c; 

    cout << natija << endl;

    return 0;
}
