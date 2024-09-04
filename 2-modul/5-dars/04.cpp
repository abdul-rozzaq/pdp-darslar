#include <iostream>

using namespace std;

int main()
{

    int numbers[] = {37, 8, 15, 178, 143, 25, 158, 99, 196, 95, 60, 148, 56, 147, 21, 92, 23, 37, 131, 69};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    bool exp = true;

    for (int i = 0; i < size; i++)
    {
        int element = numbers[i];

        if (element % 2 == 0)
            numbers[i] = element * 3;
    }

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        int element = numbers[i];

        if (element % 5 != 0)
            exp = false;
    }

    cout << boolalpha << exp << endl;

        
    exp = 10 <= numbers[0] && numbers[0] < 100 &&
          10 <= numbers[1] && numbers[1] < 100 &&
          10 <= numbers[2] && numbers[2] < 100;

    cout << boolalpha << exp << endl;

    return 0;
}