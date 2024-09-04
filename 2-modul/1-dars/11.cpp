#include <iostream>

using namespace std;

int main(){

    
    string s;

    cout << "Matnni kiriting: ";
    cin >> s;

    for (char &i : s)
    {
        if (isalpha(i))
            i = s[s.length() - 1];
    }

    cout << s << endl;



    cout << "Matnni kiriting: ";
    cin >> s;

    
    int i = 0, c = 0;

    while (c < 5 && i < s.length())
    {
        if (isdigit(s[i])){
            cout << s[i] << " ";
            c += 1;
        }

        i += 1;
    }
    

    cout << "Matnni kiriting: ";
    cin >> s;


    for (auto &i : s)
    {
        if (isupper(i))
            i = tolower(i);        
    }

    
    cout << s << endl;


    return 0;
}