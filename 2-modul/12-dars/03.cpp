#include <iostream>


using namespace std;


void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n + 4 - 1; j >= 4 + i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main() {
    int n1 = 4, n2 = 6;
    
    cout << "Pattern for n = " << n1 << ":" << endl;
    printPattern(n1);
    
    cout << "\nPattern for n = " << n2 << ":" << endl;
    printPattern(n2);
    
    return 0;
}
