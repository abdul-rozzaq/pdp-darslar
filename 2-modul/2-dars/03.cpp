#include <iostream>

using namespace std;


int getPower(int number){
    int count = 0; 


    while (number > 0)
    {   
        count += 1;

        number /= 10;
    }
    
    return count;
}

int getOddsCount(int a, int b){
    int count = 0;


    for (int i = a; i < b; i++)
    {
        if (i % 2 == 0)
            count += 1;
    }
    

    return count;
}


int getIsTub(int number){
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    
    return true;
}

int main(){


    cout << getPower(1010000) << endl;
    cout << getOddsCount(45, 66) << endl;
    cout << (getIsTub(11) ? "Tub" : "Tub emas") << endl;
    

    return 0;
}