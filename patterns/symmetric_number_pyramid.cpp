// Problem: Symmetric Number Pyramid
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printPattern(int n) {

        // har row ke liye loop
        for (int row = 1; row <= n; row++) {

            // increasing numbers print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << col;
            }

            // beech ke spaces print karne ke liye
            for (int space = 1; space <= 2 * (n - row); space++) {
                cout << " ";
            }

            // decreasing numbers print karne ke liye
            for (int col = row; col >= 1; col--) {
                cout << col;
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