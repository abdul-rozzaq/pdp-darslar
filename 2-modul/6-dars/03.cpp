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

    int rowIndex = 0;
    int colIndex = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] < arr[rowIndex][colIndex])
            {
                rowIndex = i;
                colIndex = j;
            }

    cout << endl
         << "Qator: " << rowIndex << " Ustun: " << colIndex << endl;

    //* 2

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
            sum += arr[i][j];

        cout << "Qator: " << i << " Yig'indi: " << sum << endl;
    }

    //* 3

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        int t = 0;

        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 1)
                t += 1;

        cout << "Qator: " << i << " Toq elementlar: " << t << endl;
    }

    return 0;
}