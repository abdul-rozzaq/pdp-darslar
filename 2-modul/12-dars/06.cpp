#include <iostream>

using namespace std;

string replaceWithWords(string text)
{
    int start = 0;

    while (true)
    {
        int index = text.find("c++", start);

        if (index == -1) break;

        text.insert(index, "is c++ powerful? ");

        start += index + 20;
    }
    

    return text;
}

int main()
{
    cout << replaceWithWords("c++ yaxshi til emas c++ juda qiyin") << endl;

    return 0;
}
