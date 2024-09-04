#include <iostream>

using namespace std;


int getMaxIndex(int numbers[], int size);
int getMinIndex(int numbers[], int size);

int main(){

    int numbers[] = {125, 91, 56, -12, -18, -185, -146, -120, 150, 1, 154, 70, 28, -108, 160, -180, 188, 20, 122, -166, 108, -4, -63, -98, -182, 145, -5, 58, -113, -59};
    // int numbers[] = {1, 2, 4, 5, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    bool isAscending = true;
    bool isDescending = true;

    
    for (int i = 1; i < size; i++)
    {

        // cout << numbers[i] << " < " << numbers[i - 1] << " " << boolalpha << (bool)(numbers[i] < numbers[i - 1]) << endl;
        // cout << numbers[i] << " > " << numbers[i - 1] << " " << boolalpha << (bool)(numbers[i] > numbers[i - 1]) << endl;
        // cout << endl;

        if ( numbers[i] < numbers[i - 1] )
            isAscending = false;
        
        if ( numbers[i] > numbers[i - 1] )
            isDescending = false;
    }


    cout << boolalpha << isAscending << endl;
    cout << boolalpha << isDescending << endl;

    swap(numbers[getMaxIndex(numbers, size)], numbers[getMinIndex(numbers, size)]);

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
    
    return 0;
}



int getMaxIndex(int numbers[], int size)
{
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > numbers[index]) index = i;
    }
    

    return index;
}



int getMinIndex(int numbers[], int size)
{
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < numbers[index]) index = i;
    }
    
    return index;
}