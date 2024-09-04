#include <iostream>

using namespace std;


int getNumbersOfDigit(int number);
int sum(int, int);

int main(){

    cout << getNumbersOfDigit(78) << endl;
    cout << sum(7, 9) << endl;
    
    return 0;
}



int getNumbersOfDigit(int number)
{

    if (number == 0) return 0;

    return 1 + getNumbersOfDigit(number / 10);
}

int sum(int a, int b)
{
    if (a == b) return 0;


    return a + sum(a + 1, b);
}