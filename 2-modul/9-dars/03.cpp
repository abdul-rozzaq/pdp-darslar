#include <iostream>

using namespace std;

int main()
{

    string s1 = "foundatiooo";
    string s2 = "SSS";
    char c = 'o';

    for (int i = 0; i < s1.length(); i++)
    {
        char x = s1[i];

        if (x == c)
        {
            s1.insert(i, s2);

            i  += s2.length();
        }
    }

    cout << s1 << endl;

    return 0;
}