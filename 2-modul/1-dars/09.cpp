#include <iostream>

using namespace std;

int getDigits(string s);
int getSymbols(string s);
int getLowers(string s);
int getUppers(string s);

int main()
{

    string s;
    int count = 0;

    cout << "Matnni kiriting: ";
    cin >> s;

    for (auto i : s)
    {
        if (islower(i) || isdigit(i))
            count += 1;
    }

    cout << "Kichik harf va raqamlarning umumiy soni: " << count << endl;

    cout << "Matnni kiriting: ";
    cin >> s;
    count = 0;

    for (auto i : s)
    {
        if (isupper(i) || isdigit(i))
            count += 1;
    }

    cout << "Katta harf va raqamlarning umumiy soni: " << count << endl;

    int ups = 0, lows = 0, syms = 0, nums = 0;

    cout << "Matnni kiriting: ";
    cin >> s;

    cout << endl
         << "Katta harflar soni: "
         << getUppers(s)
         << endl
         << "Kichik harflar soni: "
         << getLowers(s)
         << endl
         << "Belgilar soni: "
         << getSymbols(s)
         << endl
         << "Raqamlar soni: "
         << getDigits(s)
         << endl;

    return 0;
}

int getDigits(string s)
{
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            result += 1;
    }

    return result;
}

int getUppers(string s)
{
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            result += 1;
    }

    return result;
}

int getLowers(string s)
{
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
            result += 1;
    }

    return result;
}

int getSymbols(string s)
{
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]) && !isalpha(s[i]))
            result += 1;
    }

    return result;
}