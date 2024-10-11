#include <iostream>
#include <vector>


using namespace std;


int func(string text)
{
    vector<string> words = {};

    string temp = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (temp != "" && text[i] == ' ')
        {
            words.push_back(temp);
            temp = "";
        } else if (text[i] != ' ')
            temp += text[i];

    }
        
    return words[words.size() - 1].length();
}


int main(){

    cout << func("  salom   pdp     ") << endl;
    cout << func("       bekkkk     ") << endl;

    return 0;
}


