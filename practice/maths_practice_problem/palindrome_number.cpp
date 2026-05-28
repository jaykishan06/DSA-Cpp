
#include <iostream>
using namespace std;

string isPalindrome(int num) {

    int original = num;
    int reverse = 0;

    while(num > 0) {

        int digit = num % 10;

        reverse = reverse * 10 + digit;

        num /= 10;
    }

    if(original == reverse) {
        return "true";
    }
    else {
        return "false";
    }
}

int main() {

    int num;
    cin >> num;

    cout << isPalindrome(num);

    return 0;
}