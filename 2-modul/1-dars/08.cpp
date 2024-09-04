#include <iostream>

using namespace std;

int getUppers(string s);
int getLowers(string s);
int getSymbols(string s);

int main(){

    string s;


    cout << "Satrni kiriting: "; cin >> s;
    
    cout << "Katta harflar soni: " << getUppers(s) << endl;
    cout << "Kichik harflar soni: " << getLowers(s) << endl;
    cout << "Symbollar soni: " << getSymbols(s) << endl;

    return 0;
}

int getUppers(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i])) result += 1;
    }
    
    return result;
}   

int getLowers(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i])) result += 1;
    }
    
    return result;
}   


int getSymbols(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]) && !isalpha(s[i])) result += 1;
    }
    
    return result;
}   