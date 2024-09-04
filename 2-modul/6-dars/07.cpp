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
        int mx = arr[0][i];

        for (int j = 0; j < row; j++)
        {
            mx = max(mx, arr[j][i]);
        }
        cout << "Ustun: " << i << " Eng katta element: " << mx << endl;
    }
    

    
    //* 2

    cout << endl;

    int k, natija = 1;

    cout << "K: "; cin >> k;


    for (int i = 0; i < row; i++)
    {
        natija = natija * arr[i][k];        
    }

    cout << "Ustun: " << k << " ko'paytma: " << natija << endl; 
    
    //* 3

    cout << endl;

    cout << "K: "; cin >> k;


    for (int i = 0; i < row; i++)
    {
        cout << arr[i][k] << " ";        
    }

    cout << endl;

    return 0;
}