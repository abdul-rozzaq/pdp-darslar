#include <iostream>

using namespace std;

bool is_tub(int number);

int main(){

    int a, b;
    string exp;


    cout << "A: "; cin >> a;

    exp = is_tub(a) ? "true" : "false";

    cout << exp << endl << endl;


    
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    if (is_tub(a) && is_tub(b)){
        cout << a + b << endl;        
    } else {
        cout << a * b << endl;
    }


    return 0;
}

bool is_tub(int number){
    
    int i = 2;

    while (i < number){
        if (number % i == 0) return false;

        i += 1;
    }
    
    return true;
}