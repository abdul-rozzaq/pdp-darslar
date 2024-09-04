#include <iostream>

using namespace std;

int main()
{

    string s;

    cout << "Matnni kiriting: ";
    cin >> s;

    for (char &i : s)
    {
        if (isdigit(i))
            i = '9';
    }

    cout << s << endl;

    cout << endl << "Matnni kiriting: ";
    cin >> s;

    for (char &i : s)
    {
        if (islower(i))
            i = '*';
    }

    cout << s << endl;



    cout << endl << "Matnni kiriting: ";
    cin >> s;

    for (char &i : s)
    {
        if (!isalnum(i))
            i = s[0];
    }

    cout << s << endl;

    return 0;
}