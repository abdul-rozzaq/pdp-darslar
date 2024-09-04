#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int matchUp(vector<int> a, vector<int> b);

int main()
{

    cout << matchUp({1, 2, 3}, {2, 3, 10}) << endl;
    cout << matchUp({1, 2, 3}, {2, 3, 5}) << endl; 
    cout << matchUp({1, 2, 3, 5}, {2, 3, 3, 3}) << endl; 

    return 0;
}

int matchUp(vector<int> a, vector<int> b)
{
    int result = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int farq = abs(a[i] - b[i]);

        if (farq == 1 || farq == 2)
            result += 1;
    }

    return result;
}