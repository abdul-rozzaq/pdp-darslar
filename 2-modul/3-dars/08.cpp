#include <iostream>
#include <cmath>

using namespace std;


void fn1() {
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    cout << endl;
}

void fn2(int x) {
    for (int i = 1; i < x; i++)
    {
        cout << i << " => " << sqrt(i) << endl;
    }
}





int main(){

    fn1();
    fn2(5);


    return 0;
}