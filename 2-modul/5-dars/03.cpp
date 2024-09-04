#include <iostream>
#include <functional>

using namespace std;

int getOddsCount(int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 1)
            count += 1;
    }

    return count;
}
int getEvensCount(int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
            count += 1;
    }

    return count;
}

int main()
{
    int numbers[] = {37, 8, 15, 178, 143, 25, 158, 99, 196, 95, 60, 148, 56, 147, 21, 92, 23, 37, 131, 69};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << numbers[0] + numbers[1] + numbers[2] << endl;
    cout << numbers[size - 1] + numbers[size - 2] + numbers[size - 3] << endl;

    int odds = getOddsCount(numbers, size);
    int evens = getEvensCount(numbers, size);

    cout << odds << endl;
    cout << evens << endl;

    cout << boolalpha << (bool)(odds > evens) << endl;

    return 0;
}