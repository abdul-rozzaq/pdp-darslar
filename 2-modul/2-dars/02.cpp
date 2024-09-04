#include <iostream>
#include <cctype>


using namespace std;


int getSpacesCount(string s) {
    int count = 0;


    for(char i: s){
        if (i == ' ')
            count += 1;
    }


    return count;
}

int getAtSignCount(string s) {
    int count = 0;


    for(char i: s){
        if (i == '@')
            count += 1;
    }


    return count;
}

int getLowersCount(string s) {
    int count = 0;


    for(char i: s){
        if (islower(i))
            count += 1;
    }


    return count;
}


int main(){


       
    string text;

    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << "Matndagi kichik harflar soni: " << getLowersCount(text) << endl;


    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << "Matndagi spacelar soni: " << getSpacesCount(text) << endl;


    cout << "Matnni kiriting: ";
    getline(cin, text);
    cout << "Matndagi @ lar soni: " << getAtSignCount(text) << endl;



    return 0;
}


