#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateLeft3(vector<int> a);
void displayVector(vector<int> vec);

int main(){

    displayVector(rotateLeft3({8, 9, 6}));
    displayVector(rotateLeft3({5, 8, 9}));
    displayVector(rotateLeft3({3, 7, 2}));

    
    return 0;
}

vector<int> rotateLeft3(vector<int> a){
    vector<int> vec = {a[a.size() - 1]};

    for (int i = 0; i < a.size() - 1; i++)
    {
        vec.push_back(a[i]);
    }
    
    return vec;
}


void displayVector(vector<int> vec)
{
    for (int i: vec)
    {
        cout << i << " ";
    }

    cout << endl;
}