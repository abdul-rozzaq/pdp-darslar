#include <iostream>
#include <vector>


using namespace std;



int cut(string text) {
    string vowels = "aeiou";

    string result = "";

    for (size_t i = 0; i < text.length(); i++)
    {
        if (vowels.find(text[i]) == -1)
            result += text[i];
    }
    
    return result.length();
}



int main(){

    cout << cut("salom") << endl;
    
    return 0;
}