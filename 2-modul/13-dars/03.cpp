#include <iostream>

using namespace std;

void func(string text)
{
    int n = 0;
    int i = 0;

    while (n < 2 && i < text.length())
    {
        if (!isalnum(text[i]))
        {
            cout << text[i] << " ";
            n += 1;
        }
        i += 1;
    }

    cout << endl;
}

int main()
{

    func("Ah+sd)><*d4554a");
    func("Jh54_sd8*d++-*KAs65");

    return 0;
}