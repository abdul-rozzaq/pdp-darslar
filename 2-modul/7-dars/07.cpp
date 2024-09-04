#include <iostream>
#include <vector>

using namespace std;

bool either24(vector<int> numbers);

int main()
{

    cout << boolalpha << either24({1, 2, 2}) << endl;
    cout << boolalpha << either24({4, 4, 1}) << endl;
    cout << boolalpha << either24({4, 4, 1, 2, 2}) << endl;

    return 0;
}

bool either24(vector<int> numbers)
{

    bool x2 = false;
    bool x4 = false;

    for (int i = 0; i < numbers.size() - 1; i++)
    {
        int element = numbers[i];

        if (element == 2 && numbers[i + 1] == 2)
            x2 = true;
        else if (element == 4 && numbers[i + 1] == 4)
            x4 = true;
    }

    return x2 ^ x4;
}
