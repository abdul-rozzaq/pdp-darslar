#include <iostream>
#include <cmath>


using namespace std;


int main(){
    int a, b, c, d, e, f;

    cout << "6 ta son kiriting: ";
    cin >> a >> b >> c >> d >> e >> f;


    int mx = max(a, max(b, max(c, max(d, max(e, f)))));
    int mn = min(a, min(b, min(c, min(d, min(e, f)))));

    cout << "Eng katta son " << mx << endl;
    cout << "Eng kichik son " << mn << endl;

    double son;

    cout << "Sonni kiriting: ";

    cin >> son;


    cout << "Yaxlitlangan son " << round(son) << endl;

    return 0;
}