#include <iostream>
#include <cmath>

using namespace std;

void logArray(int numbers[], int size);

int main(){

    int a[] = {45, -174, -14, 130, -175, 64, 169, -139, -103, 147, 87, 66, 174, 45, -54, -11, -142, -56, 42, 198, 158, 51, 194, 22, -113, -40, 176, 26, 116, 17};
    int b[] = {-4, -172, 159, 123, 5, 187, 101, 17, -155, 91, -127, 15, 36, -100, -120, 90, 123, -182, 197, -200, 155, -155, -88, -20, -169, 3, 59, -24, -112, 189};

    int size = sizeof(a) / sizeof(a[0]);

    int c[size] = {};

    for(int i = 0; i < size; i += 1)
    {
        c[i] = max(a[i], b[i]);
    }

    logArray(c, size);

    int bSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            bSize += 1;
    }

    int bArray[bSize] = {};

    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            bArray[index] = a[i];
            index++;
        }
    }

    cout << endl << "B massivning elementlar soni: " << bSize << ". Elementlar ";
    
    logArray(bArray, bSize);

    return 0;
}


void logArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
