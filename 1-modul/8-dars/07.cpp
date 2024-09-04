#include <iostream>

using namespace std;


int main() {

    string color, message;

    cout << "Svetafor rangi: "; cin >> color;

    if (color == "qizil") message = "harakatlanishdan to‘xtang"; 
    else if (color == "sariq") message = "harakatlanishga tayyorlaning"; 
    else if (color == "yashil") message = "harakatlanishni davom ettiring"; 


    cout << message << endl;


    int a, b, c, max, min;

    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c;

    max = a;
    min = c;

    if (b > max) max = b;   
    if (c > max) max = c;   
    
    if (b < min) min = b;   
    if (a < min) min = a;


    cout << "min = " << min << ", max = " << max << endl; 

    return 0;
}