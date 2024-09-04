#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool only14(vector<int> a);

int main(){

    cout << boolalpha << only14({1, 4, 1, 4}) << endl;
    cout << boolalpha << only14({1, 4, 2, 4}) << endl;
    cout << boolalpha << only14({1, 1}) << endl;
    
    return 0;
}

bool only14(vector<int> a){
    for (auto &&i : a)
        if (i != 1 && i != 4)
            return false;

    return true;
}


