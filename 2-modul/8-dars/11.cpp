#include <iostream>

using namespace std;


string withoutX(string s);

int main(){

    cout << withoutX("xHix") << endl;
    cout << withoutX("xHi") << endl;
    cout << withoutX("Hxix") << endl;

    return 0;
}

string withoutX(string s){
    
    if (s[0] == 'x')
        s.erase(0, 1);
    
    if (s[s.length() - 1] == 'x')
        s.erase(s.length() - 1, 1);

    return s;
}