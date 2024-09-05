#include <iostream>

using namespace std;


string nTwice(string s, int n);

int main(){

    
    cout << nTwice("Hello", 2) << endl;
    cout << nTwice("Chocolate", 3) << endl;
    cout << nTwice("Chocolate", 1) << endl;


    return 0;
}

string nTwice(string s, int n){
    return s.substr(0, n) + s.substr(s.length() - n);
}