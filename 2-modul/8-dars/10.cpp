#include <iostream>

using namespace std;


string deFront(string s);

int main(){

    cout << deFront("Hello") << endl;
    cout << deFront("java") << endl;
    cout << deFront("away") << endl;

    return 0;
}

string deFront(string s){
    
    if (s[0] != 'a')
        s.erase(0, 1);
    
    if (s[0] != 'b')
        s.erase(0, 1);

    return s;
}