


#include <iostream>

using namespace std;


int main(){

    int numbers[] = {125, 91, 56, -12, -18, -185, -146, -120, 150, 1, 154, 70, 28, -108, 160, -180, 188, 20, 122, -166, 108, -4, -63, -98, -182, 145, -5, 58, -113, -59};
    
    //* 2-misolni test qilish uchun
    // int numbers[] = {9, 12, 21, 16};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    string message = "hello";


    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > numbers[size - 1])
            sum += numbers[i];

        if ( !(numbers[i] % 3 == 0) && !(numbers[i] % 4 == 0) )
            message = "salom";
            
    }

    cout << "Oxirgi elementidan katta bo‘lgan elementlarni yig‘indisi: " << sum << endl;
    cout << message << endl;

    return 0;
}