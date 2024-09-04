
#include <iostream>

using namespace std;


int main(){

    int numbers[] = {37, 8, 15, 178, 143, 25, 158, 99, 196, 95, 60, 148, 56, 147, 24, 92, 23, 37, 131, 69};

    int a=0, b=0, c=0;

    for (auto i : numbers)
    {
        if (i % 3 == 0 && i % 7 == 0)
            a += 1;
        
        if (i >= 10 && 100 > i && i % 2 == 0)
        {
            b += 1;
            c += i;    
        }
    }

    cout << "3 ga va 7 ga karrali: " << a << endl;
    cout << "2 xonali toq elementlarini: " << b << ", " << c << endl;

    int size = sizeof(numbers) / sizeof(numbers[0]);

    swap(numbers[0], numbers[size - 1]);

    for (auto i : numbers)
    {
        cout << i << " ";
    }

    cout << endl;
    
    return 0;
}