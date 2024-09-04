#include <iostream>

using namespace std;

int getDigits(string s);
int getAlpha(string s);


int main(){

    string s;

    cout << "Satrni kiriting: "; cin >> s;
    cout << (isupper(s[0]) && islower(s[s.length() - 1]) ? "HARF" : "HARFEMAS") << endl;



    cout << "Satrni kiriting: "; cin >> s;
    cout << "Raqamlar soni: " << getDigits(s) << endl;
    cout << "Harflar soni: " << getAlpha(s) << endl;

    return 0;
}

int getDigits(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i])) result += 1;
    }
    
    return result;
}   

int getAlpha(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i])) result += 1;
    }
    
    return result;
}   