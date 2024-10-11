#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector<int>);
vector<int> func(vector<int>);
bool isPrime(int);
void printArray(vector<int>);

int main(){

    vector<int> vec = {45, 17, 51, 7, 31};

    printArray(sort(func(vec)));

    return 0;
}


void printArray(vector<int> numbers)
{
    for (auto &&i : numbers)
    {
        cout << i << " ";
    }
    
    cout << endl;
}

vector<int> func(vector<int> numbers)
{
    vector<int> result;

    for (auto &&i : numbers)
        if (isPrime(i))
            result.push_back(i);

    return result;
}

vector<int> sort(vector<int> numbers)
{
    vector<int> result = {};

    for (int i = 0; i < numbers.size(); i++)
    {
        bool isAdded = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (numbers[i] < result[j]){
                result.insert(result.begin() + j, numbers[i]);

                isAdded = true;

                break;
            }
        }


        if (!isAdded) {
            result.push_back(numbers[i]);
        }
    }

    return result;
}

bool isPrime(int number){
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    
    return true;
}


