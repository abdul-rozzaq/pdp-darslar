#include <iostream>

using namespace std;

int main()
{

    //* 1-misol

    int varoqlar_soni = 720,
        qatorlar_soni = 50,
        belgilar_soni = 152;

    float natija = (float)varoqlar_soni * (float)qatorlar_soni * (float)belgilar_soni / 1024.0 / 1024.0;

    cout << natija << " mb" << endl;

    //* 2-misol

    int n;
    float words, minutes = 2.5;

    cout << "n: ";
    cin >> n;

    words = (float)n / 5;

    cout << words * minutes << " dona" << endl;

    return 0;
}