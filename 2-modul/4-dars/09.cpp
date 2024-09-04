#include <iostream>

using namespace std;



char toLower(char ch){
    if ('A' <= ch && ch <= 'Z')
        return ch + ('a' - 'A');

    return ch;
}   

int myPower(int number, int pw){
    if (pw == 1) return number;

    return number * myPower(number, pw - 1);
}



int main(){

    cout << toLower('C') << endl;
    cout << toLower('8') << endl;
    cout << toLower('S') << endl;

    cout << myPower(2, 5) << endl;
    cout << myPower(2, 10) << endl;

    return 0;
}