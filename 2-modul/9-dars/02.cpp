#include <iostream>

using namespace std;

int main()
{

    string s = "foundation";
    char c = 'o';

    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];

        if (x == c)
        {
            s.insert(i + 1, 1, c);
            i++;
        }
    }

    cout << s << endl;

    return 0;
}