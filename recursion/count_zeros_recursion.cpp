
#include <iostream>
using namespace std;



int countZeros(int n) {
    // Special case: zero itself contains one zero
    if (n == 0) {
        return 1;
    }

    // Base case for other numbers
    if (n < 10) {
        return 0;
    }

    // Count the last digit if it is zero
    int lastDigit = n % 10;
    int count = (lastDigit == 0) ? 1 : 0;

    return count + countZeros(n / 10);
}

int main() {
    int n;

    cout << "Enter a non-negative number: ";
    cin >> n;

    cout << "Number of zeros: " << countZeros(n) << endl;

    return 0;
}
