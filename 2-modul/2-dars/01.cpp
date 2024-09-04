#include <iostream>
#include <cctype>


using namespace std;


int sum(int a, int b) {
    return a + b;
}

int getDigitsCount(string s) {
    int count = 0;


    for(char i: s){
        if (isdigit(i))
            count += 1;
    }


    return count;
}

int getUppersCount(string s) {
    int count = 0;


    for(char i: s){
        if (isupper(i))
            count += 1;
    }


    return count;
}


int main(){


    int son1, son2;

    cout << "1-son: ";
    cin >> son1;
    cout << "2-son: ";
    cin >> son2;

    cout << "Yig'indi: " << sum(son1, son2) << endl;
    
    
    
    
    string text;

    cout << "Matnni kiriting: ";
    cin >> text;


    cout << "Matndagi raqamlar soni: " << getDigitsCount(text) << endl;



    cout << "Matnni kiriting: ";
    cin >> text;

    cout << "Matndagi katta harflar soni: " << getUppersCount(text) << endl;



    return 0;
}


