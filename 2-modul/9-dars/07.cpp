#include <iostream>

using namespace std;

int countCode(string s);

int main()
{
    cout << countCode("aaacodebbb") << endl;
    cout << countCode("codexxcode") << endl;
    cout << countCode("cozexxcope") << endl;

    return 0;
}

int countCode(string s)
{
    int start = 0; 
    int count = 0;


    while (true)
    {
        int index = s.find("co", start);

        if (index == -1) break;

        if (s[index + 3] == 'e')
            count += 1;
        
        start += 4;
    }
    
    return count;
}
