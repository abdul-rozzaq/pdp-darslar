
#include <iostream>

using namespace std;

float Add(float son1, float son2);
float Add(float son1, float son2, float son3);
string Add(string text1, string text2);


void repeat(int a, int b);
void repeat(int a);

int main(){

    cout << Add(1.5, 4.6) << endl;
    cout << Add(7.8, 89.22, 1.1) << endl;
    cout << Add("Salom", " Dunyo") << endl;

    repeat(1, 7);
    repeat(8);

    return 0;
}




float Add(float son1, float son2)
{
    return son1 + son2;
}

float Add(float son1, float son2, float son3)
{
    return son1 + son2 + son3;
}
 
string Add(string text1, string text2)
{
    return text1 + text2;
}


void repeat(int a, int b){
    for (int i = 0; i < b; i++)
    {
        cout << a << " ";
    }
    
    cout << endl;
}

void repeat(int a){
    for (int i = 0; i < a; i++)
    {
        cout << a << " ";
    }
    
    cout << endl;
}
