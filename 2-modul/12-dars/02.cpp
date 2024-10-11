#include <iostream>

using namespace std;

string cut(string text, int n) {
    return text.substr(text.length() - n);
}



int main(){

    cout << cut("salom", 3) << endl;
    
    return 0;
}