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

    int a = 0;

    for (int i = 0; i < col; i++)
        if (arr[col - 1][i] % 2 == 0)
            a += arr[row - 1][i];

    cout << endl << "Matritsadagi oxirgi qatordagi juft elementlarni miqdori: " << a << endl;

    //* 2

    cout << endl;

    for (int i = 1; i < 4; i += 2)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }


    //* 3


    int katta = arr[0][0];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] > katta) katta = arr[i][j];


    cout << "Matritsadagi eng katta elementi: " << katta << endl;
    
    return 0;
}