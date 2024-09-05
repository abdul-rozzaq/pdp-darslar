#include <iostream>

using namespace std;


char theEnd(string s, bool front);


int main(){

    
    cout << theEnd("Hello", true) << endl;
    cout << theEnd("Hello", false) << endl;
    cout << theEnd("oh", true) << endl;


    return 0;
}

char theEnd(string s, bool front)
{
    return (front ? s[0] : s[s.length() - 1]);
}