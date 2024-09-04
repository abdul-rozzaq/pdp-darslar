#include <iostream>

using namespace std;


int main() {

    int a, b, c;

    cout << "1 - son: "; cin >> a;
    cout << "2 - son: "; cin >> b;
    cout << "3 - son: "; cin >> c;

    if (a == b || a == c || b == c) {
        cout << "hech bo‘lmaganda ikkitasi bir biriga teng" << endl;
    } else {
        cout << "teng emas" << endl;
    }





    float bir_foiz_uchun_km = 100.0 / 40.0, k, d;

    cout << "Quvvat foizi: "; cin >> k;
    cout << "Masofani kiriting: "; cin >> d;

    float quvvat_yetishi = k * bir_foiz_uchun_km;

    if (quvvat_yetishi < d) {
        float qolgan_masofa = d - quvvat_yetishi;
        
        cout << "Qolgan masofa: " << qolgan_masofa << ", yana " << qolgan_masofa / bir_foiz_uchun_km << " foiz kerak" << endl;
    } else {
        cout << "Quvvat yetarli" << endl;
    }

    return 0;
}