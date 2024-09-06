#include <iostream>

using namespace std;

int main()
{

    string text = "foun datio oooo";
    
    int spaces = 0;


    for(char i : text){
        if (i == ' ')
            spaces += 1;
    }
    
    if (spaces <= 1){
        cout << "" << endl;

        return 0;
    }

    int index = text.find(' ');

    cout << text.substr(index + 1, text.rfind(' ') - index - 1) << endl;


    return 0;
}