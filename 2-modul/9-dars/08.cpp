#include <iostream>

using namespace std;

bool endOther(string s, string x);
string toLower(string s);

int main()
{
    cout << boolalpha;

    cout << endOther("Hiabc", "abc") << endl;
    cout << endOther("AbC", "HiaBc") << endl;
    cout << endOther("abc", "abXabc") << endl;

    return 0;
}

bool endOther(string s, string x)
{
    string a = toLower(s);
    string b = toLower(x);

    return (a.length() >= b.length() && a.substr(a.length() - b.length()) == b) || (b.length() >= b.length() && b.substr(b.length() - a.length()) == a);
}

string toLower(string s)
{
    for (auto &&i : s)
        i = tolower(i);

    return s;
}