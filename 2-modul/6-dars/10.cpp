#include <iostream>
#include <cmath>

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

    for (int i = 0; i < col; i++)
    {
        int mn = arr[0][i];

        for (int j = 0; j < row; j++)
        {
            mn = min(mn, arr[j][i]);
        }

        cout << "Ustun: " << i << " eng kichik elementi: " << mn << endl;
    }
    
    
    //* 2

    cout << endl;

    for (int j = 0; j < row; j++)
    {
        int mn = arr[j][0];
        
        for (int i = 0; i < col; i++)
        {
            mn = min(mn, arr[j][i]);
        }

        cout << "Qator: " << j << " eng kichik elementi: " << mn << endl;
    }


    //* 3

    cout << endl;

    int count = 0;

    for (int j = 0; j < row; j++)
    {
        bool isAllEven = true;
        
        for (int i = 0; i < col; i++)
            if (arr[j][i] % 2 == 1)
                isAllEven = false;

        count += isAllEven;
    }

    cout << "Matritsadagi hamma elementi juft bo'lgan qatorlar: " << count << endl;

    return 0;
}