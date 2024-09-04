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
    
    int arr2[col] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[j] += arr[i][j];
        }
    }
    

    for (int i = 0; i < col; i++)
    {
        cout << "Ustun: " << i << " Yig'indi: " << arr2[i] << endl;
    }


    //* 2

    cout << endl;

    int arr3[col] = {0};


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] % 2 == 1)
                arr3[j] += 1;
        }
    }
    

    for (int i = 0; i < col; i++)
    {
        cout << "Ustun: " << i << " Toq elementlar soni: " << arr3[i] << endl;
    }

    
    //* 3

    cout << endl;

    int arr4[col] = {0};


    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 1)
                arr4[j] += arr[i][j];
    

    for (int i = 0; i < col; i++)
        cout << "Ustun: " << i << " Toq elementlar soni: " << arr4[i] << endl;

    return 0;
}