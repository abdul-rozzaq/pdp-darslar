#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    string s;

    cout << "Matnni kiriting: ";
    cin >> s;

    swap(s[s.length() - 2], s[s.length() - 1]);

    cout << endl
         << "Matnni kiriting: ";
    cin >> s;

    if (isalpha(s[0]))
    {
        cout << "PDP" << endl;
    }
    else
    {
        cout << "ACADEMY" << endl;
    }

    cout << endl
         << "Matnni kiriting: ";
    cin >> s;

    if (isdigit(s[0]))
    {
        cout << "PDP" << endl;
    }
    else
    {
        cout << "ACADEMY" << endl;
    }

    return 0;
}