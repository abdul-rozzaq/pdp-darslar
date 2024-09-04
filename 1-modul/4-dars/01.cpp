#include <iostream>


using namespace std;


int main(){
    

    //* 1-masala

    int n1;
    cout << "Ikki xonali son kiriting: "; cin >> n1;

    int birlar = n1 % 10;

    cout << birlar << endl;

    //* 2-masala

    int n2;
    cout << "Uch xonali son kiriting: "; cin >> n2;

    int onlar = n2 / 10 % 10;

    cout << "O'nlar xonasi " << onlar << endl; 
    
    //* 2-masala

    int n3;
    cout << "Uch xonali son kiriting: "; cin >> n3;

    int yuzlar = n3 / 100;

    cout << "Yuzlar xonasi " << yuzlar << endl; 
 

    return 0;
}