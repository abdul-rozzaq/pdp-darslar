#include <iostream>
#include <vector>

using namespace std;

bool commonEnd(vector<int> a, vector<int> b);

int main(){

    vector<int> a = {1, 4, 5, 7, 8, 9};
    vector<int> b = {8, 9, 6};

    cout << boolalpha << commonEnd(a, b) << endl;
    cout << boolalpha << commonEnd({7, 8, 9}, {7, 4, 1}) << endl;

    return 0;
}

bool commonEnd(vector<int> a, vector<int> b){
    return a[0] == b[0] || a[a.size() - 1] == b[b.size() - 1];
}