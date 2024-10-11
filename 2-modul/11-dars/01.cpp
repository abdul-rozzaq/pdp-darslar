#include <iostream>
#include <vector>


using namespace std;


int func(vector<int> numbers)
{
    int maxCount = 0;
    int maxElement = numbers[0];

    for (int i = 0; i < numbers.size(); i++)
    {
        int n = 0;

        for (int j = 0; j < numbers.size(); j++)
        {
            if (numbers[i] == numbers[j]) n++;
        }
        
        if (n > maxCount){
            maxCount = n;
            maxElement = numbers[i];
        }
    }
    
    return maxElement;
}


int main(){

    vector<int> vec = {45, 17, 51, 7, 31 , 31 };
    vector<int> vec2 = {11, 12, 12, 12, 31 , 31 };


    cout << func(vec) << endl;
    cout << func(vec2) << endl;

    return 0;   
}


