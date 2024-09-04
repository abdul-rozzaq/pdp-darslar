#include <iostream>
#include <cctype>


using namespace std;

int main(){

    string s;

    cout << "Matnni kiriting: "; cin >> s;


    if (isalpha(s[0]) && isalpha(s[1])) {
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }

    if (isdigit(s[0]) && isdigit(s[1])) {
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }


    if (isdigit(s[0]) && isdigit(s[s.length() - 1])) {
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }


    return 0;
}