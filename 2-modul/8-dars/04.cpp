#include <iostream>

using namespace std;


string extraEnd(string s);


int main(){

    
    cout << extraEnd("Hello") << endl;
    cout << extraEnd("ab") << endl;
    cout << extraEnd("Hi") << endl;


    return 0;


}

string extraEnd(string s)
{
    string result = s.substr(s.length() - 2);

    return result + result + result;
}