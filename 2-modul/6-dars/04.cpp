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

    for (int i = 0; i < row; i++)
    {
        int t = 0;

        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 1)
                t += arr[i][j];

        cout << "Qator: " << i << " Toq elementlar yig'indisi: " << t << endl;
    }

    //* 2
    
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        int k = arr[i][0];

        for (int j = 0; j < col; j++)
            if (arr[i][j] > k)
                k = arr[i][j];

        cout << "Qator: " << i << " Eng katta element: " << k << endl;
    }


    //* 3
    
    cout << endl;

    int k;

    cout << "K sonni kiriting: ";
    cin >> k;


    int s = 1;

    for (int j = 0; j < col; j++)
        s *= arr[k][j];

    cout << "Qator: " << k << " Ko'paytma: " << s << endl;

    

    return 0;
}