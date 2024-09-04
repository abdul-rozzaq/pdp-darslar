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

    int k;
    cout << "K: "; cin >> k;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == k){
                cout << arr[i][j] * 2 << " ";
            } else {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    

    //* 2

    cout << endl;

    cout << "K: "; cin >> k;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == k){
                cout << arr[i][j] * 3 << " ";
            } else {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    
    //* 3

    cout << endl;

    cout << "K: "; cin >> k;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == k){
                cout << arr[i][j] + 20 << " ";
            } else {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    


    return 0;
}