#include <iostream>


using namespace std;


string removeVowels(string text) {
    string vowels = "aeiou";

    for (int i = 0; i < text.length(); i++)
    {
        if (vowels.find(text[i]) != -1)
            text.erase(i, 1);
    }
    

    return text;
}

int main() {
    cout << removeVowels("salom ishlar qalay") << endl;
    
    return 0;
}
