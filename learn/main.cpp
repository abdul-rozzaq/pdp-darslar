#include <iostream>
#include <cmath>

using namespace std;

// float Add(float son1, float son2)
// {
//     return son1 + son2;
// }

// float Add(float son1, float son2, float son3)
// {
//     return son1 + son2 + son3;
// }
 
// string Add(string text1, string text2)
// {
//     return text1 + text2;
// }




void repeat(int a, int b){
    for (int i = 0; i < b; i++)
    {
        cout << a << " ";
    }
    
    cout << endl;
}

void repeat(int a){
    for (int i = 0; i < a; i++)
    {
        cout << a << " ";
    }
    
    cout << endl;
}



// int calculate(int a, int b)
// {
//     return a + b;
// }

// int calculate(int a, int b, int c)
// {
//     return a * b * c;
// }



int calcRange(int a,  int b)
{

    if (a == b) return 0;

    return a + calcRange(a + 1, b);
}



int calcNumbersSum(int number){

    if (number == 0) return 0;

    return number % 10 + calcNumbersSum(number / 10);
}


int calcRangePower(int n){
    if (n == 1) return 1;

    return pow(n, 2) + calcRangePower(n - 1);
}

int main(){


    cout << calcNumbersSum(1234) << endl;

    cout << calcRange(4, 8) << endl;

    cout << calcRangePower(7) << endl;
    
    return 0;
}