#include <iostream>
#include <vector>


using namespace std;


bool linearIn(vector<int> a, vector<int> b);

int main(){

    cout << boolalpha << linearIn({1, 2, 4, 6}, {2, 4}) << endl;
    cout << boolalpha << linearIn({1, 2, 4, 6}, {2, 3, 4}) << endl;
    cout << boolalpha << linearIn({1, 2, 4, 4, 6}, {2, 4}) << endl;

    return 0;
}


bool linearIn(vector<int> a, vector<int> b)
{
    

    for(int i: b)
    {
        int exp = false;

        for(int j: a)
            if (j == i)
                exp = true;

        if (!exp)
            return false;
    }


    return true;
}