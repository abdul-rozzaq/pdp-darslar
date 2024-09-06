#include <iostream>

using namespace std;

bool sameStarChar(string text);

int main()
{
    cout << boolalpha;

    cout << sameStarChar("xy*yzz") << endl;
    cout << sameStarChar("xy*zzz") << endl;
    cout << sameStarChar("*xa*az") << endl;

    return 0;
}

bool sameStarChar(string text)
{

    for (int i = 0; i < text.length(); i++)
        if (i > 0 && i < text.length() - 1 && text[i] == '*')
            if (text[i - 1] == text[i + 1])
                return true;

    return false;
}