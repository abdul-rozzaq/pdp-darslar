#include <iostream>

using namespace std;



bool isDigit(char ch)
{
    return 48 <= ch && ch < 57;
}

bool isLower(char ch)
{
    return 97 <= ch && ch < 123;
}


int main(){

    cout << boolalpha << isDigit('x') << endl;
    cout << boolalpha << isDigit('@') << endl;
    cout << boolalpha << isDigit('5') << endl;
    
    cout << boolalpha << isLower('x') << endl;
    cout << boolalpha << isLower('@') << endl;
    cout << boolalpha << isLower('5') << endl;
    

    return 0;
}