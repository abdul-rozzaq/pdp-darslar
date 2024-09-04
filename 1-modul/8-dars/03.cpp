#include <iostream>

using namespace std;

int main()
{

    int year;

    cout << "Yil kiriting: ";
    cin >> year;

    if (year % 400 == 0 && year % 100 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " kabisa yili" << endl;
    }
    else
    {
        cout << year << " kabisa yili emas" << endl;
    }

    int rating;

    cout << "Ratingni kiriting: ";
    cin >> rating;

    if (0 <= rating && rating <= 55)
    {
        cout << "qoniqarsiz" << endl;
    }
    else if (56 <= rating && rating <= 70)
    {
        cout << "qoniqarli" << endl;
    }
    else if (71 <= rating && rating <= 85)
    {
        cout << "yaxshi" << endl;
    }
    else if (86 <= rating && rating <= 100)
    {
        cout << "a'lo" << endl;
    }

    return 0;
}