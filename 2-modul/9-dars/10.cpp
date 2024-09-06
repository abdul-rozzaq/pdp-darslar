#include <iostream>

using namespace std;

string zipZap(string text);

int main()
{

    cout << zipZap("zipXzap") << endl;
    cout << zipZap("zopzop") << endl;
    cout << zipZap("zzzopzop") << endl;

    return 0;
}

string zipZap(string text)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)

        if (i == 0 || i == text.length() - 1)
            result += text[i];
        else if (!(text[i - 1] == 'z' && text[i + 1] == 'p'))
            result += text[i];

    return result;
}