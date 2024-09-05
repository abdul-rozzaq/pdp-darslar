#include <iostream>

using namespace std;

string helloName(string name);

int main() {
    
    cout << helloName("Bob") << endl;
    cout << helloName("Alice") << endl;
    cout << helloName("X") << endl;


    return 0;
}

string helloName(string name)
{
    return "Hello " + name + "!";
}