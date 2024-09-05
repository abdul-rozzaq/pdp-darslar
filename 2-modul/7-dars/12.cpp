#include <iostream>
#include <vector>


using namespace std;


vector<int> seriesUp(int n);
void displayVector(vector<int> vec);



int main(){

    displayVector(seriesUp(3));
    displayVector(seriesUp(4));
    displayVector(seriesUp(2));

    return 0;
}

vector<int> seriesUp(int n)
{
    vector<int> result;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            result.push_back(j);
    

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
