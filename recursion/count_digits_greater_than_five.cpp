#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }

    int digit = n % 10;

    if (digit > 5) {
        return 1 + countDigits(n / 10);
    }

    return countDigits(n / 10);
}

int main() {
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        cout << "Count of digits greater than 5: "
             << countDigits(n) << endl;
    }

    return 0;
}