#include <iostream>

using namespace std;

int main()
{
    int salary, minimumWage;

    cout << "Oylik maoshni kiriting: "; cin >> salary;
    cout << "Eng kam oylik ish haqqini kiriting: "; cin >> minimumWage;
    
    int percent = salary / 100;

    if (salary <= 5 * minimumWage){
        cout << "Soliq miqdori " << 9 << " % ya'ni " << percent * 9 << endl;
    } else if (salary > 5 * minimumWage && salary <= minimumWage * 10)
    {
        cout << "Soliq miqdori " << 16 << " % ya'ni " << percent * 16 << endl;
    } else {
        cout << "Soliq miqdori " << 23 << " % ya'ni " << percent * 23 << endl;
    }


    int number;

    cout << "Raqamni kiriting: "; cin >> number;

    if (number == 101) {
        cout << "o‘t o’chirish xizmati" << endl;
    } else if (number == 102) {
        cout << "militsiya xizmati" << endl;
    } else if (number == 103) {
        cout << "tez tibbiy yordam xizmati" << endl;
    } else if (number == 104) {
        cout << "tabiiy gaz xizmati" << endl;
    } else {
        cout << "Bunday raqam mavjud emas" << endl;
    }

    return 0;
}