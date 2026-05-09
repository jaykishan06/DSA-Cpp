// Problem: Solid Diamond Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printSolidDiamond(int n) {

        // upper part ke liye
        for (int row = 1; row <= n; row++) {

            // starting spaces print karne ke liye
            for (int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // stars print karne ke liye
            for (int col = 1; col <= (2 * row) - 1; col++) {
                cout << "*";
            }

            // next line
            cout << endl;
        }

        // lower part ke liye
        for (int row = n - 1; row >= 1; row--) {

            // starting spaces print karne ke liye
            for (int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // stars print karne ke liye
            for (int col = 1; col <= (2 * row) - 1; col++) {
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

    s.printSolidDiamond(n);

    return 0;
}