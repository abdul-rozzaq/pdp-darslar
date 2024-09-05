#include <iostream>

using namespace std;


string conCat(string s, string x);

int main(){

    
    cout << conCat("abc", "cat") << endl;
    cout << conCat("dog", "cat") << endl;
    cout << conCat("abc", "") << endl;

    return 0;
}

string conCat(string s, string x){
    return s[s.length() - 1] == x[0] ? s + x.substr(1) : s + x;
}