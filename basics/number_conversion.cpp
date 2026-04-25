#include <iostream>
using namespace std;

// Decimal → Binary
int decimalToBinary(int n) {
    int binary = 0;
    int place = 1;

    while (n > 0) {
        int bit = n & 1;
        binary += bit * place;
        place *= 10;
        n = n >> 1;
    }
    return binary;
}

// Binary → Decimal
int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    return decimal;
}

int main() {
    int choice;
    cout << "1. Decimal to Binary\n2. Binary to Decimal\nEnter choice: ";
    cin >> choice;

    int num;
    cout << "Enter number: ";
    cin >> num;

    if (choice == 1) {
        cout << "Binary: " << decimalToBinary(num) << endl;
    } else if (choice == 2) {
        cout << "Decimal: " << binaryToDecimal(num) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}