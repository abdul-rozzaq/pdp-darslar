#include <iostream>

using namespace std;


int main()
{

    int n = 0;
    string s = "HGHasj+_+___)545asdd";

    for (auto &&i : s)
    {
        if (isalnum(i))
            n += isdigit(i) ? 1 : -1;
    }
    
    cout << (n > 0 ? "raqam" : "harf") << endl;

    return 0;
}



