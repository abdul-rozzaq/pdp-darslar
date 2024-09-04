#include <iostream>
#include <cctype>


using namespace std;



void fn1(int a, int b){
    for (int i = a + 1; i < b; i++)
    {
        if (a % 5 == 0 || a % 6 == 0)
            cout << i << " ";
    }
    

    cout << endl;
}

void fn2(string s){
    for (char i : s)
    {
        if (isupper(i))
            cout << i << " ";
    }

    cout << endl;
}


void fn3(string s){
    for (char i : s)
    {
        if (isalpha(i))
            cout << i << " ";
    }

    cout << endl;
}



int main(){


    int a = 13, b = 78;

    string s = "SaLoM Mening IsmIm $$$#@@#$@#*(&$*@(#&$*)) AbDuRazzoq";

    fn1(a, b);
    fn2(s);
    fn3(s);

    return 0;
}