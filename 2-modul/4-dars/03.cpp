#include <iostream>
#include <cmath>

using namespace std;


int findMax(int, int, int); 
int findMax(int, int, int, int); 
int findMax(int, int, int, int, int); 

int multiplication(int); 
int multiplication(int, int); 
int multiplication(int, int, int); 


int main(){


    cout << findMax(78, 54, 65) << endl;
    cout << findMax(78, 54, 65, 58) << endl;
    cout << findMax(78, 54, 65, 58, 22) << endl;

    cout << multiplication(5) << endl;
    cout << multiplication(4, 7) << endl;
    cout << multiplication(2, 8, 5) << endl;


    return 0;
}


int findMax(int a, int b, int c){
    return max(a, max(b, c));
}

int findMax(int a, int b, int c, int d){
    return max(a, max(b, max(c, d)));
}

int findMax(int a, int b, int c, int d, int e){
    return max(a, max(b, max(c, max(d, e))));
} 

int multiplication(int a){

    if (a == 1) return 1;

    return a * multiplication(a - 1);
}

int multiplication(int a, int b){

    if (a > b) return 1;

    return a * multiplication(a + 1, b);
}

int multiplication(int a, int b, int c){
    return a * b * c;
}
