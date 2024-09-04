


#include <iostream>
#include <cctype>

using namespace std;


int main(){

    int numbers1[] = {2, 3, 4, 5, 6};
    int numbers2[] = {7, 8, 9, 1, 10};

    int size = sizeof(numbers1) / sizeof(numbers1[0]);

    int numbers3[size];
    int count = 0;


    for (int i = 0; i < size; i++)
    {
        numbers3[i] = numbers1[i] * numbers2[i];
    }
    
    
    cout << "Numbers: ";

    for (int i = 0; i < size; i++)
    {
        cout << numbers3[i] << " ";
    }
    
    cout << endl;




    string words[] = {"Salom", "$mening", "$ismim", "Abdurazzoq"};
    size = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < size; i++)
    {
        if (words[i][0] == '$')
            count += 1;
    }
    
    cout << "'$' bilan boshlanadigan elementlar miqdor " << count << endl;
    



    for (int i = 0; i < size; i++)
    {
        if (isupper(words[i][0]))
            cout << words[i] << " ";
    }
    
    cout << endl;

    return 0;
}