#include <iostream>
#include <cctype>


using namespace std;


int main(){

    string s;

    cout << "Matnni kiriting: ";
    cin >> s;


    for (auto &i : s)
    {
        if (islower(i))
            i = toupper(i);        
    }

    
    cout << s << endl;




    cout << "Matnni kiriting: ";
    cin >> s;


    for (auto &i : s)
    {
        if (i == 'x')
            i = 'y';        
        else if (i == 'y')
            i = 'z';
    }

    cout << s << endl;

    return 0;
}