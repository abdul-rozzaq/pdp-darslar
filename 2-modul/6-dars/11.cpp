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

    int count = 0;

    for (int j = 0; j < row; j++)
    {
        bool isAllOdd = true;

        for (int i = 0; i < col; i++)
            if (arr[j][i] % 2 == 0)
                isAllOdd = false;

        count += isAllOdd;
    }

    cout << "Matritsadagi hamma elementi toq bo'lgan qatorlar: " << count << endl;

    //* 2

    cout << endl;

    count = 0;

    for (int i = 0; i < col; i++)
    {
        bool isAllEven = true;

        for (int j = 0; j < row; j++)
            if (arr[j][i] % 2 == 1)
                isAllEven = false;   

        count += isAllEven;
    }

    cout << "Matritsadagi hamma elementi juft bo'lgan ustunlar: " << count << endl;

    //* 3
    
    cout << endl;

    count = 0;

    for (int i = 0; i < col; i++)
    {
        bool isAllOdd = true;

        for (int j = 0; j < row; j++)
            if (arr[j][i] % 2 == 0)
                isAllOdd = false;   

        count += isAllOdd;
    }

    cout << "Matritsadagi hamma elementi toq bo'lgan ustunlar: " << count << endl;


    return 0;
}