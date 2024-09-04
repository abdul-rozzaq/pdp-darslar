#include <iostream>

using namespace std;


bool getIsAllUpper(string s){
    
    for(char i: s){
        if (islower(i))
            return false;
    }

    return true;
}


bool getIsAllLower(string s){
    
    for(char i: s){
        if (!islower(i))
            return false;
    }

    return true;
}


int main(){


    string matn = "salom";

    cout << "Matnni kiriting: ";
    getline(cin, matn);
    cout << (getIsAllUpper(matn) ? "true": "false") << endl;

    cout << endl << "Matnni kiriting: ";
    getline(cin, matn);
    cout << (getIsAllLower(matn) ? "true": "false") << endl;
    
    return 0;
}