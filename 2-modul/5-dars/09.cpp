#include <iostream>

using namespace std;

int main()
{

    int numbers[] = {125, 91, 56, -12, -18, -185, -146, -120, 150, 1, 154, 70, 28, -108, 160, -180, 188, 20, 122, -166, 108, -4, -63, -98, -182, 145, -5, 58, -113, -59};
    int maxNumbers[2] = {numbers[0], numbers[1]};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    int count = 0;


    for (int i=0; i < size; i++){
        sum += numbers[i];
    }
    
    
    for (int i = 1; i < size; i += 2)
    {
    
        if (numbers[i - 1] + numbers[i] > maxNumbers[0] + maxNumbers[1])
        {
            maxNumbers[0] = numbers[i - 1];
            maxNumbers[1] = numbers[i];
        }


        if (numbers[i] > numbers[i - 1])
            count += 1;
    }


    cout << "Massiv elementlar yig'indisi " << sum << endl;
    cout << "Massivning yig'indisi eng katta bo'ladigan 2 ta qo'shni elementlari " << maxNumbers[0] << ", " << maxNumbers[1] << endl;
    cout << "Chap qo'shnisidan katta bo'lganlar sonini: " << count << endl;

    return 0;
}