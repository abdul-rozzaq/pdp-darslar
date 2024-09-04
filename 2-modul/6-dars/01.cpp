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

    //* Logic

    //* 1

    int toqElementlar = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 1)
                toqElementlar += 1;

    cout << "Toq elementlar: " << toqElementlar << endl;


    //* 2

    int juftElementlar = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 0)
                juftElementlar += arr[i][j];


    cout << "Toq elementlar yig'indisi: " << juftElementlar << endl;


    //*

    int yigindi = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            yigindi += arr[i][j];    

    cout << "Yig'indi: " << yigindi << endl;

    return 0;
}