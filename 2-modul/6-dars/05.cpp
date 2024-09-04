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

    int k, c = 0;

    cout << "K sonni kiriting: ";
    cin >> k;

    for (int j = 0; j < col; j++)
        if (arr[k][j] % 2 == 0)
            c += 1;

    cout << "Qator: " << k << " Juft elementlar soni: " << c << endl;

    //* 2

    cout << endl;

    cout << "K sonni kiriting: ";
    cin >> k;

    c = 0;

    for (int j = 0; j < col; j++)
        if (arr[k][j] % 2 == 1)
            c += arr[k][j];

    cout << "Qator: " << k << " Toq elementlar yig'indisi: " << c << endl;


    //* 3

    cout << endl;

    c = 0;

    for (int j = 0; j < row; j++)
        if (arr[j][col - 1] % 2 == 0)
            c += 1;

    cout << "Oxirgi ustundagi juft elementlar soni: " << c << endl;

    return 0;
}
