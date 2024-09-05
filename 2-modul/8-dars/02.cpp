#include <iostream>

using namespace std;

string makeAbba(string name);

int main() {
    
    cout << makeAbba("Hi", "Bye") << endl;
    cout << makeAbba("Yo", "Alice") << endl;
    cout << makeAbba("What", "Up") << endl;


    return 0;
}

string makeAbba(string a, string b)
{
    return a + b + b + a;
}