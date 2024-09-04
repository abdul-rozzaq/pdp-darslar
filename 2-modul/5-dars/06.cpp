#include <iostream>

using namespace std;


int main(){

    int numbers[] = {125, 91, 56, -12, -18, -185, -146, -120, 150, 1, 154, 70, 28, -108, 160, -180, 188, 20, 122, -166, 108, -4, -63, -98, -182, 145, -5, 58, -113, -59};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int mb = 0, mf = 0;
    int count = 0;


    for (int i = 0; i < size; i++)
    {
        int el = numbers[i];

        if ( 10 <= el && el < 100 )
            numbers[i] = numbers[i] + 100;

        if (el > 0)
            mb += 1;
        
        if (el < 0)
            mf += 1;

        if (el < numbers[0])
            count += 1;
    }
       


    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    
    cout << endl;


    cout << "Musbat sonlar: " << mb << endl;
    cout << "Manfiy sonlar: " << mf << endl;

    cout << "1-el dan kichik elementlar: " << count << endl;

    return 0;
}