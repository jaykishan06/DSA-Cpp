#include <iostream>
using namespace std;

void lower2Upper(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char arr[90];

    cout << "Enter the string: ";
    cin.getline(arr, 90);

    lower2Upper(arr);

    cout << "Uppercase string: " << arr;

    return 0;
}