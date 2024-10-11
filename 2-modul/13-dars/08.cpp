#include <iostream>

using namespace std;

bool isPrime(int number);

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}



int main()
{

    int arr[] = {14, 15, 17, 8, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (auto &&i : arr)
    {
        if (isPrime(i))
            i *= 2;
    }

    printArray(arr, size);

    return 0;
}



bool isPrime(int number){
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    
    return true;
}




