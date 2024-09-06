#include <iostream>

using namespace std;

string wordEnds(string text, string word);

int main()
{

    cout << wordEnds("abcXY123XYijk", "XY") << endl;
    cout << wordEnds("XY123XY", "XY") << endl;
    cout << wordEnds("XY1XY", "XY") << endl;

    return 0;
}

string wordEnds(string text, string word)
{
    string result = "";

    int start = 0;
    
    while (true)
    {
        int index = text.find(word, start);
    
        if (index == -1) break;

        int offset = index + word.length();

        if (index != 0) result += text[index - 1];
        if (offset != text.length()) result += text[offset];
                
        start += offset;
    }

    return result;
}