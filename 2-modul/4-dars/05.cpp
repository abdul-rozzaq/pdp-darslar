#include <iostream>
#include <cmath>

using namespace std;


int getSum(int);


int main(){

    int number;


    cout << "Sonni kiriting: "; cin >> number;

    cout << getSum(number) << endl;
    
    return 0;
}


int getSum(int n)
{
    if (n == 1) return 1;

    return pow(n, 3) + getSum(n - 1);
}
