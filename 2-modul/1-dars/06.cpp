#include <iostream>

using namespace std;

int main()
{

    string s;

    cout << "Matnni kiriting: ";
    cin >> s;

    cout << (islower(s[s.length() - 2]) && islower(s[s.length() - 1]) ? "PDP" : "ACADEMY") << endl;
    cout << (!isdigit(s[0]) && !isdigit(s[s.length() - 1]) ? "PDP" : "ACADEMY") << endl;

    cout << (isupper(s[s.length() - 2]) && isupper(s[s.length() - 1]) ? "PDP" : "ACADEMY") << endl;

    return 0;
}
