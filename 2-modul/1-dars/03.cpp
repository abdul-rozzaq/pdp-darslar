



#include <iostream>
#include <cmath>

using namespace std;


int main(){


    int son;


    cout << "Sonni kiriting: ";
    cin >> son;


    for (int i = 0; i < son; i++)
    {
        cout << i << " ning kvadrat ildizi " << sqrt(i) << " ga teng" << endl;
    }

    

    string s;

    cout << "Matnni kiriting: ";
    cin >> s;

    cout << endl << "So'ngi belgi " << s[s.length() - 1] << endl;

    swap(s[0], s[1]);

    cout << endl << "Almashtirilgan: " << s << endl;

    return 0;
}