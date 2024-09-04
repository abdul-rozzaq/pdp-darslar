#include <iostream>
#include <cctype>

using namespace std;

string textToLower(string s){
    
    for (char &i: s)
    {
        i = tolower(i);
    }
    
    return s; 
}

string textToUpper(string s){
    
    for (char &i: s)
    {
        i = toupper(i);
    }
    
    return s; 
}


int getOkCount(string s){
    int count = 0;


    for (int i = 0; i < s.length(); i++)
    {   
        if (s[i] == 'o' && s[i + 1] == 'k')
            count += 1;
    }

    
    return count;
}

int main(){

    cout << textToLower("AbCDEf") << endl;
    cout << textToUpper("AbCDEf") << endl;

    cout << getOkCount("ok salom ok") << endl;

    return 0;
}