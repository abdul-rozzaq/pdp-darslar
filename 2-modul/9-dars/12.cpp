#include <iostream>

using namespace std;

string withoutString(string text, string word);

int main()
{

    cout << withoutString("Hello there", "llo") << endl;
    cout << withoutString("Hello there", "e") << endl;
    cout << withoutString("Hello there", "x") << endl;
    cout << withoutString("abyyyab", "yy") << endl;

    return 0;
}

string withoutString(string text, string word)
{
    
    while (true)
    {
        int index = text.find(word);

        if (index == -1) break;
        
        text.erase(index, word.length());
    }

    

    return text;
}