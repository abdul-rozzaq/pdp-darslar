#include <iostream>
#include <vector>

using namespace std;

vector<int> squareUp(int n);
void displayVector(vector<int> vec);

int main()
{

    displayVector(squareUp(4));
    displayVector(squareUp(3));
    displayVector(squareUp(2));

    return 0;
}

vector<int> squareUp(int n)
{
    vector<int> result = {};

    result.resize(n * n, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
        }
    }
    


    return result;
}


void displayVector(vector<int> vec)
{
    for (int i: vec)
    {
        cout << i << " ";
    }

    cout << endl;
}