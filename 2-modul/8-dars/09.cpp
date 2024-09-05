#include <iostream>

using namespace std;


string minCat(string s, string x);

int main(){

    cout << minCat("Hello", "Hi") << endl;
    cout << minCat("Hello", "java") << endl;
    cout << minCat("java", "Hello") << endl;

    return 0;
}

string minCat(string s, string x){
    if (s.length() == x.length())
        return s + x;
        
    return s.length() > x.length() ? s.substr(s.length() - x.length()) + x : s + x.substr(x.length() - s.length());
}