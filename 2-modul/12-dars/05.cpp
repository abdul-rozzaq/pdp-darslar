#include <iostream>

using namespace std;

string replaceWithWords(string text)
{
    string result = "";

    for (size_t i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += "katta";
        else if (islower(text[i]))
            result += "kichik";
        else if (isdigit(text[i]))
            result += "raqam";
        else
            result += text[i];
    }

    return result;
}

int main()
{
    cout << replaceWithWords("Salom Ishlar QAlay 1156") << endl;

    return 0;
}
