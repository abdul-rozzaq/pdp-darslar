#include <iostream>
#include <ctype.h>

using namespace std;

string clearAt(string s);

int main()
{
    cout << clearAt("@xHix") << endl;
    cout << clearAt("x@@Hi") << endl;
    cout << clearAt("Hxix@") << endl;

    return 0;
}

string clearAt(string s)
{

    for (int i = 0; i < s.length(); i++)
        if (s[i] == '@')
        {
            s.erase(i, 1);
            i -= 1;
        }

    return s;
}