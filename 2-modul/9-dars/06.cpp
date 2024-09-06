#include <iostream>

using namespace std;


int getCount(string s, string x);
bool catDog(string s);


int main()
{
    cout << boolalpha;

    cout << catDog("catdog") << endl;
    cout << catDog("catcatdo") << endl;
    cout << catDog("1cat1cadodog") << endl;

    return 0;
}

int getCount(string s, string x)
{
    int start = 0;
    int result = 0;

    while (true)
    {
        int index = s.find(x, start);

        if (index == -1)
            return result;

        result += 1;

        start += index + x.length();        
    }

    return result;
}


bool catDog(string s) 
{
    return getCount(s, "cat") == getCount(s, "dog");
}