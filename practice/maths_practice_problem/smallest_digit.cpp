#include <iostream>
using namespace std;

int smallestDigit(int num) {

    if(num == 0) {
        return 0;
    }

    int smallest = 9;

    while(num > 0) {

        int digit = num % 10;

        if(digit < smallest) {
            smallest = digit;
        }

        num /= 10;
    }

    return smallest;
}

int main() {

    int num;
    cin >> num;

    cout << smallestDigit(num);

    return 0;
}