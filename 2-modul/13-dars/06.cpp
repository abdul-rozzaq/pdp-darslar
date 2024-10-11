#include <iostream>

using namespace std;

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

    int n = 4;
    int a[n] = {8, 6, 1, 3};
    int b[n] = {};


    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += a[j];
        }

        b[i] = sum;
    }
    

    printArray(b, n);




    return 0;
}



