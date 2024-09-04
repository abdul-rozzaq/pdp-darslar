#include <iostream>
#include <cmath>


using namespace std;

int main(){

    //* 5 va 6 - misollar

    int n;

    cout << "N: ";
    cin >> n;

    cout << "Kub: " << pow(n, 3) << endl;
    cout << "5-daraja: " << pow(n, 5) << endl << endl;


    //* 7 - misol

    int a, b;

    cout << "A: ";
    cin >> a;
    
    cout << "B: ";
    cin >> b;

    cout << "Yig'indi: " << a + b << endl;
    cout << "Ko'paytma: " << a * b << endl;

    return 0;
}