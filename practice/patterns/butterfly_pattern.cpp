// Problem: Butterfly Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printPattern(int n) {

        // upper part ke liye
        for (int row = 1; row <= n; row++) {

            // left stars print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << "*";
            }

            // beech ke spaces print karne ke liye
            for (int space = 1; space <= 2 * (n - row); space++) {
                cout << " ";
            }

            // right stars print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << "*";
            }

            // next line
            cout << endl;
        }

        // lower part ke liye
        for (int row = n; row >= 1; row--) {

            // left stars print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << "*";
            }

            // beech ke spaces print karne ke liye
            for (int space = 1; space <= 2 * (n - row); space++) {
                cout << " ";
            }

            // right stars print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << "*";
            }

            // next line
            cout << endl;
        }
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    s.printPattern(n);

    return 0;
}