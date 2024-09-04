#include <iostream>
#include <vector>

using namespace std;

string clearAllSpaces(string s);
vector<double> getNumbers(string s);
vector<char> getOperators(string s);

int main()
{
    string exp = "45  /  54 * 4-   87-5";
    string cleanedExp = clearAllSpaces(exp);

    vector<double> numbers = getNumbers(cleanedExp);
    vector<char> ops = getOperators(cleanedExp);

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < ops.size(); i++)
    {
        cout << ops[i] << " ";
    }

    cout << endl
         << endl;

    for (int i = 0; i < ops.size(); i++)
    {
        cout << numbers[i] << ops[i] << numbers[i + 1] << "        "; 
    }
    
    cout << endl;

    return 0;
}

string clearAllSpaces(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);

            --i;
        }
    }

    return s;
}

vector<double> getNumbers(string s)
{
    vector<double> result;

    string s2 = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) || s[i] == '.')
        {
            s2.push_back(s[i]);
        }
        else
        {
            result.push_back(stod(s2));

            s2.clear();
        }
    }

    result.push_back(stod(s2));

    return result;
}

vector<char> getOperators(string s)
{
    vector<char> result;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
        {
            result.push_back(s[i]);
        }
    }

    return result;
}
