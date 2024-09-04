#include <iostream>

using namespace std;

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

    //* 1


    cout << endl;

    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < col; i += 2)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    //* 2


    cout << endl;

    for (int j = 0; j < row; j++)
    {
        for (int i = 1; i < col; i += 2)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    //* 3

    cout << endl;

    int yigindi = 0, kupaytma = 1, k;

    cout << "K sonni kiriting: "; cin >> k;


    for (int j = 0; j < row; j++)
    {
        yigindi += arr[j][k];
        kupaytma *= arr[j][k];
    }

    cout << "Ustun: " << k << " Yig'indi: " << yigindi << " Ko'paytma: " << kupaytma << endl;

    return 0;
}