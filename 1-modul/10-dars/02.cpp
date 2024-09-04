#include <iostream>

using namespace std;


int main() {

    int start, stop;


    start = 10;
    stop = 50;

    cout << "1. ";

    while (start <= stop)
    {
        if (start % 2 == 1) {
            cout << start << " ";
        }

        start += 1;
    }

    cout << endl << endl;



    start = 120;
    stop = 250;

    cout << "2. ";

    while (start <= stop)
    {
        if (start % 2 == 0) {
            cout << start << " ";
        }

        start += 1;
    }

    cout << endl << endl;



    start = 100;
    stop = 50;

    cout << "3. ";

    while (start >= stop)
    {
        if (start % 2 == 1) {
            cout << start << " ";
        }

        start -= 1;
    }

    cout << endl << endl;   



    start = 80;
    stop = 20;

    cout << "4. ";

    while (start >= stop)
    {
        if (start % 2 == 0) {
            cout << start << " ";
        }

        start -= 1;
    }

    cout << endl << endl;   


    return 0;
}