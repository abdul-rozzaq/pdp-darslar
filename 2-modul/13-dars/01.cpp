#include <iostream>

using namespace std;

int main()
{
    int row = 3,
        col = 5;

    int arr[row][col] = {
        {7, 8, 5, 9, 5},
        {7, 1, 8, 7, 6},
        {2, 9, 3, 2, 40},
    };

    for (int i = 0; i < row; i++)
    {
        int sm = 0;

        for (int j = 1; j < col; j += 2)
        {
            sm += arr[i][j];    
        }

        cout << i << " chi qator " << sm << endl;
    }

    return 0;
}
