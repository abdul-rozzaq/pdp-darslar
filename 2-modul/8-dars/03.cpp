#include <iostream>

using namespace std;

string makeOutWord(string a, string b);

int main() {
    
    cout << makeOutWord("<<>>", "Yay") << endl;
    cout << makeOutWord("<<>>", "WooHoo") << endl;
    cout << makeOutWord("[[]]", "word") << endl;

    return 0;
}

string makeOutWord(string a, string b)
{
    string prefix = a.substr(0, 2);
    string suffix = a.substr(2);

    return prefix + b + suffix;
}