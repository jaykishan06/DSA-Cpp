#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while(i < j)
    {
        if(!isalpha(s[i]))
        {
            i++;
        }
        else if(!isalpha(s[j]))
        {
            j--;
        }
        else
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;
}

int main()
{
    string s;

    cout << "Enter String: ";
    cin >> s;

    cout << "Output: " << reverseOnlyLetters(s);

    return 0;
}