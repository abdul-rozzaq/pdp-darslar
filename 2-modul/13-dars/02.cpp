#include <iostream>

using namespace std;

int main()
{

    int s = 20;
    int k = 0;
    float p = 20;
    float p2 = p;

    while (p < p2 * 2)
    {
        k += 1;
        p += p / 100 * s;
    }
    
    cout << k << " oy" << endl;

    return 0;
}
