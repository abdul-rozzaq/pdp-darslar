#include <iostream>

using namespace std;


int calculate(int a, int b);
int calculate(int a, int b, int c);

int getAmountDigit(int number);
int getAmountDigit(string text);


int main(){

    cout << calculate(4, 5) << endl;
    cout << calculate(4, 5, 9) << endl;

    cout << getAmountDigit(17890) << endl;
    cout << getAmountDigit("ASD8797878AS") << endl;

    return 0;
}


int getAmountDigit(int number)
{

    if (number == 0) return 0;

    return 1 + getAmountDigit(number / 10);
}

int getAmountDigit(string text){
    int count = 0;


    for (char i: text){
        if (isdigit(i))
            count += 1;
    }

    return count; 
}


int calculate(int a, int b)
{
    return a + b;
}

int calculate(int a, int b, int c)
{
    return a * b * c;
}