#include <iostream>

using namespace std;



void fn1(string s){
    for (auto &&i : s)
    {
        if (!isalnum(i))
            cout << i << " ";
    }

    cout << endl;
}


void fn2(int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << n << " ";
    }
    
    cout << endl;
}






int main(){

    string s = "SaLoM Mening IsmIm $$$#@@#$@#*(&$*@(#&$*)) AbDuRazzoq";

    fn1(s);
    fn2(10);

    return 0;
}