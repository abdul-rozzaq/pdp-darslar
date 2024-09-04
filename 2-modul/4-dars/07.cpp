#include <iostream>

using namespace std;

bool isUpper(char ch)
{
    return 'A' <= ch && ch <= 'Z';
}

char toUpper(char ch)
{
    if ('a' <= ch && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }

    return ch;
}

int main()
{

    cout << boolalpha << isUpper('Y') << endl;
    cout << boolalpha << toUpper('y') << endl;

    return 0;
}
