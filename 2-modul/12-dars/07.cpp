#include <iostream>

using namespace std;

string removeHard(string text)
{
    
    int lastIndex = text.rfind("qiyin");

    if (lastIndex == -1)
        return "PDP";

    text.erase(lastIndex, 5);

    return text;
}

int main()
{   
    cout << removeHard("c++ qiyin til") << endl;

    return 0;
}
