#include <iostream>
#include <vector>

using namespace std;

bool firstLast6(vector<int> numbers);

int main(){

    vector<int> numbers = {1, 4, 5, 7, 8, 9};

    cout << boolalpha << firstLast6(numbers) << endl;
    cout << boolalpha << firstLast6({7, 8, 9}) << endl;
    cout << boolalpha << firstLast6({7, 8, 6}) << endl;
    cout << boolalpha << firstLast6({6, 8, 0}) << endl;

    return 0;
}

bool firstLast6(vector<int> numbers){
    return numbers[0] == 6 || numbers[numbers.size() - 1] == 6;
}