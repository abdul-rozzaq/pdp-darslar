

#include <iostream>

using namespace std;

int main()
{

    int numbers[] = {37, 8, 15, 178, 143, 25, 158, 99, 196, 95, 60, 148, 56, 147, 24, 92, 23, 37, 131, 69};
    int count = 0, evens = 0, oddsSum = 0;

    for (int i : numbers)
    {
        if (i >= 100 && i < 1000)
            count += 1;
    }

    cout << count << endl;

    for (int i : numbers)
    {
        if (i % 2 == 0)
            evens += 1;
    }

    cout << evens << endl;

    for (int i : numbers)
    {
        if (i % 2 == 1)
            oddsSum += i;
    }

    cout << oddsSum << endl;


    return 0;
}
