


#include <iostream>

using namespace std;

string getReverced(string s){
    string revercedText = "";

    for (char i : s) {
        revercedText = i + revercedText;
    }

    return revercedText;
}


bool isPalindrome(string s){
    
    string revercedText = getReverced(s);

    return s == revercedText;
}

bool getIsNumber(string s){
    
    for (char i: s){
        if (!isdigit(i))
            return false;
    }
    

    return true;
}


int main(){

    string text;

    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << getReverced(text) << endl;

    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << (isPalindrome(text) ? "Palindrom matn" : "Palindrom emas") << endl;

    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << (getIsNumber(text) ? "true" : "false") << endl;

    return 0;
}