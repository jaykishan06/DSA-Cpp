#include <iostream>
using namespace std;

int reverseNumber(int num) {

    int reverse = 0;

    while(num > 0) {

        int digit = num % 10;

        reverse = reverse * 10 + digit;

        num /= 10;
    }

    return reverse;
}

int main() {

    int num;
    cin >> num;

    cout << reverseNumber(num);

    return 0;
}