#include <iostream>

using namespace std;


int main() {

    int start, stop;

    start = 1;
    stop = 20;

    cout << "1. ";

    while (start <= stop)
    {
        cout << start << " ";
        start += 1;
    }

    cout << endl << endl;



    start = 25;
    stop = 100;

    cout << "2. ";

    while (start <= stop)
    {
        cout << start << " ";
        start += 1;
    }

    cout << endl << endl;



    start = 12;
    stop = 200;

    cout << "3. ";

    while (start <= stop)
    {
        cout << start << " ";
        start += 1;
    }

    cout << endl << endl;



    start = 15;
    stop = 2;

    cout << "4. ";

    while (start >= stop)
    {
        cout << start << " ";
        start -= 1;
    }

    cout << endl << endl;



    start = 120;
    stop = 23;

    cout << "5. ";

    while (start >= stop)
    {
        cout << start << " ";
        start -= 1;
    }

    cout << endl << endl;
    
    return 0;
}