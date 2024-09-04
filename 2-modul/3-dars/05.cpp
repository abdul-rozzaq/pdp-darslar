

#include <iostream>

using namespace std;



void fn1(int kg){
    for (int i = 30; i <= 60; i++)
    {
        cout << i << " kg => " << i * kg << " so'm" << endl;
    }
}

void fn2(){
    for (int i = 10; i < 100; i++)
    {
        int x1 = i % 10;
        int x2 = i % 100 / 10;

        if (x1 + x2 > 8)
            cout << i << " ";

    }

    cout << endl;
}


int main(){

    int kg = 75000;


    fn1(kg);
    fn2();

    

    return 0;
}