#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> reverse3(vector<int> a);
void displayVector(vector<int> vec);

int main(){

    displayVector(reverse3({8, 9, 6}));
    displayVector(reverse3({5, 8, 9}));
    displayVector(reverse3({3, 7, 2}));

    
    return 0;
}

vector<int> reverse3(vector<int> a){
    reverse(a.begin(), a.end());
    return a;
}


void displayVector(vector<int> vec)
{
    for (int i: vec)
    {
        cout << i << " ";
    }

    cout << endl;
}