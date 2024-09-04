#include <iostream>
#include <vector>

using namespace std;

bool isEverywhere(const vector<int> &nums, int n);

int main()
{
    cout << boolalpha;

    cout << isEverywhere({1, 2, 1, 3}, 1) << endl;
    cout << isEverywhere({1, 2, 1, 3}, 2) << endl;
    cout << isEverywhere({1, 2, 1, 3, 1}, 1) << endl;

    return 0;
}

bool isEverywhere(const vector<int> &nums, int n)
{
    for (int i = 0; i < nums.size() - 1; i++)
        if (nums[i] != n && nums[i + 1] != n)
            return false;

    return true;
}
