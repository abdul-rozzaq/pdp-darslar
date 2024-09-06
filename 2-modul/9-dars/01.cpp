#include <iostream>

using namespace std;


int main(){


    string s1 = "foundation";
    string s2 = "test";

    int n1 = 3;
    int n2 = 2;

    string natija = s1.substr(0, n1) + s2.substr(s2.length() - n2);
    
    cout << natija << endl;


    return 0;
}