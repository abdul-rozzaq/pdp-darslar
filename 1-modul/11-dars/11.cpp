#include <iostream>

using namespace std;

int countDivisors(int num) {
    int count = 0;
    

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}


int main() {
    int a, b;
    
    cout << "A sonni kiriting: "; cin >> a;
    cout << "B sonni kiriting: "; cin >> b;

    int divisorsA = countDivisors(a);
    int divisorsB = countDivisors(b);

    if (divisorsA > divisorsB) {
        cout << a << " ning bo'luvchilari ko'p: " << divisorsA << endl;
    } else if (divisorsB > divisorsA) {
        cout << b << " ning bo'luvchilari ko'p: " << divisorsB << endl;
    } else {
        cout << "Ikkala sonda ham bo'luvchilari teng: " << divisorsA << endl;
    }

    int sum = 0;

    for (int i=a+1; i<b; i++) {
        sum += i;
    }
    
    cout << a << " va " << b << " orasidagi sonlar yig'indisi " << sum << " ga teng." << endl;

    return 0;
}