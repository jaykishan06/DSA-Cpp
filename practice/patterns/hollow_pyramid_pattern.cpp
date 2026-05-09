// Problem: Hollow Pyramid Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printHollowPyramid(int n) {

        // har row ke liye loop
        for (int row = 1; row <= n; row++) {

            // starting spaces print karne ke liye
            for (int col = 1; col <= n - row; col++) {
                cout << "  ";
            }

            // first row me sirf ek star
            if (row == 1) {
                cout << "* ";
            }

            // last row me full stars
            else if (row == n) {
                for (int col = 1; col <= 2 * row - 1; col++) {
                    cout << "* ";
                }
            }

            // middle rows ke liye
            else {

                // first star
                cout << "* ";

                // beech ke spaces
                for (int col = 1; col <= 2 * row - 3; col++) {
                    cout << "  ";
                }

                // last star
                cout << "* ";
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

    s.printHollowPyramid(n);

    return 0;
}