#include <iostream>

using namespace std;

int main(){
    
    int a, count = 0, i, sum = 0;

    cout << "a: "; cin >> a;

    i = a;

    while (i > 0)
    {
        count += 1;
        i /= 10;
    }
    
    cout << a << " soni " << count << " xonali" << endl;

    i = a;
    while (i > 0)
    {
        int xona = i % 10;

        sum += xona;

        i /= 10;

    }
    
    cout << a << " sonining raqamlar yig'indisi " << sum << " ga teng" << endl;
    


    return 0;
}