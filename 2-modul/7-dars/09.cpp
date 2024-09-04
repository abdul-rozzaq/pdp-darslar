#include <iostream>
#include <vector>

using namespace std;

bool canBalance(const vector<int>& nums);

int main() {
    cout << boolalpha;
    cout << "canBalance([1, 1, 1, 2, 1]) → " << canBalance({1, 1, 1, 2, 1}) << endl;
    cout << "canBalance([2, 1, 1, 2, 1]) → " << canBalance({2, 1, 1, 2, 1}) << endl;
    cout << "canBalance([10, 10]) → " << canBalance({10, 10}) << endl;
    cout << "canBalance([10, 0, 1, -1, 10]) → " << canBalance({10, 0, 1, -1, 10}) << endl;

    return 0;
}

bool canBalance(const vector<int>& nums) {
    int totalSum = 0;

    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;

        if (leftSum == rightSum) {
            return true;
        }
    }

    return false;
}