#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

string getSpace(int number, int xona) {
    string result = to_string(number);
    
    int son = pow(10, xona) - 1;

    if (number < son) {
        int len = to_string(son).length() - result.length();

        for (int i = 0; i < len; i++)
        {
            result = " " + result;
        }    
    }

    return result;
}


int main(){
    srand(time(0));

    for(int i=0; i < 15; i++) {
        for(int x=0; x < 10; x++) {
            cout << getSpace(rand() % 10000, 4) << " ";
        }

        cout << endl;
    }

    return 0;
}

