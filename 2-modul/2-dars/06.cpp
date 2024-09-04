

#include <iostream>

using namespace std;

string replaceLowers(string s)
{
    for (char &i : s)
    {
        if (islower(i))
            i = '*';
    }

    return s;
}

string replaceXY(string s)
{
    for (char &i : s)
    {
        if (i == 'x')
            i = 'y';
        else if (i == 'y')
            i = 'z';
    }

    return s;
}

int main()
{

    cout << replaceLowers("SalomMMM") << endl;
    cout << replaceXY("xyxyxyxyyzyyzyz") << endl;

    return 0;
}
