#include <iostream>
#include <cmath>

using namespace std;



int getLastOddNumber(int numbers[], int size);
int getFirstEven(int numbers[], int size);
void logArray(int numbers[], int size);

int main()
{

    int numbers[] = {125, 91, 56, -12, -18, -185, -146, -120, 150, 1, 154, 70, 28, -108, 160, -180, 188, 20, 122, -166, 108, -4, -63, -98, -182, 145, -5, 58, -113, -59};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int firstEven = getFirstEven(numbers, size);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
            numbers[i] = numbers[i] + firstEven;
        
    }


    logArray(numbers, size);


    int lastOddNumber = getLastOddNumber(numbers, size);

    cout << lastOddNumber << endl;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 1)
            numbers[i] += lastOddNumber;
    }
    

    logArray(numbers, size);

    int minNumber = numbers[0];

    for (int i = 0; i < size; i += 2)
    {   
        cout << numbers[i] << endl;
        minNumber = min(minNumber, numbers[i]);
    }

    cout << minNumber << endl;

    return 0;
}



int getLastOddNumber(int numbers[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (numbers[i] % 2 == 1)
            return numbers[i];
    }
    

    return 0;
}

int getFirstEven(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
            return numbers[i];
    }
    
    return 0;
}

void logArray(int numbers[], int size)
{


    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
}