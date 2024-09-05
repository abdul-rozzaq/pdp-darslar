#include <iostream>

using namespace std;


string middleThree(string s);

int main(){

    
    cout << middleThree("Candy") << endl;
    cout << middleThree("and") << endl;
    cout << middleThree("solving") << endl;


    return 0;
}

string middleThree(string s){
    return s.substr(s.length() / 2 - 1, 3);
}