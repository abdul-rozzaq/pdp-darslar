#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int);

int getRandomNumber(int start, int end)
{
    return rand() % (end - start + 1) + start;
}

int main()
{
    srand(time(0));

    int row, col;

    cout << "Qatorlar soni: ";
    cin >> row;
    cout << "Ustunlar soni: ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int num = getRandomNumber(10, 99);

            cout << num << " ";
            arr[i][j] = num;
        }
        cout << endl;
    }

    
    int mn = arr[0][0];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < row; j++)
            mn = min(arr[i][j], mn);



    for (int i = 0; i < row; i++)
        for (int j = 0; j < row; j++)
        {
            int n = arr[i][j];

            if (isPrime(n))
                arr[i][j] = n + mn;
        }



    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
}

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;

    return true;
}
