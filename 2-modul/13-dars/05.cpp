#include <iostream>

using namespace std;


string reverseText(string text)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        result = text[i] + result;
    }
    
    return result;
}


int main()
{
    string s="qwweww";

    string result = "";


    for (int i = 1; i < s.length(); i += 2)
    {
        result += s[i];
    }
    
    cout << (result == reverseText(result) ? "PDP" : "ACADEMY") << endl;

    return 0;
}



